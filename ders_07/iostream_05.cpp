#include <fstream>
#include <stdexcept>

std::ofstream open_write_file(const std::string &filename)
{
	std::ofstream ofs{ filename};
	if (!ofs) {
		throw std::runtime_error{ "cannot create file!\n" };
	}
	return ofs;
}

void write_file(std::ofstream ofs)
{
	ofs << "necati ergin";
}

int main()
{
	open_write_file("output.txt") << "Modern C++";
}
