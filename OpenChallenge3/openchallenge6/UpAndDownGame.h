#ifndef UPANDDOWNGAME
#define UPANDDOWNGAME
#endif UPANDDOWNGAME

class UpAndDownGame
{
	static int answer;
	static int top;
	static int bottom;
public:
	static void run();
	static bool check(int answer);

private:
	static void init();
	static void msg();
};

UpAndDownGame::UpAndDownGame()
{
}

UpAndDownGame::~UpAndDownGame()
{
}