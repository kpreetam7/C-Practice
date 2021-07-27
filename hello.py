#input to  add two numbers
num1= input('enter first number\t')
num2= input('enter 2nd number\t')
#add two nos
sum = float(num1) + float(num2)
sub = float(num1) - float(num2)
mul = float(num1) * float(num2)
div = float(num1) // float(num2)

#display the sum
print('the sum of {0} and {1} is {2}'.format(num1, num2, sum))
print('the sub of {0} and {1} is {2}'.format(num1, num2, sub))
print('the mul of {0} and {1} is {2}'.format(num1, num2, mul))
print('the div of {0} and {1} is {2}'.format(num1, num2, div))