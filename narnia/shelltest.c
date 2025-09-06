#include <unistd.h>
#include <stdio.h>

int main() {
    int uid=getuid();
    int euid=geteuid();
    printf("uid=%d euid=%d\n", uid, euid);
    char *argv[] = {"bash", "-p", NULL };
    char *envp[] = {NULL};
    // setreuid(geteuid(), geteuid());
    execve("/bin/sh", argv, envp);
    return 0;
}
