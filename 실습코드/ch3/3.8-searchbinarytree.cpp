//같은 key가 존재하지 않을 때
//키들이 검색될 확률이 같을 때 O(lgn)
struct nodetype{
    keytype key;
    nodetype* left;
    nodetype* right;
};
typedef nodetype* node_pointer;

void search(node_pointer tree, keytype keyin, node_pointer& p)
{
    bool found;

    p = tree;
    found = false;
    while(!found)
        if(p->key == keyin)
            found = true;
        else if(keyin < p->key)
            p = p -> left;
        else
            p = p -> right;
}