#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
int main() {
  ssize_t read;
  size_t len = 0;
  char *line = NULL;
  while ((read = getline(&line, &len, stdin)) > 0 ) {
    if (line[read-1] == '\n') line[read-1] = 0;
    puts(strfry(line));
  }
  return 0;
}
