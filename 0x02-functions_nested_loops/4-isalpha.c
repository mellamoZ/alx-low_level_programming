#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character
  */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
