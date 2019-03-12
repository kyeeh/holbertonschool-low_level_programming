#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Dog definition
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: Dog Definition
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* _DOG_H_ */
