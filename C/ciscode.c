// Write your boilerplate code here...
#include <stdio.h>
#include <stdlib.h>

#define SIZE_TC 10

typedef int ent_code;
typedef int tc_tl_code;

typedef struct node
{
    ent_code id;
    struct node* link;
}entity, *timeline;

typedef timeline *timeline_cluster;


//helper functions to use
timeline_cluster tc_create(); /*NOTE: each timeline in the returned cluster is already NULL*/
entity* ent_create(ent_code id); /*NOTE: link of the returned entity is a garbage value*/

void tc_readout(timeline_cluster tc);

//create the definition only for the following, do not change anything else
tc_tl_code eve_key_anti(ent_code id);

void tc_ent_seed_key_anti(timeline_cluster tc, ent_code id);

timeline_cluster tc_create_key_anti(timeline_cluster tc);

//DO NOT USE
void tc_test_eve_seed(timeline_cluster tc, int size);
void tc_destroy(timeline_cluster tl);


int main()
{
    int eventSeed;
    printf("Enter timeline cluster to test: ");
    scanf("%d", &eventSeed);
    srand(eventSeed);

    timeline_cluster test = tc_create();
    tc_test_eve_seed(test, 100);
    timeline_cluster testAnti = tc_create_key_anti(test);

    printf("\n\n--Test Results--\n");
    printf("\n--Key Event Test Cluster--\n");
    tc_readout(test);
    printf("\n--Anti-key Event Cluster--\n");
    tc_readout(testAnti);

    tc_destroy(test);
    tc_destroy(testAnti);
    return 0;
}


//helper functions to use
timeline_cluster tc_create() {return (timeline_cluster)calloc(SIZE_TC, sizeof(timeline));}
entity* ent_create(ent_code id)
{
    entity* newEnt = (entity*)malloc(sizeof(entity));
    newEnt->id = id;
    return newEnt;
}
void tc_readout(timeline_cluster tc)
{
    printf("\nTimeline Cluster Readout:\n");
    for(int tl = 0; tl < SIZE_TC; tl++)
    {
        printf("Timeline %d: ", tl);
        for(timeline tl_read = tc[tl]; tl_read != NULL; tl_read = tl_read->link)
        {
            printf("%d",tl_read->id);
            if(tl_read->link != NULL) {printf(", ");}
        }printf("\n");
    }
}

//create the definition only for the following, do not change anything else
tc_tl_code eve_key_anti(ent_code id) 
{

}
void tc_ent_seed_key_anti(timeline_cluster tc, ent_code id)
{

}
timeline_cluster tc_create_key_anti(timeline_cluster tc)
{
    
}


//DO NOT USE
void tc_test_eve_seed(timeline_cluster tc, int numEnts)
{
    for(int i = 1; i <= numEnts; i++)
    {
        tc_tl_code newTlCode = (i % 2) ? i % 10: rand() % 10;

        entity* newEnt = ent_create(i);
        newEnt->link = tc[newTlCode];
        tc[newTlCode] = newEnt;
    }
}
void tc_destroy(timeline_cluster tc)
{
    for(int tl = 0; tl < SIZE_TC; tl++)
    {
        timeline del;

        while(tc[tl] != NULL)
        {
            del = tc[tl];
            tc[tl] = tc[tl]->link;
            free(del);
        }
    }
    free(tc);
}