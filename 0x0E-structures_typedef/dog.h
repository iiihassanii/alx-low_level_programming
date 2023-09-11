#ifndef DOG_H
#define DOG_H

/**
 *struct dog - dog structure
 *
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner name
 *
 * Description
 */

struct dog 
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
