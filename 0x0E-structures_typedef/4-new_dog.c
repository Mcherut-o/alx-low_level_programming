#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Calculates the length of the string length of a string.
 * @str: String to be measured
 *
 * Return: Length of string
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}

/**
 * _strcopy - Copies a string from source to destination buffer
 * @dest: Buffer storing the copied string
 * @src: Source string
 *
 * Return: A pointer to destination buffer(dest)
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog structure with its info
 * @name: Name of dog
 * @age: Age of the dog
 * @owner: Owner
 *
 * Return: New struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_ptr;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog_ptr = malloc(sizeof(dog_t));
	if (dog_ptr == NULL)
		return (NULL);

	dog_ptr->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog_ptr->name == NULL)
	{
		free(dog_ptr);
		return (NULL);
	}

	dog_ptr->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog_ptr->owner == NULL)
	{
		free(dog_ptr->name);
		free(dog_ptr);
		return (NULL);
	}

	dog_ptr->name = _strcopy(dog_ptr->name, name);
	dog_ptr->age = age;
	dog_ptr->owner = _strcopy(dog_ptr->owner, owner);

	return (dog_ptr);
}
