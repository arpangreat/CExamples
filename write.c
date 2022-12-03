#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  int sz;

  int fd = open(argv[1], O_WRONLY | O_CREAT | O_TRUNC, 0666);

  if (fd < 0) {
    perror("r1");
    exit(1);
  }

  sz = write(fd, "Hello Swastik\n", strlen("Hello Swastik"));

  printf("called write(% d, \"Hello Swastik\\n\", %lu)."
         " It returned %d\n",
         fd, strlen("hello geeks\n"), sz);

  close(fd);

  return 0;
}
