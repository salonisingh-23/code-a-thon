// class Solution {
// public:
//     int evalRPN(vector<string>& tokens) {
//         stack<int> s;
//         for(auto& t:tokens)
//             if(t=="+"||t=="-"||t=="*"||t=="/"){
//                 int op1=s.top(); s.pop();
//                 int op2=s.top(); s.pop();
//                 if(t=="+") s.push(op2+op1);
//                 if(t=="-") s.push(op2-op1);
//                 if(t=="/") s.push(op2/op1);
//                 if(t=="*") s.push(op2*op1);
            
//             }
//         else s.push(stoi(t));
//         return s.top();
//     }
// };
class Solution {
public:
//     int evalRPN(vector<string>& tokens) {
//         stack<int> s;
//         for(int i=0;i<tokens.size();i++){
//             if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
//                 int a = s.top();
//                 s.pop();
//                 int b = s.top();
//                 s.pop();
//                 int res;
//                 if(tokens[i] == "+"){
//                     s.push(a+b);
//                 }
//                 else if(tokens[i] == "-"){
//                     s.push(b-a);
//                 }
//                 else if(tokens[i] == "*"){
//                     s.push(a*b);
//                 }
//                 else if(tokens[i] == "/"){
//                     s.push(b/a);
//                 }
//             }
//             else
//                 s.push(stoi(tokens[i]));
//         }
//         return s.top();
//     }
// };
    int evalRPN(vector<string>& tokens) {
	stack<long long int> s;
	for(auto& t : tokens) 
		if(t == "+" || t == "-" || t == "*" || t == "/") {
			long long int op1 = s.top(); s.pop();
			long long int op2 = s.top(); s.pop();
			if(t == "+") s.push(op2 + op1);
			if(t == "-") s.push(op2 - op1);
			if(t == "/") s.push(op2 / op1);
			if(t == "*") s.push(op2 * op1);   
			// s.push(op1);
		}
		else s.push(stoi(t));    // stoi - converts from string to int     
	return s.top(); 
}
};