import java.util.ArrayList;
import java.util.List;
import java.util.Random;

class Parrot{
    private List<String> phrases;
    private int i;

    public Parrot(String phrase){
        phrases = new ArrayList<String>();
        phrases.add(phrase);
        i = 0;
    }

    public void rememberPhrase(String phrase){
        phrases.add(phrase);
    }

    public void changePhrase(int pos, String phrase){
        if (pos >= 0 && pos < phrases.size()){
            phrases.set(pos, phrase);
        }
    }

    public void say(){
        Random rand = new Random();
        System.out.println(++i + " " + phrases.get(rand.nextInt(phrases.size())));
    }
}

public class Main{
    public static void main(String[] args){
        Random rand = new Random(System.currentTimeMillis());

        Parrot parrot1 = new Parrot("czesc");
        parrot1.say();
        parrot1.say();
        parrot1.changePhrase(0, "hello");
        parrot1.say();
        parrot1.rememberPhrase("pryvit");
        parrot1.say();
        parrot1.say();
    }
}
