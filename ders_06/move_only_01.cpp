

class MoveOnly {
public:
	MoveOnly() = default;
	//...
	MoveOnly(const MoveOnly&) = delete;
	MoveOnly& operator=(const MoveOnly&) = delete;
	MoveOnly(MoveOnly&&);
	MoveOnly& operator=(MoveOnly&&);
};


class MoveOnly2 {
public:
	MoveOnly2() = default;
	//...
	MoveOnly2(MoveOnly2&&);
	MoveOnly2& operator=(MoveOnly2&&);
};
