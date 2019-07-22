#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_dog - prints a struct dog
* @d: pointer to struct
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	else if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
