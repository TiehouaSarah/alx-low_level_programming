#ifndef DOG_H
#define DOG_H
/**
 * struct dog - creating dog structure
 *
 * @name : first param
 * @age : second param
 * @owner : third param
 * Description: nothing to say
 *
 * Return:nothing
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
