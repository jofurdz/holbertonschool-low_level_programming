#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be allocated
 *
 *Return: 0
 */
char *_strdup(char *str)
{
	char *x;
	char *p;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
		len++;
	x = malloc(len + 1);
	if (x == NULL)
	{
		return (NULL);
	}
	p = x;
	while (*str)
		*p++ = *str++;
	*p = '\0';
	return (x);
}
/**
 * new_dog - allocating new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 *Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		return (NULL);
	}
	newdog->name = _strdup(name);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = _strdup(owner);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	newdog->age = age;
	return (newdog);
}
