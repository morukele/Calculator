#include <cstdio>

enum class Operation{
    Add,
    Subtract,
    Multiply,
    Divide,
    Test
};

struct Calculator{
    Calculator(Operation op){
        setOperation(op);
    }

    void setOperation(Operation op){
        operation = op;
    }

    int calculate(int a, int b){
        switch (operation) {
            case Operation::Add:{
                printf("The result of addition: %d\n", (a + b));
            }
                break;
            case Operation::Subtract:{
                printf("The result of subtraction: %d\n", (a - b));
            }
                break;
            case Operation::Multiply:{
                printf("The result of multiply: %d\n", (a * b));
            }
                break;
            case Operation::Divide:{
                printf("The result of division: %d\n", (a / b));
            }
                break;
            default:{
                printf("Unknown operation");
            }
        }
    }

private:
    Operation operation;
};

int main() {
    Calculator calculator{Operation::Add};
    calculator.calculate(20, 30);
    calculator.setOperation(Operation::Multiply);
    calculator.calculate(100, 20);
    return 0;
}
