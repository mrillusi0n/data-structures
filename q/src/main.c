#include <stdio.h>
#include <stdlib.h>
#include "q.h"

void clear_stdin() {
	while (getchar() != '\n');
}

int main(int argc, char const *argv[])
{
	queue q;
	char c;
	int n;

	printf("p - Put\ng - Get\nd - Display\nx - Exit\n\n");

	while (1) {
		printf(": ");
		c = getchar();

		switch (c) {
			case 'p':
				printf("int -> ");
				clear_stdin();
				scanf("%d", &n);
				q_put(&q, n);
				break;
			case 'g':
				n = q_get(&q);
				if (n != -1) printf("%d\n", n);
				else printf("Queue is empty.\n");
				break;
			case 'd': 
				q_display(q);
				break;
			case 'e':
			case 'q': return 0;
            case 'x': exit(0);
			default : printf("Invalid option\n");
		}

		clear_stdin();
	}

	return 0;
}
