namespace Proj {

	template <typename T>
	class Myclass {
	
	};
}

//gecersiz
//namespace Nec {
//	template <>
//	class Proj::Myclass<int> {
//
//	};
//}


// gecerli
template <>
class Proj::Myclass<double> {

};
