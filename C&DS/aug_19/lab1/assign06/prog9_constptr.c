#include<stdio.h>

void main()
{
	int x = 10;
	const int *p=&x;
	int const *q=&x;
	int * const r = &x;
	const int * const *s = &x;

	p++;
	printf("\n const int p -  %u %u", p, *p);

	++q;
	printf("\n int const *q - %u %u", q, *q);

	(*r)++;
	printf("\n int * const r - %u %u", r, *r);

	printf("\n const int * const s - %u %u", s, *s);

}
