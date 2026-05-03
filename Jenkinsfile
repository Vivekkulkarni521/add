class Addition {
    int add(int a, int b) {
        return a + b
    }

    int add(int a, int b, int c) {
        return a + b + c
    }
}

pipeline {
    agent any

    stages {
        stage('Addition Test') {
            steps {
                script {
                    def obj = new Addition()

                    echo "2 + 3 = ${obj.add(2, 3)}"
                    echo "2 + 3 + 4 = ${obj.add(2, 3, 4)}"
                }
            }
        }
    }
}
