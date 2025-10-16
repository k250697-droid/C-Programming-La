#include &lt;stdio.h&gt;
int main(){
int num1;
int num2;
int large;

char ans;
int small;
printf(&quot;enter a number: &quot;);
scanf(&quot;%d&quot;,&amp;num1);
large=small=num1;
do{
printf(&quot;enter a number: &quot;);
scanf(&quot;%d&quot;,&amp;num2);
if (num2&gt;large){
large=num2;}
else if (num2&lt;small){
small=num2;
}
printf(&quot;Do you want to continue? (Y/N): &quot;);
scanf(&quot; %c&quot;,&amp;ans);
}while (ans==&#39;Y&#39; || ans==&#39;y&#39;);
printf(&quot;The largest number entered: %d\n&quot;,large);
printf (&quot;The smallest number entered: %d&quot;,small);
}
