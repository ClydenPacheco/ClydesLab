import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;
import javax.imageio.ImageIO;

public class HistogramOfImage {
    public static void main(String[] args) {
        try {
            // Load the image
            File imageFile = new File("C:\\\\Users\\\\clyde\\\\OneDrive\\\\Documents\\\\Visual Studio Code\\\\4th_Year\\\\Java\\\\Experiments(ImageProcessing)\\\\Expt3(Grayscale)\\\\grayscalePangong_Lake.jpeg"); // Replace with your image file path
            BufferedImage image = ImageIO.read(imageFile);

            // Calculate the histogram
            int width = image.getWidth();
            int height = image.getHeight();
            int[] histogram = new int[256]; // Initialize a histogram array for 256 grayscale levels

            for (int y = 0; y < height; y++) {
                for (int x = 0; x < width; x++) {
                    int pixel = image.getRGB(x, y);
                    int red = (pixel >> 16) & 0xFF; // Extract red component
                    histogram[red]++;
                }
            }

            // Print the histogram
            for (int i = 0; i < 256; i++) {
                System.out.println("Pixel value " + i + ": " + histogram[i]);
            }

        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
