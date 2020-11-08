
// Hw1_P46061275_村马美_v1Dlg.cpp : 龟郎
//

#include "stdafx.h"
#include "Hw1_P46061275_村马美_v1.h"
#include "Hw1_P46061275_村马美_v1Dlg.h"
#include <opencv2\opencv.hpp>
#include <io.h>
#include <fcntl.h>
#include <cmath>
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif	

using namespace cv;
using namespace std;

// 癸 App About ㄏノ CAboutDlg 癸杠よ遏

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 癸杠よ遏戈
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV や穿

// 祘Α絏龟
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CHw1_P46061275_村马美_v1Dlg 癸杠よ遏



CHw1_P46061275_村马美_v1Dlg::CHw1_P46061275_村马美_v1Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_HW1_P46061275__V1_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CHw1_P46061275_村马美_v1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CHw1_P46061275_村马美_v1Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CHw1_P46061275_村马美_v1Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CHw1_P46061275_村马美_v1Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CHw1_P46061275_村马美_v1Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CHw1_P46061275_村马美_v1Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CHw1_P46061275_村马美_v1Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CHw1_P46061275_村马美_v1Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CHw1_P46061275_村马美_v1Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CHw1_P46061275_村马美_v1Dlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CHw1_P46061275_村马美_v1Dlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CHw1_P46061275_村马美_v1Dlg::OnBnClickedButton10)
END_MESSAGE_MAP()


// CHw1_P46061275_村马美_v1Dlg 癟矪瞶盽Α

BOOL CHw1_P46061275_村马美_v1Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 盢 [闽...] ╰参

	// IDM_ABOUTBOX ゲ斗╰参㏑絛瞅ぇい
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 砞﹚癸杠よ遏瓜ボ讽莱ノ祘Α跌怠ぃ琌癸杠よ遏
	// 琜穦笆眖ㄆ穨
	SetIcon(m_hIcon, TRUE);			// 砞﹚瓜ボ
	SetIcon(m_hIcon, FALSE);		// 砞﹚瓜ボ
			
									
	// TODO: 肂﹍砞﹚
	AllocConsole ();
	FILE* pf;
	freopen_s (&pf,"CONOUT$", "w", stdout);


	return TRUE;  // 肚 TRUE埃獶眤癸北兜砞﹚礘翴
}

void CHw1_P46061275_村马美_v1Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 狦盢程て秙眤癸杠よ遏眤惠璶祘Α絏
// 獽酶籹瓜ボ癸ㄏノゅン/浪跌家Α MFC 莱ノ祘Α
// 琜穦笆ЧΘ穨

void CHw1_P46061275_村马美_v1Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 酶籹杆竚ず甧

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 盢瓜ボ竚いノめ狠痻
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 磞酶瓜ボ
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// 讽ㄏノ╈Σ程て跌怠
// ╰参㊣硂眔村夹陪ボ
HCURSOR CHw1_P46061275_村马美_v1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CHw1_P46061275_村马美_v1Dlg::OnBnClickedButton1()
{

	Mat dog = imread("dog.bmp", 1);
	if (dog.empty()) {
		cout<<"error"<<endl;
		system("pause");
	}
	cout << "Width = " << dog.cols << endl;
	cout << "Height = " << dog.rows << endl;
	namedWindow("1.1", WINDOW_AUTOSIZE);
	imshow("1.1", dog);
	waitKey(0);

	destroyWindow("1.1");

	// TODO: 北兜矪瞶盽Α祘Α絏
}


void CHw1_P46061275_村马美_v1Dlg::OnBnClickedButton2()
{

	Mat colorBGR = imread("color.png", -1);
	if (colorBGR.empty()) {
		cout << "error" << endl;
		system("pause");
	}
	Mat colorRBG = colorBGR.clone();
	int temp;
	for (int i = 0; i < colorRBG.rows; i++) {
		for (int j = 0; j < colorRBG.cols;j++) {
			temp = colorRBG.at<Vec3b>(i, j)[0];
			colorRBG.at<Vec3b>(i, j)[0] = colorRBG.at<Vec3b>(i, j)[1];
			colorRBG.at<Vec3b>(i, j)[1] = colorRBG.at<Vec3b>(i, j)[2];
			colorRBG.at<Vec3b>(i, j)[2] = temp;
		}
	}
	
	namedWindow("1.2", WINDOW_AUTOSIZE);
	imshow("1.2", colorBGR);
	namedWindow("1.2^^", WINDOW_AUTOSIZE);
	imshow("1.2^^", colorRBG);
	waitKey(0);

	destroyWindow("1.2");
	destroyWindow("1.2^^");
	// TODO: 北兜矪瞶盽Α祘Α絏
}


