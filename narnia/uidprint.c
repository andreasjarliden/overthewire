#include <unistd.h>
#include <stdio.h>

int main() {
    int uid=getuid();
    int euid=geteuid();
    printf("uid=%d euid=%d\n", uid, euid);
    FILE* f = fopen("andreas2file", "r");
    if (!f) {
      printf("Could NOT open andreas2file");
    }
    return 0;
}
