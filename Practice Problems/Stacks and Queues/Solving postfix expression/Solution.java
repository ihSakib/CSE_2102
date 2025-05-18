import java.util.Stack;

public class Solution {
  public int eval(Stack<Integer> s, String sign) {
    int op2 = s.pop();
    int op1 = s.pop();

    switch (sign) {
      case "+":
        return op1 + op2;
      case "-":
        return op1 - op2;
      case "*":
        return op1 * op2;
      case "/":
        return op1 / op2;
    }

    return 0;
  }

  public int evalRPN(String[] tokens) {
    int len = tokens.length;
    Stack<Integer> s = new Stack<>();

    for (int i = 0; i < len; i++) {
      String ch = tokens[i];
      if (ch.equals("+") || ch.equals("-") || ch.equals("*") || ch.equals("/")) {
        int value = eval(s, ch);
        s.push(value);
      } else {
        s.push(Integer.parseInt(ch));
      }
    }

    return s.pop();
  }

  public static void main(String[] args) {
    Solution s = new Solution();

    String[] rpn = { "10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+" };

    int result = s.evalRPN(rpn);
    System.out.println(result);
  }
}
