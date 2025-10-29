
# 1- Demander à l'utilisateur d'entrer 2 entiers (A khasha tkon kbr mn B)
A = int(input("Entrer le premier nombre (A) : "))
B = int(input("Entrer le second nombre (B) : "))

# 2- Vérification des conditions initiales :
# - A et B ne sont pas null
# - A > B
# - A et B positives 
# On coupe la loop quand les condition sont verif

while (A == 0 and B == 0) or (A < B) or (A < 0 or B < 0):
    print("Les deux valeurs sont incorrectes.\n")
    A = int(input("Entrer le premier nombre (A) : "))
    B = int(input("Entrer le second nombre (B) : "))

# 3- Kansta3mlo la méthode d'Euclide bach n7sbo PGCD
# Tant que le reste n'est pas nul (B ≠ 0) on effectue :
#    - Calcul du reste de la division de A par B
#    - Affichage du quotient et du reste
#    - N3awdo A par B et B par le reste

while B != 0:
    reste = A % B  # Calc du reste de la division
    quotient = A // B  # Calc du quotient entier
    print(f"{A} ÷ {B} = {quotient} et le reste est {reste}\n")
    A = B
    B = reste

# 4- Fach reste kisali,Akhir valeur de A est le PGCD

print(f"Le PGCD est {A}")








# $$$$$$\            $$\       $$\        $$$$$$\                      $$\                     $$\                 
# $$  __$$\           \__|      $$ |      $$  __$$\                     $$ |                    $$ |                
# $$ /  \__| $$$$$$\  $$\  $$$$$$$ |      $$ /  $$ |$$\   $$\  $$$$$$\  $$ | $$$$$$\   $$$$$$$\ $$$$$$$\   $$$$$$\  
# \$$$$$$\   \____$$\ $$ |$$  __$$ |      $$ |  $$ |$$ |  $$ | \____$$\ $$ | \____$$\ $$  _____|$$  __$$\ $$  __$$\ 
#  \____$$\  $$$$$$$ |$$ |$$ /  $$ |      $$ |  $$ |$$ |  $$ | $$$$$$$ |$$ | $$$$$$$ |$$ /      $$ |  $$ |$$$$$$$$ |
# $$\   $$ |$$  __$$ |$$ |$$ |  $$ |      $$ |  $$ |$$ |  $$ |$$  __$$ |$$ |$$  __$$ |$$ |      $$ |  $$ |$$   ____|
# \$$$$$$  |\$$$$$$$ |$$ |\$$$$$$$ |       $$$$$$  |\$$$$$$  |\$$$$$$$ |$$ |\$$$$$$$ |\$$$$$$$\ $$ |  $$ |\$$$$$$$\ 
#  \______/  \_______|\__| \_______|       \______/  \______/  \_______|\__| \_______| \_______|\__|  \__| \_______|
#                                                                                                                  
#                                                                                                                  
#                                                                                                                  
