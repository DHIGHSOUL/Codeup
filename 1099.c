#include <stdio.h>

int main() {
    int maze[11][11] = {}, compo, i, j, l;

    for(i=1; i<11; i++) {
        for(j=1; j<11; j++) {
            scanf("%d", &compo);
            maze[i][j] = compo;
        }
    }

    i=2; j=2;
    while(i<10&&j<11) {
        if(maze[i][j]==2) {
            maze[i][j] = 9;
            break;
        }
        maze[i][j] = 9;
        if(maze[i][j+1]==1) {
            i++;
            continue;
        }
        j++;
    }

    for(i=1; i<11; i++) {
        for(j=1; j<11; j++) {
            printf("%d ", maze[i][j]);
        }
        printf("\n");
    }

    return 0;
}