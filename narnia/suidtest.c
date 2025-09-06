#include <unistd.h>
#include <stdio.h>

int main() {
    int uid=getuid();
    int euid=geteuid();
    printf("uid=%d euid=%d\n", uid, euid);
    char *argv[] = {"uidprint", NULL };
    char *envp[] = {NULL};
    execve("./uidprint", argv, envp);
    return 0;
}
