#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

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

/*Town Spreadsheet*/
typedef struct{
    char shop[20];
    char artisan[20];
    char poi[20];
    char export[20];
    char god[20];
    char guild[20];
} ts_struct_type;


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
        sscanf(rsh_buffer, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,]", dragonborn, aasimar, tiefling, kobold, lizardfolk, goliath, dwarf, orc, gith);
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
    while(fgets(professions_buffer, 1024, professionspointer)){
        sscanf(professions_buffer, "%[^,]", profession);
        strcpy(professions_array[professions_count], profession);
        professions_count++;
    }
    
    printf("Professions array created.\n\n");

    fclose(professionspointer);

    /*Opening the ts file*/
    FILE *tspointer;

    tspointer = fopen("ts.csv", "r");
    printf("Opening ts.csv...\n");

    if(tspointer == NULL){
        
        printf("Error: Missing ts.csv");
        exit(0);

    } else{

        printf("Found ts.csv\n");

    }

    /*Creating the ts struct array and initializing variables*/
    ts_struct_type ts_struct[32];
    char ts_buffer[1024];
    int ts_count = 0;
    char shop[20];
    char artisan[20];
    char poi[20];
    char export[20];
    char god[20];
    char guild[20];

    /*Reading the CSV into the struct*/
    while(fgets(ts_buffer, 1024, tspointer)){
        sscanf(ts_buffer, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,]", shop, artisan, poi, export, god, guild);
        strcpy(ts_struct[ts_count].shop, shop);
        strcpy(ts_struct[ts_count].artisan, artisan);
        strcpy(ts_struct[ts_count].poi, poi);
        strcpy(ts_struct[ts_count].export, export);
        strcpy(ts_struct[ts_count].god, god);
        strcpy(ts_struct[ts_count].guild, guild);
        ts_count++;
    }
    
    printf("TS struct created.\n\n");

    fclose(tspointer);


    /*Inn Names File*/
    FILE *inn_namespointer;

    inn_namespointer = fopen("inn_names.csv", "r");
    printf("Opening inn_names.csv...\n");

    if(inn_namespointer == NULL){
        
        printf("Error: Missing inn_names.csv");
        exit(0);

    } else{

        printf("Found inn_names.csv\n");

    }

    /*Creating the Inn Names array and initializing variables*/
    char inn_names_array[100][50];
    char inn_names_buffer[1024];
    char inn_name[25];
    int inn_names_count = 0;

    /*Reading the CSV into the struct*/
    while(fgets(inn_names_buffer, 1024, inn_namespointer)){
        sscanf(inn_names_buffer, "%[^,]", inn_name);
        strcpy(inn_names_array[inn_names_count], inn_name);
        inn_names_count++;
    }
    
    printf("Inn Names array created.\n\n");

    fclose(inn_namespointer);




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
    int population;

    population = 0;


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
        population++;
    } 
    
    
    /*Initializing Family Generator Variables*/
    int family_size;
    int i;
    char family_name[25];
    char parent_skin_colors[2][25];
    char parent_hair_colors[2][25];
    char parent_races[2][25];
    int parent_race_numbers[2];
    char child_race[25];
    int child_race_number;
    int genetics_roll;
    int spouse_race_roll;
    int genetics_roll_skin;
    int genetics_roll_hair;
    char town_name[50];

    printf("\nEnter Town Name (Press 0 to quit): ");
    scanf("%s", &town_name);

    while(town_name != '0'){

        /*Creating the Town Data File*/
        FILE * fp;
        fp = fopen(&town_name, "w");
        
        
        /*Defining the Function*/
        void generate_family(){
            family_size = rand() % 6 + 3;
            for(i = 1; i <= family_size; ++i){
                if(i == 1){ /*Father*/
                    generate_character(10, 0, "0", "0", "0", "male");
                    strcpy(family_name,char_last_name);
                    strcpy(parent_skin_colors[0],char_skin_color);
                    strcpy(parent_hair_colors[0],char_hair_color);
                    strcpy(parent_races[0], char_race);
                    parent_race_numbers[0] = race_roll;
                    fprintf(fp, "\nFATHER\n%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. A %s, they are %s and %s, and idolize %s.\n", char_first_name, family_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_profession, char_trait, char_flaw, char_goal);
                } else if(i == 2){ /*Mother*/
                    spouse_race_roll = rand() % 4;
                    if(spouse_race_roll == 3){
                        generate_character(10, 1, "0", "0", "0", "female");
                        strcpy(parent_skin_colors[1],char_skin_color);
                        strcpy(parent_hair_colors[1],char_hair_color);
                        strcpy(parent_races[1], char_race);
                        parent_race_numbers[1] = race_roll;
                        fprintf(fp, "MOTHER\n%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. A %s, they are %s and %s, and idolize %s.\nCHILDREN\n", char_first_name, family_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_profession, char_trait, char_flaw, char_goal);
                    } else{
                        generate_character(parent_race_numbers[0], 1, parent_races[0], "0", "0", "female");
                        strcpy(parent_skin_colors[1],char_skin_color);
                        strcpy(parent_hair_colors[1],char_hair_color);
                        strcpy(parent_races[1], char_race);
                        parent_race_numbers[1] = race_roll;
                        fprintf(fp, "MOTHER\n%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. A %s, they are %s and %s, and idolize %s.\nCHILDREN\n", char_first_name, family_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_profession, char_trait, char_flaw, char_goal);  
                    }
                } else{ /*Children*/
                    genetics_roll = rand() % 2;
                    genetics_roll_skin = rand() % 2;
                    genetics_roll_hair = rand() % 2;
                    strcpy(child_race,parent_races[genetics_roll]);
                    child_race_number = parent_race_numbers[genetics_roll];
                    generate_character(child_race_number, 10, child_race, "0", "0", "0");
                    fprintf(fp, "%s %s: Child %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. They are %s and %s, and idolize %s.\n", char_first_name, family_name, char_gender, child_race, char_height, char_build, parent_skin_colors[genetics_roll_skin], parent_hair_colors[genetics_roll_hair], char_attire, char_trait, char_flaw, char_goal);
                }
            }
        }

        /*Getting Size Input*/
        int town_size;
        char town_size_array[3][7] = {"Hamlet", "Village", "Town"};
        printf("\nEnter Town size (0 = Hamlet, 1 = Village, 2 = Town: ");
        scanf("%d", &town_size);

        int wall_roll = rand() % 6;
        int export_roll = rand() % 32;
        char wall_array[6][6] = {"None", "Wood", "Stone", "Hybrid", "Brick", "Mortar"};
        fprintf(fp, "Name: %s\n", town_name);
        fprintf(fp, "Size: %s\n", town_size_array[town_size]);
        fprintf(fp, "Walls: %s\n", wall_array[wall_roll]);
        fprintf(fp, "Export: %s\n\n\n\n", ts_struct[export_roll].export);

        /*The Lord or lady and their family*/
        int lord_family_roll;
        int lord_or_lady;
        lord_family_roll = rand() % 4;
        lord_or_lady = rand() % 2;
        if(lord_family_roll == 3){
            if(lord_or_lady == 0){
                fprintf(fp, "The Lord and his Family:\n");
            } else{
                fprintf(fp, "The Lady and her Family:\n");
            }
            generate_family();
        } else{
            if(lord_or_lady == 0){
                fprintf(fp, "The Lord:\n\n");
                generate_character(10, 0, "0", "0", "0", "male");
                fprintf(fp, "%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. A %s, they are %s and %s, and idolize %s.\n", char_first_name, char_last_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_profession, char_trait, char_flaw, char_goal);
            } else{
                fprintf(fp, "The Lady:\n\n");
                generate_character(10, 1, "0", "0", "0", "female");
                fprintf(fp, "%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. A %s, they are %s and %s, and idolize %s.\n", char_first_name, char_last_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_profession, char_trait, char_flaw, char_goal);
            }
        }

        /*Court Wizard*/
        int wizard_level;
        int wizard_chance;
        switch(town_size){
            case 0:
                wizard_chance = rand() % 10;
                break;
            case 1:
                wizard_chance = rand() % 6;
                break;
            case 2:
                wizard_chance = rand() % 3;
                break;
            default:
                printf("Court Wizard Error: Town Size out of bounds");
                exit(0);
                break;
        } if(wizard_chance == 0){
            generate_character(10, 10, "0", "0", "0", "0");
            wizard_level = rand() % 10 + 6;
            fprintf(fp, "\n\n\n\n%dth Level Court Wizard:\n", wizard_level);
            fprintf(fp, "%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. They are %s and %s, and idolize %s.\n", char_first_name, char_last_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_trait, char_flaw, char_goal);
        }

        /*Town Guard*/
        fprintf(fp, "\n\n\n\nTown Guard Captain:\n");
        generate_character(10, 10, "0", "0", "0", "0");
        fprintf(fp, "%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. They are %s and %s, and idolize %s.\n\n", char_first_name, char_last_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_trait, char_flaw, char_goal);
        
        int lieutenant_number;
        switch(town_size){
            case 0:
                lieutenant_number = 1;
                break;
            case 1:
                lieutenant_number = rand() % 2 + 1;
                break;
            case 2:
                lieutenant_number = rand() % 4 + 2;
                break;
            default:
                printf("Town Guard Error: Town Size out of bounds");
                exit(0);
                break;
        } 
        
        fprintf(fp, "\n\nThe town has %d barracks.\n\n", lieutenant_number);
        int barrack_for_count;
        int guard_for_count;
        int guard_number;
        for(barrack_for_count = 1; barrack_for_count <= lieutenant_number; ++barrack_for_count){
            fprintf(fp, "\n\nBarrack Lieutenant:\n");
            generate_character(10, 10, "0", "0", "0", "0");
            fprintf(fp, "%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. They are %s and %s, and idolize %s.\n\n\n", char_first_name, char_last_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_trait, char_flaw, char_goal);
            guard_number = rand() % 10 + 10;
            fprintf(fp, "Subordinate Guards:\n");
            for(guard_for_count = 1; guard_for_count <= guard_number; ++guard_for_count){
                generate_character(10, 10, "0", "0", "0", "0");
                fprintf(fp, "%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. They are %s and %s, and idolize %s.\n", char_first_name, char_last_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_trait, char_flaw, char_goal);
            }
        }

        /*Mandatory Inn*/
        int inn_name_roll = rand() % 100;
        fprintf(fp, "\n\n\n\nThe Town has an Inn. It is called %s\n", inn_names_array[inn_name_roll]);
        fprintf(fp, "Owner:\n");
        generate_character(10, 10, "0", "0", "0", "0");
        fprintf(fp, "%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. They are %s and %s, and idolize %s.\n\n", char_first_name, char_last_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_trait, char_flaw, char_goal);
        fprintf(fp, "Cook:\n");
        generate_character(10, 10, "0", "0", "0", "0");
        fprintf(fp, "%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. They are %s and %s, and idolize %s.\n\n", char_first_name, char_last_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_trait, char_flaw, char_goal);
        fprintf(fp, "Bartender:\n");
        generate_character(10, 10, "0", "0", "0", "0");
        fprintf(fp, "%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. They are %s and %s, and idolize %s.\n\n", char_first_name, char_last_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_trait, char_flaw, char_goal);
        fprintf(fp, "Server:\n");
        generate_character(10, 10, "0", "0", "0", "0");
        fprintf(fp, "%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. They are %s and %s, and idolize %s.\n\n", char_first_name, char_last_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_trait, char_flaw, char_goal);


        /*Points of Interest*/
        int poi_number;
        switch(town_size){
            case 0:
                poi_number = rand() % 2 + 1;
                break;
            case 1:
                poi_number = rand() % 4 + 2;
                break;
            case 2:
                poi_number = rand() % 6 + 3;
                break;
            default:
                printf("POI Generation Error: town_size is out of bounds");
                exit(0);
                break;
        } 

        int poi_count;
        int poi_type_roll;
        int shop_roll;
        int artisan_roll;
        int god_roll;
        int guild_roll;
        int misc_roll;
        int guild_for_count;
        int guild_member_number;
        for(poi_count = 1; poi_count <= poi_number; ++poi_count){
            if(poi_count == 1){
                poi_type_roll = rand() % 2;
                if(poi_type_roll == 0){
                    shop_roll = rand() % 32;
                    fprintf(fp, "\n\n\n\n\nThe town has a %s Shop.\n\n", ts_struct[shop_roll].shop);
                    fprintf(fp, "Shop Owner:\n");
                    generate_character(10, 10, "0", "0", "0", "0");
                    fprintf(fp, "%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. They are %s and %s, and idolize %s.\n\n", char_first_name, char_last_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_trait, char_flaw, char_goal);
                    fprintf(fp, "Shop Worker:\n");
                    generate_character(10, 10, "0", "0", "0", "0");
                    fprintf(fp, "%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. They are %s and %s, and idolize %s.\n\n", char_first_name, char_last_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_trait, char_flaw, char_goal);
                } else if(poi_type_roll == 1){
                    artisan_roll = rand() % 32;
                    fprintf(fp, "\n\n\n\n\nThe town has a %s.\n\n", ts_struct[artisan_roll].artisan);
                    generate_character(10, 10, "0", "0", "0", "0");
                    fprintf(fp, "%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. They are %s and %s, and idolize %s.\n\n", char_first_name, char_last_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_trait, char_flaw, char_goal);

                } else{
                    printf("POI Generation Error: First POI type roll is out of bounds");
                    exit(0);
                }
            } else{
                poi_type_roll = rand() % 6;
                switch(poi_type_roll){
                    case 0:
                        inn_name_roll = rand() % 100;
                        fprintf(fp, "\n\n\n\nThe Town has an Inn. It is called %s\n", inn_names_array[inn_name_roll]);
                        fprintf(fp, "Owner:\n");
                        generate_character(10, 10, "0", "0", "0", "0");
                        fprintf(fp, "%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. They are %s and %s, and idolize %s.\n\n", char_first_name, char_last_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_trait, char_flaw, char_goal);
                        fprintf(fp, "Cook:\n");
                        generate_character(10, 10, "0", "0", "0", "0");
                        fprintf(fp, "%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. They are %s and %s, and idolize %s.\n\n", char_first_name, char_last_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_trait, char_flaw, char_goal);
                        fprintf(fp, "Bartender:\n");
                        generate_character(10, 10, "0", "0", "0", "0");
                        fprintf(fp, "%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. They are %s and %s, and idolize %s.\n\n", char_first_name, char_last_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_trait, char_flaw, char_goal);
                        fprintf(fp, "Server:\n");
                        generate_character(10, 10, "0", "0", "0", "0");
                        fprintf(fp, "%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. They are %s and %s, and idolize %s.\n\n", char_first_name, char_last_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_trait, char_flaw, char_goal); 
                        break;
                    case 1:
                        shop_roll = rand() % 32;
                        fprintf(fp, "\n\n\n\n\nThe town has a %s Shop.\n\n", ts_struct[shop_roll].shop);
                        fprintf(fp, "Shop Owner:\n");
                        generate_character(10, 10, "0", "0", "0", "0");
                        fprintf(fp, "%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. They are %s and %s, and idolize %s.\n\n", char_first_name, char_last_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_trait, char_flaw, char_goal);
                        fprintf(fp, "Shop Worker:\n");
                        generate_character(10, 10, "0", "0", "0", "0");
                        fprintf(fp, "%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. They are %s and %s, and idolize %s.\n\n", char_first_name, char_last_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_trait, char_flaw, char_goal);   
                        break;
                    case 2:
                        artisan_roll = rand() % 32;
                        fprintf(fp, "\n\n\n\n\nThe town has a %s.\n\n", ts_struct[artisan_roll].artisan);
                        generate_character(10, 10, "0", "0", "0", "0");
                        fprintf(fp, "%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. They are %s and %s, and idolize %s.\n\n", char_first_name, char_last_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_trait, char_flaw, char_goal);   
                        break;
                    case 3:
                        god_roll = rand() % 32;
                        fprintf(fp, "\n\n\n\nThe town has a church dedicated to %s\n\n", ts_struct[god_roll].god);
                        fprintf(fp, "Priest:\n");
                        generate_character(10, 10, "0", "0", "0", "0");
                        fprintf(fp, "%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. They are %s and %s, and idolize %s.\n\n", char_first_name, char_last_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_trait, char_flaw, char_goal);    
                        break;
                    case 4:
                        guild_roll = rand() % 32;
                        fprintf(fp, "\n\n\n\nThe town has a branch of the %s guild\n\n", ts_struct[guild_roll].guild);
                        fprintf(fp, "Guildmaster:\n");
                        generate_character(10, 10, "0", "0", "0", "0");
                        fprintf(fp, "%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. They are %s and %s, and idolize %s.\n\n", char_first_name, char_last_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_trait, char_flaw, char_goal);
                        guild_member_number = rand() % 11 + 5;
                        fprintf(fp, "Guild Members:\n\n");
                        for(guild_for_count = 1; guild_for_count <= guild_member_number; ++guild_for_count){
                            generate_character(10, 10, "0", "0", "0", "0");
                            fprintf(fp, "%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. They are %s and %s, and idolize %s.\n", char_first_name, char_last_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_trait, char_flaw, char_goal);
                        } break;
                    case 5:
                        misc_roll = rand() % 32;
                        fprintf(fp, "\n\n\n\nThe town has a %s.\n\n", ts_struct[misc_roll].poi);
                        fprintf(fp, "Owner/Operator:\n");
                        generate_character(10, 10, "0", "0", "0", "0");
                        fprintf(fp, "%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. They are %s and %s, and idolize %s.\n\n", char_first_name, char_last_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_trait, char_flaw, char_goal);
                        break;
                    default:
                        printf("POI Generation Error: poi_type_roll is out of bounds");
                        exit(0);
                        break;
                }
            }
        }

        /*Populating the Town*/
        int number_of_households;
        int household_count;
        int house_roll;
        switch(town_size){
            case 0:
                number_of_households = rand() % 11 + 5;
                break;
            case 1:
                number_of_households = rand() % 16 + 15;
                break;
            case 2:
                number_of_households = rand() % 26 + 25;
            default:
                number_of_households = rand() % 26 + 25;
                break;
        } fprintf(fp, "\n\n\n\n\n\n\n\n\n\nHouseholds:\n\n");
        for(household_count = 1; household_count <= number_of_households; ++household_count){
            house_roll = rand() % 4;
            fprintf(fp, "\n\n\nHouse %d Occupants:", household_count);
            if(house_roll == 0){
                generate_character(10, 10, "0", "0", "0", "0");
                fprintf(fp, "\n%s %s: Adult %s %s. %s and %s with %s skin and %s hair, wearing %s clothes. They are %s and %s, and idolize %s.\n\n", char_first_name, char_last_name, char_gender, char_race, char_height, char_build, char_skin_color, char_hair_color, char_attire, char_trait, char_flaw, char_goal);
            } else{
                generate_family();
            }
        }
        
        fprintf(fp, "\n\n\n\n\nTotal Population: %d", population);


        printf("Finished.");
        fclose(fp);
        printf("\nEnter Town Name (Press 0 to quit): ");
        scanf("%s", &town_name);
    }
    return 0;
}

