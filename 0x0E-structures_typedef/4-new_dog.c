#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	unsigned int nameLen, ownerLen, i;

	/*make sure nothing is empty*/
	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	/*malloc for dog record*/
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	/*malloc for name in dog record & check*/
	nameLen = strlen(name);
	dog->name = malloc(sizeof(char) * nameLen);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	/* save name*/
	for (i = 0; i <= nameLen; i++)
		dog->name[i] = name[i];
	/*save dog's age*/
	dog->age = age;

	/*malloc for owner's recoed*/
	ownerLen = strlen(owner);
	dog->owner = malloc(sizeof(char) * ownerLen);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	/* save owner*/
	for (i = 0; i <= ownerLen; i++)
		dog->owner[i] = owner[i];
	/*END*/
	return (dog);
}
