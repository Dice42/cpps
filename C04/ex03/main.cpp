/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 22:51:34 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/07 18:32:29 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include <iostream>

void basicTests() {
    std::cout << "===== BASIC TESTS =====" << std::endl;

    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");
    AMateria* tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob); // Expect: * shoots an ice bolt at bob *
    me->use(1, *bob); // Expect: * heals bob's wounds *

    delete bob;
    delete me;
    delete src;

    std::cout << "===== END OF BASIC TESTS =====\n" << std::endl;
}

void inventoryTests() {
    std::cout << "===== INVENTORY TESTS =====" << std::endl;

    ICharacter* me = new Character("me");

    me->equip(new Ice());
    // me->equip(new Cure());
    // me->equip(new Ice());
    // me->equip(new Cure());

    ICharacter* bob = new Character("bob");

    // /* trying extra materia // should not be equiped*/
     AMateria* extraMateria = new Ice();
     me->equip(extraMateria); 

    me->use(0, *bob); // Expect: * shoots an ice bolt at bob *
    me->use(1, *bob); // Expect: * heals bob's wounds *
    me->use(2, *bob); // Expect: * shoots an ice bolt at bob *
    me->use(3, *bob); // Expect: * heals bob's wounds *

    me->unequip(0);
    delete extraMateria;

    std::cout << "after unequip, using bob" << std::endl;
    me->use(1, *bob);
    std::cout << "nothing shouldve happened" << std::endl;
    

    AMateria* newCure = new Cure();
    me->equip(newCure);
    me->use(1, *bob); // Expect: * heals bob's wounds *

    delete bob;
    delete me;

    std::cout << "===== END OF INVENTORY TESTS =====\n" << std::endl;
}

void deepCopyTests() {
    std::cout << "===== DEEP COPY TESTS =====" << std::endl;

    ICharacter* original = new Character("original");
    original->equip(new Ice());
    original->equip(new Cure());

    // Make a deep copy
    ICharacter* copy(original);

    ICharacter* bob = new Character("bob");

    std::cout << "Original Character uses Materias:" << std::endl;
    original->use(0, *bob); // Expect: * shoots an ice bolt at bob *
    original->use(1, *bob); // Expect: * heals bob's wounds *

    std::cout << "Copy Character uses Materias:" << std::endl;
    copy->use(0, *bob); // Expect: * shoots an ice bolt at bob *
    copy->use(1, *bob); // Expect: * heals bob's wounds *

    // Modify original, copy should be independent
    original->unequip(0);
    original->equip(new Ice());

    std::cout << "After modification - Original uses Materias:" << std::endl;
    original->use(0, *bob); // Expect: * shoots an ice bolt at bob *
    original->use(1, *bob); // Expect: * heals bob's wounds *

    std::cout << "After modification - Copy uses Materias:" << std::endl;
    copy->use(0, *bob); // Expect: * shoots an ice bolt at bob *
    copy->use(1, *bob); // Expect: * heals bob's wounds *

    delete bob;
    delete original;
    delete copy;

    std::cout << "===== END OF DEEP COPY TESTS =====\n" << std::endl;
}

void sourceTests() {
    std::cout << "===== MATERIA SOURCE TESTS =====" << std::endl;

    IMateriaSource* src = new MateriaSource();

    // Test learning and creating Materia
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    AMateria* ice1 = src->createMateria("ice");
    AMateria* cure1 = src->createMateria("cure");

    if (ice1) std::cout << "Successfully created ice Materia" << std::endl;
    if (cure1) std::cout << "Successfully created cure Materia" << std::endl;

    // Test creating unknown Materia
    AMateria* unknown = src->createMateria("fire");
    if (!unknown) std::cout << "Unknown Materia could not be created" << std::endl;

    // Test learning more than 4 Materias
    src->learnMateria(new Ice());  // 3rd Materia
    src->learnMateria(new Cure()); // 4th Materia
    src->learnMateria(new Ice());  // Shouldn't learn this, source is full.

    delete ice1;
    delete cure1;
    delete src;

    std::cout << "===== END OF MATERIA SOURCE TESTS =====\n" << std::endl;
}

int main() {
    // basicTests();
     inventoryTests();
    // // deepCopyTests();
    // sourceTests();

    return 0;
}
