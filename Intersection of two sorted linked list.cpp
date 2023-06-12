


int countlength(Node* head) {
    int len = 0;
    while (head) {
        len++;
        head = head->next;
    }
    return len;
}

Node* findIntersection(Node* firstHead, Node* secondHead){
    int len1 = countlength(firstHead);
    int len2 = countlength(secondHead);

    while (len1 > len2) {
        firstHead = firstHead->next;
        len1--;
    }
    while (len2 > len1) {
        secondHead = secondHead->next;
        len2--;
    }

    while (firstHead && secondHead && firstHead != secondHead) {
        firstHead = firstHead->next;
        secondHead = secondHead->next;
    }

    if (!firstHead || !secondHead) {
        // No intersection point found
        return NULL;
    }

    return firstHead;
}
