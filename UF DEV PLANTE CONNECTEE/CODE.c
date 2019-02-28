#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <windows.h>


void color(int t,int f)
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(H,f*16+t);
}

void PrintListName()
{
    color(10,0);
    printf("\n\n");
    printf("                       PLANTES CONNECTEES            \n\n");
    color(15,0);
    printf("MENU par nom : \n");
    color(13,0);
    printf("1. Houx  \n");
    printf("2. Pommier Sauvage \n");
    printf("3. Neflier Allemand \n");
    printf("4. Peuplier Tremble \n");
    printf("5. Merisier\n");
    printf("6. Cerisier de Sainte-Lucie\n");
    printf("7. Prunellier\n");
    printf("8. Chene sessile \n");
    printf("9. Chene pubescent\n");
    printf("10. Chene pedoncule\n");
    printf("11. Saule marsault \n");
    printf("12. Alisier blanc \n");
    printf("13. Sorbier des oiseleurs\n");
    printf("14. Alisier de Fontainebleau\n");
    printf("15. Alisier torminal\n");
    printf("16. Tilleul a petites feuilles \n");
    printf("17. Tilleul a grandes feuilles \n");
    printf("18. Amelanchier \n");
    printf("19. Epine-vinette \n");
    printf("20. Buis \n");
    printf("21. Clematite vigne blanche\n");
    printf("22. Noisetier\n");
    printf("23. Aubepine a 2 styles\n");
    printf("24. Fusain d'Europe \n");
    printf("25. Lierre grimpant\n");
    printf("26. Troène\n");
    printf("27. Chèvrefeuille des bois\n");
    printf("28. Bourdaine \n");
    printf("29. Grosseiller a marqueraux\n");
    printf("30. Rosier des champs\n");
    printf(">");
    color(15,0);

}

void PrintListCat()
{
    color(10,0);
    printf("\n\n");
    printf("                       PLANTES CONNECTEES            \n\n");
    color(15,0);
    printf("MENU par Categorie : \n");
    color(13,0);
    printf("1. Strate Arboree\n");
    printf("2. Strate Arbustive\n");
    printf("3. Retour\n");
    printf(">");
    int choice = 0;
    while (choice = 1|2|3)
    {
        scanf("%d", &choice);
    }

    if (choice == 1/* condition */)
    {
        ListArboree();/* code */
    }
    else if (choice == 2/* condition */)
    {
        ListArbustive();/* code */
    }
    else if (choice == 3/* condition */)
    {
        PrintMenu();/* code */
    }


}


void PrintMenu()
{
    color(10,0);
    printf("\n\n");
    printf("                       PLANTES CONNECTEES            \n\n");
    color(15,0);
    printf("MENU PRINCIPAL :\n");
    color(13,0);
    printf("1. Plantes par Nom\n");
    printf("2. Plantes par Categorie\n");
    printf("3. Quitter\n");
    printf(">");
    int choice;
    while (choice != 1|2|3)
    {
        scanf("%d", &choice);
    }

    if (choice = 1/* condition */)
    {
        PrintListName();/* code */
    }
    else if (choice = 2/* condition */)
    {
        PrintListCat();/* code */
    }
    else if (choice = 3/* condition */)
    {
        Exit();/* code */
    }
}





