class MoveOnly {
public:
	MoveOnly() = default;

	MoveOnly(const MoveOnly&) = delete;
	MoveOnly& operator=(const MoveOnly&) = delete;
	MoveOnly(MoveOnly&&);
	MoveOnly& operator=(MoveOnly&&);
};


MoveOnly func()
{
	MoveOnly mx;
	//...

	return mx; //gecerli
}
