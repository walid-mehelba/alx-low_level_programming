#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - free memory for dog
  * @d: pointer to struct dog
  */

void free_dog(dog_t *d)
{
	free(d);
}
