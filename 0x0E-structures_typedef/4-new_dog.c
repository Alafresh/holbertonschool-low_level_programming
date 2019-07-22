#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strcpy - copies the string
* @dest: return
* @src: pointer
* Return: value the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
	a++;
	}
	dest[a] = '\0';
	return (dest);
}

/**
* _strlen - prototype function.
* @s: char pointer.
* Return: the length of a string.
*/

int _strlen(char *s)
{
	int count = 0;

	while (*s != 0)
	{
		count++;
		s++;
	}
	return (count);
}

/**
* new_dog - creates a new dog
* @name: member name.
* @age: member age.
* @owner: member owner.
* Return: new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	char *due;
	char *nom;
	dog_t *new_dog;
	int contdu;
	int contno;

	contno = _strlen(name);
	contdu = _strlen(owner);
	due = malloc(contdu * sizeof(char) + 1);
	if (due == NULL)
	{
		free(due);
		return (NULL);
	}
	_strcpy(due, owner);
	nom = malloc(contno * sizeof(char) + 1);
	if (nom == NULL)
	{
		free(due);
		free(nom);
		return (NULL);
	}
	_strcpy(nom, name);
	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		free(due);
		free(nom);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = nom;
	new_dog->age = age;
	new_dog->owner = due;
return (new_dog);
}
