public class hello{
    static {
        System.loadLibrary("JNI");
    }


    native void print();
    public static void main(String[] arg) {
        System.out.println("hello java");
    }
}