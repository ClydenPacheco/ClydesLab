import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;
import javax.imageio.ImageIO;
public class ImageSharpening {
    public static BufferedImage computeSharpening(BufferedImage image,int[][]masked, int mrow, int mcol){
        int[][]mask = new int[mrow][mcol];
        for(int i=mrow-1,k=0;k<mrow;i--,k++){
            for(int j=mcol-1,l=0;l<mcol;j--,l++){
                mask[k][l]=masked[i][j];
            }
        }
        BufferedImage image1 = new BufferedImage(image.getWidth(),image.getHeight(),BufferedImage.TYPE_INT_RGB);
        for(int imgx=0;imgx<((image.getWidth())-2);imgx++){
            for(int imgy=0;imgy<((image.getHeight())-2);imgy++){
                int p=0,re=0,gr=0,bl=0,r=0,g=0,b=0;
                for(int maskx=0;maskx<mrow;maskx++){
                    for(int masky=0;masky<mcol;masky++){
                        p=image.getRGB(imgx+maskx,imgy+masky);
                        re+=((p>>16)&0xff)*mask[maskx][masky];
                        r=re/16;
                        gr+=((p>>8)&0xff)*mask[maskx][masky];
                        g=gr/16;
                        bl+=(p&0xff)*mask[maskx][masky];
                        b=bl/16;
                    }
                }
                if(r<0)
                    r=0;
                else if(r>255)
                    r=255;
                if(g<0)
                    g=0;
                else if(g>255)
                    g=255;
                if(b<0)
                    b=0;
                else if(b>255)
                    b=255;
                p=(r<<16)|(g<<8)|b;
                image1.setRGB(imgx+(mrow/2),imgy+(mcol/2),p);
            }
        }
        return image1;
    }
    public static void main(String[] args) throws IOException {
        BufferedImage img,img1;
        int[][]mask={{-2,-2,-2},{-2,32,-2},{-2,-2,-2}};
        File f=new File("C:\\\\Users\\\\clyde\\\\OneDrive\\\\Documents\\\\Visual Studio Code\\\\4th_Year\\\\Java\\\\Experiments(ImageProcessing)\\\\Expt4(ImageSharpening)\\\\Pangong_Lake.jpeg");
        img=ImageIO.read(f);
        img1=computeSharpening(img,mask,3,3);
        File o=new File("C:\\\\\\\\Users\\\\\\\\clyde\\\\\\\\OneDrive\\\\\\\\Documents\\\\\\\\Visual Studio Code\\\\\\\\4th_Year\\\\\\\\Java\\\\\\\\Experiments(ImageProcessing)\\\\\\\\Expt4(ImageSharpening)\\\\\\\\Sharpened_Pangong_Lake.jpeg");
        ImageIO.write(img1,"jpg",o);
    }
}
