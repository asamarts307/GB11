#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>
#include "my_ls.h"



void ls_files(const char *path)
{
if (chdir(path)==0){
    chdir(path);}
    else
    { printf("Error : Catalog not found");
    return 1;}
    getcwd(path, 255);
    printf("path = %s\n", path);
    print_dir_contents(path);
    return 0;

}
    
    void print_dir_contents(const char *strdir)
{
    DIR *dir;
    struct dirent *entry;
    struct stat file_info;
    char full_name[255] = { 0 };

    dir = opendir(strdir);

    if (dir) {
        while (entry = readdir(dir))
         {
            if (entry->d_name[0] == '.')
            {
                continue;
            }
            memset(full_name, 0, 255);
            snprintf(full_name, 255, "%s/%s", strdir, entry->d_name);
            full_name[254] = '\0';
            if (stat(entry->d_name, &file_info) == 0) {
                printf("size %ld ", file_info.st_size);
            }
            printf("full_name %s\n", full_name);
        }
    }
}
