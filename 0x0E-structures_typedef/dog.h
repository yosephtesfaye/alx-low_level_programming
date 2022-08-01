#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog information
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Description: dog stuct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
