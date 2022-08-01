#include "dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * print_dog - prints info about dog
 * @d: dog refrence
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);
	else if (d->name == NULL)
		printf("Name: (nil)");
	else if (d->age <= 0)
		printf("Age: (nil)");
	else if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

