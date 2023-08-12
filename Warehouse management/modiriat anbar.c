// AREF KESHAVARZ
// POROZHE PAYANI : MODIRIAT ANBAR
//PHONE NUMBER : 09051583785
//EMAIL : arefkeshavarz1220@gmail.com
/*TOZIHAT BARNAME :
1. AGHAR BARNAME JAYI STOP KAR SLEEP DARAD SABR KONID .
2. HARQEZ FILE HAYE BARNAME RA TAGHIR NADAHID AQAR TAGHIR MIDAHID BA RAVESHI KE DAR PDF TOZIHAT BARNAME QOFTE SHODE TAGHIR DAHID .
3. HAME GHESMAT HAYE BARNAME SAHIH KAR MIKONAD VA KHATAHAYE EHTEMALI KARBAR RO DAR NAZAR QEREFTE AST .
4. HAR GHESMAT BARNAME YA KODHARA  MOTAVAJEH NASHODID BE BANDE PAYAM DAHID YA EMAIL KONID ...
5. HAR GHESMAT BARNAME TA JAYE MOMKEN FUNCTION JODA DARAD VA KAMENT BE ANDAZE KAFI QOZASHTE SHODE .
*/
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void sabtnam(void);
void vorood_karbar(void);
void khorooj_az_barname(void);
void select_main_option(void);
void sabtnam_receive_username(char username[30]);
void sabtnam_receive_name_famili(char name[20] , char famili[20]);
int check_is_number_or_not(char number[100]);
void sabtnam_receive_kodmelli(char kodmelli[25]);
void sabtnam_receive_phonenumber(char phone_number[25]);
void sabtnam_receive_email(char email[35]);
void sabtnam_receive_password(char password[50]);
void check_password1and2( char password[50] , char password2[50]);
void sabtnam_save_information_of_user(char save[100]);
void login_receive_username(char username[30]);
void login_receive_password(char password[50]);
void login_check_username_password(char username[30] , char password[50]);
void login_check_password(char password[50] , FILE *information_of_users);
void save_date_activity_users(void);
void Poll(void);
void select_main_option_after_login(void);
void register_new_product(void);
void register_new_product_receive_id(char id_product[20]);
void register_new_product_receive_information_product(char name_product[20] , char brand_product[20] , char model_product[20]);
void register_new_product_receive_price_product(char price_product[20]);
void register_new_product_receive_number_product(char number_product[20]);
void register_new_product_receive_additional(char information_product[150]);
void register_new_product_save_information(char save[150]);
void product_changes(int number);
void product_changes_search_id_product(char id_product[20]);
void search_id_search_name_product(char name_of_product[20]);
void search_id_search_brand_product(char brand_of_product[20]);
void search_id_search_model_product(char model_od_product[20]);
void product_changes_type( int number , char type[20]);
void product_changes_number_product(char number_product[20] , char type[20]  , char id_product[20]);
void product_changes_date(char date_time[50],int year , int month , int day , int hours , int min , int sec);
void product_changes_save(char save[100]);
void select_option_of_report(void);
void linklist_changes(void);
void report1_number_of_any_product(void);
int numebr_of_any_product(char id_product[20] , char number_product[20]);
void report2_number_above_entrance(void);
void report3_number_less_entrance(void);
void report4_price_of_all_products(void);
void report5_price_of_any_product(void);
void report6_number_import_in_date_intrance(void);
void report7_number_export_in_date_intrance(void);
void report8_import_export_at_intrance_time(void);
void report9_registered_by_user(void);
void report10_time_users_activity(void);
void report11_lowest_product(void);
void report12_most_product(void);
void linklist_information_of_users(void);
void Account_settings(void);
void Account_settings_change_name(void);
void Account_settings_change_famili(void);
void Account_settings_change_melli_number(void);
void Account_settings_change_phone_number(void);
void Account_settings_change_email(void);
void Account_settings_change_password(void);
void main()
{
    printf(" |--> SALAM KARBAR , BE BARNAME MODIRIAT ANBAR KHOSH AMADID <--| \n");
    // BA VOROOD BE TABE ZIR VARED QESMAT MENU MISHIM .
    select_main_option();
}
//---------------------------------------------------------------------------------------------------------
//FUNCTION EZAFE KARDAN COLOR BE BARNAME TA BAD AZ AN ESTEFADE KONIM :
// BARAYE RANQI NEVESHTAN MATN HA AZ FUNCTION ZIR ESTEFADE MISHE : setTextColor( NAME OF COLOR );
typedef enum
{
    BLACK = 0, BLUE = 1, GREEN = 2,
    AQUA = 3, RED = 4, PURPLE = 5,
    YELLOW = 6, WHITE = 7, GRAY = 8,
    LIGHT_BLUE = 9, LIGHT_GREEN = 10,
    LIGHT_AQUA = 11, LIGHT_RED = 12,
    LIGHT_PURPLE = 13, LIGHT_YELLOW = 14,
    LIGHT_WHITE = 15
} ConsoleColors;
typedef HANDLE Handle;
typedef CONSOLE_SCREEN_BUFFER_INFO BufferInfo;
typedef WORD Word;
short setTextColor(const ConsoleColors foreground)
{
    Handle consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    BufferInfo bufferInfo;
    if(!GetConsoleScreenBufferInfo(consoleHandle, &bufferInfo))
        return 0;
    Word color = (bufferInfo.wAttributes & 0xF0) + (foreground & 0x0F);
    SetConsoleTextAttribute(consoleHandle, color);
    return 1;
}
//---------------------------------------------------------------------------------------------------------
// FUNCTION HAYE ASLI :
//FUNCTION BAKHSH SABT NAM KARBAR :
void sabtnam(void)
{
    struct get_information_of_user
    {
        char username[30];
        char name[20];
        char famili[20];
        char melli_number[25];
        char phone_number[25];
        char email[35];
        char password[50];
    }users;
    char password2[50];
    setTextColor(YELLOW);
    printf("\n ---- BE BAKHSH SABT NAM KHOSH AMADID ----\n");
    getchar();
    //DARYAFT ETELAAT KARBAR BE TARTIB : BARAYE HAR DARYAFT YEK TABE .
    sabtnam_receive_username(users.username);
    sabtnam_receive_name_famili(users.name , users.famili );
    sabtnam_receive_kodmelli(users.melli_number);
    sabtnam_receive_phonenumber(users.phone_number);
    sabtnam_receive_email(users.email);
    sabtnam_receive_password(users.password);
    sabtnam_receive_password(password2);
    check_password1and2(users.password , password2);
    //ZAKHIRE ETELAAT KARBAR DAR FILE :
    sabtnam_save_information_of_user(users.username);
    sabtnam_save_information_of_user(users.name);
    sabtnam_save_information_of_user(users.famili);
    sabtnam_save_information_of_user(users.melli_number);
    sabtnam_save_information_of_user(users.phone_number);
    sabtnam_save_information_of_user(users.email);
    sabtnam_save_information_of_user(users.password);
    // HALA ETELAAT ZAKHIRE SHODE , HALA MIRIM MARHALE BAD :
    setTextColor(GREEN);
    printf(" *** ETELAAT SHOMA ZAKHIRE SHOD \n");
    Sleep(3000);
    system("cls");
    select_main_option();
}
//-------------------------------------------------------------------------
//FUNCTION BAKHSH VOROOD KARBAR :
void vorood_karbar(void)
{
    struct login
    {
        char username[30];
        char password[50];
    }user;
    printf("---- BE BAKHSH VOROOD KARBAR KHOSH AMADID ----\n");
    //NAM KARBARI VA PASSWORD RA DARYAFT MIKONIM :
    login_receive_username(user.username);
    login_receive_password(user.password);
    // HALA CHEK MIKONIM KE NAM KARBARI VA PASSWORD SAHIH BASHAD
    login_check_username_password( user.username , user.password );
}
//-------------------------------------------------------------------------
//FUNCTION BAKHSH KHOROOJ AZ BARNAME :
void khorooj_az_barname(void)
{
    Poll();
    setTextColor(LIGHT_AQUA);
    printf("\n KHODANEGAHDAR KARBAR :) ");
    Beep( 449 , 4000 );
    exit(1);
}
//--------------------------------------------------------------------------
//FUNCTION HAYE BAKHSH SABT NAM :
void select_main_option(void)
{
    //number_option : QOZINE ENTEKHABI TAVASOT KARBAR : ADADI KE KARBAR VARED MIKONAD .
    int number_option ;
    printf(" >>LOTFAN YEKI AZ QOZINE HAYE ZIR RA ENTEKHAB KONID : \n");
    setTextColor(YELLOW);
    printf(" 1. SABT NAM KARBAR \n");
    setTextColor(GREEN);
    printf(" 2. VOROOD KARBAR \n");
    setTextColor(LIGHT_RED);
    printf(" 3. KHOROOJ AZ BARNAME \n");
    setTextColor(WHITE);
    printf(" >>> ");
    scanf("%d" , &number_option );
    // DAR HALGHE WHILE BINAHAYAT ANDAKHTIM ZIRA AQAR KARBAR ADAD ESHTEBAH YA KARAKTER VARED KARD DOBARE ADAD BEQIRAD .
    // WHILE(1) = HALGHE BINAHAYAT .
    while(1)
    {
        // BA ENTEKHAB QOZINE 1 VARED BAKHSH SABT NAM MISHIM :
        if(number_option == 1 )
        {
            system("cls");
            // TABE BAKHSH SABT NAM :
            sabtnam();
            break;
        }
        //BA ENTEKHAB QOZINE 2 VARED BAKHSH VOROOD KARBAR MISHIM :
        if(number_option == 2)
        {
            system("cls");
            // TABE BAKHSH VOROOD KARBAR :
            vorood_karbar();
            break;
        }
        // BA ENTEKHAB QOZINE 3 VARED BAKHSH KHOROOJ AZ BARNAME MISHIM :
        if(number_option == 3)
        {
            system("cls");
            // KHOROOJ AZ BARNAME :
            khorooj_az_barname();
            break;
        }
        // AQAR KARBAR ADAD GHEIR SAHIH YA HARF VARED KARD VARD else SHOE VA DOBARE BAYAD ADAD VARED KONAD :
        else
        {
            getchar();
            setTextColor(RED);
            printf("\n ***EROR . ADAD VARED SHODE SAHIH NEMIBASHAD \n");
            printf(" >> LOTFAN ADAD MORED NAZAR KHODRA DOBARE VARED KONID : ");
            scanf("%d" , &number_option);
        }
    }
}
//-------------------------------------------------------------------------------------
// FUNCTION HAYE BAKHSH SABT NAM :
void sabtnam_receive_username(char username[30])
{

    setTextColor(YELLOW);
    printf(" >> LOTFAN 'NAM KARBARI' KHOODRA VARED KONID : ");
    gets(username);
    // DAR KOD HAYE ZIR CHACK MIKONIM KE IN NAM KARBARI GHABLAN BOODE YA NA AQAR BOODE BAYAD DOBARE NAM KARBARI VARED KONIM :
    FILE *information_of_users ;
    information_of_users = fopen("information_of_users.txt" , "r");
    char username_in_the_file[30] , new_username_intrance[30];
    strcpy(new_username_intrance , username);
    strcat(new_username_intrance , "\n" );
    while(feof(information_of_users) == 0 )
    {
        fgets(username_in_the_file , 30 , information_of_users );
        if(strcmp(new_username_intrance , username_in_the_file) == 0 )
        {
            setTextColor(RED);
            printf(" *** EROR . IN NAM KARBARI GHABLAN SABT SHODE AST ... \n");
            sabtnam_receive_username(username);
        }
        for(int i = 0 ; i < 6 ; i++ )
            fgets(username_in_the_file , 30 , information_of_users );
    }
    fclose(information_of_users);
}
void sabtnam_receive_name_famili(char name[20] , char famili[20])
{
    setTextColor(GREEN);
    printf(" >> LOTFAN 'NAM' KHODRA VARED KONID : ");
    gets(name);
    setTextColor(YELLOW);
    printf(" >> LOTFAN 'FAMILI' KHODRA VARED KONID : ");
    gets(famili);
}
// TABE ZIR BARAYE CHECK KARDAN IN AST KE VOROODI ADAD AST YA NA ZIRA KODMILI VA SHOMARE TELEPHON  NABAYAD HARF DASHTE BASHAD :
// AGHAR VOROODI ADAD BOOD 0 VA GHAR SHAMEL HAR HAM BOOD 1 RA RETURN MIKONAD ...
int check_is_number_or_not(char number[100])
{
	int isDigit = 0;
	for(int j = 0 ; j<strlen(number) && isDigit == 0 ; j++ )
	{
		if(number[j] > 57 || number[j] < 48)
			isDigit = 1 ;
		else
			isDigit =  0 ;
	}
    return isDigit ;
}
void sabtnam_receive_kodmelli(char kodmelli[25])
{
    setTextColor(GREEN);
    printf(" >> LOTFAN 'KODMELI' KHODRA VARED KONID : ");
    gets(kodmelli);
    // BARAYE CHACK KARDAN INKE HAME KODMELI ADAD AST YA NA :
    if(check_is_number_or_not(kodmelli) == 1)
    {
        // AGHAR HARF DASHT IN BAKHSH ENJRA MISHE :
        setTextColor(RED);
        printf(" *** EROR . VOROODI SAHIH NIST . LOTFAN FAGHAT ADAD VARED KONID ...\n");
        sabtnam_receive_kodmelli(kodmelli);
    }

}
void sabtnam_receive_phonenumber(char phone_number[25])
{
    setTextColor(YELLOW);
    printf(" >> LOTFAN 'SHOMARE TELEPHONE' KHODRA VARED KONID : ");
    gets(phone_number);
    // BARAYE CHACK KARDAN INKE HAME SHOMARE ADAD AST YA NA :
    if(check_is_number_or_not(phone_number) == 1)
    {
        setTextColor(RED);
        printf(" *** EROR . VOROODI SAHIH NIST . LOTFAN FAGHAT ADAD VARED KONID ...\n");
        sabtnam_receive_phonenumber(phone_number);
    }
}
void sabtnam_receive_email(char email[35])
{
    setTextColor(GREEN);
    printf(" >> LOTFAN 'EAMIL' KHODRA VARED KONID : ");
    gets(email);
    int help = 0 ;
    for(int i = 0 ; i < 30 ; i++ )
    {
        if(email[i] == '@')
            help++;
    }
    if(help == 0 )
    {
        setTextColor(RED);
        printf(" *** EMAIL SAHIH VARED NASHODE ... ");
        sabtnam_receive_email(email);
    }
}
void sabtnam_receive_password(char password[50])
{
    setTextColor(YELLOW);
    printf(" >> LOTFAN 'PASSWORD' KHODRA VARED KONID : ");
    int i ;
    char ch ;
    // KOD HAYE ZIR BARAYE IN AST KE BE JAYE PASSWORD VOROODI KARBAR SETARE BAR ROOYE SAFHE CHAP SHAVAD .
    for(i = 0 ; i < 100 ; i++ )
    {
        ch = getch();
        if( ch == 13 )
            break;
        password[i] = ch ;
        printf("*");
    }
    password[i] = '\0';
    printf("\n");
    // AGHR TEDAD ARGHAM RAMZ AZ 10 TA KAMTAR BASHAD KOD ZIR EJRA MISHE .
    if(strlen(password) <= 10 )
    {
        setTextColor(RED);
        printf(" *** EOROR . PASSWORD AZ 10 RAGHAM KAMTAR AST ...\n");
        sabtnam_receive_password(password);
    }
}
void check_password1and2( char password[50] , char password2[50])
{
    if( strcmp(password2 , password ) != 0 )
    {
        setTextColor(RED);
        printf(" *** password HA YEKSAN NISTAND . \n");
        printf(" >>> LOTFAN PASSWORD DOVOM RA DOBARE VARED KONID : ");
        sabtnam_receive_password(password2);
        check_password1and2(password, password2);
    }
}
void sabtnam_save_information_of_user(char save[100])
{
    FILE *information_of_users ;
    information_of_users = fopen("information_of_users.txt" , "a+");
    if (information_of_users == NULL)
    {
        setTextColor(RED);
        printf("*** EROR , MOSHKEL DAR BAZ SHODAN FILE .");
        Sleep(3000);
        exit(1);
    }
    else
    {
        fputs(save , information_of_users );
        fputc(10 , information_of_users);
        fclose(information_of_users);
    }
}
//-------------------------------------------------------------------------------
//FUNCTION HAYE BAKHSH VOROOD KARBAR :
// YEK STRUCT GLOBAL TARIF MIKONIM KE ETELAAT KARBAR RA NEQAH DARIM .
struct user_logined
{
    char username[30];
    char name[20];
    char famili[20];
    char melli_number[25];
    char phone_number[25];
    char email[35];
    char password[50];
}user_logined;
void login_receive_username(char username[30])
{
    getchar();
    setTextColor(YELLOW);
    printf(" >> LOTFAN 'NAM KARBARI' KHODRA VARED KONID :");
    gets(username);
}
void login_receive_password(char password[50])
{
    setTextColor(GREEN);
    printf(" >> LOTFAN 'PASSWORD' KHODRA VARED KONID : ");
    int i ;
    char ch ;
    // KOD HAYE ZIR BARAYE IN AST KE BE JAYE PASSWORD VOROODI KARBAR SETARE BAR ROOYE SAFHE CHAP SHAVAD .
    for(i = 0 ; i < 100 ; i++ )
    {
        ch = getch();
        if( ch == 13 )
            break;
        password[i] = ch ;
        printf("*");
    }
    password[i] = '\0';
    printf("\n");
}
void login_check_username_password(char username[30] , char password[50])
{
    FILE *information_of_users ;
    information_of_users = fopen("information_of_users.txt" , "r");
    if (information_of_users == NULL)
    {
        setTextColor(RED);
        printf("*** EROR , MOSHKEL DAR BAZ SHODAN FILE .");
        Sleep(3000);
        exit(1);
    }
    else
    {
        char username_in_file[30] , out[30] ;
        int help = 0 ;
        // BE AKHAR USERNAME VA PASSWORD \n MICHASBANIM ZIRA DAR FILE BE INSOORAT ZAKHIRE KARDIM .
        strcat(username , "\n");
        strcat(password , "\n");
        while(feof(information_of_users ) == 0 )
        {
            fgets(username_in_file , 30 , information_of_users );
            // AGHAR NAM KARBARI MOJOOD BASHAD VARED BAKHSH ZIR MISHAVAD .
            if(strcmp(username , username_in_file) == 0)
            {
                help++ ;
                // HELP RA AVARDIM VA ++ KARDIM ZIRA AQAR KE NAM KARBARI PEIDA NASHOD HELP SEFR MANDE VA BEFAHMIM KE NIST .
                // HALA USERNAME RA DAR STRUCT ZAKHIRE MIKONIM .
                strcpy(user_logined.username , username_in_file);
                login_check_password(password , information_of_users);
                break ;
            }
            // HALGHE ZIR MAKHONE VA MIRIZE BIROON .
            for(int i = 0 ; i < 6 ; i++ )
                fgets(out , 30 , information_of_users );
        }
        fclose(information_of_users);
        //AGHAR NAM KARBARI PEIDA NASHOD ZIR EJRA MI SHAVAD .
        if(help == 0 )
        {
            setTextColor(RED);
            printf("*** NAM KARBARI PEIDA NASHOD .\n");
            //HALA BAZ BE BAKHSH ENTEKHAB QESMAT BARNAME BARMIGARDIM :
            select_main_option();
        }
    }
}
void login_check_password(char password[50] , FILE *information_of_users)
{
    char out[30] , password_in_file[50] ;
    //HALA ETELAAT KARBAR RA DAR STRUCT MOORED NAZAR MIRIZIM .
    fgets(user_logined.name , 20 , information_of_users);
    fgets(user_logined.famili , 20 , information_of_users);
    fgets(user_logined.melli_number , 25 , information_of_users);
    fgets(user_logined.phone_number , 25 , information_of_users);
    fgets(user_logined.email , 35 , information_of_users);
    fgets(password_in_file , 50 , information_of_users);
    // HALA PASSWORD RO CHECK MIKONIM .
    if(strcmp(password , password_in_file) == 0)
    {
        setTextColor(GREEN);
        printf(" *** NAME KARBARI VA RAMZ SAHIH AST , KHOSH AMADID \n");
        save_date_activity_users();
        Sleep(3000);
        system("cls");
        fclose(information_of_users);
        select_main_option_after_login();
    }
    else
    {
        setTextColor(RED);
        printf(" **PASSWORD SAHIH NIST .\n");
        select_main_option();
    }
}
void save_date_activity_users(void)
{
    FILE *lates_activity_users ;
    lates_activity_users = fopen("lates_activity_users.txt" , "a+" );
    if(lates_activity_users == NULL )
    {
        setTextColor(RED);
        printf("*** EROR . FILE BAZ NASHOD ... ");
        Sleep(3000);
        exit(1);
    }
    else
    {
        struct date
        {
            char date_time[20];
            int year ;
            int month ;
            int day ;
            int hours ;
            int min ;
            int sec ;
        }time1;
        // FUNCTION ZIR TARIKH VA SAAT RA BE MA MIDAHAD :
        product_changes_date(time1.date_time, time1.year, time1.month, time1.day, time1.hours, time1.min , time1.sec);
        strcat(time1.date_time , "\n");
        fputs(user_logined.username , lates_activity_users );
        fputs( time1.date_time , lates_activity_users );
        fclose(lates_activity_users);
    }
}
//-----------------------------------------------------------------------------------
//FUNCTION BAKHSH KHOROOJ AZ BARNAME :
void Poll(void)
{
    setTextColor(AQUA);
    printf(" >> LOTFAN BE BARNAME AZ 1 TA 5 EMTIAZ DAHID : ");
    int score ;
    scanf("%d" , &score );
    switch(score)
    {
        case 1 : printf(" MA MOTAASEFIM VA DAR JAHAT BEHTAR SHODAN BARNAME TALASH MIKONIM .\n");
            break ;
        case 2 : printf(" MA MOTAASEFIM VA DAR JAHAT BEHTAR SHODAN BARNAME TALASH MIKONIM .\n");
            break ;
        case 3 : printf(" MA DAR JAHAT PISHRAFT BARNAME TALASH MIKONIM  .\n");
            break ;
        case 4 : printf(" MA AZ REZAYAT SHOMA KHOSHHALIM :)\n");
            break ;
        case 5 : printf(" MA AZ REZAYAT SHOMA KHOSHHALIM :)\n");
            break ;
    }
}
//---------------------------------------------------------------------------
//FUNCTION HAYE MENU ASLI BARNAME :
//FUNCTION BAKHSH ENTEKHAB AZ MENU:
void  select_main_option_after_login(void)
{
    setTextColor(WHITE);
    puts(" ---- BE MENU ASLI BARNAME KHOSH AMADID ---- ");
    puts(" >LOTFAN YEKI AZ QOZINE HAYE ZIR RA ENTEKHAB KONID :");
    setTextColor(LIGHT_BLUE);
    puts(" 1. SABT KALAYE JADID ");
    setTextColor(LIGHT_YELLOW);
    puts(" 2. SABT VOROOD KALA BE ANBAR ");
    setTextColor(LIGHT_GREEN);
    puts(" 3. SABT KHOROOJ KALA AZ ANBAR ");
    setTextColor(AQUA);
    puts(" 4. QOZARESH QIRI ");
    setTextColor(LIGHT_PURPLE);
    puts(" 5. TANZIMAT HESAB KARBARI ");
    setTextColor(LIGHT_WHITE);
    puts(" 6. KHOROOJ AZ HESAB KARBARI ");
    setTextColor(LIGHT_RED);
    puts(" 7. KHOROOJ AZ BARNAME ");
    int select_option ;
    setTextColor(LIGHT_WHITE);
    printf(" >>> ");
    scanf("%d" , &select_option);
    while(1)
    {
        if(select_option == 1)
        {
            //VOROOD BE IN BAKHSH FAGHAT BARAYE ADMIN MOJAZ AST PAS BA KOD HAYE ZIR CHECK MIKONIM ADMIN HAST YA NA .
            if(strcmp(user_logined.username , "admin\n") == 0)
            {
                system("cls");
                register_new_product();
                setTextColor(LIGHT_GREEN);
                printf(" ***MAHSOOL ZAKHIRE SHOD ...");
                Sleep(3000);
                system("cls");
                select_main_option_after_login();
            }
            else
            {
                setTextColor(RED);
                printf(" ***VOROOD BE IN SAFHE FAGHAT BARAYE ADMIN MOJAZ AST.\n");
                printf("    SHOMA MOJAZ BE VOROOD NISTID .");
                Sleep(3000);
                system("cls");
                select_main_option_after_login();
            }
            break;
        }
        if(select_option == 2)
        {
            system("cls");
            product_changes(1);
            break;
        }
        if(select_option == 3)
        {
            system("cls");
            product_changes(2);
            break;
        }
        if(select_option == 4)
        {
            system("cls");
            select_option_of_report();
            break;
        }
        if(select_option == 5)
        {
            system("cls");
            Account_settings();
            break;
        }
        if(select_option == 6)
        {
            system("cls");
            select_main_option();
            break;
        }
        if(select_option == 7)
        {
            khorooj_az_barname();
            break;
        }
        else
        {
            getchar();
            setTextColor(RED);
            printf("\n ***ADAD VARED SHODE SAHIH NEMIBASHAD \n");
            printf("   >> LOTFAN ADAD MORED NAZAR KHODRA DOBARE VARED KONID : ");
            scanf("%d" , &select_option);
        }
    }
}
//-----------------------------------------------------------------------------------------------------------------------
//FUNCTION BAKHSH SABT KALAYE JADID :
void register_new_product(void)
{
    setTextColor(WHITE);
    printf(" ---- BE BAKHSH SABT KALAYE JADID KHOSH AMADID ----\n");
    struct prodoct
    {
        char id_product[20];
        char name_product[20];
        char brand_product[20];
        char model_product[20];
        char price_product[20];
        char number_product[20];
        char information_product[150];
    }new_product;
    //id ra daryaft mikonim :
    register_new_product_receive_id(new_product.id_product);
    //DARYFT NAME , BRAND , MODEL , PRICE , NUMBER , ADDITIONAL INFORMATION  :
    register_new_product_receive_information_product(new_product.name_product , new_product.brand_product , new_product.model_product );
    register_new_product_receive_price_product(new_product.price_product);
    register_new_product_receive_number_product(new_product.number_product);
    register_new_product_receive_additional(new_product.information_product);
    // HALA TAK TAK ETELAAT RA DAR FILE PRODUCTS SAVE MIKONIM :
    register_new_product_save_information(new_product.id_product);
    register_new_product_save_information(new_product.name_product);
    register_new_product_save_information(new_product.brand_product);
    register_new_product_save_information(new_product.model_product);
    register_new_product_save_information(new_product.price_product);
    register_new_product_save_information(new_product.number_product);
    register_new_product_save_information(new_product.information_product);
 }
 void register_new_product_receive_id(char id_product[20])
 {
    //KOD ZIR STRING SHANSI VA MOKHTALEF TOLID MIKONAD VA BA IN KAR SYSTEM BE SOORAT KHODKAR BE MAHSOOLAT ID MIDAHAD .
    // ID HA 10 RAGHAMI HASTAND .
    id_product[10] = '\0';
	srand((unsigned int)(time(NULL)));
	int index = 0;
    // HAME CARACTER HARA INJA MIZARIM TA SYSTEM BAR ASAS ADAD SHANSI YEKI AZ CARACTER HARA BARDARAD :
	char char1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	for(index = 0; index < 10; index++)
	{
        id_product[index] = char1[rand() % (sizeof char1 - 1)];
	}
 }
 void register_new_product_receive_information_product(char name_product[20] , char brand_product[20] , char model_product[20])
 {
    getchar();
    setTextColor(BLUE);
    printf(" >> LOTFAN 'NAM' MAHSOOL RA VARED KONID : ");
    gets(name_product);
    setTextColor(LIGHT_BLUE);
    printf(" >> LOTFAN 'BRAND' MAHSOOL RA VARED KONID : ");
    gets(brand_product);
    setTextColor(BLUE);
    printf(" >> LOTFAN 'MODEL' MAHSOOL RA VARED KONID : ");
    gets(model_product);
 }
 void register_new_product_receive_price_product(char price_product[20])
 {
    setTextColor(LIGHT_BLUE);
    printf(" >> LOTFAN 'QEYMAT' MAHSOOL RA VARED KONID : ");
    gets(price_product);
    //GHEYMAT HATMAN BAYAD YEK ADAD BASHAD PAS BA FUNCTION ZIR CHECK MIKONIM KE HATMAN ADAD BASHAD :
    if(check_is_number_or_not(price_product) == 1 )
    {
        setTextColor(RED);
        printf(" *** EROR . VOROODI SAHIH NIST . LOTFAN FAGHAT ADAD VARED KONID ...\n");
        register_new_product_receive_price_product(price_product);
    }
 }
 void register_new_product_receive_number_product(char number_product[20])
 {
    setTextColor(BLUE);
    printf(" >> LOTFAN 'TEDAD' MAHSOOL RA VARED KONID : ");
    gets(number_product);
    // TEDAD HATMAN BAYAD YEK ADAD BASHAD PAS BA TABE ZIR CHECK MIKONIM :
    if(check_is_number_or_not(number_product) == 1 )
    {
        setTextColor(RED);
        printf(" *** EROR . VOROODI SAHIH NIST . LOTFAN FAGHAT ADAD VARED KONID ...\n");
        register_new_product_receive_price_product(number_product);
    }
 }
 void register_new_product_receive_additional(char information_product[150])
 {
    setTextColor(LIGHT_BLUE);
    printf(" >LOTFAN 'ETELAAT EZAFI' MAHSOOL RA VARED KONID : ");
    gets(information_product);
 }
 // BA TABE ZIR ETELAAT DARYAFTI RA DAR FILE MAHSOOLAT ZAKHIRE MIKONIM :
 void register_new_product_save_information(char save[150])
 {
    FILE *products ;
    products = fopen("products.txt" , "a+");
    if(products == NULL)
    {
        setTextColor(RED);
        printf(" ***ERORO , MOSHKEL DAR BAZ SHODAN FILE ... ");
        exit(1);
    }
    else
    {
        fputs(save , products );
        fputc(10 , products);
        fclose(products);
    }
 }
 //----------------------------------------------------------------------------------------------------------------------------
 //FUNCTION HAYE BAKHSH VOROOD VA KHOROOJ KALA  AZ ANBAR :
 // DALIL INKE BEHESH YE int number DADAM IN BOOD KE BEFAHMAM VOROOD KALA AST YA KHOROOJ KALA . AQAR VOROOD BASHAD 1 , AQA KHOROOJ BASHAD 2 MIQIRAD .
 // STRUCT HAYE DATE VA CHANGE_PRODUCT RO GLOBAL MIKONIM ZIRA DAR BAKHSH QOZARESH QIRI VA LIST PEIVANDI BE ANHA NIAZ DARIM .
 // STRUCT VA POINTER RA GLOBAL TARIF MIKONIM KE DAR HAME TABE HAYE QOZARESH DAR DASTRES BASHAND :
 struct linklist_change_product
{
    char id_product[20];
    char type[20];
    char number_product[11];
    char date_time[50];
    char user[20];
    struct linklist_change_product *link ;
};
struct linklist_change_product *start ;
 void product_changes(int number)
 {
    if(number == 1 )
    {
        setTextColor(WHITE);
        printf(" ---- BE BAKHSH SABT VOROOD KALA KHOSH AMADID ----\n");
    }
    else
    {
        setTextColor(WHITE);
        printf(" ---- BE BAKHSH SABT KHOROOJ KALA KHOSH AMADID ----\n");
    }
    // STRUCT ZIR BARAYE DATE AND TIME HAST KE BAD ESTEFADE MISHE :
    struct date
    {
        int year ;
        int month ;
        int day ;
        int hours ;
        int min ;
        int sec ;
    };
    //STRUCT ZIR BARAYE TARAKONESH HA HAST KE BAD ESTEFADE MISHE :
    struct change_product
    {
        char id_product[20];
        char type[20];
        char number_product[11];
        struct date now ;
        char date_time[50];
        //USER : KARBARI KE TARAKONESH RA SABT KARDE :
        char user[20];
    }change_product;
    //STRCPY BARAYE IN AST KE KARBAR SABT KONANDE TARAKONESH SABT SHAVAD .
    strcpy(change_product.user , user_logined.username);
    //TABE ZIR ID KALAYI KE VARED YA KHAREJ SHODE RA PEIDA MIKONAD :
    product_changes_search_id_product(change_product.id_product);
    //TABE ZIR VOROOD YA KHOROOJ RA MALOOOM MIKONAD :
    product_changes_type( number , change_product.type );
    // TABE ZIR TEDAD KALAYE VARED YA KHAREJ SHODE RA NESHAN MIDAHAD :
    product_changes_number_product(change_product.number_product , change_product.type , change_product.id_product );
    // TABE ZIR ZAMAN RA MIDAHAD :
    product_changes_date(change_product.date_time , change_product.now.year , change_product.now.month , change_product.now.day , change_product.now.hours , change_product.now.min , change_product.now.sec);
    //HALA ETELAAT RA SAVE MIKONIM DAR FILE .
    product_changes_save(change_product.id_product);
    product_changes_save(change_product.type);
    product_changes_save(change_product.number_product);
    product_changes_save(change_product.date_time);
    product_changes_save(change_product.user);
    setTextColor(LIGHT_GREEN);
    printf(" *** ETELAAT ZAKHIRE SHOD ... ");
    Sleep(2000);
    system("cls");
    select_main_option_after_login();
 }
 //FUNCTION PEIDA KARDAN ID KALA :