void CHw1_P46061275_村马美_v1Dlg::OnBnClickedButton3()
{
	Mat doggie = imread("dog.bmp", -1);
	if (doggie.empty()) {
		cout << "error" << endl;
		system("pasue");
	}
	Mat doggie_inv(doggie.rows, doggie.cols, CV_8UC3);

	for (int i = 0;i < doggie.rows;i++) {
		for (int j = 0;j < doggie.cols;j++) {
			for (int k = 0;k < 3;k++) {
				doggie_inv.at<Vec3b>(i,doggie.cols-j-1)[k] = doggie.at<Vec3b>(i, j)[k];
			}
		}
	}
	imwrite("dog_inv.bmp",doggie_inv);
	namedWindow("1.3", WINDOW_AUTOSIZE);
	imshow("1.3", doggie);
	namedWindow("1.3_inverse", WINDOW_AUTOSIZE);
	imshow("1.3_inverse", doggie_inv);
	waitKey(0);

	destroyWindow("1.3");
	destroyWindow("1.3_inverse");


	// TODO: 北兜矪瞶盽Α祘Α絏
}

int barvalue;
Mat dogg, dogg_inv;

void trackbar(int, void*) {
	double normal = (barvalue / 100.0);
	double inverse = (1.0 - normal);
	Mat dst;

	addWeighted(dogg, normal, dogg_inv, inverse,0, dst);
	imshow("1.4", dst);
}

void CHw1_P46061275_村马美_v1Dlg::OnBnClickedButton4()
{
	dogg = imread("dog.bmp", -1);
	if (dogg.empty()) {
		cout << "error" << endl;
		system("pasue");
	}
	dogg_inv = imread("dog_inv.bmp", -1);
	if (dogg_inv.empty()) {
		cout << "error" << endl;
		system("pause");
	}
	barvalue = 0;
	int Maxbarvalue = 100.0;

	namedWindow("1.4", WINDOW_AUTOSIZE);
	createTrackbar("BLEND", "1.4", &barvalue, Maxbarvalue, trackbar);
	trackbar(barvalue, 0);
	// TODO: 北兜矪瞶盽Α祘Α絏
}

Mat eye, eye_gray,eye_smooth, eye_edge;

void CHw1_P46061275_村马美_v1Dlg::OnBnClickedButton5()
{
	eye = imread("eye.jpg", -1);
	if (eye.empty()) {
		cout << "error" << endl;
		system("pause");
	}
	cvtColor(eye, eye_gray, CV_BGR2GRAY);
	GaussianBlur(eye_gray, eye_smooth, Size(5, 5), 0, 0);
	Canny(eye_smooth, eye_edge, 60, 150, 3);
	//Canny(eye_gray, eye_gray, 75, 200, 3);
	//namedWindow("eye_gray", WINDOW_AUTOSIZE);
	//imshow("eye_gray", eye_gray);
	namedWindow("eye_smooth", WINDOW_AUTOSIZE);
	imshow("eye_smooth", eye_smooth);
	namedWindow("Canny_edge", WINDOW_AUTOSIZE);
	imshow("Canny_edge", eye_edge);
	waitKey(0);
	//destroyWindow("eye_gray");
	destroyWindow("eye_smooth");
	destroyWindow("Canny_edge");

	// TODO: 北兜矪瞶盽Α祘Α絏
}


