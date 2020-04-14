#include "gojyuuon_map.h"

/*--------------------元音Vowel--------------------*/
//元音平假名字符串
const char* vowel_hiragana[GOJYUUON_VOWEL_QUANTITY]={"あ","い","う","え","お",};
//元音片假名字符串
const char* vowel_katakana[GOJYUUON_VOWEL_QUANTITY]={"ア","イ","ウ","エ","オ",};
//元音罗马字 字符串
const char* vowel_romaji[GOJYUUON_VOWEL_QUANTITY]={"a","i","u","e","o",};
/*--------------------元音Vowel-结束--------------------*/

/*--------------------清音Seion--------------------*/
//清音平假名字符串
const char* seion_hiragana[GOJYUUON_SEION_QUANTITY]={
//a    i    u   e    o  
 "か","き","く","け","こ",//k
 "さ","し","す","せ","そ",//s
 "た","ち","つ","て","と",//t
 "な","に","ぬ","ね","の",//n
 "は","ひ","ふ","へ","ほ",//h
 "ま","み","む","め","も",//m
 "や",     "ゆ",    "よ",//y
 "ら","り","る","れ","ろ",//r
 "わ",              "を",//w
};

//清音片假名字符串
const char* seion_katakana[GOJYUUON_SEION_QUANTITY]={
//a    i    u   e    o  
 "カ","キ","ク","ケ","コ",//k
 "サ","シ","ス","セ","ソ",//s
 "タ","チ","ツ","テ","ト",//t
 "ナ","ニ","ヌ","ネ","ノ",//n
 "ハ","ヒ","フ","ヘ","ホ",//h
 "マ","ミ","ム","メ","モ",//m
 "ヤ",     "ユ",    "ヨ",//y
 "ラ","リ","ル","レ","ロ",//r
 "ワ",              "ヲ",//w  
};
//清音罗马字 字符串
const char* seion_romaji[GOJYUUON_SEION_QUANTITY]={
"ka","ki","ku","ke", "ko",
"sa","shi","su","se","so", 
"ta","chi","tsu","te","to",
"na","ni","nu","ne","no",
"ha","hi","fu","he","ho",
"ma","mi","mu","me","mo",
"ya",     "yu",     "yo",
"ra","ri","ru","re","ro",
"wa",               "wo",
};
/*--------------------清音Seion-结束--------------------*/

/*--------------------拔音Nukion--------------------*/
//拔音平假名
const char* nukion_hiragana[GOJYUUON_NUKION_QUANTITY]={"ん"};
//拔音片假名
const char* nukion_katakana[GOJYUUON_NUKION_QUANTITY]={"ン"};
//拔音罗马音 字符串
const char* nukion_romaji[GOJYUUON_NUKION_QUANTITY]={"n"};
/*--------------------拔音Nukion-结束--------------------*/

/*--------------------浊音Dakuon--------------------*/
//浊音平假名字符串
const char* dakuon_hiragana[GOJYUUON_DAKUON_QUANTITY]={
//b    d   z    g    
 "ば","だ","ざ","が",//b~g+a
 "び","ぢ","じ","ぎ",//b~g+i
 "ぶ","づ","ず","ぐ",//b~g+u
 "べ","で","ぜ","げ",//b~g+e
 "ぼ","ど","ぞ","ご",//b~g+o  
};

//浊音片假名字符串
const char* dakuon_katakana[GOJYUUON_DAKUON_QUANTITY]={
//b    d   z    g
 "バ","ダ","ザ","ガ",//b~g+a
 "ビ","ヂ","ジ","ギ",//b~g+i
 "ブ","ヅ","ズ","グ",//b~g+u
 "ベ","デ","ゼ","ゲ",//b~g+e
 "ボ","ド","ゾ","ゴ",//b~g+o
};
//浊音罗马字 字符串
const char* dakuon_romaji[GOJYUUON_DAKUON_QUANTITY]={
  "ba","da","za","ga",
  "bi","ji","ji","gi",
  "bu","zu","zu","gu",
  "be","de","ze","ge",
  "bo","do","zo","go",
};
/*--------------------浊音Handakuon-结束--------------------*/

