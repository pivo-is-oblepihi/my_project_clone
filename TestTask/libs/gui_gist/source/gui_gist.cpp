#include "gui_gist/gui_gist.h"
#include "qeneri_rand_num/qeneri_rand_num.h"

GistProcessor::GistProcessor(RandomNumberGenerator & object)
{
    object.generateRandomNumbers();
}

void GistProcessor::foo()
{
    RandomNumberGenerator gen(0,0,0);
}
