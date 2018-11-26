
Etapa 2:

Arhiva trebuie sa contina fisierele:

* algo.h
    * Un set minimal de funcții care rezolvă problema aleasă.
    * Puteți adăuga funcționalități suplimentare!
    
* (bonus) algo.cpp
    * Acesta va conține cea mai eficientă/versatilă implementare a funcțiilor definite in algo.h
    * Acest fișier NU va conține o funcție main().

* Makefile 
    * va conține obligatoriu o regulă de build care va genera
    un fișier obiect algo.o, cu implementarea funcțiilor din algo.h

* Folder 'in' cu testele de intrare  (5-10 teste)
    * Fiecare test va fi numit "testID.in", unde ID reprezintă numărul
    testului (e.g. test0.in)
    * Fiecare test va fi structurat în felul următor:
      * Pe prima linie, N (int - numărul de noduri dintr-un graf orientat), M (int - numărul de muchii) și S (nodul sursă)
      * M triplete: x, y, z - există o muchie de la x la y, de cost z
    * N <= 10^4, M <= min(N^2, 10^6)
      
* Folder 'out' cu testele de ieșire
    * Fiecare test va fi numit "testID.out", unde ID reprezintă numărul
    testului (e.g. test0.out) 
    * Fiecare test va conține distanța de la nodul sursă la fiecare nod din graf.
    
* Folder 'other_tests'
    * Alte teste generate de voi (fișiere de intrare cu extensia .in, 
    cele de ieșire cu extensia .out). Structura acestora va fi 
    documentată in Readme.

* [Opțional] codul sursă al generatorului de teste folosit.

* Fisier README
    * Numele și grupa
    * O descriere a arhivei - ce reprezintă fiecare fișier, mai ales dacă ați adăugat
    fișiere suplimentare.
   
Puteti sa alegeti voi o structura pentru solutiile propriu-zise (documentati alegerea in Readme):

De exemplu:
* algo1.cpp 
    * Implementarea uneia dintre solutiile propuse 
* algo2.cpp 
* algo3.cpp
* ...            
    
     
