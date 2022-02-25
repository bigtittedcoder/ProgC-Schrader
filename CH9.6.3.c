/*
 * File: CH9.6.3.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-01-24, 2:08:17 am
 * Author: Hamzenis Kryeziu
 * E-Mail: hamzenis.kryeziu@stud.fra-uas.de
 * -----
 * Last Modified: 2022-02-25, 2:43:34 am
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022
 *
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-02-25, 2:25:27 am	H.K.	added comments
 * 2022-01-24, 2:08:17 am	H.K.	-start-
 */

 // noch nicht fertig

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Anzahl und Länge der Variablen.
#define STRINGS 6
#define MAX 10

/*
*   Print Funktion.
*   Beim übergeben eines Mutlidimensionalen Arrays müssen keine
*   rows oder collums mitgegeben werden. Aus Konvetion übergibt man
*   jedoch die collums.
*/
void printArr(char ptrArrName[][MAX]){
    for (int i = 0; i < 6; i++) {
        printf("Sort Namen:\t%d. %s\n", i + 1 , ptrArrName[i]);
    }
}

int main() {

    // Ein Array of Strings zum speichern der Namen. 
    char arrName[STRINGS][MAX] = {      {"Peter"},
                                        {"Paul"},
                                        {"Mary"},
                                        {"Puff"},
                                        {"Magic"},
                                        {"Dragon"} };
    int cmpVal;
    char temp[MAX];

    /*
    *  Variable damit die Länge des Arrays errechnet. 
    */
    int arrSize = sizeof(arrName) / sizeof(arrName[0]);

    /*
    *  Verschachtelte For-Schleife. 
    *  Zur Visalisierung des Sortierprozesses wird
    *  cmpVal & die Reihenfolge der jetztigen Namen bei jedem 
    *  Vergleich geprintet. Damit sieht man das sortieren und 
    *  den Stand der Namen.
    */
    for (int  i= 0; i < 6 - 1; i++) { 
        printf("\ni: %d", i+1);

        for (int j = 0; j < 6 - 1; j++) {
            cmpVal = strcmp(arrName[j], arrName[j + 1]);
            printf("\t\tj: %d. %d\n", j+1, cmpVal);
            
            if (cmpVal > 0) {
                strcpy(temp, arrName[j + 1]);
                strcpy(arrName[j + 1], arrName[j]);
                strcpy(arrName[j], temp);
            }
        }
        
    }

    printf("\n");
    printArr(arrName);
    
    return 0;
}
