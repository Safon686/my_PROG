
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	char map[10][21];
	char direction;
	int x=5,y=5;
	int ox,oy;
	int q=2,a=2;
	do
	{
        sprintf(map[0], "####################");
        
	for (int i=1;i<9;i++) {
            sprintf(map[i], "#                  #");
        }
        sprintf(map[9], "####################");
        
	map[y][x]='@';
	map[q][a]='*';

	system("clear");

	for (int i=0; i<10; i++) {
             printf("%s\n", map[i]);
        }

	direction = getchar();
		
	ox=x;
	oy=y;

	if (direction == 'w') y--;
	if (direction == 's') y++;
	if (direction == 'd') x++;
	if (direction == 'a') x--;
	if (map[y][x] == '#') 
	{
	x=ox;
	y=oy;
	}
	if ((x==a)&&(y==q)) {

	a=rand()*1.0 / RAND_MAX * 18+1;
	q=rand()*1.0 / RAND_MAX * 8+1;
	}
	}
	while (direction !='e');

	return 0;
}
