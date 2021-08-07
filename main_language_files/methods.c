/*                                                      * 
 *                                                     * *   
 *                                                    * o *
 * **********************************  ******         * o *
 * Name: RocktC                    **  *     *        * o *
 * version: 0.1                    **  *     *        *   *
 * Creator: Willem Johannes Smith  **  ******        **   **
 *                                 **  *     *     *  *___*  *
 ************************************  *       *  * **|___|** *
 *
 */

#include "../Library/lib.h"

void helper(void)
{
	printf("\n\nWelcome to Helper\n\n");
	printf("Here is a list of methods and functions you can use in RocktC:\n\n");
	printf("var\t\t-\tDeclare a variable of type int, double, or string using var.\n   \t\t \tRocktC will automatically convert to the proper variable type without you specifying the type.\n");
	printf("   \t\t  \tRemember to follow var with the variable name within parentheses.\n");
	printf("   \t\t \tA value can be assigned to the variable after declaring a variable and between ':' and ';'\n");
	printf("   \t\t \tExample:\n\n");
	printf("   \t\t \t          var(variableName): variableName = 5;\n\n");
	printf("+ - * / =\t-\tAre what's known as mathematical operators, and are used to perform operations to numerical vars.\n\n");
	printf("if \t\t-\tif statements are made simple in RocktC; you declare an if statement as follows:\n   \t\t \tif(true or false statement): action, action ;\n");
	printf("   \t\t \tIn rocktC you can separate multiple actions with a ',' instead of ';'.\n");
	printf("   \t\t \t';' are used to declare the closing of a loop, if statement, or function.\n\n");
}

void printer(char *arr)
{
	int i;
	int count;
	int len;

	i = 5;
	count = 0;
	len = 0;
	while(arr[len++])
		;
	while(arr[i])
	{
		if (arr[i] == '(' || arr[i] == ')')
			count++;
		i++;
	}
	i = 5;
	while (arr[i])
	{
		if (arr[i] == ':')
			break ;
		i++;
	}
	len -= i;
	i++;
	char arr2[len];
	len = 0;
	while (arr[i])
	{
		if (arr[i] == ';')
			break ;
		arr2[len] = arr[i];
		i++;
	}
	i = 5;
	if (count == 2)
	while (arr[i])
	{
		if (arr[i] == ')')
		{
			i++;
                        break ;
		}
		if (arr[i] == '(')
			i++;
		if (arr[i] == 92 && arr[i+1] == 'n')
		{
			i += 2;
			write (1, "\n", 1);
		}
		if (arr[i] == 92 && arr[i + 1] == 't')
		{
			i += 2;
			write (1, "\t", 1);
		}
		if (arr[i] == 92 && arr[i + 1] == 'a')
		{
			i += 2;
			write(1, "\a", 1);
		}
		if (arr[i] == 92 && arr[i + 1] == 'b')
		{
			i += 2;
			write(1, "\b", 1);
		}
		if (arr[i] == 92 && arr[i + 1] == 'v')
		{
			i += 2;
			write(1, "\v", 1);
		}
		if (arr[i] == 92 && arr[i + 1] == 'f')
		{
			i += 2;
			write(1, "\f", 1);
		}
		if (arr[i] == 92 && arr[i + 1] == 'r')
		{
			i += 2;
			write(1, "\r", 1);
		}
		if (arr[i] == ')')
		{
			i++;
			break ;
		}
		if ((arr[i] != 92 && arr[i + 1] != 'n') || (arr[i] != 92 && arr[i + 1] != 't') || (arr[i] != 92 && arr[i + 1] != 'a') || 
				( arr[i] != 92 && arr[i + 1] != 'b') || (arr[i] != 92 && arr[i + 1] != 'v') || (arr[i] != 92 && arr[i + 1] != 'f') ||
			       (arr[i] != 92 && arr[i + 1] != 'r'))
		{
		write(1, &arr[i], 1);
		i++;
		}
	}
	printf("%s\n", arr2);
}
