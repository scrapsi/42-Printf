/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 11:31:30 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/18 14:40:00 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void print(int n, ...) {
    va_list args;
	int i;
    va_start(args, n);  
    while(i < n)
	{ 
        printf("%d ", va_arg(args, int));
		i++;
	}
	printf("\n");
    va_end(args);
}
int main() {
  
  	// Calling function print() with different number
  	// of arguments
    print(3, 1, 2, 3);
    print(5, 1, 2, 3, 4, 5);
  
    return 0;
}