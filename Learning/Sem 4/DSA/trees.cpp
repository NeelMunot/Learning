# include &lt;iostream&gt;
# include &lt;cstdlib&gt;
# include &lt;string.h&gt;
using namespace std;
/*
* Node Declaration
*/
struct node
{
char label[10];
int ch_count;
struct node *child[10];
}*root;

/*
* Class Declaration
*/
class GT