void product_changes_search_id_product(char id_product[20])
{
    getchar();
    char name_of_product[20] , brand_of_product[20] , model_of_product[20] , name_in_file[20] , brand_in_file[20] , model_in_file[20] , out[150] , id_product_help[20];
    // TABE ZIR BARAYE QEREFTAN NAM KALA AST :
    search_id_search_name_product(name_of_product);
    // TABE ZIR BARAYE QEREFTAN BRAND KALA AST :
    search_id_search_brand_product(brand_of_product);
    // TABE ZIR BARAYE QEREFTAN MODEL KALA AST :
    search_id_search_model_product(model_of_product);
    // BE HAME \n EZAFE MIKONIM ZIRA DAR FILE INTOR ZAKHIRE SHODE VA DAR STRCMP() BAYAD REAYAT KONIM .
    strcat(name_of_product , "\n");
    strcat(brand_of_product , "\n");
    strcat(model_of_product , "\n");
    FILE *products ;
    products = fopen("products.txt" , "r" );
    while( feof(products) == 0 )
    {
        fgets(id_product_help , 20 , products );
        fgets(name_in_file , 20 , products );
        fgets(brand_in_file , 20 , products );
        fgets(model_in_file , 20 , products );
        for(int i = 0 ; i < 3 ; i++ )
            fgets(out , 150 , products );
        if(strcmp(name_of_product , name_in_file ) == 0 && strcmp(brand_of_product , brand_in_file) == 0 && strcmp(model_of_product , model_in_file) == 0 )
        {
            strcpy(id_product , id_product_help);
                break ;
        }
    }
    // ID KALA NABAYAD AKHARASH \n BASHAD PAS ANRA HAZF MIKONIM :
    for( int i = 0 ; i <= strlen(id_product) ; i++ )
    {
        if( id_product[i] == '\n' )
            id_product[i] = '\0';
    }
    // AQAR ID PEODUCT MEGHDARDEHI NASHOD BAKHSH ZIR EJRA MISHE :
    if(strlen(id_product) < 10 )
    {
        setTextColor(RED);
        printf(" *** KALA MOJOOD NIST ... \n");
        printf("\n 0. BAZGASHT BE MENU ASLI ");
        printf("\n 1. EDAME \n");
        printf(" >> ENTEKHAB KONID : ");
        int number ;
        scanf("%d" , &number );
        while(1)
        {
            if(number == 0)
            {
                system("cls");
                select_main_option_after_login();
                break ;
            }
            if(number == 1)
            {
                system("cls");
                product_changes_search_id_product(id_product);
                break ;
            }
            else
            {
                setTextColor(RED);
                printf(" *** EROR . ADAD VARED SHODE SAHIH NIST \n");
                scanf("%d" , &number );
            }
        }
    }
}
// FUNCTION ZIR BARAYE YAFTAN NAM KALA AST :
// EBTEDA NAM HAME KALA HARA NESHAN DADE VA BAD NAM KALA RA MIGIRAD :
void search_id_search_name_product(char name_of_product[20])
{
    setTextColor(LIGHT_GREEN);
    printf(" ---- LIST NAM KOL KALAHA ----\n");
    char out[150];
    system("cls");
    FILE *products ;
    products = fopen("products.txt" , "r" );
    fgets(out , 150 , products );
    while(feof(products) == 0 )
    {
        fgets(out , 150 , products );
        puts(out);
        for(int i = 0 ; i < 6 ; i++ )
            fgets(out , 150 , products );
    }
    setTextColor(LIGHT_WHITE);
    fclose(products);
    printf(" >>> LOTFAN 'NAM' KALA RA VARED KONID : ");
    gets(name_of_product);
}
//FUNCTION ZIR BARAYE YAFTAN BRAND KALA AST :
void search_id_search_brand_product(char brand_of_product[20])
{
    setTextColor(YELLOW);
    printf(" ---- LIST BRAND HAYE KOL KALAHA ----\n");
    char out[150];
    system("cls");
    FILE *products ;
    products = fopen("products.txt" , "r" );
    fgets(out , 150 , products );
    fgets(out , 150 , products );
    while(feof(products) == 0 )
    {
        fgets(out , 150 , products );
        puts(out);
        for(int i = 0 ; i < 6 ; i++ )
            fgets(out , 150 , products );
    }
    fclose(products);
    setTextColor(LIGHT_WHITE);
    printf(" >>> LOTFAN 'BRAND' KALA RA VARED KONID : ");
    gets(brand_of_product);
}
//FUNCTION ZIR BARAYE YAFTAN MODEL KALA AST :
void search_id_search_model_product(char model_of_product[20])
{
    setTextColor(LIGHT_AQUA);
    printf(" ---- LIST MODEL HAYE KOL KALAHA ----\n");
    char out[150];
    system("cls");
    FILE *products ;
    products = fopen("products.txt" , "r" );
    fgets(out , 150 , products );
    fgets(out , 150 , products );
    fgets(out , 150 , products );
    while(feof(products) == 0 )
    {
        fgets(out , 150 , products );
        puts(out);
        for(int i = 0 ; i < 6 ; i++ )
            fgets(out , 150 , products );
    }
    fclose(products);
    setTextColor(LIGHT_WHITE);
    printf(" >>> LOTFAN 'MODEL' KALA RA VARED KONID : ");
    gets(model_of_product);
}
//FUNCTION TYPE TARAKONESH , VOROOD KALA YA KHOROOJ AN :
void product_changes_type( int number , char type[20] )
{
    // number ADADI AST KE EBTEDA DAR HANGAM VARED SHODAN BE BAKHSH VOROOD KHOROOJ MEGHDARDEHI KARDIM .
   if( number==1 )
        strcpy(type , "import");
   else
        strcpy(type , "export");
}
//FUNCTION TEDAD KALAYE VARED YA KHAREJ SHODE :
void product_changes_number_product(char number_product[20] , char type[20] , char id_prodcut[20] )
{
    char out[150] , id_product2[20] ;
    setTextColor(YELLOW);
    printf(" >> LOTFAN 'TEDAD' KALA RA VARED KONID : ");
    gets(number_product);
    // CHECK INKE KARBAR ADAD VARED KARDE YA CARACTER ESHTEBAH HAM VARED KARDE :
    if(check_is_number_or_not(number_product) == 1 )
    {
        setTextColor(RED);
        printf(" *** EROR . VOROODI SAHIH NIST . LOTFAN FAGHAT ADAD VARED KONID ...\n");
        product_changes_number_product(number_product , type , id_prodcut );
    }
    strcpy(id_product2 , id_prodcut);
    strcat(id_product2 , "\n");
    int number_in_storage ;
    //KOD HAYE ZIR BARAYE CHECK KADRAND IN AST KE AQAR KARBAR BARAYE KHOROOJ TEDAD BISHTAR AZ TEDAD MOJOOD DAR ANBAR VARED KARD EROR BEDE VA DOBARE ADAD BEQIRE :
    if(strcmp(type , "export" ) == 0 )
    {
        FILE *products ;
        products = fopen("products.txt" , "r" );
        if(products == NULL )
        {
            setTextColor(RED);
            printf(" *** EROR . FILE BAZ NASHOD ... ");
            Sleep(3000);
            exit(1);
        }
        while( feof(products) == 0 )
        {
            fgets( out , 20 , products );
            if( strcmp( id_product2 , out ) == 0 )
            {
                for(int i = 0 ; i < 4 ; i ++ )
                    fgets( out , 150 , products );
                fgets( out , 20 , products );
                linklist_changes();
                number_in_storage = numebr_of_any_product(id_prodcut , out );
                free(start);
                break ;
            }
        }
        int number_intrance ;
        number_intrance = atoi( number_product );
        // AQAR ADAD VOROODI BISHTAR AZ MEGHDAR MOJOOD DAR ANBAR BASHAD KOD ZIR EJRA MOISHE :
        if( number_in_storage < number_intrance )
        {
            setTextColor(RED);
            printf(" *** TEDAD VOROODI BISHTAR AZ TEDAD KALA MOJOOD DAR ANBAR AST . \n");
            product_changes_number_product( number_product , type , id_prodcut );
        }
        fclose(products);
    }
}
//FUNCTION TARIKH TARAKONESH :
void product_changes_date(char date_time[50],int year , int month , int day , int hours , int min , int sec)
{
    //DAR FUNCTION ZIR TARIKH VA SAAT DAR FILE ZAKHIRE MISHAVAD VA AZ TABE HA KOMAK MIGIRAD ...
    struct tm *time_now ;
    time_t ti;
    ti = time(NULL);
    time_now = localtime(&ti);
    year = time_now->tm_year + 1900 ;
    month = time_now->tm_mon + 1 ;
    day = time_now->tm_mday ;
    hours = time_now->tm_hour ;
    min = time_now->tm_min ;
    sec = time_now->tm_sec ;
    sprintf(date_time , "%d/%d/%d|%d:%d:%d" , day , month , year , hours , min , sec );
}
//FUNCTION ZAKHIRE ETELAAT TARAKONESH HA DAR FILE :
void product_changes_save(char save[100])
{
    FILE *changes ;
    changes = fopen("changes.txt" , "a+");
    if (changes == NULL)
    {
        setTextColor(RED);
        printf("*** EROR , MOSHKEL DAR BAZ SHODAN FILE .");
        Sleep(3000);
        exit(1);
    }
    else
    {
        fputs(save , changes );
        fputc(10 , changes);
        fclose(changes);
    }
}
//--------------------------------------------------------------------------------
//FUNCTION HAYE BAKHSH REPORT VA QOZAREESH HA :
// LINK LIST RA DOROST MIKONIM :
// FUNCTION ENTEKHAB QOZINE ASLI QOZARESH :
void select_option_of_report(void)
{
    setTextColor(WHITE);
    printf(" ---- BE BAKHSH QOZARESH QIRI KHOSH AMADID ----\n");
    setTextColor(LIGHT_AQUA);
    printf("  0. BAZQASHT BE MENU ASLI \n");
    setTextColor(YELLOW);
    printf("  1. TEDAD MOJOOD AZ HAR KALA DAR ANBAR \n");
    setTextColor(GREEN);
    printf("  2. KALA HAYE BISHTAR AZ ADAD VOROODI\n");
    setTextColor(LIGHT_AQUA);
    printf("  3. KALA HAYE KAMTAR AZ ADAD VOROODI\n");
    setTextColor(YELLOW);
    printf("  4. ARZESH KOL KALA HAYE ANBAR \n");
    setTextColor(GREEN);
    printf("  5. ARZESH KALAYE VOROODI \n");
    setTextColor(LIGHT_AQUA);
    printf("  6. TEDAD VOROOD KALA DAR TARIKH VOROODI\n");
    setTextColor(YELLOW);
    printf("  7. TEDAD KHOROOJ KALA DAR TARIKH VOROODI\n");
    setTextColor(GREEN);
    printf("  8. ETELAAT VOROOD VA KHOROOJ KALA DAR TARIKH VOROODI \n");
    setTextColor(LIGHT_AQUA);
    printf("  9. LIST TARAKONESH HAYE SABT SHODE TAVASOT KARBAR \n");
    setTextColor(YELLOW);
    printf(" 10. ZAMAN AKHARIN VOROOD KARBARAN \n");
    setTextColor(GREEN);
    printf(" 11. KALA BA KAMTARIN TEDAD \n");
    setTextColor(LIGHT_AQUA);
    printf(" 12. KALA BA BISHTARIN TEDAD \n");
    setTextColor(LIGHT_WHITE);
    printf(" >>LOTFAN YEKI AZ QOZINE HAYE ZIR RA ENTEKHAB KONID : ");
    int number ;
    scanf("%d" , &number);
    //while RA BA 1 GHARAR DADAN BINAHAYAT MIKONIM .
    while(1)
    {
        if(number == 0)
        {
            system("cls");
            select_main_option_after_login();
            break;
        }
        if(number == 1)
        {
            system("cls");
            report1_number_of_any_product();
            break;
        }
        if(number == 2)
        {
            system("cls");
            report2_number_above_entrance();
            break;
        }
        if(number == 3)
        {
            system("cls");
            report3_number_less_entrance();
            break;
        }
        if(number == 4)
        {
            system("cls");
            report4_price_of_all_products();
            break;
        }
        if( number == 5)
        {
            system("cls");
            report5_price_of_any_product();
            break;
        }
        if( number == 6)
        {
            system("cls");
            report6_number_import_in_date_intrance();
            break;
        }
        if( number == 7)
        {
            system("cls");
            report7_number_export_in_date_intrance();
            break;
        }
        if( number == 8)
        {
            system("cls");
            report8_import_export_at_intrance_time();
            break;
        }
        // DO BAKHSH ZIR FAGHAT BARAYE ADMIN MOJAZ AST PAS CHECK MIKONIM :
        if(number == 9)
        {
            if(strcmp(user_logined.username , "admin\n") == 0)
            {
                system("cls");
                report9_registered_by_user();
            }
            else
            {
                setTextColor(RED);
                system("cls");
                printf(" ***VOROOD BE IN SAFHE FAGHAT BARAYE ADMIN MOJAZ AST.\n");
                printf("    SHOMA MOJAZ BE VOROOD NISTID .");
                printf(" >> LOTFAN KELIDI RA BARAYE BARQASHT FESHAR DAHID : \n");
                getch();
                system("cls");
                select_option_of_report();
            }
            break;
        }
        if(number == 10)
        {
            if(strcmp(user_logined.username , "admin\n") == 0)
            {
                system("cls");
                report10_time_users_activity();
            }
            else
            {
                setTextColor(RED);
                system("cls");
                printf(" ***VOROOD BE IN SAFHE FAGHAT BARAYE ADMIN MOJAZ AST.\n");
                printf("    SHOMA MOJAZ BE VOROOD NISTID .\n");
                printf(" >> LOTFAN KELIDI RA BARAYE BARQASHT FESHAR DAHID : \n");
                getch();
                system("cls");
                select_option_of_report();
            }
            break;
        }
        if( number == 11)
        {
            system("cls");
            report11_lowest_product();
            break;
        }
        if( number == 12)
        {
            system("cls");
            report12_most_product();
            break;
        }
        else
        {
            setTextColor(RED);
            getchar();
            printf(" *** ADAD VARED SHODE SAHIH NIST . LOTFAN DOBARE VARED KONID : ");
            scanf("%d" , &number );
        }
    }
}
// TABE AVARDAN HAME TARAKONESH HA DAR LINKLIST :
void linklist_changes(void)
{
    FILE *changes ;
    changes = fopen("changes.txt" , "r");
    if(changes == NULL )
    {
        setTextColor(RED);
        printf(" *** EROR , FILE BAZ NASHOD ... ");
        Sleep(3000);
        exit(1);
    }
    // start SHOROOE LINK LIST HAST VA HELPING HAME TARAKONESH HARA BE START LINK MIKONAD .
    struct linklist_change_product *helping1 , *helping2 ;
    helping1 = malloc(sizeof(struct linklist_change_product));
    start = malloc(sizeof(struct linklist_change_product));
    char out[20];
    fgets(out , 20 , changes);
    fgets(start->id_product , 20 , changes );
    fgets(start->type , 20 , changes );
    fgets(start->number_product , 11 , changes );
    fgets(start->date_time , 50 , changes );
    fgets(start->user , 20 , changes );
    start->link = helping1 ;
    helping1->link = NULL ;
    while( feof(changes) == 0 )
    {
        helping2 = malloc(sizeof(struct linklist_change_product));
        fgets(out , 20 , changes);
        fgets(helping2->id_product , 20 , changes );
        fgets(helping2->type , 20 , changes );
        fgets(helping2->number_product , 11 , changes );
        fgets(helping2->date_time , 50 , changes );
        fgets(helping2->user , 20 , changes );
        start->link = helping2 ;
        helping2->link = helping1 ;
        helping1 = helping2 ;
    }
    fclose(changes);
}
//-------------------------------------------------------------------------------------------------------
//FUNCTION QOZARESH 1 :
void report1_number_of_any_product(void)
{
    setTextColor(YELLOW);
    printf(" ---- BE QOZARESH 1 KHOSH AMADID ----\n");
    setTextColor(GREEN);
    printf(" >> DAR IN QOZARESH TEDAD HAR KALA RA DAR ANBAR MOSHAHEDE MIKONID : \n");
    linklist_changes();
    FILE *products ;
    products = fopen("products.txt" , "r");
    char name_product[20] , brand_product[20] , model_product[20] ,number_product[20],id_product[20] , out[150];
    int numebr_of_product;
    setTextColor(YELLOW);
    while(feof(products) == 0)
    {
        fgets(id_product , 20 , products );
        fgets(name_product , 20 , products );
        fgets(brand_product , 20 , products);
        fgets(model_product , 20 , products);
        fgets(out , 20 , products);
        fgets(number_product , 20 , products);
        fgets(out , 150 , products);
        // number_of_any_product : TEDAD HAR KALA RA BA MOHASEBE KAMEL PEIDA MIKONAD VA BARMIQARDANAD :
        numebr_of_product = numebr_of_any_product(id_product , number_product);
        printf("  ___\n |NAM : %s |BRAND : %s |MODEL : %s >>TEDAD: %d\n\n" , name_product , brand_product , model_product , numebr_of_product);
    }
    free(start);
    setTextColor(WHITE);
    printf(" >> LOTFAN KELIDI RA BARAYE BARQASHT FESHAR DAHID : \n");
    getch();
    system("cls");
    select_option_of_report();
}
/*TABE ZIR BA QEREFTAN id_product(ID MAHSOOL ) VA number_product(TEDAD AVALIE MAHSOOL KE DAR TARIF KARDAN AVALIE KALA VARED KARDIM )
 VA BA QEREFATN TEDAD HA AZ TARAKONESH HA TEDAD KALAYE MOJOOD DAR ANBAR RA HESAB MIKONAD : */
