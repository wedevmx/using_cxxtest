#include <cxxtest/TestSuite.h>
#include <string>

using namespace std;
class StringTestSuite : public CxxTest::TestSuite
{
  public:
    void testStringLength(void)
    {
      string name("Diego Farias");
      size_t length = 12;

      TS_ASSERT_EQUALS(length, name.length());
    }

    void testAppendOperator(void)
    {
      string name("Diego");
      name += " Farías";

      TS_ASSERT_SAME_DATA("Diego Farías", name.c_str(), 12);
    }
};
