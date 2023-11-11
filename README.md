# Proiect sincretic: Turnurile din Hanoi

## Un proiect functional scris in C++ care rezolva problema Turnurilor din Hanoi

Problema respectiva consta in mutarea unor N discuri de diametre diferite de pe o tija catre o alta, folosid o a treia tija pe post te tija intermediara.

Discurile sunt asezate in ordinea descrescatoare a diametrelor, iar mutarile discurilor se fac luand in considerare urmatoarele restrcitii:

- La fiecare miscare se va muta un singur disk
- Un disc se poate plasa doar asupra unui disc mai mare ca diametru

Iata un exemplu de secventa a mutarilor pentru 3 discuri:

<img src=https://media.geeksforgeeks.org/wp-content/uploads/tower-of-hanoi.png>

## Implementare

Acest proiect contine un program care rezolva aceasta problema pentru N discuri. Implementarea poate fi gasita in fisierul 'proiect-sincretic.cpp'. Solutia este implementata in maniera recursiva, respectand regulile mentionate anterior.

## Utilizare

- Pentru a rula programul se va folosi o imagine DOCKER.

- Accesand link-ul urmator vei putea copia comanda de pull pentru a accesa fisierul sura:
  https://hub.docker.com/r/xevvon/proiect-sincretic

- Comanda respectiva va fi introdusa in terminal, iar mai apoi se va folosi urmatoarea comanda pentru a rula programul:

> docker run --rm -it --name my-cool-app xevvon/proiect-sincretic

## Rezultat

Dupa executarea comenzii anterioare programul va astepta date introduse de utilizator.

Rezultatul final va fi secventa de mutari ce trebuiesc realizate pentru a muta toate cele N discuri de pe prima tija pe ultima.
