// structure of book
#include<stdio.h>
typedef struct book
{
	int pr, pg;
	char sub[20], author[20];

}book;
void main()
{
	book b1, b2, b3;
	printf("price of book\tsubject \tauthor\tpages\n");
	printf("book 1\n");
	scanf("%d%s%s%d", &b1.pr, &b1.sub, &b1.author, &b1.pg);
	printf("book 2\n");
	scanf("%d%s%s%d", &b2.pr, &b2.sub, &b2.author, &b2.pg);
	printf("book 3\n");
	scanf("%d%s%s%d", &b3.pr, &b3.sub, &b3.author, &b3.pg);
	printf("price of book\tsubject \tauthor\tpages\n");
	printf("%d\t\t%s\t %s\t%d\n", b1.pr, b1.sub, b1.author, b1.pg);
	printf("%d\t\t%s\t %s\t%d\n", b2.pr, b2.sub, b2.author, b2.pg);
	printf("%d\t\t%s\t %s\t%d\n", b3.pr, b3.sub, b3.author, b3.pg);
}