/*--------------------半浊音Handakuon--------------------*/
//半浊音平假名字符串
const char* handakuon_hiragana[GOJYUUON_HANDAKUON_QUANTITY]={"ぱ","ぴ","ぷ","ぺ","ぽ"};
//半浊音片假名字符串
const char* handakuon_katakana[GOJYUUON_HANDAKUON_QUANTITY]={"パ","ピ","プ","ペ","ポ"};
//半浊音罗马字 字符串
const char* handakuon_romaji[GOJYUUON_HANDAKUON_QUANTITY]={"pa","pi","pu","pe","po"};
/*--------------------半浊音Handakuon-结束--------------------*/



/*--------------------拗音Youon--------------------*/
//拗音平假名字符串
const char* youon_hiragana[GOJYUUON_YOUON_QUANTITY]={
"きゃ","きゅ","きょ",//kya kyu kyo
"ぎゃ","ぎゅ","ぎょ",//gya gyu gyo
"しゃ","しゅ","しょ",//sha shu sho
"じゃ","じゅ","じょ",//jya jyu jyo
"ちゃ","ちゅ","ちょ",//cha chu cho
"にゃ","にゅ","にょ",//nya nyu nyo
"ひゃ","ひゅ","ひょ",//hya hyu hyo
"びゃ","びゅ","びょ",//bya byu byo
"ぴゃ","ぴゅ","ぴょ",//pya pyu pyo
"みゃ","みゅ","みょ",//mya myu myo
"りゃ","りゅ","りょ",//rya ryu ryo
};

//拗音片假名字符串
const char* youon_katahana[GOJYUUON_YOUON_QUANTITY]={
"キャ","キュ","キョ",//kya kyu kyo
"ギャ","ギュ","ギョ",//gya gyu gyo
"シャ","シュ","ショ",//sha shu sho
"ジャ","ジュ","ジョ",//jya jyu jyo
"チャ","チュ","チョ",//cha chu cho
"ニャ","ニュ","ニョ",//nya nyu nyo
"ヒャ","ヒュ","ヒョ",//hya hyu hyo
"ビャ","ビュ","ビョ",//bya byu byo
"ピャ","ピュ","ピョ",//pya pyu pyo
"ミャ","ミュ","ミョ",//mya myu myo
"リャ","リュ","リョ",//rya ryu ryo
};

//拗音罗马字 字符串
const char* youon_romaji[GOJYUUON_YOUON_QUANTITY]={
"kya","kyu","kyo",//1
"gya","gyu","gyo",//2
"sha","shu","sho",//3
"jya","jyu","jyo",//4
"cha","chu","cho",//5
"nya","nyu","nyo",//6
"hya","hyu","hyo",//7
"bya","byu","byo",//8
"pya","pyu","pyo",//9
"mya","myu","myo",//10
"rya","ryu","ryo",//11
};
/*--------------------拗音Youon-结束--------------------*/

//平假名串组列表
const char** hiragana_list[PRONOUNCE_TYPE_QUANTITY]={
    vowel_hiragana,
    seion_hiragana,
    nukion_hiragana,
    dakuon_hiragana,
    handakuon_hiragana,
    youon_hiragana,
};

//片假名数串列表
const char** katakana_list[PRONOUNCE_TYPE_QUANTITY]={
    vowel_katakana,
    seion_katakana,
    nukion_katakana,
    dakuon_katakana,
    handakuon_katakana,
    youon_katahana,
};
//假名列表
const char*** kana_list[KANA_TYPE_QUANTITY]={
    hiragana_list,
    katakana_list,
};
//假名个数列表
const int kana_quantity_list[PRONOUNCE_TYPE_QUANTITY]={
    GOJYUUON_VOWEL_QUANTITY,
    GOJYUUON_SEION_QUANTITY,
    GOJYUUON_NUKION_QUANTITY,
    GOJYUUON_DAKUON_QUANTITY,
    GOJYUUON_HANDAKUON_QUANTITY,
    GOJYUUON_YOUON_QUANTITY,
};

//罗马字 字符串列表
const char** romaji_list[PRONOUNCE_TYPE_QUANTITY]={
    vowel_romaji,
    seion_romaji,
    nukion_romaji,
    dakuon_romaji,
    handakuon_romaji,
    youon_romaji,
};