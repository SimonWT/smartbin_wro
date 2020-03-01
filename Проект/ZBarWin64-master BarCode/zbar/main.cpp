
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <zbar.h>
#include <iostream>
#include <iomanip>
#include <opencv2/core/core.hpp>
#include <fstream>
#include <cstring> 
#include <windows.h>


using namespace std;
using namespace cv;
using namespace zbar;




//int WINAPI WinMain(HINSTANCE hThisInstance, HINSTANCE hPrevInstance, LPSTR lpszArgs, int nWinMode, int argc, char **argv){
int main(int argc, char **argv) {
//int WinMain(HINSTANCE hThisInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow, int argc, char **argv){
	
    int cam_idx = 0;

    if (argc == 2) {
        cam_idx = atoi(argv[1]);
    }

    VideoCapture cap(0);

	
	cap.open("http://192.168.43.60:8080//video?vidscreen.mjpeg");


    if (!cap.isOpened()) {
        cerr << "Could not open camera." << endl;
        exit(EXIT_FAILURE);
    }
    cap.set(CV_CAP_PROP_FRAME_WIDTH, 640);
    cap.set(CV_CAP_PROP_FRAME_HEIGHT, 480);
	string res;
	int size;
    namedWindow("captured", CV_WINDOW_AUTOSIZE);
	
	
	
    // Сбор изображения
    ImageScanner scanner;
    
    // Конфигурация сбора
    scanner.set_config(ZBAR_NONE, ZBAR_CFG_ENABLE, 1);

	do{
        // Capture an OpenCV frame
        cv::Mat frame, frame_grayscale;
        cap >> frame;

        // Конвертирование в градации серого
        cvtColor(frame, frame_grayscale, CV_BGR2GRAY);

        // Обработка изображени
         int width = frame_grayscale.cols;
        int height = frame_grayscale.rows;
        uchar *raw = (uchar *)(frame_grayscale.data);

        // Wrap image data
        Image image(width, height, "Y800", raw, width * height);


		imshow("captured", frame);

  		

        // Сканироване
        int n = scanner.scan(image);
        scanner.scan(image);

        // Вывод результатов
        int counter = 0;
		res = " ";
		
        for (Image::SymbolIterator symbol = image.symbol_begin(); symbol != image.symbol_end(); ++symbol) {
            time_t now;
            tm *current;
            now = time(0);
            current = localtime(&now);

            //Вывод резульатов на экран
            cout    << "[" << current->tm_hour << ":" << current->tm_min << ":" << setw(2) << setfill('0') << current->tm_sec << "] " << counter << " "
                    << "decoded " << symbol->get_type_name()
                    << " symbol \"" << symbol->get_data() << '"' << endl;
			
			res = symbol->get_data();

		
			


            cout << "Location: (" << symbol->get_location_x(0) << "," << symbol->get_location_y(0) << ")" << endl;
            cout << "Size: " << symbol->get_location_size() << endl;
            
            // Выделение найденого изображеиея
            if (symbol->get_location_size() == 4) {
//                rectangle(frame, Rect(symbol->get_location_x(i), symbol->get_location_y(i), 10, 10), Scalar(0, 255, 0));
                line(frame, Point(symbol->get_location_x(0), symbol->get_location_y(0)), Point(symbol->get_location_x(1), symbol->get_location_y(1)), Scalar(0, 255, 0), 2, 8, 0);
                line(frame, Point(symbol->get_location_x(1), symbol->get_location_y(1)), Point(symbol->get_location_x(2), symbol->get_location_y(2)), Scalar(0, 255, 0), 2, 8, 0);
                line(frame, Point(symbol->get_location_x(2), symbol->get_location_y(2)), Point(symbol->get_location_x(3), symbol->get_location_y(3)), Scalar(0, 255, 0), 2, 8, 0);
                line(frame, Point(symbol->get_location_x(3), symbol->get_location_y(3)), Point(symbol->get_location_x(0), symbol->get_location_y(0)), Scalar(0, 255, 0), 2, 8, 0);
            }
            
            // Get points
          /* for (Symbol::PointIterator point = symbol.point_begin(); point != symbol.point_end(); ++point) {
                cout << point << endl;
            } */
            counter++;
        }
		size = res.length();
		//Запись в файл
		/*FILE *f;
		string a;
		f = fopen("1.txt", "w");
		ofstream fout("1.txt");
		fout << res;
		fclose(f); */

        // Show captured frame, now with overlays!
      imshow("captured", frame);
                                                                                                                                                          
        // clean up
        image.set_data(NULL, 0);

		if (res == " "){
		
			res = "0";
		}
        
		

      waitKey(50);

	   FILE *f;
	   string a;
	   f = fopen("C:\\ReturningFiles\\barcode-decoding.txt", "w");
	   ofstream fout("C:\\ReturningFiles\\barcode-decoding.txt");
	   fout << res;
	   fclose(f);

	} while(true);
		
	//cv::waitKey(4000);

	

	//cout << size;
   

    


	return 0;


}
