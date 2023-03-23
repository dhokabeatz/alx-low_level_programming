/**
 * print_name - prints name
 * @name: name to be printed
 * @f: function to print with
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
