/*
 * File: 9-set_string.c
 * Author: Grace Kalombo
 */



/**
 * set_string - Sets the value of a pointer to a char.
 * @s: The pointer.
 * @to: The char.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
