#include <sys/types.h>
#include <sys/stat.h>

time_t getMTime(char* path)
{
	struct stat data;
	return stat(path, &data)? 0 : data.st_mtime;
}
