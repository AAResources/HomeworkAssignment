
Etapa 2:

Arhiva trebuie sa contina fisierele:

* algo.h
    * Un set minimal de funcții care rezolvă problema aleasă.
    
* algo.cpp
    * Acesta va conține implementările funcțiilor definite in algo.h

* algo_test.cpp
    * Sursa care va citi datele de intrare corespunzătoare unui test de la stdin și va apela
    funcția corespunzătoare problemei din algo.h
    * Rezultatul va fi scris la stdout. 

* Makefile 
    * va conține obligatoriu o regulă de build care va genera
    un fișier obiect algo.o, cu implementarea funcțiilor din algo.h

* Folder 'in' cu testele de intrare  (5-10 teste)
    * Fiecare test va fi numit "testID.in", unde ID reprezintă numărul
    testului (e.g. test0.in)
    * Aveți libertatea de a structura testele așa cum doriți - dar este
    obligatoriu să documentați structura acestora în Readme.
          
* Folder 'out' cu testele de ieșire
    * Fiecare test va fi numit "testID.out", unde ID reprezintă numărul
    testului (e.g. test0.out) 
    * Aveți libertatea de a structura testele așa cum doriți - dar este
    obligatoriu să documentați structura acestora în Readme.
     
* [Opțional] codul sursă al generatorului de teste folosit.

* Fisier README
    * Numele și grupa
    * O descriere a arhivei - ce reprezintă fiecare fișier, mai ales dacă ați adăugat
    fișiere suplimentare.
