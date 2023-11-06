/*package grayscalehistogram;
import org.jfree.chart.ChartFactory;
import org.jfree.chart.ChartPanel;
import org.jfree.chart.JFreeChart;
import org.jfree.chart.plot.PlotOrientation;
import org.jfree.data.category.DefaultCategoryDataset;

import javax.swing.*;
import java.awt.*;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;
import javax.imageio.ImageIO;

public class GrayscaleHistogram {
    public static void main(String[] args) {
        try {
            // Load the grayscale image
            File imageFile = new File("C:\\\\Users\\\\clyde\\\\OneDrive\\\\Documents\\\\Visual Studio Code\\\\4th_Year\\\\Java\\\\Experiments(ImageProcessing)\\\\Expt3(Grayscale)\\\\grayscalePangong_Lake.jpeg"); // Replace with your image file path
            BufferedImage image = ImageIO.read(imageFile);

            // Calculate the histogram
            int width = image.getWidth();
            int height = image.getHeight();
            int[] histogram = new int[256]; // Initialize a histogram array for 256 grayscale levels

            for (int y = 0; y < height; y++) {
                for (int x = 0; x < width; x++) {
                    int pixel = image.getRGB(x, y);
                    int grayValue = (pixel >> 16) & 0xFF; // Extract grayscale value
                    histogram[grayValue]++;
                }
            }

            // Create a dataset for the histogram
            DefaultCategoryDataset dataset = new DefaultCategoryDataset();
            for (int i = 0; i < 256; i++) {
                dataset.addValue(histogram[i], "Grayscale", String.valueOf(i));
            }

            // Create a histogram chart
            JFreeChart chart = ChartFactory.createBarChart(
                    "Grayscale Histogram",  // Chart title
                    "Pixel Value",          // X-axis label
                    "Frequency",            // Y-axis label
                    dataset,                // Dataset
                    PlotOrientation.VERTICAL,
                    false, true, false);

            // Create a chart panel and display it
            ChartPanel chartPanel = new ChartPanel(chart);
            chartPanel.setPreferredSize(new Dimension(800, 600)); // Set preferred size
            JFrame frame = new JFrame("Grayscale Histogram");
            frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            frame.getContentPane().add(chartPanel);
            frame.pack();
            frame.setVisible(true);

        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}*/