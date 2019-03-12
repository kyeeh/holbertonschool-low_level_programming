#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Dog definition
 * @name: dog name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: Dog Definition
 */
typedef struct dog dog;
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _DOG_H_ */
