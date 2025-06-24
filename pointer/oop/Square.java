public class Square implements Shape {
    double side;
    public double area() { return side * side; }
    public double perimeter() { return 4 * side; }
}