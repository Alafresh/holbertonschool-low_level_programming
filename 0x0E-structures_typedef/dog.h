#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog - this dog has name, age, and owner.
* @name: his name depends.
* @age: his age is variable
* @owner: and his owner is lost
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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
