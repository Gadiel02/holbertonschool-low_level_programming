#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - check the code
  * @d: struct
  * Return: return
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
