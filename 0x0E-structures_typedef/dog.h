#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure listing the name, age, and owner of a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the dog's owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);


#endif /* ifndef DOG_H */
