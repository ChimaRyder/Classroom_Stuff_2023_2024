void addHead(int num) //#1
    {
        node* n = (node*) calloc(1, sizeof(node));
        n->elem = num;

        if (size == 0)
        {
            head = n;
            tail = n;
        } else
        {
            n->next = head;
            head = n;
        }
        size++;
    }

    void addTail(int num)
    {
        add(num);
    }
    
    int get(int pos) {		//#2

        node* curr = head;
        int count = 1;
        while (true)
        {
            if (count == pos)
            {
                return curr->elem;
            } else {
                curr = curr->next;
                count++;
            }
        }

        return 0;
    }
    
    int remove(int num) {	//#3
    	node* curr = head;
    	node* prev;
        int count = 1;
    	while (curr) {
    		if (curr->elem == num) {

                if (count == 1)
                {
                    head = curr->next;
                    free(curr);
                    size--;
                    return count;
                }
    			prev->next = curr->next;
                free(curr);
    			size--;
    			return count;
			}
			prev = curr;
			curr = curr->next;
			count++;
		}

        return -1;
	}

 	void addAt(int num, int pos) //#4
    {
        node* n = (node*) calloc(1, sizeof(node));
        n->elem = num;

        node* curr = head;
        node* prev;
        int count = 1;


        while (true)
        {
            if (pos > size)
            {
                add(num);
                return;
            }

            if (count == pos)
            {
                n->next = curr;
                prev->next = n;
                size++;

                if (count == 1)
                {
                    head = n;
                }

                return;
            }

            prev = curr;
            curr = curr->next;
            count++;
        }
    }

 	int removeAt(int pos) //#5
    {
        node* curr = head;
        node* prev;
        int count = 1, deleted_elem;

        while (true)
        {
            if (count == pos)
            {
                prev->next = curr->next;
                deleted_elem = curr->elem;

                if (count == 1)
                {
                    head = curr->next;
                }

                if (curr == tail)
                {
                    tail = prev;
                }

                free(curr);
                size--;
                return deleted_elem;
            }

            prev = curr;
            curr = curr->next;
            count++;
        }
    }
    
    int removeAll(int num) //#6
    {
        node* curr = head;
        node* prev;
        node* todelete;
        int count = 0;

        while (curr != NULL)
        {
            if (curr->elem == num)
            {
                prev->next = curr->next;

                if (curr == head)
                {
                    head = curr->next;
                }

                if (curr == tail)
                {
                    tail = prev;
                }

                todelete = curr;
                curr = curr->next;
                count++;
                size--;
                free(todelete);
            } else
            {
                prev = curr;
                curr = curr->next;
            }
        }

        return count;
    }
