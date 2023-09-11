#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - create an obj
 *
 * @d: pointer to structure
 * @name: pointer to name in struct
 * @age: float age value
 * @owner: pointer to owner's name
 *
 * Return: VOID 
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
