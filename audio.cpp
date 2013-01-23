QByteArray AudioHelper::encode(const QByteArray& source) {
	QByteArray res;
	for (size_t i = 0; source.size() - i >= enc->block_size() * format->frame_size(); 
			i += enc->block_size() * format->frame_size()) {
		enc->encode(source.begin() + i);
		size_t size = enc->get_encoded_size();
		res.append(size);
		res.append(QByteArray((const char*)enc->get_encoded_data(), size));
	}
	return res;
}

QByteArray AudioHelper::decode(const QByteArray& source) {
	QByteArray res;
	std::vector<char> buf(dec->block_size() * format->frame_size());
	for (int i = 0; i < source.size(); ) {
		int enc_size = source.at(i);
		if (enc_size < 0) {
			return res;
		}
		++i;
		dec->decode(source.begin() + i, enc_size, &buf[0]);
		res.append(&buf[0], dec->block_size() * format->frame_size());
		i += enc_size;
	}
	return res;
}