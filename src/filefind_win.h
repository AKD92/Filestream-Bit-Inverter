

/************************************************************************************
	Interface of File List Generation routines on Windows platform
	Author:             Ashis Kumar Das
	Email:              akd.bracu@gmail.com
*************************************************************************************/



#ifndef WINFILEFIND_H
#define WINFILEFIND_H



#include <windows.h>
#include "list.h"



#define MAKE_PATH_MASK						"%s\\*.*"
#define MAKE_PATH_ABSOLUTE					"%s\\%s"
#define PRNT_DIR							"Directory: %s\n"
#define PRNT_FILE							"File: %s\n"





struct FileData_ {
	
	char *strFilePath;
	unsigned long long int fileSize;
	unsigned int fileAttribute;
	
};
typedef struct FileData_ FileData;






int file_buildFileList(const char *strDirectoryPath, List **outFileList);



/* returns 1 if safe, 0 if unsafe file attribute */

int file_isFileWritable(unsigned int fileAttribute);







#endif
