
// Hw2_P46061275_������Dlg.cpp : ��@��
//

#include "stdafx.h"
#include "Hw2_P46061275_������.h"
#include "Hw2_P46061275_������Dlg.h"
#include "afxdialogex.h"
#include <opencv2\opencv.hpp>
#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <cmath>
#include <iomanip>



#ifdef _DEBUG
#define new DEBUG_NEW
#endif

using namespace cv;
using namespace std;
// �� App About �ϥ� CAboutDlg ��ܤ��

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// ��ܤ�����
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �䴩

// �{���X��@
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


// CHw2_P46061275_������Dlg ��ܤ��



CHw2_P46061275_������Dlg::CHw2_P46061275_������Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_HW2_P46061275__DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CHw2_P46061275_������Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CHw2_P46061275_������Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON2, &CHw2_P46061275_������Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &CHw2_P46061275_������Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON3, &CHw2_P46061275_������Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CHw2_P46061275_������Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CHw2_P46061275_������Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CHw2_P46061275_������Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CHw2_P46061275_������Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CHw2_P46061275_������Dlg::OnBnClickedButton8)
END_MESSAGE_MAP()


// CHw2_P46061275_������Dlg �T���B�z�`��

BOOL CHw2_P46061275_������Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// �N [����...] �\���[�J�t�Υ\���C

	// IDM_ABOUTBOX �����b�t�ΩR�O�d�򤧤��C
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

	// �]�w����ܤ�����ϥܡC�����ε{�����D�������O��ܤ���ɡA
	// �ج[�|�۰ʱq�Ʀ��@�~
	SetIcon(m_hIcon, TRUE);			// �]�w�j�ϥ�
	SetIcon(m_hIcon, FALSE);		// �]�w�p�ϥ�

	
	AllocConsole();
	FILE* pf;
	freopen_s(&pf, "CONOUT$", "w", stdout);// TODO: �b���[�J�B�~����l�]�w

	return TRUE;  // �Ǧ^ TRUE�A���D�z�ﱱ��]�w�J�I
}

void CHw2_P46061275_������Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// �p�G�N�̤p�ƫ��s�[�J�z����ܤ���A�z�ݭn�U�C���{���X�A
// �H�Kø�s�ϥܡC���ϥΤ��/�˵��Ҧ��� MFC ���ε{���A
// �ج[�|�۰ʧ������@�~�C

void CHw2_P46061275_������Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ø�s���˸m���e

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// �N�ϥܸm����Τ�ݯx��
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// �yø�ϥ�
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// ��ϥΪ̩즲�̤p�Ƶ����ɡA
// �t�ΩI�s�o�ӥ\����o�����ܡC
HCURSOR CHw2_P46061275_������Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

char* testdata[20] = {"CameraImg1.png","CameraImg2.png","CameraImg3.png","CameraImg4.png","CameraImg5.png"
					,"CameraImg6.png","CameraImg7.png" ,"CameraImg8.png" ,"CameraImg9.png" ,"CameraImg10.png"
					,"CameraImg11.png" ,"CameraImg12.png" ,"CameraImg13.png" ,"CameraImg14.png" ,"CameraImg15.png"
					,"CameraImg16.png" ,"CameraImg17.png" ,"CameraImg18.png" ,"CameraImg19.png","CameraImg20.png" };
//testdata[0] = "CameraImg1.png";
cv::Mat intrinsic_matrix, distortion_coeffs;

void CHw2_P46061275_������Dlg::OnBnClickedButton1()
{
	// TODO: �b���[�J����i���B�z�`���{���X
	Mat chessboard = imread(testdata[0]);
	int board_w = 11;
	int board_h = 8;
	int board_n = 11 * 8;
	Size board_sz = Size(board_w, board_h);
	vector<Point2f> corners;
	bool found = findChessboardCorners(chessboard, board_sz, corners);
	drawChessboardCorners(chessboard, board_sz, corners, found);

	namedWindow("1.1", 1);
	imshow("1.1", chessboard);
	waitKey(0);
	destroyAllWindows();
}