void CHw1_P46061275_村马美_v1Dlg::OnBnClickedButton6()
{
	if (eye_edge.empty()) {
		cout << "error" << endl;
		system("pause");
	}
	Mat eye_hough = eye_edge.clone();
	cvtColor(eye_hough, eye_hough, CV_GRAY2BGR);
	vector<Vec3f>circles;
	HoughCircles(eye_edge, circles, CV_HOUGH_GRADIENT, 2, eye_edge.cols/2);
	for (size_t i = 0; i < circles.size(); ++i) {
		circle(
			eye_hough,
			Point(cvRound(circles[i][0]), cvRound(circles[i][1])),
			cvRound(circles[i][2]),
			Scalar(0, 0, 255),
			2
			);
	}
	namedWindow("2.2 Hough circles", WINDOW_AUTOSIZE);
	imshow("2.2 Hough circles", eye_hough);
	waitKey(0);
	destroyWindow("2.2 Hough circles");

	// TODO: 北兜矪瞶盽Α祘Α絏
}


void CHw1_P46061275_村马美_v1Dlg::OnBnClickedButton7()
{
	Mat chessboard = imread("chessboard.bmp", -1);
	Mat chessboard_sobel_ver(chessboard.rows, chessboard.cols, CV_8UC1);
	Mat chessboard_sobel_hoz(chessboard.rows, chessboard.cols, CV_8UC1);
	Mat chessboard_sobel_final(chessboard.rows, chessboard.cols, CV_8UC1);
	if (chessboard.empty()) {
		cout << "error" << endl;
		system("pause");
	}
	cvtColor(chessboard,chessboard,CV_BGR2GRAY);
	for (int i = 1;i < chessboard.rows-1;i++) {
		for(int j = 1;j < chessboard.cols-1;j++){
			int A = chessboard.at<unsigned char>(i - 1, j - 1);
			int B = chessboard.at<unsigned char>(i - 1, j);
			int C = chessboard.at<unsigned char>(i - 1, j + 1);
			int D = chessboard.at<unsigned char>(i, j - 1);
			int E = chessboard.at<unsigned char>(i, j);
			int F = chessboard.at<unsigned char>(i, j + 1);
			int G = chessboard.at<unsigned char>(i + 1, j - 1);
			int H = chessboard.at<unsigned char>(i + 1, j);
			int I = chessboard.at<unsigned char>(i + 1, j + 1);
			
			int pixal_sum_hoz = -A - 2 * B - C + G + 2 * H + I;
			int pixal_sum_ver = -A - 2 * D - G + C + 2 * F + I;
			int hoz_abs = abs(pixal_sum_hoz);
			int ver_abs = abs(pixal_sum_ver);
			int mix = hoz_abs + ver_abs;
			

			if (pixal_sum_ver > 255 || pixal_sum_ver < -255) {
				chessboard_sobel_ver.at<unsigned char>(i,j) = 255;
			}
			else {
				chessboard_sobel_ver.at<unsigned char>(i,j) = 0;
			}
			if (pixal_sum_hoz > 255 || pixal_sum_hoz < -255) {
				chessboard_sobel_hoz.at<unsigned char>(i, j) = 255;
			}
			else {
				chessboard_sobel_hoz.at<unsigned char>(i, j) = 0;
			}
			if (mix > 255) {
				chessboard_sobel_final.at<unsigned char>(i, j) = 255;
			}
			else {
				chessboard_sobel_final.at<unsigned char>(i, j) = 0;
			}
		}
	}
	
	namedWindow("2.3", WINDOW_AUTOSIZE);
	imshow("2.3",chessboard);
	namedWindow("2.3 Vertical", WINDOW_AUTOSIZE);
	imshow("2.3 Vertical", chessboard_sobel_ver);
	namedWindow("2.3 Horizontal", WINDOW_AUTOSIZE);
	imshow("2.3 Horizontal", chessboard_sobel_hoz);
	namedWindow("2.3 final", WINDOW_AUTOSIZE);
	imshow("2.3 final", chessboard_sobel_final);
	waitKey(0);
	destroyWindow("2.3");
	destroyWindow("2.3 Vertical");
	destroyWindow("2.3 Horizontal");
	destroyWindow("2.3 final");
	// TODO: 北兜矪瞶盽Α祘Α絏
}
Point Click[3];
bool click_finish = true;
bool clickk = true;
int click_numbers;
void Kevin_mouse_callback(int event, int x, int y, int flags, void* param);

