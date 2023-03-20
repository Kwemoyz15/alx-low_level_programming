#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog's basic infor
 *
 * @name: dog's name
 * @age: dog's number of years
 * @owner: dog belong to them
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * @dog_t: typedef for struct dog
 */
typedef struct dog dog_t;

#endif