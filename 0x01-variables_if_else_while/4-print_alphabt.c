/* Program to determine if a number is positive, negative or zero */                                                                  

                                                                                                                                      

#include <stdlib.h>                                                                                                                   

#include <time.h>                                                                                                                     

#include <stdio.h>                                                                                                                    

                                                                                                                                      

/**                                                                                                                                   
 *
 *  * main -Main function entry point                                                                                                    
 *
 *   * Return: Allways zero                                                                                                               
 *
 *    */                                                                                                                                   

int main(void) /* The function returns void */                                                                                        

{                                                                                                                                     

	        char letter = 'a';                                                                                                            

		                                                                                                                                      

		        for (letter = 'a'; letter <= 'z'; letter++)                                                                                   

				        {                                                                                                                             

						                if (letter == 'q' || letter == 'e')                                                                                   

									                {                                                                                                                     

												                        continue;                                                                                                     

															                }                                                                                                                     

								                putchar(letter);                                                                                                      

										        }                                                                                                                             

			        putchar('\n');                                                                                                                

				        return (0);                                                                                                                   