void CHw2_P46061275_������Dlg::OnBnClickedButton2()
{
	float image_sf = 0.5f;
	vector <vector <Point2f> > image_points;
	vector <vector <Point3f> > object_points;
	Size image_size;
	for (int i = 0; i < 20;i++) {
		Mat chessboard = imread(testdata[i]);
		Mat chessboard0;
		cvtColor(chessboard, chessboard0, CV_BGR2GRAY);
		image_size = chessboard.size();
		//resize(chessboard0, chessboard, Size(), image_sf, image_sf, INTER_LINEAR);
		int board_w = 11;
		int board_h = 8;
		int board_n = 11 * 8;
		Size board_sz = Size(board_w, board_h);
		vector<Point2f> corners;
		bool found = findChessboardCorners(chessboard, board_sz, corners,CALIB_CB_ADAPTIVE_THRESH );
		cornerSubPix(chessboard0,corners,Size(9,9),Size(-1,-1),TermCriteria(TermCriteria::MAX_ITER || TermCriteria::EPS,20,0.03));
		drawChessboardCorners(chessboard, board_sz, corners, found);
		if (found) {
			Mat mcorner(corners);
			image_points.push_back(corners);
			object_points.push_back(vector<Point3f>());
			vector<Point3f>& opts = object_points.back();
			opts.resize(board_n);
			for (int j = 0; j < board_n;j++) {
				opts[j] = Point3f(j / board_w, j % board_w, 0.0f);
			}
		}
		namedWindow("1.2", 1);
		imshow("1.2", chessboard);
		if ((cv::waitKey(30) & 255) == 27) {
			return;
		}
	}
	destroyWindow("1.2");
	calibrateCamera(
		object_points,
		image_points,
		image_size,
		intrinsic_matrix,
		distortion_coeffs,
		noArray(),
		noArray(),
		CALIB_ZERO_TANGENT_DIST | CALIB_FIX_PRINCIPAL_POINT
	);
	cout << intrinsic_matrix << endl;
	
	// TODO: �b���[�J����i���B�z�`���{���X
}


void CHw2_P46061275_������Dlg::OnBnClickedButton3()
{
	float image_sf = 0.5f;
	vector <vector <Point2f> > image_points;
	vector <vector <Point3f> > object_points;
	vector<Mat> rotation_vector, translation_vector;
	Size image_size;
	for (int i = 0; i < 20;i++) {
		Mat chessboard = imread(testdata[i]);
		Mat chessboard0;
		cvtColor(chessboard, chessboard0, CV_BGR2GRAY);
		image_size = chessboard.size();
		resize(chessboard0, chessboard, Size(), image_sf, image_sf, INTER_LINEAR);
		int board_w = 11;
		int board_h = 8;
		int board_n = 11 * 8;
		Size board_sz = Size(board_w, board_h);
		vector<Point2f> corners;
		bool found = findChessboardCorners(chessboard, board_sz, corners, CALIB_CB_ADAPTIVE_THRESH );
		cornerSubPix(chessboard0, corners, Size(9, 9), Size(-1, -1), TermCriteria(TermCriteria::MAX_ITER || TermCriteria::EPS, 20, 0.03));
		drawChessboardCorners(chessboard, board_sz, corners, found);
		if (found) {
			Mat mcorner(corners);
			image_points.push_back(corners);
			object_points.push_back(vector<Point3f>());
			vector<Point3f>& opts = object_points.back();
			opts.resize(board_n);
			for (int j = 0; j < board_n;j++) {
				opts[j] = Point3f(j / board_w, j % board_w, 0.0f);
			}
		}
		namedWindow("1.3", 1);
		imshow("1.3", chessboard);
		if ((cv::waitKey(30) & 255) == 27) {
			return;
		}
	}
	destroyWindow("1.3");
	calibrateCamera(
		object_points,
		image_points,
		image_size,
		intrinsic_matrix,
		distortion_coeffs,
		rotation_vector,
		translation_vector,
		CALIB_ZERO_TANGENT_DIST | CALIB_FIX_PRINCIPAL_POINT
	);
	cv::Mat rotation_matrix;
	Rodrigues(rotation_vector[0], rotation_matrix);
	vector<Mat> Final = {(3,1,CV_8UC1,rotation_matrix.col(0)),(3,1,CV_8UC1,rotation_matrix.col(1)),(3,1,CV_8UC1,rotation_matrix.col(2)),(3,1,CV_8UC1,translation_vector[0])	};
	Mat R;
	hconcat(Final, R);
	cout << R << endl;
	// TODO: �b���[�J����i���B�z�`���{���X
}


