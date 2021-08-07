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

int help(char *arr)
{
	int i;
	char *help = "help";

	i = ft_strcmp(arr, help);
	if (i == 0)
		return (-2);
	else
		return (0);
}

int fall_IDE(char *arr)
{
        int i;
        char *Fall = "Fall";

        i = ft_strcmp(arr, Fall);
        if (i == 0)
                return (-1);
        else
                return (0);
}

int print_1(char *arr)
{
	 int i;
        char *print1 = "print";

        i = ft_strcmp(arr, print1);
        if (i == 0)
                return (4);
        else
                return (0);
}

int var1(char *arr)
{
	int i;
        char *var = "var";

        i = ft_strcmp(arr, var);
        if (i == 0)
                return (1);
        else
                return (0);
}

int while1(char *arr)
{
	int i;
	char *whil = "while";

	i = ft_strcmp(arr, whil);
        if (i == 0)
                return (3);
        else
                return (0);
}

int if1(char *arr)
{
	int i;
	char *if_1 = "if";

	i = ft_strcmp(arr, if_1);
        if (i == 0)
                return (2);
        else
                return (0);
}
