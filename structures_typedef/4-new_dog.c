#include "dog.h"
#include <stdlib.h>

/**
* new_dog - creates a new dog structure
* @name: Dog's name
* @age: Dog's age
* @owner: Dog's owner
* Return: returns a pointer to newly created dog structure
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *copyname, *copyowner;
	int length_name = 0, length_owner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[length_name])
		length_name++;
	while (owner[length_owner])
		length_owner++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	copyname = malloc(length_name * sizeof(*owner));
	if (copyname == NULL)
  {
		free(new_dog);
    return (NULL);
  }
	for (i = 0; name[i]; i++)
		copyname[i] = name[i];
	copyname[i] = '\0';

	copyowner = malloc(length_owner *sizeof(*name));
	if (copyowner == NULL)
  {
    free(new_dog);
		return (NULL);
  }
	for (i = 0; owner[i]; i++)
		copyowner[i] = owner[i];
	copyowner[i] = '\0';

	new_dog->name = copyname;
	new_dog->age = age;
	new_dog->owner = copyowner;
	return (new_dog);
}
