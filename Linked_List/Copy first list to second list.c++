static Node copyList(Node head) {
  // Write your code here
    if(head==null)
    {
        return null;
    }
    Node copy=new Node(head.data);
    Node temp=head.next,copytemp=copy;
    while(temp!=null)
    {
        copytemp.next = new Node(temp.data);
        copytemp = copytemp.next;
        temp = temp.next;
    }
  return copy;
}
