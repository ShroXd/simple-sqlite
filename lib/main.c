#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "repl.h"

void close_input_buffer(InputBuffer *input_buffer)
{
	free(input_buffer->buffer);
	free(input_buffer);
}

int main(int argc, char *argv[])
{
	InputBuffer *input_buffer = new_input_buffer();
	while (true)
	{
		print_prompt();
		read_input(input_buffer);

		if (strcmp(input_buffer->buffer, ".exit") == 0)
		{
			close_input_buffer(input_buffer);
			exit(EXIT_SUCCESS);
		}
		else
		{
			printf("Unrecognized command '%s'.\n", input_buffer->buffer);
		}
	}
}