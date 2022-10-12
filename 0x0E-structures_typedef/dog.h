#ifndef STRTYP
#define STRTYP

/**
 * struct dog - structure of a dog
 * @name: first element
 * @age: second element
 * @owner: third element
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*STRTYP*/