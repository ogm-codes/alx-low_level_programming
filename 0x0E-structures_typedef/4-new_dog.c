#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates a struct of type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lengthOwner = 0, lengthName = 0;

	if (name != NULL && owner != NULL)
	{
		lengthOwner = _strlen(owner) + 1;
		lengthName = _strlen(name) + 1;
		dog = malloc(sizeof(dog_t));

		if (dog == NULL)
			return (NULL);

		dog->name = malloc(sizeof(char) * lengthName);

		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}

		dog->owner = malloc(sizeof(char) * lengthOwner);

		if (dog->owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}

		dog->name = _strcpy(dog->name, name);
		dog->owner = _strcpy(dog->owner, owner);
		dog->age = age;
	}

	return (dog);
}
/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 *
 * Return: the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	dest[a++] = '\0';

	return (dest);
}
/**
 * _strlen - returns length of string
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s != '\0'; s++)
	{
		a++;
	}

	return (a);
}
