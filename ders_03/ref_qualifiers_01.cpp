class Myclass {
public:
	void func();
};

int main()
{
	Myclass x;

	x.func(); //valid
	Myclass{}.func() ; //valid
	Myclass{} = x; // valid
}