void CHw2_P46061275_������Dlg::OnBnClickedButton4()
{
	float image_sf = 0.5f;
	vector <vector <Point2f> > image_points;
	vector <vector <Point3f> > object_points;
	Size image_size;
	for (int i = 0; i < 20;i++) {
		Mat chessboard = imread(testdata[i]);
		Mat chessboard0;
		cvtColor(chessboard, chessboard0, CV_BGR2GRAY);
		image_size = chessboard.size();
		resize(chessboard0, chessboard, Size(), image_sf, image_sf, INTER_LINEAR);
		int board_w = 11;
		int board_h = 8;
		int board_n = 11 * 8;
		Size board_sz = Size(board_w, board_h);
		vector<Point2f> corners;
		bool found = findChessboardCorners(chessboard, board_sz, corners, CALIB_CB_ADAPTIVE_THRESH );
		cornerSubPix(chessboard0, corners, Size(9, 9), Size(-1, -1), TermCriteria(TermCriteria::MAX_ITER || TermCriteria::EPS, 20, 0.03));
		drawChessboardCorners(chessboard, board_sz, corners, found);
		if (found) {
			Mat mcorner(corners);
			image_points.push_back(corners);
			object_points.push_back(vector<Point3f>());
			vector<Point3f>& opts = object_points.back();
			opts.resize(board_n);
			for (int j = 0; j < board_n;j++) {
				opts[j] = Point3f(j / board_w, j % board_w, 0.0f);
			}
		}
		namedWindow("1.4", 1);
		imshow("1.4", chessboard);
		if ((cv::waitKey(30) & 255) == 27) {
			return;
		}
	}
	destroyWindow("1.4");
	calibrateCamera(
		object_points,
		image_points,
		image_size,
		intrinsic_matrix,
		distortion_coeffs,
		noArray(),
		noArray(),
		CALIB_ZERO_TANGENT_DIST | CALIB_FIX_PRINCIPAL_POINT
	);
	cout << distortion_coeffs << endl;
	waitKey(0);
	// TODO: �b���[�J����i���B�z�`���{���X
}


void CHw2_P46061275_������Dlg::OnBnClickedButton5()
{
	float image_sf = 0.5f;
	vector <vector <Point2f> > image_points;
	vector <vector <Point3f> > object_points;
	vector<Mat> rotation_vector, translation_vector;
	Size image_size;
	for (int i = 0; i < 20;i++) {
		Mat chessboard = imread(testdata[i]);
		Mat chessboard0;
		cvtColor(chessboard, chessboard0, CV_BGR2GRAY);
		image_size = chessboard.size();
		resize(chessboard0, chessboard, Size(), image_sf, image_sf, INTER_LINEAR);
		int board_w = 11;
		int board_h = 8;
		int board_n = 11 * 8;
		Size board_sz = Size(board_w, board_h);
		vector<Point2f> corners;
		bool found = findChessboardCorners(chessboard, board_sz, corners, CALIB_CB_ADAPTIVE_THRESH);
		cornerSubPix(chessboard0, corners, Size(9, 9), Size(-1, -1), TermCriteria(TermCriteria::MAX_ITER || TermCriteria::EPS, 20, 0.03));
		drawChessboardCorners(chessboard, board_sz, corners, found);
		if (found) {
			Mat mcorner(corners);
			image_points.push_back(corners);
			object_points.push_back(vector<Point3f>());
			vector<Point3f>& opts = object_points.back();
			opts.resize(board_n);
			for (int j = 0; j < board_n;j++) {
				opts[j] = Point3f(j / board_w, j % board_w, 0.0f);
			}
		}
		namedWindow("1.3", 1);
		imshow("1.3", chessboard);
		if ((cv::waitKey(30) & 255) == 27) {
			return;
		}
	}
	destroyWindow("1.3");
	calibrateCamera(
		object_points,
		image_points,
		image_size,
		intrinsic_matrix,
		distortion_coeffs,
		rotation_vector,
		translation_vector,
		CALIB_ZERO_TANGENT_DIST | CALIB_FIX_PRINCIPAL_POINT
	);
	vector <Point3f>  pyramid_points;
	vector <Point2f>  realpyranid_points;
	pyramid_points.push_back(Point3f(0, 0, 2));
	pyramid_points.push_back(Point3f(1, 1, 0));
	pyramid_points.push_back(Point3f(1, -1, 0));
	pyramid_points.push_back(Point3f(-1, -1, 0));
	pyramid_points.push_back(Point3f(-1, 1, 0));
	for (int i = 0; i < 5; i++) {
		projectPoints(
			pyramid_points,
			rotation_vector[i],
			translation_vector[i],
			intrinsic_matrix,
			distortion_coeffs,
			realpyranid_points,
			noArray(),
			0
		);

		Mat Archessboard = imread(testdata[i]);
		line(Archessboard, realpyranid_points[0], realpyranid_points[1], Scalar(255, 0, 0), 3);
		line(Archessboard, realpyranid_points[0], realpyranid_points[2], Scalar(255, 0, 0), 3);
		line(Archessboard, realpyranid_points[0], realpyranid_points[3], Scalar(255, 0, 0), 3);
		line(Archessboard, realpyranid_points[0], realpyranid_points[4], Scalar(255, 0, 0), 3);
		line(Archessboard, realpyranid_points[1], realpyranid_points[2], Scalar(255, 0, 0), 3);
		line(Archessboard, realpyranid_points[2], realpyranid_points[3], Scalar(255, 0, 0), 3);
		line(Archessboard, realpyranid_points[3], realpyranid_points[4], Scalar(255, 0, 0), 3);
		line(Archessboard, realpyranid_points[4], realpyranid_points[1], Scalar(255, 0, 0), 3);
		namedWindow("AR", 1);
		imshow("AR", Archessboard);
		waitKey(500);
	}
	waitKey(0);
	destroyWindow("AR");
	// TODO: �b���[�J����i���B�z�`���{���X
}


