class ListNode {
  int val;
  ListNode next;

  ListNode() {
  }

  ListNode(int val) {
    this.val = val;
  }

  ListNode(int val, ListNode next) {
    this.val = val;
    this.next = next;
  }
};

public class Solution {
  public static ListNode addTwoNumbers(ListNode l1, ListNode l2) {
    int carry = 0;
    ListNode head = new ListNode(0);
    ListNode current = head;

    while (l1 != null || l2 != null || carry != 0) {
      int val1 = (l1 != null) ? l1.val : 0;
      int val2 = (l2 != null) ? l2.val : 0;

      int sum = val1 + val2 + carry;
      int digit = sum % 10;
      carry = sum / 10;

      ListNode nn = new ListNode(digit);

      current.next = nn;
      current = nn;

      if (l1 != null)
        l1 = l1.next;
      if (l2 != null)
        l2 = l2.next;
    }

    return head.next;
  }

  public static void create_node(ListNode head, int val) {

    ListNode temp = head;
    ListNode new_node = new ListNode(val);

    while (temp.next != null) {
      temp = temp.next;
    }

    temp.next = new_node;

  }

  public static void main(String[] args) {
    ListNode l1 = new ListNode(2);
    ListNode l2 = new ListNode(5);

    create_node(l1, 4);
    create_node(l1, 3);

    create_node(l2, 6);
    create_node(l2, 4);

    ListNode result = addTwoNumbers(l1, l2);

    while (result != null) {
      System.out.print(result.val + " -> ");
      result = result.next;
    }

    System.out.println("null");

  }
}