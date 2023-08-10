#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory
 * @ptr - pointer
 * @old_size: old size integer
 * @new_size: new size integer
 * Return : NULL
 * Return : malloc
 * Return : ptr
 * Return : new_pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_poiter;
if (ptr == NULL)
{
return (malloc(new_size));
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (new_size == old_size)
{
return (ptr);
}
new_poiter = malloc(new_size);
if (new_poiter != NULL)
{
memcpy(new_poiter, ptr, (old_size < new_size) ? old_size : new_size);
}
free(ptr);
return (new_poiter);
}
