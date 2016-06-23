#pragma once

#include "fs.h"

class KernelFile
{
public:
	KernelFile();
	~KernelFile();
	char write(BytesCnt, char* buffer);
	BytesCnt read(BytesCnt, char* buffer);
	char seek(BytesCnt);
	BytesCnt filePos();
	char eof();
	BytesCnt getFileSize();
	char truncate();
private:
	BytesCnt position;
};

