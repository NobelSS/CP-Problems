#include<bits/stdc++.h>
int moveX[] = {1, 0, -1, 0};
int moveY[] = {0, 1, 0, -1};
char map[101][101];
bool visited[101][101];
int startX, startY;
int n, m, min, max = 0;

void transverse(int x, int y, int max_dist){
	int currX, currY;
	visited[x][y] = true;
	for(int i=0;i<4;i++){
		currX = x + moveX[i];
		currY = y + moveY[i];
		if(currX < n && currY < m && currX >= 0 && currY >= 0){
			if(!visited[currX][currY] && map[currX][currY] != '*'){
				transverse(currX, currY, max_dist + 1);
			}
			if(currX == startX && currY == startY){
				if(max_dist + 1 > max) max = max_dist + 1;
				if(max >= min) return;
			}
		}
	}
	visited[x][y] = false;
}

int main(){
	scanf("%d %d", &n, &m);
	scanf("%d", &min);
	scanf("%d %d", &startX, &startY);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf(" %c", &map[i][j]);
			visited[i][j] = false;
		}
	}
	startX--;
	startY--;
	transverse(startX, startY, 0);
	if(max >= min) printf("YES\n");
	else printf("NO\n");
	return 0;
}
