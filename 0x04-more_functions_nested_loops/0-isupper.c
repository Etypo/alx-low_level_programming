/**
 * _isupper - checks if a charachter is in upper case
 * @c: a character to check if it is upper
 *
 * Return: 1 if c uppercase else 0
 */
int _isupper(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
