//features of mobile
#include<stdio.h>
struct mobile
{
	int price, ram, storage;
	char brand[10], model[10], processor[10];

};
struct mobile storedata(struct mobile);
void displye(struct mobile);
void main()
{
	struct mobile m1,m;
	printf("features of mobile 1\n");
	m = storedata(m1);
	displye(m);
	printf("features of mobile 2\n");
	m = storedata(m1);
	displye(m);
}
struct mobile storedata(struct mobile m1)
{

	printf("brand  model  processor\n");
	scanf("%s%s%s", &m1.brand, &m1.model, &m1.processor);
	printf("price  ram  storage\n");
	scanf("%d%d%d", &m1.price, &m1.ram, &m1.storage);
	return m1;
}
void displye(struct mobile m1)
{
	printf("\n\nmobile\tbrand\tmodel\tprocessor\tprice\tram\tstorage\n");
	printf("m1\t%s\t%s\t%s\t%d\t%d\t%d\n", m1.brand, m1.model, m1.processor, m1.price, m1.ram, m1.storage);
}