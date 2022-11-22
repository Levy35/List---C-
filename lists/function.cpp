//PRINT LINKED LIST 
/*************************************************/
//SINGLE
class Node{
    public:
  int value;
  Node* next;
};
//main
{
Node* head;
Node* one = NULL;
Node* two = NULL;
Node* three = NULL;

one = new Node();
two = new Node();
three = new Node();

one->value = 1;
two->value = 2;
three->value = 3;

  one->next = two;
  two->next = three;
  three->next = four;

head = one;
  while (head != NULL) {
    cout << head->value << " ";
    head = head->next;

  }
}
/************************
 * PRINTLIST
 * *********************/
void printList(struct Node* node) {
  while (node != NULL) {
  cout << node->data << " ";
  node = node->next;
  }
   /*main 
   printList(head);*/
  
}
/***************************
 * REVERSE
 ***************************/
void PrintReverse(Node* head ){
    if(head == NULL)
    return;
    PrintReverse(head-> next);
  cout << head -> value << " ";

    /*main 
    PrintReverse(head)*/
}
/*************************
 * SEARCH 
 **************************/
void search(struct Node * head, int q){
    
    while (head != NULL) {
        
      while (head != NULL) {
         if ( head->data == q){
  cout << head->data << " is preset ";
  head = head->next;
         }
         head = head->next;
    
  }
  cout<<q<<" not present";
  }
    /*main
    cout<<search(head, #)*/
}
/*************************
 * INSERT AT THE FRONT  
 **************************/
void insertAttheFront(Node**head, int Value)
{

    Node * new_node = new Node();
    new_node-> value= Value;
    new_node->next = *head;
   *head = new_node;
   cout << new_node-> value;

    /*
    main
    intersetAttheFront(&head,#)*/
}
/*************************
 * INSERT AT THE END  
 **************************/
void insertAttheEnd(Node**head, int Value)
{
    
    Node* newNode = new Node();
    newNode->value=Value;
    newNode->next = NULL;
   
    if(*head==NULL)
    {
         *head =newNode;
        return;
    }
    Node * Last =*head;
    while(Last->next!=NULL)
    {
        Last = Last->next;
    }

    Last->next = newNode;
cout << newNode-> value ;
    /*main
    insertAttheEnd(&head,#)*/
}
/*************************
 * INSERT AT AFTER 
 **************************/
void insertAfter(Node * previous, int newValue)
{
    if(previous == NULL)
    {
        cout<<"snbn"<<endl;
        return;
    }
    
      Node * newNode = new Node();
      newNode->value =  newValue;
    
     newNode->next= previous->next;
    previous->next = newNode;
    cout << newNode->value << " ";
    /*
    main 
    insertAfter(head,-1)*/
}
/*************************
 * DELETE FIRST NODE
 **************************/
void deleteFirstNode(Node*&head)
{
    if(head==NULL)
    {
        return;
    }
   Node * temp = head;
   head = head ->next;
   delete temp;
   return;
   /*main
   deleteFirstNode(head)*/
}
/*************************
 * DELETE LAST NODE
 **************************/
void deleteLastNode(Node*&head)
{
  Node * prev = NULL;
  Node * temp = head;
  while(temp->next != NULL)
  {
      prev = temp;
      temp = temp->next;

  }
  delete temp;
  prev->next= NULL;
  return;
  /*
  main
  deleteLastNode(head)*/
}
/*************************
 * UDATE VALUE
 **************************/
void UpdateValue(Node * head, int value, int newValue)
{
  //  Node *temp = head;
    while(head!=NULL)
    {
        if(head->value == value)
        {
            head->value = newValue;

        }
 head= head->next;
    }
    return;
    /*main
    UpdateValue(head,#,#)*/
}
/*************************
 * SORT LIST
 **************************/
void sortLinkedList(struct Node** head_ref) {
  struct Node *current = *head_ref, *index = NULL;
  int temp;

  if (head_ref == NULL) {
  return;
  } else {
  while (current != NULL) {
    
    index = current->next;

    while (index != NULL) {
    if (current->data > index->data) {
      temp = current->data;
      current->data = index->data;
      index->data = temp;
    }
    index = index->next;
    }
    current = current->next;
  }
  }
  /*main
  sortlinklist(&head); 
  cout << "sorted list"*/
}
/*************************
 * TRAVERSE 
 **************************/
void traverse(struct Node* last) {
  struct Node* p;

  if (last == NULL) {
  cout << "The list is empty" << endl;
  return;
  }

  p = last->next;

  do {
  cout << p->data << " ";
  p = p->next;

  } while (p != last->next);
  /*main
  traverse(last);
  */
}
/*************************
 * PRINT ODD NUMBERS  
 **************************/
void displayOddData(struct Node* odd)
{
    
    node* odd = head;

    do
    {
        int tempData = odd->data;

        if (tempData % 2 == 1)
        {
            std::cout << "data: " << tempData << endl;
        }

        
        odd = odd->next;
    } while (odd != NULL);
    /*main
    displayOddData();
    */
}
/*************************
 * PRINT ODD NUMBERS  
 **************************/
void append(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    Node* last = *head_ref; /
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL) {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    new_node->prev = last;
    return;
    /*main
    append(&head, #)
    */
}
Node* createNode(int item)
{
    Node* nNode;

    nNode = (Node*)malloc(sizeof(Node));

    nNode->item = item;
    nNode->next = NULL;

    return nNode;
}
void printEvens(List* lp)
{
    Node* temp;

    temp = lp->head;

    while (temp != NULL) {
        if (temp->item % 2 == 0)
            printf("%d ", temp->item);

        temp = temp->next;
    }
}