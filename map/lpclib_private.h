/*

  You are welcome to read this file, but there is absolutely
  no need to do so.

*/

#define cin __lpclib_cin
#define main __lpclib_user_main
class CinReplacement
{
public:
	template <typename T>
	CinReplacement & operator>>(const T & thing)
	{
		cerr << "\n\n** Use of 'cin' with LPCLib is not supported.\n";
		cerr << "** Use GetLine(), GetInt(), etc., instead.\n";
        cerr << "** (Stopping program now.)\n";
        throw (exception());
		return (*this);
	}
};
extern CinReplacement __lpclib_cin;
int __lpclib_user_main();
