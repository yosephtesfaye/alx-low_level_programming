#include "dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * init_dog - initialize dog information
 * @d: refrence of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: No returnt 0 on success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		exit(1);
	(*d).name = name;

	d->age = age;

	d->owner = owner;


}
