class Myclass {
public:
	//...
	Myclass& operator=(const Myclass&)& = default;
};

int main()
{
	Myclass x;

	Myclass{} = m; //invalid
}
