struct Data {
	int x;
};

int main()
{
	Data d1 = { 10 }; //OK
	Data d2(10); //OK
	Data d3{ 10 }; //OK
	//Data d4 = 10; // not OK
}
