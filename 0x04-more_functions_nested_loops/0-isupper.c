#include "main.h"



/**
  * _isupper - A function that checks for uppercase character.
    * @c: An input character
     * Return: 1 if c is uppercase 0r 0 if otherwise
      */
int _isupper(int c)
{char upperCase = 'A';

		int isupper = 0;



			for (; upperCase <= 'Z'; upperCase++)

			{
				if (c == upperCase)
				{isupper = 1;
				break;
				}
			}

			return (isupper);
}