void CHw1_P46061275_村马美_v1Dlg::OnBnClickedButton8()
{
	Mat QRcode = imread("QrCode.jpg", -1);
	if (QRcode.empty()) {
		cout << "error" << endl;
		system("pause");
	}
	Mat QRcode_trans(450, 450, CV_8UC3);
	namedWindow("Mouseclick", WINDOW_AUTOSIZE);
	setMouseCallback("Mouseclick", Kevin_mouse_callback,NULL);
	while (click_finish == true) {

		if (clickk == true) {
			imshow("Mouseclick", QRcode);
		}
		if (clickk == false) {
			imshow("Mouseclick", QRcode);
			clickk = true;
			if (click_numbers == 4) {
				Point2f srcTri[]={
				Point2f(Click[0].x,Click[0].y),
				Point2f(Click[1].x,Click[1].y),
				Point2f(Click[2].x,Click[2].y),
				Point2f(Click[3].x,Click[3].y),
				};
				Point2f dstTri[]={
				Point2f(20, 20),
				Point2f(450, 20),
				Point2f(450,450),
				Point2f(20,450),
				};
				Mat warp_mat = getPerspectiveTransform(srcTri, dstTri);
				cout << "1" << endl;
				warpPerspective(QRcode,QRcode_trans,warp_mat,QRcode_trans.size());
				namedWindow("Final", WINDOW_AUTOSIZE);
				imshow("Final", QRcode_trans);
				
				click_finish = false;
			}
		
		}
		if (cvWaitKey(33) == 27) {
			break;
		}
	}
	waitKey(0);
	destroyWindow("Final");
	destroyWindow("Mouseclick");

	// TODO: 北兜矪瞶盽Α祘Α絏
}

void Kevin_mouse_callback(int event, int x, int y, int flags, void*param) {
	
		if (event == CV_EVENT_LBUTTONDOWN) {

			Click[click_numbers].x = x;
			Click[click_numbers].y = y;
			click_numbers++;
			clickk = false;
		}
	
}


void CHw1_P46061275_村马美_v1Dlg::OnBnClickedButton9()
{
	Mat shoes = imread("shoes.jpg", 0);
	if (shoes.empty()) {
		cout << "error" << endl;
		system("pause");
	}
	Mat shoes_threshold(shoes.rows, shoes.cols, shoes.type());
	threshold(shoes,shoes_threshold,120,255,THRESH_BINARY);
	namedWindow("shoes", 1);
	imshow("shoes", shoes);
	namedWindow("Global Threshold", 1);
	imshow("Global Threshold", shoes_threshold);

	waitKey(0);
	destroyWindow("shoes");
	destroyWindow("Global Threshold");

	// TODO: 北兜矪瞶盽Α祘Α絏
}


void CHw1_P46061275_村马美_v1Dlg::OnBnClickedButton10()
{
	Mat shoes = imread("shoes.jpg", 0);
	if (shoes.empty()) {
		cout << "error" << endl;
		system("pause");
	}
	Mat shoes_Localthreshold(shoes.rows, shoes.cols, shoes.type());
	Mat shoes_GaussianSmooth(shoes.rows, shoes.cols, shoes.type());
	Mat shoes_medianfilter(shoes.rows, shoes.cols, shoes.type());
	adaptiveThreshold(shoes, shoes_Localthreshold, 255,ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY,79,-35);
	GaussianBlur(shoes_Localthreshold, shoes_GaussianSmooth, Size(13, 13), 0, 0);
	medianBlur(shoes_GaussianSmooth, shoes_medianfilter,5);
	namedWindow("shoes", WINDOW_AUTOSIZE);
	imshow("shoes", shoes);
	namedWindow("Local threshold", WINDOW_AUTOSIZE);
	imshow("Local threshold", shoes_Localthreshold);
	namedWindow("Gaussian Smooth", WINDOW_AUTOSIZE);
	imshow("Gaussian Smooth", shoes_GaussianSmooth);
	namedWindow("medianfilter", WINDOW_AUTOSIZE);
	imshow("medianfilter", shoes_medianfilter);
	waitKey(0);
	destroyAllWindows();

	// TODO: 北兜矪瞶盽Α祘Α絏
}
