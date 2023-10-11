#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - basic info of a dog
 * @name: a dog's name
 * @age: a dog'sage
 * @owner: the dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
typedef struct dog dog_t;
char *_strcpy(char *name, float age, char *owner);
int _strlen(char *s);

#endif
