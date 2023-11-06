import java.io.File;
import java.io.IOException;
import java.awt.image.BufferedImage;
import javax.imageio.ImageIO;

public class ReadAndWriteAnImage{
    public static void main(String[] args) throws IOException{
        BufferedImage image = null;
        File f = null;
        try{
            f = new File("C:\\Users\\clyde\\OneDrive\\Documents\\Visual Studio Code\\4th_Year\\Java\\Experiments(ImageProcessing)\\Expt1(Read&Write)\\Pangong_Lake.jpeg");
            image = ImageIO.read(f);
        }
        catch(IOException e){
            System.out.println("Error: "+e);
        }
        try{
            f = new File("C:\\Users\\clyde\\OneDrive\\Documents\\Visual Studio Code\\4th_Year\\Java\\Experiments(ImageProcessing)\\Expt1(Read&Write)\\newPangong_Lake.jpeg");
            ImageIO.write(image,"jpeg",f);
        }
        catch(IOException e){
            System.out.println("Error: "+e);
        }
    }
}