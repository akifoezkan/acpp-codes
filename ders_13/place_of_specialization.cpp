namespace Proj {
	template <typename T>
	class Myclass {

	};
}

//gecersiz
namespace Nec {
	template <>
	class Proj::Myclass<int> {
        // specialization of Myclass has the be within the same namepsace with Proj
	};
}


// gecerli
template <>
class Proj::Myclass<double> {

};
