import java.awt.image.BufferedImage; 
import java.io.File; 
import java.io.IOException; 
import javax.imageio.ImageIO; 
  
public class NegativeImage { 
    public static void main(String args[]) throws IOException { 
        BufferedImage img = null; 
        File f = null; 
        try { 
            f = new File("C:\\Users\\clyde\\OneDrive\\Documents\\Visual Studio Code\\4th_Year\\Java\\Experiments(ImageProcessing)\\Expt1(Read&Write)\\Pangong_Lake.jpeg"); 
            img = ImageIO.read(f); 
        } 
        catch (IOException e) { 
            System.out.println(e); 
        } 
        int width = img.getWidth(); 
        int height = img.getHeight(); 
        for (int y = 0; y < height; y++) { 
            for (int x = 0; x < width; x++) { 
                int p = img.getRGB(x, y); 
                int a = (p >> 24) & 0xff; 
                int r = (p >> 16) & 0xff; 
                int g = (p >> 8) & 0xff; 
                int b = p & 0xff; 
                r = 255 - r; 
                g = 255 - g; 
                b = 255 - b; 
                p = (a << 24) | (r << 16) | (g << 8) | b; 
                img.setRGB(x, y, p); 
            } 
        } 
        try { 
            f = new File("C:\\Users\\clyde\\OneDrive\\Documents\\Visual Studio Code\\4th_Year\\Java\\Experiments(ImageProcessing)\\Expt5(NegativeImage)\\NegativePangong_Lake.jpeg"); 
            ImageIO.write(img, "jpeg", f); 
        } 
        catch (IOException e) { 
            System.out.println(e); 
        } 
    } 
}