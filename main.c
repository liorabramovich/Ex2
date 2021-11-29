#include <stdio.h>
#include "my_mat.h"


int main()
{
    char ch = ' ';
    int k, g;

    while (ch != 'D')
    {


        scanf(" %c", &ch);

        switch (ch)
        {
        case 'A':
            Adjmatrix();
            break;

        case 'B':
            scanf("%d",&k);
            scanf("%d",&g);


            path(k , g );
            break;

        case 'C':
            scanf("%d",&k);

            scanf("%d",&g);

            int ans = FloydWarshell(k , g);
            printf("%d\n" , ans);
            break;



        default:
            break;
        }
    }
    return 0;
}