int numebr_of_any_product(char id_product[20] , char number_product[20])
{
    struct linklist_change_product *help ;
    help = start ;
    int number = atoi(number_product);
    do
    {
        if(strcmp(help->id_product , id_product) == 0 )
        {
            int number1 = atoi(help->number_product);
            if(strcmp(help->type , "export\n") == 0 )
            {
                number1 *= -1 ;
            }
            number = number + number1 ;
        }
        help = help->link ;
    }while(help->link != NULL );
    return number ;
}
//------------------------------------------------------------------------------------------------------
// FUNCTION HAYE BAKHSH QOZARESH 2 : KALAHAYI KE AZ ADAD VARED SHODE BISHTAR AZASHOON DARIM :
// number_entrance = TEDAD KALAYI KE KARBAR MIKHAHAD BEDANAD AZ AN BISHTAR DARIM MESL 100 YA 50 .
void report2_number_above_entrance(void)
{
    setTextColor(WHITE);
    printf(" ---- BE QOZARESH 2 KHOSH AMADID ---- \n");
    setTextColor(YELLOW);
    printf(" >> DAR IN QOZARESH KALAHAYI KE TEDAD ANHA AZ ADAD VOROODI SHOMA BISHTAR AST NESHAN DADE MISHAVAD .\n");
    setTextColor(GREEN);
    printf(" >> LOTFAN ADAD MORED NAZAR KHODRA VARED KONID : ");
    // ADAD VOROODI KARBAR :
    int number_entrance ;
    scanf("%d" , &number_entrance);
    linklist_changes();
    FILE *products ;
    products = fopen("products.txt" , "r");
    char name_product[20] , brand_product[20] , model_product[20] ,number_product[20],id_product[20] , out[150];
    int numebr_of_product , help = 0 ;
    // help : BARAYE IN AST KE AQAR KALAYI BISHTAR AZ ADAD VOROODI NADASHT ++ NASHE VA BAD BEDAIM KALAYI NIST .
    while(feof(products) == 0)
    {
        fgets(id_product , 20 , products );
        fgets(name_product , 20 , products );
        fgets(brand_product , 20 , products);
        fgets(model_product , 20 , products);
        fgets(out , 20 , products);
        fgets(number_product , 20 , products);
        fgets(out , 150 , products);
        numebr_of_product = numebr_of_any_product(id_product , number_product);
        if(numebr_of_product>=number_entrance)
        {
            setTextColor(YELLOW);
            printf("  ___\n |NAM : %s |BRAND : %s |MODEL : %s >>TEDAD: %d\n\n" , name_product , brand_product , model_product , numebr_of_product);
            help++ ;
        }
    }
    setTextColor(RED);
    if( help == 0)
        printf(" *** TEDAD HAME KALA HA AZ ADAD VOROODI KAMTAR AST ... \n");
    free(start);
    setTextColor(WHITE);
    printf(" >> LOTFAN KELIDI RA BARAYE BARQASHT FESHAR DAHID : \n");
    getch();
    system("cls");
    select_option_of_report();
}
//-------------------------------------------------------------------------------------------------
// FUNCTION BAKHSH QOZARESH 3 : KALAHAYI KE TEDAD KAMTAR AZ TEDAD VOROODI DARAND .
// DAR IN BAKHSH KARBAR ADADI RA VARED MIKONAD VA KALA HAYI KE TEDAD KAMTAR AZ AN DARAN ROO NESHOON MIDE :
void report3_number_less_entrance(void)
{
    setTextColor(LIGHT_WHITE);
    puts(" ---- BE QOZARESH 3 KHOSH AMADID ---- ");
    setTextColor(YELLOW);
    puts(" >> DAR IN QOZARESH KALAHAYI KE TEDAD ANHA AZ ADAD VOROODI SHOMA KAMTAR NESHAN MIDAHIM .");
    setTextColor(GREEN);
    printf(" >>LOTFAN ADAD MORED NAZAR KHODRA VARED KONID : ");
    int number_entrance ;
    scanf("%d" , &number_entrance);
    linklist_changes();
    FILE *products ;
    products = fopen("products.txt" , "r");
    char name_product[20] , brand_product[20] , model_product[20] ,number_product[20],id_product[20] , out[150];
    int numebr_of_product , help=0 ;
    while(feof(products) == 0)
    {
        fgets(id_product , 20 , products );
        fgets(name_product , 20 , products );
        fgets(brand_product , 20 , products);
        fgets(model_product , 20 , products);
        fgets(out , 20 , products);
        fgets(number_product , 20 , products);
        fgets(out , 150 , products);
        numebr_of_product = numebr_of_any_product(id_product , number_product);
        setTextColor(YELLOW);
        if( numebr_of_product <= number_entrance )
        {
            printf("  ___\n |NAM : %s |BRAND : %s |MODEL : %s >>TEDAD: %d\n\n" , name_product , brand_product , model_product , numebr_of_product);
            help++ ;
        }
    }
    setTextColor(RED);
    if(help == 0 )
        printf(" >> TEDAD HAME KALA HA AZ ADAD VOROODI BISHTAR AST ...\n");
    free(start);
    setTextColor(LIGHT_WHITE);
    printf(" >> LOTFAN KELIDI RA BARAYE BARQASHT FESHAR DAHID : \n");
    getch();
    system("cls");
    select_option_of_report();
}
//-------------------------------------------------------------------------------------------------------------
//FUNCTION HAYE QOZARESH 4 : ARZESH RIALI KOL KALA HAYE ANBAR :
void report4_price_of_all_products(void)
{
    setTextColor(LIGHT_WHITE);
    puts(" ---- BE QOZARESH 4 KHOSH AMADID ---- ");
    linklist_changes();
    FILE *products ;
    products = fopen("products.txt" , "r");
    char price_product[20] , name_product[20] , brand_product[20] , model_product[20] ,number_product[20],id_product[20] , out[150];
    int numebr_of_product ;
    double price_of_product , all_prices = 0 ;
    while(feof(products) == 0)
    {
        fgets(id_product , 20 , products );
        fgets(name_product , 20 , products );
        fgets(brand_product , 20 , products);
        fgets(model_product , 20 , products);
        fgets(price_product , 20 , products);
        fgets(number_product , 20 , products);
        fgets(out , 150 , products);
        numebr_of_product = numebr_of_any_product(id_product , number_product);
        price_of_product = atof(price_product);
        //QEYMAT HAR KALA RA DAR TEDAD AN ZARB MIKONIM VA HAME RA DAR HAR MARHALE JAM MIKONIM :
        all_prices += price_of_product * numebr_of_product ;
    }
    setTextColor(GREEN);
    printf(" >> ARZESH HAME KALA HAYE MOJOOD DAR ANBAR : %f \n\n" , all_prices);
    free(start);
    setTextColor(LIGHT_WHITE);
    printf(" >> LOTFAN KELIDI RA BARAYE BARQASHT FESHAR DAHID : \n");
    getch();
    system("cls");
    select_option_of_report();
}
//-------------------------------------------------------------------------------------------------------------------
// FUNCTION HAYE QOZARESH 5 :
void report5_price_of_any_product(void)
{
    setTextColor(LIGHT_WHITE);
    printf(" ---- BE QOZARESH 5 KHOSH AMADID ----\n");
    setTextColor(YELLOW);
    printf(" >> DAR IN QOZARESH ARZESH KALAYE VARED SHODE NESHAN DADE MISHAVAD .\n");
    char id_product_entrance[20];
    product_changes_search_id_product(id_product_entrance);
    strcat(id_product_entrance , "\n");
    linklist_changes();
    FILE *products ;
    products = fopen("products.txt" , "r");
    char price_product[20] , name_product[20] , brand_product[20] , model_product[20] ,number_product[20],id_product[20] , out[150];
    int numebr_of_product ;
    double price_of_product ;
    while(feof(products) == 0)
    {
        fgets(id_product , 20 , products );
        fgets(name_product , 20 , products );
        fgets(brand_product , 20 , products);
        fgets(model_product , 20 , products);
        fgets(price_product , 20 , products);
        fgets(number_product , 20 , products);
        fgets(out , 150 , products);
        if(strcmp(id_product_entrance , id_product) == 0)
        {
            numebr_of_product = numebr_of_any_product(id_product , number_product);
            price_of_product = atof(price_product);
            price_of_product = price_of_product * numebr_of_product ;
            setTextColor(GREEN);
            printf(" >> ARZESH KALAYE VARED SHODE : %f\n\n" , price_of_product);
            break;
        }

    }
    free(start);
    setTextColor(LIGHT_WHITE);
    printf(" >> LOTFAN KELIDI RA BARAYE BARQASHT FESHAR DAHID : \n");
    getch();
    system("cls");
    select_option_of_report();
}
//----------------------------------------------------------------------------------------
//FUNCTION HAYE QOZARESH 6 :
void report6_number_import_in_date_intrance(void)
{
    setTextColor(LIGHT_WHITE);
    printf(" ---- BE QOZARESH 6 KHOSH AMADID ----\n");
    setTextColor(AQUA);
    printf(" >> DAR IN QOZARESH TEDAD VOROOD KALA DAR TARIKH VOROODI SHOMA NAMAYESH DADE MISHAVAD .\n");
    char id_product_entrance[20] , date1_intrance[50] , date2_intrance[50];
    product_changes_search_id_product(id_product_entrance);
    setTextColor(LIGHT_RED);
    printf(" *** TAVAJOH : TARIKH HARA MILADI VARED KONID .\n");
    setTextColor(AQUA);
    printf(" >> LOTFAN TARIKH AVAL RA BE FORM ROOZ/MAH/SAL VARED KONID : ");
    gets(date1_intrance);
    setTextColor(AQUA);
    printf(" >> LOTFAN TARIKH DOVOM RA BE FORM ROOZ/MAH/SAL VARED KONID : ");
    gets(date2_intrance);
    //date_3 : TARIKH DAR TARAKONESH .
    struct date
    {
        int year ;
        int month ;
        int day ;
        int all ;
    }date_1 , date_2 , date_3 ;
    sscanf(date1_intrance , "%d/%d/%d" , &date_1.day , &date_1.month , &date_1.year);
    sscanf(date2_intrance , "%d/%d/%d" , &date_2.day , &date_2.month , &date_2.year);
    date_1.all = date_1.day + (date_1.month *30) + (date_1.year * 365) ;
    date_2.all = date_2.day + (date_2.month *30) + (date_2.year * 365) ;
    int result = 0 ;
    strcat(id_product_entrance , "\n");
    linklist_changes();
    struct linklist_change_product *help ;
    help = start ;
    int number_of_import ;
    int number_of_import_product = 0 ;
    do
    {
        if(strcmp(help->id_product , id_product_entrance) == 0 )
        {
            number_of_import = atoi(help->number_product);
            sscanf(help->date_time , "%d/%d/%d" , &date_3.day , &date_3.month , &date_3.year);
            date_3.all = date_3.day + (date_3.month *30) + (date_3.year * 365) ;
            if( date_3.all >= date_1.all && date_3.all <= date_2.all )
            {
                if(strcmp(help->type , "export\n") == 0 )
                {
                    number_of_import *= 0 ;
                }
                number_of_import_product += number_of_import ;
            }
        }
        help = help->link ;
    }while(help->link != NULL );
    setTextColor(LIGHT_AQUA);
    printf(" >>> TEDAD KALA HAYE VARED SHODE DAR IN TARIKH HAST : %d \n\n" , number_of_import_product );
    free(start);
    setTextColor(LIGHT_WHITE);
    printf(" >> LOTFAN KELIDI RA BARAYE BARQASHT FESHAR DAHID : \n");
    getch();
    system("cls");
    select_option_of_report();
}
//-----------------------------------------------------------------------------------------------------------
//FUNCTION HAYE QOZARESH 7 :
void report7_number_export_in_date_intrance(void)
{
    setTextColor(LIGHT_WHITE);
    printf(" ---- BE QOZARESH 7 KHOSH AMADID ----\n");
    setTextColor(LIGHT_WHITE);
    printf(" >> DAR IN QOZARESH TEDAD KHOROOJ KALA DAR TARIKH VOROODI SHOMA NAMAYESH DADE MISHAVAD .\n");
    char id_product_entrance[20] , date1_intrance[50] , date2_intrance[50];
    product_changes_search_id_product(id_product_entrance);
    setTextColor(RED);
    printf(" *** TAVAJOH : TARIKH HARA MILADI VARED KONID .\n");
    setTextColor(GREEN);
    printf(" >> LOTFAN TARIKH AVAL RA BE FORM ROOZ/MAH/SAL VARED KONID : ");
    gets(date1_intrance);
    setTextColor(GREEN);
    printf(" >> LOTFAN TARIKH DOVOM RA BE FORM ROOZ/MAH/SAL VARED KONID : ");
    gets(date2_intrance);
    struct date
    {
        int year ;
        int month ;
        int day ;
        int all ;
    }date_1 , date_2 , date_3 ;
    sscanf(date1_intrance , "%d/%d/%d" , &date_1.day , &date_1.month , &date_1.year);
    sscanf(date2_intrance , "%d/%d/%d" , &date_2.day , &date_2.month , &date_2.year);
    date_1.all = date_1.day + (date_1.month *30) + (date_1.year * 365) ;
    date_2.all = date_2.day + (date_2.month *30) + (date_2.year * 365) ;
    int result = 0 ;
    strcat(id_product_entrance , "\n");
    linklist_changes();
    struct linklist_change_product *help ;
    help = start ;
    int number_of_import ;
    int number_of_import_product = 0 ;
    do
    {
        if(strcmp(help->id_product , id_product_entrance) == 0 )
        {
            number_of_import = atoi(help->number_product);
            sscanf(help->date_time , "%d/%d/%d" , &date_3.day , &date_3.month , &date_3.year);
            date_3.all = date_3.day + (date_3.month *30) + (date_3.year * 365) ;
            if( date_3.all >= date_1.all && date_3.all <= date_2.all )
            {
                if(strcmp(help->type , "import\n") == 0 )
                {
                    number_of_import *= 0 ;
                }
                number_of_import_product += number_of_import ;
            }
        }
        help = help->link ;
    }while(help->link != NULL );
    setTextColor(GREEN);
    printf(" >>> TEDAD KALA HAYE VARED SHODE DAR IN TARIKH HAST : %d \n\n" , number_of_import_product );
    free(start);
    setTextColor(LIGHT_WHITE);
    printf(" > LOTFAN KELIDI RA BARAYE BARQASHT FESHAR DAHID : \n");
    getch();
    system("cls");
    select_option_of_report();
}
//-------------------------------------------------------------------------------------------
// FUNCTION HAYE QOZARESH 8 :
void report8_import_export_at_intrance_time(void)
{
    setTextColor(LIGHT_WHITE);
    printf(" ---- BE QOZARESH 8 KHOSH AMADID ----\n");
    setTextColor(LIGHT_WHITE);
    printf(" >> DAR IN QOZARESH TARAKONESH HAYE KALA DAR TARIKH VOROODI RA KHAHID DID .\n");
    char id_product_entrance[20] , date1_intrance[50] , date2_intrance[50];
    setTextColor(RED);
    product_changes_search_id_product(id_product_entrance);
    printf(" *** TAVAJOH : TARIKH HARA MILADI VARED KONID .\n");
    setTextColor(GREEN);
    printf(" >LOTFAN TARIKH AVAL RA BE FORM ROOZ/MAH/SAL VARED KONID : ");
    gets(date1_intrance);
    printf(" >LOTFAN TARIKH DOVOM RA BE FORM ROOZ/MAH/SAL VARED KONID : ");
    gets(date2_intrance);
    struct date
    {
        int year ;
        int month ;
        int day ;
        int all ;
    }date_1 , date_2 , date_3 ;
    sscanf(date1_intrance , "%d/%d/%d" , &date_1.day , &date_1.month , &date_1.year);
    sscanf(date2_intrance , "%d/%d/%d" , &date_2.day , &date_2.month , &date_2.year);
    date_1.all = date_1.day + (date_1.month *30) + (date_1.year * 365) ;
    date_2.all = date_2.day + (date_2.month *30) + (date_2.year * 365) ;
    int result = 0 ;
    strcat(id_product_entrance , "\n");
    linklist_changes();
    struct linklist_change_product *help ;
    help = start ;
    do
    {
        setTextColor(YELLOW);
        if(strcmp(help->id_product , id_product_entrance) == 0 )
        {
            sscanf(help->date_time , "%d/%d/%d" , &date_3.day , &date_3.month , &date_3.year);
            date_3.all = date_3.day + (date_3.month *30) + (date_3.year * 365) ;
            if( date_3.all >= date_1.all && date_3.all <= date_2.all )
            {
                if(strcmp(help->type , "import\n") == 0 )
                {
                    printf("\n |> VOROOD\n |  TARIKH : %s |  TEDAD : %s  -----------------\n" , help->date_time , help->number_product);
                }
                else
                {
                    printf("\n |> KHOROOJ\n |  TARIKH : %s |  TEDAD : %s  -----------------\n" , help->date_time , help->number_product);
                }
            }
        }
        help = help->link ;
    }while(help->link != NULL );
    free(start);
    setTextColor(LIGHT_WHITE);
    printf(" > LOTFAN KELIDI RA BARAYE BARQASHT FESHAR DAHID : \n");
    getch();
    system("cls");
    select_option_of_report();
}
//--------------------------------------------------------------------------------------------------
//FUNCTION HAYE QOZARESH 9
void report9_registered_by_user(void)
{
    setTextColor(LIGHT_WHITE);
    printf(" ---- BE QOZARESH 9 KHOSH AMADID ADMIN ----\n");
    setTextColor(GREEN);
    printf(" >> DAR IN QOZARESH TARAKONESH HAYI KE TAVASOT KARBAR VOROODI SABT SHODE AND RA MOSHAHEDE MIKONID .\n");
    setTextColor(YELLOW);
    printf(" >> LOTFAN NAM KARBARI , KARABRI KE TARAKONESH HAYE SABT SHODE TAVASOT OORA MIKHAHID VARED KONID : ");
    char username_entrance[30];
    getchar();
    gets(username_entrance);
    strcat(username_entrance , "\n");
    linklist_changes();
    struct linklist_change_product *help ;
    FILE *products ;
    products = fopen("products.txt" , "r");
    struct products_in_file
    {
        char id_product[20];
        char name_product[20];
        char brand_product[20];
        char model_product[20];
        char price_product[20];
        char number_product[20];
        char information_product[150];
    }product_in_file ;
    setTextColor(GREEN);
    help = start ;
    do
    {
        FILE *products ;
        products = fopen("products.txt" , "r");
        if(strcmp(help->user , username_entrance) == 0 )
        {
            if(strcmp(help->type , "import\n") == 0 )
            {
                while( feof(products) == 0)
                {
                    fgets(product_in_file.id_product , 20 , products );
                    fgets(product_in_file.name_product , 20 , products );
                    fgets(product_in_file.brand_product , 20 , products );
                    fgets(product_in_file.model_product , 20 , products );
                    fgets(product_in_file.price_product , 20 , products );
                    fgets(product_in_file.number_product , 20 , products);
                    fgets(product_in_file.information_product , 150 , products );
                    if(strcmp(help->id_product , product_in_file.id_product) == 0)
                    {
                        printf("\n |> NAM KALA : %s |  BRAND KALA : %s |  MODEL KALA : %s |  VOROOD\n |  TARIKH : %s |  TEDAD : %s-----------------\n" , product_in_file.name_product , product_in_file.brand_product , product_in_file.model_product , help->date_time , help->number_product);
                        break;
                    }
                }
            }
            else
            {
                while( feof(products) == 0)
                {
                    fgets(product_in_file.id_product , 20 , products );
                    fgets(product_in_file.name_product , 20 , products );
                    fgets(product_in_file.brand_product , 20 , products );
                    fgets(product_in_file.model_product , 20 , products );
                    fgets(product_in_file.price_product , 20 , products );
                    fgets(product_in_file.number_product , 20 , products);
                    fgets(product_in_file.information_product , 150 , products );
                    if(strcmp(help->id_product , product_in_file.id_product) == 0)
                    {
                        printf("\n |> NAM KALA : %s |  BRAND KALA : %s |  MODEL KALA : %s |  KHOROOJ\n |  TARIKH : %s |  TEDAD : %s-----------------\n" , product_in_file.name_product , product_in_file.brand_product , product_in_file.model_product , help->date_time , help->number_product);
                        break;
                    }
                }
            }
        }
        fclose(products);
        help = help->link ;
    }while(help->link != NULL );
    free(start);
    setTextColor(LIGHT_WHITE);
    printf(" >> LOTFAN KELIDI RA BARAYE BARQASHT FESHAR DAHID : \n");
    getch();
    system("cls");
    select_option_of_report();
}
//--------------------------------------------------------------------------
// FUNCTION HAYE QOZARESH 10 :
void report10_time_users_activity(void)
{
    setTextColor(LIGHT_WHITE);
    printf(" ---- BE QOZARESH 10 KHOSH AMADID ADMIN ----\n");
    FILE *information_of_users ;
    information_of_users = fopen("information_of_users.txt" , "r");
    FILE *lates_activity_users ;
    lates_activity_users = fopen("lates_activity_users.txt" , "r");
    if(information_of_users == NULL || lates_activity_users == NULL )
    {
        setTextColor(RED);
        printf(" *** ERORO . FILE BAZ NASHOD .");
        Sleep(3000);
        exit(1);
    }
    char username_in_file_users[20] , out[50] , username_in_file_activity[20] , date[20] ;
    fgets(username_in_file_users , 20 , information_of_users);
    while(feof(information_of_users) == 0)
    {
        for(int i = 0 ; i < 6 ; i++ )
            fgets(out , 50 , information_of_users);
        while(feof(lates_activity_users) == 0)
        {
            fgets(username_in_file_activity , 20 , lates_activity_users);
            if(strcmp(username_in_file_users , username_in_file_activity) == 0)
            {
                fgets(date , 20 , lates_activity_users);
            }
        }
        setTextColor(GREEN);
        printf(" |> NAM KARBARI : %s |AKHARIN ZAMAN VOROOD : %s----------------------------\n" , username_in_file_users , date);
        rewind(lates_activity_users);
        //printf("11111\n");
        fgets(username_in_file_users , 20 , information_of_users);
    }
    setTextColor(LIGHT_WHITE);
    printf(" >> LOTFAN KELIDI RA BARAYE BARQASHT FESHAR DAHID : \n");
    getch();
    system("cls");
    select_option_of_report();
}
//--------------------------------------------------------------------------------------------------------------
// FUNCTION QOZARESH 11 :
void report11_lowest_product(void)
{
    setTextColor(LIGHT_WHITE);
    printf(" ---- BE QOZARESH 11 KHOSH AMADID ADMIN ----\n");
    setTextColor(LIGHT_AQUA);
    printf(" >>> DAR IN QOZARESH KAMTARIN KALAYI KE MOJOOD HAST RA MIBINID : \n");
    linklist_changes();
    FILE *products ;
    products = fopen("products.txt" , "r");
    char name_product[20] , brand_product[20] , model_product[20] ,number_product[20],id_product[20] , out[150] , result_name[20] , result_brand[20] , result_model[20];
    int numebr_of_product , help= 1000  ;
    while(feof(products) == 0)
    {
        fgets(id_product , 20 , products );
        fgets(name_product , 20 , products );
        fgets(brand_product , 20 , products);
        fgets(model_product , 20 , products);
        fgets(out , 20 , products);
        fgets(number_product , 20 , products);
        fgets(out , 150 , products);
        numebr_of_product = numebr_of_any_product(id_product , number_product);
        setTextColor(YELLOW);
        if( numebr_of_product <= help )
        {
            help = numebr_of_product ;
            strcpy(result_name , name_product );
            strcpy(result_brand , brand_product );
            strcpy(result_model , model_product );
        }
    }
    setTextColor(GREEN);
    printf("\n | NAM KALA : %s" , result_name );
    printf(" | BRAND KALA : %s" , result_brand );
    printf(" | MODEL KALA : %s\n" ,  result_model );
    free(start);
    setTextColor(LIGHT_WHITE);
    printf(" >> LOTFAN KELIDI RA BARAYE BARQASHT FESHAR DAHID : \n");
    getch();
    system("cls");
    select_option_of_report();
}
//---------------------------------------------------------------------------------------------------------------
// QOZARESH 12 : KALA BA BISHTARIN TEDAD : 
void report12_most_product(void)
{
    setTextColor(LIGHT_WHITE);
    printf(" ---- BE QOZARESH 12 KHOSH AMADID ADMIN ----\n");
    setTextColor(LIGHT_AQUA);
    printf(" >>> DAR IN QOZARESH KAMTARIN KALAYI KE MOJOOD HAST RA MIBINID : \n");
    linklist_changes();
    FILE *products ;
    products = fopen("products.txt" , "r");
    char name_product[20] , brand_product[20] , model_product[20] ,number_product[20],id_product[20] , out[150] , result_name[20] , result_brand[20] , result_model[20];
    int numebr_of_product , help = 0  ;
    while(feof(products) == 0)
    {
        fgets(id_product , 20 , products );
        fgets(name_product , 20 , products );
        fgets(brand_product , 20 , products);
        fgets(model_product , 20 , products);
        fgets(out , 20 , products);
        fgets(number_product , 20 , products);
        fgets(out , 150 , products);
        numebr_of_product = numebr_of_any_product(id_product , number_product);
        setTextColor(YELLOW);
        if( numebr_of_product >= help )
        {
            help = numebr_of_product ;
            strcpy(result_name , name_product );
            strcpy(result_brand , brand_product );
            strcpy(result_model , model_product );
        }
    }
    setTextColor(GREEN);
    printf("\n | NAM KALA : %s" , result_name );
    printf(" | BRAND KALA : %s" , result_brand );
    printf(" | MODEL KALA : %s\n" ,  result_model );
    free(start);
    setTextColor(LIGHT_WHITE);
    printf(" >> LOTFAN KELIDI RA BARAYE BARQASHT FESHAR DAHID : \n");
    getch();
    system("cls");
    select_option_of_report();
}
//----------------------------------------------------------------------------------------------------------------
//FUNCTIONA HAYE TANZIMAT HESAB KARBARI :
struct users
{
    char username[30];
    char name[20];
    char famili[20];
    char melli_number[25];
    char phone_number[25];
    char email[35];
    char password[50];
    struct users *link ;
};
struct users *start_users ;
// LINK LIST KARDAN HAME ETELAAT KARBARAN KE DAR FILE HAST :
void linklist_information_of_users(void)
{
    FILE *information_of_users ;
    information_of_users = fopen("information_of_users.txt" , "r");
    if( information_of_users == NULL )
    {
        printf(" *** EROR , FILE BAZ NASHOD ... ");
        Sleep(3000);
        exit(1);
    }
    // start_users SHOROOE LINK LIST HAST VA HELPING HAME TARAKONESH HARA BE START LINK MIKONAD .
    struct users *helping1 , *helping2 ;
    helping1 = malloc(sizeof(struct users));
    start_users = malloc(sizeof(struct users));
    fgets(start_users->username , 30 , information_of_users);
    fgets(start_users->name , 20 , information_of_users);
    fgets(start_users->famili , 20 , information_of_users);
    fgets(start_users->melli_number , 25 , information_of_users);
    fgets(start_users->phone_number , 25 , information_of_users);
    fgets(start_users->email , 35 , information_of_users);
    fgets(start_users->password , 50 , information_of_users);
    start_users->link = helping1 ;
    helping1->link = NULL ;
    while( feof(information_of_users) == 0 )
    {
        helping2 = malloc(sizeof(struct users));
        fgets(helping2->username , 30 , information_of_users);
        if(feof(information_of_users) != 0)
            break;
        fgets(helping2->name , 20 , information_of_users);
        fgets(helping2->famili , 20 , information_of_users);
        fgets(helping2->melli_number , 25 , information_of_users);
        fgets(helping2->phone_number , 25 , information_of_users);
        fgets(helping2->email , 35 , information_of_users);
        fgets(helping2->password , 50 , information_of_users);
        start_users->link = helping2 ;
        helping2->link = helping1 ;
        helping1 = helping2 ;
    }
    fclose(information_of_users);
}
void Account_settings(void)
{
    setTextColor(LIGHT_WHITE);
    printf(" ---- BE BAKHSH TANZIMAT HESAB KARBARI KHOSH AMADID ---- \n");
    linklist_information_of_users();
    struct users *start_users_help ;
    start_users_help = start_users ;
    while(start_users->link != NULL )
    {
        if(strcmp(user_logined.username , start_users->username )== 0)
        {
            setTextColor(LIGHT_WHITE);
            printf(" >> KODAM QOZINE RA MIKHAHID TAGHIR DAHID ? \n");
            setTextColor(AQUA);
            printf(" 1. NAM \n");
            setTextColor(LIGHT_AQUA);
            printf(" 2. FAMILI \n");
            setTextColor(AQUA);
            printf(" 3. KODMELI \n");
            setTextColor(LIGHT_AQUA);
            printf(" 4. SHOMARE TELEFON \n");
            setTextColor(AQUA);
            printf(" 5. EMAIL \n");
            setTextColor(LIGHT_AQUA);
            printf(" 6. PASSWORD \n");
            setTextColor(LIGHT_WHITE);
            printf(" >>> ");
            int number ;
            scanf("%d" , &number );
            while(1)
            {
                if(number == 1)
                {
                    getchar();
                    Account_settings_change_name();
                    break ;
                }
                if(number == 2)
                {
                    getchar();
                    Account_settings_change_famili();
                    break ;
                }
                if(number == 3)
                {
                    getchar();
                    Account_settings_change_melli_number();
                    break ;
                }
                if(number == 4)
                {
                    getchar();
                    Account_settings_change_phone_number();
                    break ;
                }
                if(number == 5)
                {
                    getchar();
                    Account_settings_change_email();
                    break ;
                }
                if(number == 6)
                {
                    getchar();
                    Account_settings_change_password();
                    break ;
                }
                else
                {
                    setTextColor(RED);
                    printf(" *** EROR . ADAD VOROODI SAHI NIST .\n");
                    printf(" > LOTFAN QOZINE RA DOBARE VARED KONID : ");
                    scanf("%d" , &number );
                }
            }
            break ;
        }
        start_users = start_users->link;
    }
    // DAR KOD HAYE ZIR DOBARE HAME ETELAAT KARBARAN RO BA TAGHIRATESH MIRIZIM DAKHEL FILE INFORMATION_OF_USERS .
    FILE *information_of_users ;
    information_of_users = fopen("information_of_users.txt" , "w+");
    while( start_users_help->link != NULL )
    {
        fputs(start_users_help->username , information_of_users);
        fputs(start_users_help->name , information_of_users);
        fputs(start_users_help->famili  , information_of_users);
        fputs(start_users_help->melli_number  , information_of_users);
        fputs(start_users_help->phone_number  , information_of_users);
        fputs(start_users_help->email  , information_of_users);
        fputs(start_users_help->password  , information_of_users);
        start_users_help = start_users_help->link ;
    }
    free(start_users);
}
//FUNCTION TAGHIR DADAN ESM .
void Account_settings_change_name(void)
{
    setTextColor(LIGHT_BLUE);
    printf(" >> LOTFAN NAM JADID RA VARED KONID : ");
    char new_name[20];
    gets(new_name);
    strcat(new_name , "\n");
    strcpy(start_users->name , new_name );
    setTextColor(GREEN);
    printf(" * ZAKHIRE SHOD .");
}
//FUNCTION TAGHIR DADAN FAMILI
void Account_settings_change_famili(void)
{
    setTextColor(LIGHT_BLUE);
    printf(" >> LOTFAN FAMILI JADID RA VARED KONID : ");
    char new_famili[20];
    gets(new_famili);
    strcat(new_famili , "\n");
    strcpy(start_users->famili , new_famili );
    setTextColor(GREEN);
    printf(" * ZAKHIRE SHOD .");
}
//FUNCTION TAGHIR DADAN KODMELLI
void Account_settings_change_melli_number(void)
{
    setTextColor(LIGHT_BLUE);
    printf(" >> LOTFAN KODMELI JADID RA VARED KONID : ");
    char new_melli_number[25];
    gets(new_melli_number);
    strcat(new_melli_number , "\n");
    strcpy(start_users->melli_number , new_melli_number );
    setTextColor(GREEN);
    printf(" * ZAKHIRE SHOD .");
}
//FUNCTION TAGHIR DADAN SHOMARE TELEPHONE
void Account_settings_change_phone_number(void)
{
    setTextColor(LIGHT_BLUE);
    printf(" >> LOTFAN SHOMARE TELEPHON JADID RA VARED KONID : ");
    char new_phone_number[25];
    gets(new_phone_number);
    strcat(new_phone_number , "\n");
    strcpy(start_users->phone_number , new_phone_number );
    setTextColor(GREEN);
    printf(" * ZAKHIRE SHOD .");
}
//FUNCTION TAGHIR DADAN EMAIL
void Account_settings_change_email(void)
{
    setTextColor(LIGHT_BLUE);
    printf(" >> LOTFAN EMAIL JADID RA VARED KONID : ");
    char new_email[35];
    gets(new_email);
    strcat(new_email , "\n");
    strcpy(start_users->email , new_email );
    setTextColor(GREEN);
    printf(" * ZAKHIRE SHOD .");
}
//DUNCTION TAGHIR DADAN PASSWORD
void Account_settings_change_password(void)
{
    setTextColor(LIGHT_BLUE);
    printf(" >> LOTFAN PASSWORD JADID RA VARED KONID : ");
    char new_password[35];
    gets(new_password);
    strcat(new_password , "\n");
    strcpy(start_users->password , new_password );
    setTextColor(GREEN);
    printf(" * ZAKHIRE SHOD .");
}

//   *** END ***
