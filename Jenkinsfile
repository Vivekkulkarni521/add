pipeline {
    agent any

    stages {
        stage('Addition Test') {
            steps {
                script {
                    // Define a class with overloaded methods
                    class Addition{
                        int add(int a, int b) {
                            return a + b
                        }

                        int add(int a, int b, int c) {
                            return a + b + c
                        }

                        double add(double a, double b) {
                            return a + b
                        }

                        double add(int a, double b) {
                            return a + b
                        }
                    }

                    def calc = new Calculator()

                    echo "Add 2 + 3 = ${calc.add(2, 3)}"
                    echo "Add 2 + 3 + 4 = ${calc.add(2, 3, 4)}"
                    echo "Add 2.5 + 3.5 = ${calc.add(2.5, 3.5)}"
                    echo "Add 5 + 2.5 = ${calc.add(5, 2.5)}"
                }
            }
        }
    }
}
