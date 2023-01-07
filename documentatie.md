# MapProject
Chess Board
---------------------------------------------------------------------------------------------------------------------------------------------
                                                                    DOCUMENTATIE PROIECT MAP


Cerinta: ( Problema celor 8 ture) sa se scrie un program care plasează 8 ture pe tabla de sah, fara ca acestea să se atace reciproc.

Explicatie rezolvare: 
In primul rand vrem sa ne construim tabla noastra de sah. Acest lucru il realizam cu ajutorul functiei printboard, 
care primeste ca argument tabla noastra de sah(board) de dimensiune [N][N]. Pe N l-am definit global, avand valoarea 8.

Pe urma, construim functia in care sa avem algoritmul de rezolvare al problemei, pe care o numim isValid . 
Aceasta functie are ca argumente: tabla de sah(board[N][N]), randurile(row) si coloanele (col). 

Un prim pas in aceasta functie este sa setam valoarea initiala a tuturor elementelor  pe zero. 
Dupa aceea, vrem sa parcurgem fiecare patratel al tablei de sah, ca sa verificam daca este liber. 

Parcurgerea fiecarui patratel o facem cu doua for-uri, unde: i-reprezinta randurile, iar j-coloanele. Aici ne vom folosi de o variabila(isTowerPresent) de tip bool, 
pe care initial o setam pe false(adica zero), ea isi va schimba valoarea in true daca in board[i][j] exista o tura, 
iar in caz contrat isi va pastra valoarea initiala(false).

Pentru a verifica un rand intreg, fara ca i-ul sau j-ul sa se incrementeze, creem un alt for in care randul i va fi “blocat”, 
iar cu o alta variabila (k) vom merge coloana cu coloana. Daca in board[i][k] este deja o tura (board[i][k]= =1), atunci isTowerPresent va lua valoarea true .

La fel vom proceda si pentru a verifica o coloana intreaga rand cu rand. 
Vom avea un alt for, iar variabila care va merge rand cu rand, in coloana j, o numim l.

Dupa ce am verificat toata coloana j si toata linia i , cu ajutorul lui l si k, verificam daca exista o tura pe linia i si coloana j, 
adica trebuie sa vedem daca isTowerPresent si-a schimbat valoarea sau nu. Acest lucru il facem cu un if, unde conditia va fi: !isTowerPresent. 
Daca conditia din if este satisfacuta, adica isTowerPresent este false, atunci in patratelul curent(board[i][j]) vom pune o tura(board[i][j]=1).

Tot in isValid printam tabla de sah, cu ajutorul functiei create prima data in program si anume printBoard.
Iar in functia main declaram tabla noastra de sah ca variabila int si apelam functia isValid.
