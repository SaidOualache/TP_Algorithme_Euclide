#include <stdio.h>

int main() {
    
    int A, B, reste;

    // 1- Demander à l'utilisateur d'entrer 2 entiers (A khasha tkon kbr mn B)

    printf("Entrer deux nombres tels que A > B :\n");
    scanf("%d %d", &A, &B);

    // 2- Vérification des conditions initiales :
    // - A et B ne sont pas null
    // - A > B
    // - A et B positives 
    // On coupe la loop quand les condition sont verif

    while ((A == 0 && B == 0) || (A < B) || (A < 0 || B < 0)) {
        printf("Les deux valeurs sont incorrectes.\n");
        printf("Entrer deux nombres tels que A > B :\n");
        scanf("%d %d", &A, &B);
    }

    // 3- Kansta3mlo la méthode d'Euclide bach n7sbo PGCD
    // Tant que le reste n'est pas nul (B ≠ 0), on effectue :
    //    - Calcul du reste de la division de A par B
    //    - Affichage du quotient et du reste
    //    -N3awdo A par B et B par le reste

    while (B != 0) {
        reste = A % B;           // Calc du reste de la division
        int quotient = A / B;
        printf("%d ÷ %d = %d et le reste est %d\n", A, B, quotient, reste);
        A = B;                   // A kiwli B
        B = reste;               // B kiwli reste
    }

    // 4- Fach reste kisali,Akhir valeur de A est le PGCD

    printf("Le PGCD est %d\n", A);

    return 0; 










    /*
$$$$$$\            $$\       $$\        $$$$$$\                      $$\                     $$\                 
$$  __$$\           \__|      $$ |      $$  __$$\                     $$ |                    $$ |                
$$ /  \__| $$$$$$\  $$\  $$$$$$$ |      $$ /  $$ |$$\   $$\  $$$$$$\  $$ | $$$$$$\   $$$$$$$\ $$$$$$$\   $$$$$$\  
\$$$$$$\   \____$$\ $$ |$$  __$$ |      $$ |  $$ |$$ |  $$ | \____$$\ $$ | \____$$\ $$  _____|$$  __$$\ $$  __$$\ 
 \____$$\  $$$$$$$ |$$ |$$ /  $$ |      $$ |  $$ |$$ |  $$ | $$$$$$$ |$$ | $$$$$$$ |$$ /      $$ |  $$ |$$$$$$$$ |
$$\   $$ |$$  __$$ |$$ |$$ |  $$ |      $$ |  $$ |$$ |  $$ |$$  __$$ |$$ |$$  __$$ |$$ |      $$ |  $$ |$$   ____|
\$$$$$$  |\$$$$$$$ |$$ |\$$$$$$$ |       $$$$$$  |\$$$$$$  |\$$$$$$$ |$$ |\$$$$$$$ |\$$$$$$$\ $$ |  $$ |\$$$$$$$\ 
 \______/  \_______|\__| \_______|       \______/  \______/  \_______|\__| \_______| \_______|\__|  \__| \_______|
                                                                                                                  
                                                                                                                  
                                                                                                                  
*/

}
