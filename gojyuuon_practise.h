/* gojyuon_practise.h
* 五十音练习程序
* Programmed by ADONG
*/
#ifndef _GOJYUON_PRACTISE_H_
#define _GOJYUON_PRACTISE_H_

#include "std_c11_headfile.h"
#include "gojyuuon_map.h"

bool Gojyuuon_Practise(void);

enum command{
    no_cmd=0,
    ckan_cmd,//check answer
    help_cmd,
    exit_cmd,
};

typedef struct 
{
    const char* kana_p;
    const char* romaji_p;
    size_t kana_strlen;
    size_t romaji_strlen;
    int kana_type;
    int pronounce_type;
    int kana_choice;
}kana_struct;

#endif
/*End of File*/