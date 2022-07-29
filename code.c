node*common(node*n1,node*n2){
    node*n3=NULL;
    while(n1!=NULL && n2!=NULL){
        if(n1->data>n2->data)
        n2=n2->next;
        else if(n1->data<n2->data)
        n1=n1->next;
        else{
            addend(&n3,n1->data);
            n1=n1->next;
            n2=n2->next;
        }
    }
    while(n1!=NULL){
        addend(&n3,n1->data);
        n1=n1->next;
    }
    while(n2!=NULL{
        addend(&n3,n2->data);
        n2=n2->next;
    }
    return n3;
}
