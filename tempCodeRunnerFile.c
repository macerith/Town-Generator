/*Defining Structs*/

/*Names*/
typedef struct{
    char first_name[20];
    char last_name[20];
} names_struct_type;

/*RSH*/
typedef struct{
    char dragonborn[16];
    char aasimar[16];
    char tiefling[16];
    char kobold[16];
    char lizardfolk[16];
    char goliath[16];
    char dwarf[16];
    char orc[16];
    char gith[16];
} rsh_struct_type;

/*TGF*/
typedef struct{
    char trait[26];
    char goal[26];
    char flaw[26];
}tgf_struct_type;


int main(){

    /*Opening the names file*/
    FILE *namespointer;

    namespointer = fopen("names.csv", "r");
    printf("Opening names.csv...\n");

    if(namespointer == NULL){
        
        printf("Error: Missing names.csv");
        exit(0);

    } else{

        printf("Found names.csv\n");

    }

    /*Creating the names struct array and initializing variables*/
    names_struct_type names_struct[1800];
    char names_buffer[1024];
    int names_count = 0;
    char first_name[20];
    char last_name[20];

    /*Reading the CSV into the struct*/
    while(fgets(names_buffer, 1024, namespointer)){
        sscanf(names_buffer, "%[^,],%[^,]", first_name, last_name);
        strcpy(names_struct[names_count].first_name, first_name);
        strcpy(names_struct[names_count].last_name, last_name);
        names_count++;
    }
    
    printf("Name struct created.\n\n");

    fclose(namespointer);

    /*Opening the RSH file */
    FILE *rshpointer;

    rshpointer = fopen("rsh.csv", "r");
    printf("Opening rsh.csv...\n");

    if(rshpointer == NULL){
        
        printf("Error: Missing rsh.csv");
        exit(0);

    } else{

        printf("Found rsh.csv\n");

    }

    /*Creating the rsh struct array and initializing variables*/
    rsh_struct_type rsh_struct[17];
    char rsh_buffer[1024];
    int rsh_count = 0;
    char dragonborn[16];
    char aasimar[16];
    char tiefling[16];
    char kobold[16];
    char lizardfolk[16];
    char goliath[16];
    char dwarf[16];
    char orc[16];
    char gith[16];

    /*Reading the CSV into the struct*/
    while(fgets(rsh_buffer, 1024, rshpointer)){
        sscanf(rsh_buffer, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],", dragonborn, aasimar, tiefling, kobold, lizardfolk, goliath, dwarf, orc, gith);
        strcpy(rsh_struct[rsh_count].dragonborn, dragonborn);
        strcpy(rsh_struct[rsh_count].aasimar, aasimar);
        strcpy(rsh_struct[rsh_count].tiefling, tiefling);
        strcpy(rsh_struct[rsh_count].kobold, kobold);
        strcpy(rsh_struct[rsh_count].lizardfolk, lizardfolk);
        strcpy(rsh_struct[rsh_count].goliath, goliath);
        strcpy(rsh_struct[rsh_count].dwarf, dwarf);
        strcpy(rsh_struct[rsh_count].orc, orc);
        strcpy(rsh_struct[rsh_count].gith, gith);
        rsh_count++;
    }
    
    printf("RSH struct created.\n\n");

    fclose(rshpointer);

    /*Opening the TGF file*/
    FILE *tgfpointer;

    tgfpointer = fopen("tgf.csv", "r");
    printf("Opening tgf.csv...\n");

    if(tgfpointer == NULL){
        
        printf("Error: Missing tgf.csv");
        exit(0);

    } else{

        printf("Found tgf.csv\n");

    }

    /*Creating the tgf struct array and initializing variables*/
    tgf_struct_type tgf_struct[101];
    char tgf_buffer[1024];
    int tgf_count = 0;
    char trait[26];
    char goal[26];
    char flaw[26];

    /*Reading the CSV into the struct*/
    while(fgets(tgf_buffer, 1024, tgfpointer)){
        sscanf(tgf_buffer, "%[^,],%[^,],%[^,]", trait, goal, flaw);
        strcpy(tgf_struct[tgf_count].trait, trait);
        strcpy(tgf_struct[tgf_count].goal, goal);
        strcpy(tgf_struct[tgf_count].flaw, flaw);
        tgf_count++;
    }
    
    printf("TGF struct created.\n\n");

    fclose(tgfpointer);

    /*Professions File*/
    FILE *professionspointer;

    professionspointer = fopen("professions.csv", "r");
    printf("Opening professions.csv...\n");

    if(professionspointer == NULL){
        
        printf("Error: Missing professions.csv");
        exit(0);

    } else{

        printf("Found professions.csv\n");

    }

    /*Creating the professions array and initializing variables*/
    char professions_array[100][25];
    char professions_buffer[1024];
    char profession[25];
    int professions_count = 0;

    /*Reading the CSV into the struct*/
    while(fgets(tgf_buffer, 1024, tgfpointer)){
        sscanf(tgf_buffer, "%[^,]", profession);
        strcpy(professions_array[professions_count], profession);
        professions_count++;
    }
    
    printf("Professions array created.\n\n");

    fclose(professionspointer);




    /*Intializing Neccessary Arrays*/
    char race_array[9][12] = {"Dragonborn", "Aasimar", "Tiefling", "Kobold", "Lizardfolk", "Goliath", "Dwarf", "Orc", "Gith"};
    char height_array[3][8] = {"short", "average", "tall"};
    char age_array[4][12] = {"child", "young", "middle-aged", "old"};
    char build_array[7][9] = {"scrawny", "skinny", "average", "athletic", "burly", "muscular", "fat"};
    char attire_array[6][13] = {"beggar", "average", "leisurely", "work", "formal", "extravagant"};
    char gender_array[2][8] = {"male", "female"};




    /*Initiating Variables*/
    char char_gender[25];
    char char_first_name[25];
    char char_last_name[25];
    char char_race[25];
    char char_age[25];
    char char_height[25];
    char char_skin_color[25];
    char char_hair_color[25];
    char char_build[25];
    char char_attire[25];
    char char_profession[25];
    char char_trait[25];
    char char_goal[25];
    char char_flaw[25];
    time_t t;
    srand((unsigned) time(&t));
    int race_roll;
    int gender_roll;
    int roll;
    int hair_roll;


    /*The function*/
    void generate_character(int prace_number, int pgender_number, char prace_name[25], char pskin_color[25], char phair_color[25], char pgender[25]){
        if(pgender_number != 10){
            strcpy(char_gender,pgender);
            gender_roll = pgender_number;
        } else{
            gender_roll = rand() % 2;
            strcpy(char_gender,gender_array[gender_roll]);
        }
        if(prace_number != 10){
            race_roll = prace_number;
            strcpy(char_race,prace_name);
        } else{
            race_roll = rand() % 9;
            strcpy(char_race,race_array[race_roll]);
        }

        strcpy(char_last_name,names_struct[rand() % 200 + race_roll*200].last_name);
        if(gender_roll == 0){
            strcpy(char_first_name,names_struct[rand() % 100 + race_roll*200].first_name);
        } else if(gender_roll == 1){
            strcpy(char_first_name,names_struct[rand() % 100 + 100 + race_roll*200].first_name);
        } else{
            printf("Character Generator Error: Character Gender is non-binary: %s", char_gender);
            exit(0);
        } 
        
        roll = rand() % 4;
        strcpy(char_age,age_array[roll]);

        roll = rand() % 3;
        strcpy(char_height,height_array[roll]);
        
        roll = rand() % 7;
        strcpy(char_build,build_array[roll]);
        
        roll = rand() % 6;
        strcpy(char_attire,attire_array[roll]);

        roll = rand() % 100;
        strcpy(char_profession,professions_array[roll]);

        roll = rand() % 100 + 1;
        strcpy(char_trait,tgf_struct[roll].trait);

        roll = rand() % 100 + 1;
        strcpy(char_goal,tgf_struct[roll].goal);

        roll = rand() % 100 + 1;
        strcpy(char_flaw,tgf_struct[roll].flaw);

        roll = rand() % 10 + 1;
        hair_roll = rand() % 6 + 10;
        switch(race_roll){
            case 0:
                strcpy(char_skin_color,rsh_struct[roll].dragonborn);
                strcpy(char_hair_color,rsh_struct[hair_roll].dragonborn);
                break;
            case 1:
                strcpy(char_skin_color,rsh_struct[roll].aasimar);
                strcpy(char_hair_color,rsh_struct[hair_roll].aasimar);
                break;
            case 2:
                strcpy(char_skin_color,rsh_struct[roll].tiefling);
                strcpy(char_hair_color,rsh_struct[hair_roll].tiefling);
                break;
            case 3:
                strcpy(char_skin_color,rsh_struct[roll].kobold);
                strcpy(char_hair_color,rsh_struct[hair_roll].kobold);
                break;
            case 4:
                strcpy(char_skin_color,rsh_struct[roll].lizardfolk);
                strcpy(char_hair_color,rsh_struct[hair_roll].lizardfolk);
                break;
            case 5:
                strcpy(char_skin_color,rsh_struct[roll].goliath);
                strcpy(char_hair_color,rsh_struct[hair_roll].goliath);
                break;
            case 6:
                strcpy(char_skin_color,rsh_struct[roll].dwarf);
                strcpy(char_hair_color,rsh_struct[hair_roll].dwarf);
                break;
            case 7:
                strcpy(char_skin_color,rsh_struct[roll].orc);
                strcpy(char_hair_color,rsh_struct[hair_roll].orc);
                break;
            case 8:
                strcpy(char_skin_color,rsh_struct[roll].gith);
                strcpy(char_hair_color,rsh_struct[hair_roll].gith);
                break;
            default:
                printf("Character Generation Error: Race Roll is out of bounds.");
                exit(0);
        }
        if(pskin_color != "0"){
            strcpy(char_skin_color,pskin_color);
        }
        if(phair_color != "0"){
            strcpy(char_hair_color,phair_color);
        }
    } 