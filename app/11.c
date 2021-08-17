#include <stdio.h>
#include<my_ls.h>
void main(int argc, char **argv)
{
    char path[255] = { 0 };
   
    printf("Enter path \n");
    scanf("%s",path);
     ls_files(path);
    
return 0;
}
