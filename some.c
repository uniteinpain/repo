#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <pthread.h>
#include <dirent.h>

int main(int argc, char * argv[])
{
	if (argc < 2)
	{
		printf("Too few arguments");
		return -1;
	}

	DIR * dir;
	dir = opendir(argv[1]);
	struct dirent * ent;
	printf("here is your -laoi\n");
	for (ent = readdir(dir); ent; ent = readdir(dir))
	{
		printf("inod is %lu and name is %s\n", ent->d_ino, ent->d_name);
	}
	(void)closedir(dir);
	return 0;
}
