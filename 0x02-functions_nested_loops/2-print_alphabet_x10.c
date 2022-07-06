#include "main.h"                                                                 
/**                                                                               
 * print_alphabet - print alphabet                                                
 *                                                                                
 * Return: void                                                                   
 */                                                                               
void print_alphabet(void)                                                        
{                                                                                
	 char letter = 'a';                                                                int i=1;

	for(i=1; i <= 10; i++)
{
        while (letter <= 'z')                                                     
        {                                                                         
                _putchar(letter);                                                 
                letter++;                                                         
        }                                                                         
        _putchar('\n');                                                           
}
} 
