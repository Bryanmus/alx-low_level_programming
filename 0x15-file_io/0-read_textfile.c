#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: br- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
  char *buf;
  ssize_t f_op, br, t;

  f_op = open(filename, O_RDONLY);
  if (f_op == -1)
    return (0);
  buf = malloc(sizeof(char) * letters);
  t = read(f_op, buf, letters);
  br = write(STDOUT_FILENO, buf, t);

  free(buf);
  close(f_op);
  return (br);
}
