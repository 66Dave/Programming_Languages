


TowerPtr CreateTower(char deptName[]);


int i;

TowerPtr CreateTower(char deptName[]){


    TowerPtr newTower = malloc(sizeof(tower));
    strcpy(newTower->deptName, deptName);
    newTower->mageList = NULL;
    newTower->next = NULL;

    return newTower;

}

TowerPtr InitializeTower(){
    char names[7] = {"Red", "Orange", "Yellow", "Green", "Blue", "Indigo", "Violet"};
    TowerPtr Head = NULL;
    i = 0;
    while(i < 7){
        //create tower
        InsertTower(&Head,names[i]);
    }

}

void InsertTower(TowerPtr *head, char name){
    newTower = createTower(name);
    
    if((*head) == NULL){
        //empty insert immedietly
        (*head) = createTower;
    }else{    
        TowerPtr trav = (*head);
        for(;trav->next != NULL;trav = trav->next){
            //traverse to last
        }
        trav->next = newTower;


    }
}