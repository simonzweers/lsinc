#include <stdio.h>
#include <dirent.h>

void printDir(const char *dir_to_open) {
    // Example from https://www.sanfoundry.com/c-program-list-files-directory/
    DIR *dir;
    struct dirent *dir_entry;
    dir = opendir(dir_to_open);
    if (dir) {
        while (readdir(dir) != NULL) {
            dir_entry = readdir(dir);
            printf("%s\n", dir_entry->d_name);
        }
    }
}


int main(int argc, char **argv) {
    printf("Welcome to ls C, an alternative to LS\n");
    printDir(".");
}
