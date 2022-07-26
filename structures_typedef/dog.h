#ifndef DOG
#define DOG

/**
 * struct dog - Defines a new type
 *@name: dog's name
 *@owner: dog's owner
 *@age:dog's age
 *Return: 0
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
/**function prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
void free_dog(dog_t *d);
int _strlen(char *);
char *_strdup(char *);
dog_t *new_dog(char *name, float age, char *owner);
#endif
