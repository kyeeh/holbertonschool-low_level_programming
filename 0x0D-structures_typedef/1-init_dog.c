#include "dog.h"
/**
 * init_dog - cinitialize a dog data structure.
 * @d: dog pointer.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
