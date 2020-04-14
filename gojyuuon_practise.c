// gojyuon_practise.c
//五十音练习程序
#include "gojyuuon_practise.h"

kana_struct kana_1;

//void Randon_Kana(kana_struct* kana)
//输入：kna_struct* kana 假名结构体
//作用：随机抽取一个假名信息
void Random_Kana(kana_struct* kana)
{
    //假名类型
    kana->kana_type=(
        ( rand() ) % KANA_TYPE_QUANTITY 
    );
    
    //发音类型
    kana->pronounce_type=(
        ( rand() ) % PRONOUNCE_TYPE_QUANTITY 
    );
    
    //选择其中一个编号
    kana->kana_choice=(
        ( rand() ) % ( kana_quantity_list[kana->pronounce_type] )
    );

    //存入假名字符串指针
    kana->kana_p = kana_list[kana->kana_type][kana->pronounce_type][kana->kana_choice];
    
    //存入假名字符串长度
    kana->kana_strlen = strlen(kana->kana_p);
    
    //存入罗马字 字符串指针
    kana->romaji_p=romaji_list[kana->pronounce_type][kana->kana_choice];
    
    //存入罗马字 字符串长度
    kana->romaji_strlen=strlen(kana->romaji_p);

}

//unsigned int Read_Command(char* cmdstr,unsigned int cmdsize)
//作用：读取命令行 帮助和退出
//输入：char* cmdstr 输入命令字符串指针
//  unsigned int cmdsize 命令字符串的大小
//返回：enum command
unsigned int Get_Command(unsigned char* cmdstr,unsigned int cmdsize)
{
    scanf("%10s",cmdstr);//获取命令
    fflush(stdin);
    
    unsigned int count;
    for(count=0;count<cmdsize;count++)
        cmdstr[count]=(unsigned char)tolower(cmdstr[count]);
    cmdstr[cmdsize-1]='\n';

    if( strcmp(cmdstr,"-exit") == 0 )
        return exit_cmd;
    else if( strcmp(cmdstr,"-help") == 0 )
        return help_cmd;
    else if( strcmp(cmdstr,"?") == 0 )
        return ckan_cmd;
    else
        return no_cmd;
        return 0;
}

bool Gojyuuon_Practise(void)
{
    srand(time(NULL));//随机数初始化
    while (1)
    {
        unsigned char command[11];
        Random_Kana(&kana_1);
        
        printf("%s\n",kana_1.kana_p); //随机显示一个假名
        printf("Input:"); 
        
        int cmdflag=Get_Command(command,sizeof(command));
        
        switch (cmdflag)
        {
            case no_cmd:
                if(
                    (strcmp(command,kana_1.romaji_p) == 0)//有相同字符
                        &&
                    (strlen(command)==kana_1.romaji_strlen)//长度相同
                )
                    printf("---!!Correct!!---\n\n");
                else
                    printf("---Not Correct---\n\n");       
                break;

            case ckan_cmd:
                printf("---%s---\n\n",kana_1.romaji_p);
                break;

            case help_cmd:
                    system("type .\\help.txt");
                break;

            case exit_cmd: 
                return 0;
                break;
            default:
                break;
        }
    }
        
}

/*End of File*/