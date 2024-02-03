/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 23:19:43 by gcavanna          #+#    #+#             */
/*   Updated: 2024/02/03 23:45:43 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
    try
    {
        // Test dell'esercizio 01
        Span sp = Span(8);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

        // Aggiunta di più numeri in una singola chiamata
        int additionalNumbers[] = {2, 15, 7};
        sp.addNumbers(additionalNumbers, additionalNumbers + sizeof(additionalNumbers) / sizeof(additionalNumbers[0]));

        // Output dei risultati dopo l'aggiunta di più numeri
        std::cout << "Shortest Span after adding more numbers: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span after adding more numbers: " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
