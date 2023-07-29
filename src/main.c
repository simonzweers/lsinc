#include <stdio.h>
#include <dirent.h>

int main(int argc, char **argv) {
    printf("Welcom to ls C, an alternative to LS\n");

    // Example from https://www.sanfoundry.com/c-program-list-files-directory/
    DIR *dir;
    struct dirent *dir_entry;
    dir = opendir(".");
    if (dir) {
        while (readdir(dir) != NULL) {
            dir_entry = readdir(dir);
            printf("%s\n", dir_entry->d_name);
        }
    }
}
