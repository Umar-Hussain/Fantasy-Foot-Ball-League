#include"String.h"
int getLength(const char* str1)
{
	int index = 0;
	for (;str1[index] != 0; index++);
	return index;
}
bool compareStrings(const char* str1, const char* str2)
{
	int i = 0;
	if (getLength(str1) != getLength(str2))
		return false;
	while (str1[i] != '\0')
	{
		if (str1[i] != str2[i])
			return false;
	}
	return true;
}
void copyStrings(const char* source, char *& destination)
{
	int length = getLength(source);
	destination = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		destination[i] = source[i];
	}
	destination[length] = '\0';
}