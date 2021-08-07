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

/* The RocktC Programming Language was designed to introduce a 
 * corriculumn of basic to high level programming concepts to students
 * of all ages.
 *
 * RocktC incorporates most of the functionalities that other languages 
 * function with as it is derived from famous Programming language 'c'.
 */

#include "../Library/lib.h"

char *call(char *arr)
{
	arr = (char *)malloc(sizeof(char) * 6);
	 printf("prompt: ");
        fgets(arr, 100, stdin);
	return (arr);
}

int ft_strcmp(char *st_st, char *st1)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (st1[i])
	{
		res += st1[i] - st_st[i];
		i++;
	}
	return (res);
}

int main(void)
{
	int i;
	int truth;
	char *arr;
	char st_st[11];
	char st1[11] = "Launch IDE";

	i = 0;
	truth = 0;

	printf(": ");
	fgets(st_st, 12, stdin);

	truth = ft_strcmp(st_st, st1);

	if (truth == 0)
		title();

	while (truth == 0)
	{
		i = 0;
		arr = call(arr);
		if (i == 0)
			i = var1(arr);
		if (i == 0)
			i = print_1(arr);
		if (i == 0)
			i = while1(arr);
		if (i == 0)
			i = if1(arr);
		if (i == 0)
			i = fall_IDE(arr);
		if (i == 0)
			i = help(arr);
		
		if (i == -2)
			helper();
		if (i == -1)
			break ;
		if (i == 0)
			printf("Methods not supported\n");
		if (i == 4)
			printer(arr);
	}
	if (i == -1)
		printf("\nexiting...\n\n");
	return (0);
}
