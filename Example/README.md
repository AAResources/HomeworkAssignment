Demo submission, Etapa 2:

ID: Radu Iacob, 32X CA

Contents:
* **algo.h**  
   * Prototipul functiei generice sort().

* **algo.cpp**
   * Implementarea algoritmului InsertionSort. (cea mai buna solutie aleasa).

* **algo2.cpp**
   * Implementarea algoritmului SelectionSort.

* **Makefile**
  * Acesta contine regulile:
 
    * **build_best**
      - compileaza executabilul care va testa cea mai buna solutie
      pe testele default

    * **build_snd_best**
      - compileaza executabilul care va testa a doua cea mai buna solutie
      pe testele default

    * **run**
      - ruleaza testerul pe toate testele care corespund specificatiei
      originale

    * **clean**

* Folder **'in'** cu testele de intrare  (2 teste)
    * Fiecare test este numit "**testID.in**", unde ID reprezintă numărul
    testului (e.g. test0.in)
    * Fiecare test este structurat în felul următor:
      * Pe prima linie, N (int - numărul de elemente din secvență), N <= 10^6
      * N elemente (numere întregi - reprezentabile pe 32 biti)
      
* Folder **'out'** cu testele de ieșire
    * Fiecare test este numit "**testID.out**", unde ID reprezintă numărul
    testului (e.g. test0.out) 
    * Fiecare test conține secvența de elemente din testul de intrare 
    corespunzător sortată ascendent.

* Folder **other_tests**
    * Contine un test suplimentar (test_float_duplicates.in, test_float_duplicates.out),
    cu elemente duplicate de tipul float, avand aceeasi structura ca testele default. 