void CHw2_P46061275_������Dlg::OnBnClickedButton6()
{
	VideoCapture video("bgSub_video.MP4");
	if (!video.isOpened()) {
		return;
	}
	Size videosize = Size(video.get(CV_CAP_PROP_FRAME_WIDTH), video.get(CV_CAP_PROP_FRAME_HEIGHT));
	namedWindow("orignal video", CV_WINDOW_AUTOSIZE);
	namedWindow("Background Subtraction", CV_WINDOW_AUTOSIZE);
	Mat videoFrame;
	Ptr<BackgroundSubtractor> pMOG2;
	pMOG2 = createBackgroundSubtractorMOG2(200,140.0,true);
	Mat fgMaskMOG2;

	while (true) {
		video >> videoFrame;
		if (videoFrame.empty()) {
			break;
		}
		pMOG2->apply(videoFrame,fgMaskMOG2);
		//threshold(fgMaskMOG2, fgMaskMOG2, 200, 255, THRESH_BINARY);
		imshow("orignal video", videoFrame);
		imshow("Background Subtraction", fgMaskMOG2);
		waitKey(33);
	}
	destroyWindow("orignal video");
	destroyWindow("Background Subtraction");
	// TODO: �b���[�J����i���B�z�`���{���X
}


void CHw2_P46061275_������Dlg::OnBnClickedButton7()
{
	Mat LeftImage = imread("SceneL.png", 0);
	Mat RightImage = imread("SceneR.png", 0);
	Size ImageSize = LeftImage.size();
	Ptr<StereoSGBM> stereo = StereoSGBM::create(0, 48, 5);
	Mat disp, vdisp;
	stereo->compute(LeftImage, RightImage, disp);
	normalize(disp, vdisp, 0, 255, NORM_MINMAX, CV_8U);
	namedWindow("4.1");
	imshow("4.1", vdisp);
	waitKey(0);
	destroyAllWindows();

	// TODO: �b���[�J����i���B�z�`���{���X
}


void CHw2_P46061275_������Dlg::OnBnClickedButton8()
{
	Mat LeftImage = imread("SceneL.png", 0);
	Mat RightImage = imread("SceneR.png", 0);
	Size ImageSize = LeftImage.size();
	Ptr<StereoSGBM> stereo = StereoSGBM::create(0, 48, 5, 0, 0, -1);
	Ptr<StereoSGBM> stereo2 = StereoSGBM::create(0, 48, 5, 0, 0, 2);
	Mat disp, vdisp;
	Mat disp2, vdisp2;
	Mat colorvdisp;
	stereo->compute(LeftImage, RightImage,disp);
	stereo2->compute(LeftImage, RightImage, disp2);
	normalize(disp, vdisp, 0, 255, NORM_MINMAX, CV_8U);
	normalize(disp2, vdisp2, 0, 255, NORM_MINMAX, CV_8U);
	cvtColor(vdisp, colorvdisp, CV_GRAY2BGR);
	for (int i = 0; i < LeftImage.rows; i++) {
		for (int j = 0; j < LeftImage.cols; j++) {
			if (vdisp.at<uchar>(i, j) != vdisp2.at<uchar>(i, j))
				colorvdisp.at<Vec3b>(i, j) = { 0,0,255 };
		}
	}
	namedWindow("without left-right disparity check");
	namedWindow("with left-right disparity check");
	namedWindow("different mark in red");
	imshow("without left-right disparity check", vdisp);
	imshow("with left-right disparity check", vdisp2);
	imshow("different mark in red", colorvdisp);
	waitKey(0);
	destroyAllWindows();
	// TODO: �b���[�J����i���B�z�`���{���X
}
