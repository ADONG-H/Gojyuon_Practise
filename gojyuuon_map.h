/*gojyuon_map.h
*Programmed by ADONG.H 
*/
#ifndef _GOJYUUON_MAP_H_
#define _GOJYUUON_MAP_H_

#include "std_c11_headfile.h"

#define GOJYUUON_VOWEL_QUANTITY 5 //五十音 元音数量
#define GOJYUUON_SEION_QUANTITY 40 //五十音 清音数量
#define GOJYUUON_NUKION_QUANTITY 1 //五十音 拔音数量
#define GOJYUUON_DAKUON_QUANTITY 20 //五十音 浊音数量
#define GOJYUUON_HANDAKUON_QUANTITY 5 //五十音 半浊音数量
#define GOJYUUON_YOUON_QUANTITY 33 //五十音 拗音数量


#define PRONOUNCE_TYPE_QUANTITY 6
#define KANA_TYPE_QUANTITY 2

extern const char** hiragana_list[PRONOUNCE_TYPE_QUANTITY];
extern const char** katakana_list[PRONOUNCE_TYPE_QUANTITY];
extern const char*** kana_list[KANA_TYPE_QUANTITY];
extern const int kana_quantity_list[PRONOUNCE_TYPE_QUANTITY];
extern const char** romaji_list[PRONOUNCE_TYPE_QUANTITY];

enum kana_pronounce_choice{
    pronounce_vowel,
    pronounce_seion,
    pronounce_nukion,
    pronounce_dakuon,
    pronounce_handakuon,
    pronounce_yoion,
};

enum kana_type_choice{
    type_hiragana,
    type_katakana,
};


#endif

/*End of File*/