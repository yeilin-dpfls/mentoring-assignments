#include <iostream>
using namespace std;

struct Point {
	int xpos;
	int ypos;

	void MovePos(int x, int y)
	{	
		xpos = xpos + x;
		ypos = ypos + y;

	}

	void AddPoint(const Point& pos)
	{
		xpos = xpos + pos.xpos;
		ypos = ypos + pos.ypos;
	}

	void ShowPosition()
	{
		cout << "[" << xpos << "," << ypos << "]";
	}
};

int main(void) {
	Point pos1 = { 12, 4 };
	Point pos2 = { 20, 30 };

	pos1.MovePos(-7, 10);
	pos1.ShowPosition(); // [5, 14] 출력

	pos1.AddPoint(pos2);
	pos1.ShowPosition(); // [25, 44] 출력
	return 0;
}
