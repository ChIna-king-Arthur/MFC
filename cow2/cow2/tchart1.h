#pragma once

// 计算机生成了由 Microsoft Visual C++ 创建的 IDispatch 包装类

// 注意: 不要修改此文件的内容。如果此类由
//  Microsoft Visual C++ 重新生成，您的修改将被覆盖。

/////////////////////////////////////////////////////////////////////////////
// CTchart1 包装类

class CTchart1 : public CWnd
{
protected:
	DECLARE_DYNCREATE(CTchart1)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0xB6C10489, 0xFB89, 0x11D4, { 0x93, 0xC9, 0x0, 0x60, 0x8, 0xA7, 0xEE, 0xD4 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle,
						const RECT& rect, CWnd* pParentWnd, UINT nID, 
						CCreateContext* pContext = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); 
	}

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, 
				UINT nID, CFile* pPersist = NULL, BOOL bStorage = FALSE,
				BSTR bstrLicKey = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); 
	}

// 特性
public:
enum
{
    bvNone = 0,
    bvLowered = 1,
    bvRaised = 2
}EPanelBevel;
enum
{
    bsNone = 0,
    bsSingle = 1
}EBorderStyle;
enum
{
    dmManual = 0,
    dmAutomatic = 1
}EDragMode;
enum
{
    psSolid = 0,
    psDash = 1,
    psDot = 2,
    psDashDot = 3,
    psDashDotDot = 4,
    psClear = 5,
    psInsideFrame = 6,
    psSmallDots = 7
}EChartPenStyle;
enum
{
    lsAuto = 0,
    lsSeries = 1,
    lsValues = 2,
    lsLastValues = 3
}ELegendStyle;
enum
{
    mbLeft = 1,
    mbRight = 2,
    mbMiddle = 4
}EMouseButton;
enum
{
    dsDragEnter = 0,
    dsDragLeave = 1,
    dsDragMove = 2
}EDragState;
enum
{
    gdTopBottom = 0,
    gdBottomTop = 1,
    gdLeftRight = 2,
    gdRightLeft = 3,
    gdFromCenter = 4,
    gdFromTopLeft = 5,
    gdFromBottomLeft = 6
}EGradientDirection;
enum
{
    talAuto = 0,
    talNone = 1,
    talValue = 2,
    talMark = 3,
    talText = 4
}EAxisLabelStyle;
enum
{
    aTopAxis = 0,
    aBottomAxis = 1,
    aBothHorizAxis = 2,
    aCustomHorizAxis = 3
}EHorizontalAxis;
enum
{
    bsSolid = 0,
    bsClear = 1,
    bsHorizontal = 2,
    bsVertical = 3,
    bsFDiagonal = 4,
    bsBDiagonal = 5,
    bsCross = 6,
    bsDiagCross = 7,
    bsFill80 = 8,
    bsFill60 = 9,
    bsFill40 = 10,
    bsFill20 = 11,
    bsFill10 = 12,
    bsZigZag = 13,
    bsVertSmall = 14,
    bsHorizSmall = 15,
    bsDiagSmall = 16,
    bsBackDiagSmall = 17,
    bsCrossSmall = 18,
    bsBackCrossSmall = 19
}EBrushStyle;
enum
{
    maNone = 0,
    maStacked = 1,
    maStacked100 = 2
}EMultiArea;
enum
{
    mbNone = 0,
    mbSide = 1,
    mbStacked = 2,
    mbStacked100 = 3,
    mbSideAll = 4
}EMultiBar;
enum
{
    smsValue = 0,
    smsPercent = 1,
    smsLabel = 2,
    smsLabelPercent = 3,
    smsLabelValue = 4,
    smsLegend = 5,
    smsPercentTotal = 6,
    smsLabelPercentTotal = 7,
    smsXValue = 8,
    smsXY = 9
}EMarkStyle;
enum
{
    bsRectangle = 0,
    bsPyramid = 1,
    bsInvPyramid = 2,
    bsCilinder = 3,
    bsEllipse = 4,
    bsArrow = 5,
    bsRectGradient = 6,
    bsCone = 7
}EBarStyle;
enum
{
    pmNone = 0,
    pmHorizontal = 1,
    pmVertical = 2,
    pmBoth = 3
}EChartScroll;
enum
{
    laLeft = 0,
    laRight = 1,
    laTop = 2,
    laBottom = 3
}ELegendAlignment;
enum
{
    ltsPlain = 0,
    ltsLeftValue = 1,
    ltsRightValue = 2,
    ltsLeftPercent = 3,
    ltsRightPercent = 4,
    ltsXValue = 5,
    ltsValue = 6,
    ltsPercent = 7,
    ltsXAndValue = 8,
    ltsXAndPercent = 9
}ELegendTextStyle;
enum
{
    atLeft = 0,
    atTop = 1,
    atRight = 2,
    atBottom = 3,
    atDepth = 4,
    atCustom = 5
}EAxisType;
enum
{
    dtOneSecond = 1,
    dtFiveSeconds = 2,
    dtTenSeconds = 3,
    dtFifteenSeconds = 4,
    dtThirtySeconds = 5,
    dtOneMinute = 6,
    dtFiveMinutes = 7,
    dtTenMinutes = 8,
    dtFifteenMinutes = 9,
    dtThirtyMinutes = 10,
    dtOneHour = 11,
    dtTwoHours = 12,
    dtSixHours = 13,
    dtTwelveHours = 14,
    dtOneDay = 15,
    dtTwoDays = 16,
    dtThreeDays = 17,
    dtOneWeek = 18,
    dtHalfMonth = 19,
    dtOneMonth = 20,
    dtTwoMonths = 21,
    dtThreeMonths = 22,
    dtFourMonths = 23,
    dtOneMillisecond = 0,
    dtSixMonths = 24,
    dtOneYear = 25
}EDateTimeStep;
enum
{
    jpegBestQuality = 0,
    jpegBestSpeed = 1
}EJPEGPerformance;
enum
{
    clTeeColor = 536870912,
    clNone = 536870911
}EConstants;
enum
{
    tfCopy = 0,
    tfAdd = 1,
    tfSubtract = 2,
    tfMultiply = 3,
    tfDivide = 4,
    tfAverage = 5,
    tfHigh = 6,
    tfLow = 7,
    tfMovavg = 8,
    tfExpavg = 9,
    tfMomentum = 10,
    tfCurveFit = 11,
    tfRSI = 12,
    tfTrend = 13,
    tfStdDeviation = 14,
    tfCumulative = 15,
    tfCount = 16,
    tfExpTrend = 17,
    tfExpMovAvg = 18,
    tfMomentumDiv = 19,
    tfRMS = 20,
    tfMACD = 21,
    tfStochastic = 22,
    tfBollinger = 23,
    tfADX = 24
}EFunctionType;
enum
{
    xysPixels = 0,
    xysAxis = 1,
    xysAxisOrigin = 2
}EShapeXYStyle;
enum
{
    csCandleBar = 0,
    csCandleStick = 1,
    csOpenClose = 2
}ECandleStyle;
enum
{
    ewuPercent = 0,
    ewuPixels = 1
}EErrorWidthUnits;
enum
{
    loNone = 0,
    loAscending = 1,
    loDescending = 2
}EValueListOrder;
enum
{
    chasRectangle = 0,
    chasCircle = 1,
    chasVertLine = 2,
    chasHorizLine = 3,
    chasTriangle = 4,
    chasInvertTriangle = 5,
    chasLine = 6,
    chasDiamond = 7,
    chasCube = 8,
    chasCross = 9,
    chasDiagCross = 10,
    chasStar = 11,
    chasPyramid = 12,
    chasInvertPyramid = 13
}EShapeStyle;
enum
{
    scLine = 0,
    scBar = 1,
    scHorizBar = 2,
    scArea = 3,
    scPoint = 4,
    scPie = 5,
    scFastLine = 6,
    scShape = 7,
    scGantt = 8,
    scBubble = 9,
    scArrow = 10,
    scCandle = 11,
    scPolar = 12,
    scSurface = 13,
    scVolume = 14,
    scErrorBar = 15,
    scBezier = 16,
    scContour = 17,
    scError = 18,
    scPoint3D = 19,
    scRadar = 20,
    scClock = 21,
    scWindRose = 22,
    scBar3D = 23,
    scImageBar = 24,
    scDonut = 25,
    scTriSurface = 26,
    scBox = 27,
    scHorizBox = 28,
    scHistogram = 29,
    scColorGrid = 30,
    scBarJoin = 31,
    scHighLow = 32,
    scWaterfall = 33,
    scSmith = 34,
    scPyramid = 35,
    scMap = 36,
    scHorizLine = 37,
    scFunnel = 38,
    scCalendar = 39
}ESeriesClass;
enum
{
    poPortrait = 0,
    poLandscape = 1
}EPrinterOrientation;
enum
{
    psRectangle = 0,
    psCircle = 1,
    psTriangle = 2,
    psDownTriangle = 3,
    psCross = 4,
    psDiagCross = 5,
    psStar = 6,
    psDiamond = 7,
    psSmallDot = 8
}EPointerStyle;
enum
{
    cfPolynomial = 0,
    cfLogarithmic = 1,
    cfExponential = 2
}ETypeFitting;
enum
{
    pbmStretch = 0,
    pbmTile = 1,
    pbmCenter = 2
}EBackImageMode;
enum
{
    aLeft = 0,
    aRight = 1,
    aCenter = 2
}ETextAlignment;
enum
{
    aLeftAxis = 0,
    aRightAxis = 1,
    aBothVertAxis = 2,
    aCustomVertAxis = 3
}EVerticalAxis;
enum
{
    ssShift = 1,
    ssAlt = 2,
    ssCtrl = 4,
    ssNone = 0
}EShiftState;
enum
{
    taLeftJustify = 0,
    taRightJustify = 1,
    taCenter = 2
}ETitleAlignment;
enum
{
    cbmOpaque = 2,
    cbmTransparent = 1,
    cbmNone = 0
}ECanvasBackMode;
enum
{
    ctaLeft = 0,
    ctaCenter = 1,
    ctaRight = 2
}ECanvasTextAlign;
enum
{
    poNone = 0,
    poBelowPercent = 1,
    poBelowValue = 2
}EPieOtherStyle;
enum
{
    essLeft = 0,
    essRight = 1,
    essLeftRight = 2,
    essTop = 3,
    essBottom = 4,
    essTopBottom = 5
}EErrorSeriesStyle;
enum
{
    paFirst = 0,
    paCenter = 1,
    paLast = 2
}EFunctionPeriodAlign;
enum
{
    psNumPoints = 0,
    psRange = 1
}EFunctionPeriodStyle;
enum
{
    epMain = 0,
    epGeneral = 1,
    epAxis = 2,
    epTitles = 3,
    epLegend = 4,
    epPanel = 5,
    epPaging = 6,
    epWalls = 7,
    epAspect = 8,
    epSeriesGeneral = 9,
    epSeriesMarks = 10,
    epAllSeries = 11,
    epSeriesData = 12,
    epExport = 13,
    epTools = 14,
    epPrintPreview = 15,
    epOpenGL = 16
}ETeeEditorPage;
enum
{
    stJpeg = 0,
    stTeeTemplate = 1
}EStreamType;
enum
{
    cssHorizontal = 0,
    cssVertical = 1,
    cssBoth = 2
}ECursorToolStyle;
enum
{
    aaStart = 0,
    aaEnd = 1,
    aaBoth = 2
}EAxisArrowToolPosition;
enum
{
    hsNone = 0,
    hsCircle = 1,
    hsRectangle = 2,
    hsDiamond = 3
}ENearestToolStyle;
enum
{
    fosRectangle = 0,
    fosRoundRectangle = 1
}EChartObjectShapeStyle;
enum
{
    tcCursor = 0,
    tcDragMarks = 1,
    tcAxisArrow = 2,
    tcDrawLine = 3,
    tcNearest = 4,
    tcColorband = 5,
    tcColorLine = 6,
    tcRotate = 7,
    tcMarksTip = 8,
    tcChartImage = 9,
    tcAnnotate = 10,
    tcPageNumber = 11
}EToolClass;
enum
{
    spLeft = 0,
    spRight = 1
}ELegendSymbolPosition;
enum
{
    lcsPercent = 0,
    lcsPixels = 1
}ELegendSymbolSize;
enum
{
    tzdHorizontal = 0,
    tzdVertical = 1,
    tzdBoth = 2
}ETeeZoomDirection;
enum
{
    ppoDefault = 0,
    ppoPortrait = 1,
    ppoLandscape = 2
}ETeePreviewPanelOrientation;
enum
{
    rsiOpenClose = 0,
    rsiClose = 1
}ERSIStyle;
enum
{
    cssNone = 0,
    cssOverlap = 1,
    cssStack = 2,
    cssStack100 = 3
}ECustomSeriesStack;
enum
{
    vaTop = 0,
    vaCenter = 1,
    vaBottom = 2
}ETeeVertAlign;
enum
{
    alDefault = 0,
    alOpposite = 1
}EAxisLabelAlign;
enum
{
    bsWindows = 0,
    bsBezier3 = 1,
    bsBezier4 = 2
}EBezierStyle;
enum
{
    psPale = 0,
    psStrong = 1
}EPaletteStyle;
enum
{
    gcLZW = 0,
    gcRLE = 1
}EGIFCompression;
enum
{
    dmNearest = 0,
    dmFloydSteinberg = 1,
    dmStucki = 2,
    dmSierra = 3,
    dmJaJuNI = 4,
    dmSteveArche = 5,
    dmBurkes = 6
}EGIFDitherMode;
enum
{
    rmNone = 0,
    rmWindows20 = 1,
    rmWindows256 = 2,
    rmWindowsGray = 3,
    rmMonochrome = 4,
    rmGrayScale = 5,
    rmNetscape = 6,
    rmQuantize = 7,
    rmQuantize256 = 8
}EGIFColorReduction;
enum
{
    pfDevice = 0,
    pf1bit = 1,
    pf4bit = 2,
    pf8bit = 3,
    pf15bit = 4,
    pf16bit = 5,
    pf24bit = 6,
    pf32bit = 7
}EPixelFormat;
enum
{
    mtmMove = 0,
    mtmClick = 1
}EMarkToolMouseAction;
enum
{
    tcbNormal = 0,
    tcbSeparator = 1,
    tcbRotate = 2,
    tcbMove = 3,
    tcbZoom = 4,
    tcbDepth = 5,
    tcbEdit = 6,
    tcbPrintPreview = 7,
    tcbCopy = 8,
    tcbSave = 9,
    tcbLabel = 10,
    tcb3D = 11
}ETeeCommanderControls;
enum
{
    ppLeftTop = 0,
    ppLeftBottom = 1,
    ppRightTop = 2,
    ppRightBottom = 3
}EAnnotationPosition;
enum
{
    dstAllRecords = 0,
    dstSingleRecord = 1
}EDatasourceType;
enum
{
    esRound = 0,
    esSquare = 1,
    esFlat = 2
}EPenEndStyle;


// 操作
public:

// ITChart

// Functions
//

	LPDISPATCH get_Aspect()
	{
		LPDISPATCH result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Axis()
	{
		LPDISPATCH result;
		InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Canvas()
	{
		LPDISPATCH result;
		InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_ClipPoints()
	{
		BOOL result;
		InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ClipPoints(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	short get_Cursor()
	{
		short result;
		InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
		return result;
	}
	void put_Cursor(short newValue)
	{
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	short get_DragCursor()
	{
		short result;
		InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
		return result;
	}
	void put_DragCursor(short newValue)
	{
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_DragMode()
	{
		long result;
		InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_DragMode(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_Enabled()
	{
		BOOL result;
		InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Enabled(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_Export()
	{
		LPDISPATCH result;
		InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Footer()
	{
		LPDISPATCH result;
		InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Frame()
	{
		LPDISPATCH result;
		InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Header()
	{
		LPDISPATCH result;
		InvokeHelper(0x16, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long get_Height()
	{
		long result;
		InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_Height(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_Import()
	{
		LPDISPATCH result;
		InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long get_Left()
	{
		long result;
		InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_Left(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xe, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_Legend()
	{
		LPDISPATCH result;
		InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Page()
	{
		LPDISPATCH result;
		InvokeHelper(0x10, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Panel()
	{
		LPDISPATCH result;
		InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Printer()
	{
		LPDISPATCH result;
		InvokeHelper(0x12, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Scroll()
	{
		LPDISPATCH result;
		InvokeHelper(0x13, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_aSeries(long SeriesIndex)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x14, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, SeriesIndex);
		return result;
	}
	long get_SeriesCount()
	{
		long result;
		InvokeHelper(0x15, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_Top()
	{
		long result;
		InvokeHelper(0x17, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_Top(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x17, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_Visible()
	{
		BOOL result;
		InvokeHelper(0x18, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Visible(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x18, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_Walls()
	{
		LPDISPATCH result;
		InvokeHelper(0x19, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long get_Width()
	{
		long result;
		InvokeHelper(0x1a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_Width(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x1a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_Zoom()
	{
		LPDISPATCH result;
		InvokeHelper(0x1b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void AboutBox()
	{
		InvokeHelper(DISPID_ABOUTBOX, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	long AddSeries(long SeriesClass)
	{
		long result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x1c, DISPATCH_METHOD, VT_I4, (void*)&result, parms, SeriesClass);
		return result;
	}
	void ChangeSeriesType(long SeriesIndex, long NewSeriesType)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x1d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, SeriesIndex, NewSeriesType);
	}
	long CloneSeries(long SourceSeriesIndex)
	{
		long result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x1e, DISPATCH_METHOD, VT_I4, (void*)&result, parms, SourceSeriesIndex);
		return result;
	}
	void Draw(long DC, long Left, long Top, long Right, long Bottom)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x1f, DISPATCH_METHOD, VT_EMPTY, NULL, parms, DC, Left, Top, Right, Bottom);
	}
	void ExchangeSeries(long Series1, long Series2)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x20, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Series1, Series2);
	}
	double GetDateTimeStep(long DateTimeStep)
	{
		double result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x21, DISPATCH_METHOD, VT_R8, (void*)&result, parms, DateTimeStep);
		return result;
	}
	unsigned long GetFreeSeriesColor(BOOL CheckBackgroundColor)
	{
		unsigned long result;
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x22, DISPATCH_METHOD, VT_UI4, (void*)&result, parms, CheckBackgroundColor);
		return result;
	}
	LPDISPATCH GetLabelsSeries(long DestAxis)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x23, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, DestAxis);
		return result;
	}
	BOOL IsFreeSeriesColor(unsigned long AColor, BOOL CheckBackgroundColor)
	{
		BOOL result;
		static BYTE parms[] = VTS_UI4 VTS_BOOL ;
		InvokeHelper(0x24, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, AColor, CheckBackgroundColor);
		return result;
	}
	void RemoveAllSeries()
	{
		InvokeHelper(0x25, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void RemoveSeries(long SeriesIndex)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x26, DISPATCH_METHOD, VT_EMPTY, NULL, parms, SeriesIndex);
	}
	void Repaint()
	{
		InvokeHelper(0x27, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	CString SeriesTitleLegend(long ASeriesIndex)
	{
		CString result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x28, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, ASeriesIndex);
		return result;
	}
	void ShowEditor(long SeriesIndex)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x29, DISPATCH_METHOD, VT_EMPTY, NULL, parms, SeriesIndex);
	}
	void StopMouse()
	{
		InvokeHelper(0x2a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL get_TimerEnabled()
	{
		BOOL result;
		InvokeHelper(0x2b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_TimerEnabled(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x2b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_TimerInterval()
	{
		long result;
		InvokeHelper(0x2c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_TimerInterval(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x2c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_AutoRepaint()
	{
		BOOL result;
		InvokeHelper(0x2d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_AutoRepaint(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x2d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void EditOneSeries(long SeriesIndex)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x2e, DISPATCH_METHOD, VT_EMPTY, NULL, parms, SeriesIndex);
	}
	LPDISPATCH get_Environment()
	{
		LPDISPATCH result;
		InvokeHelper(0x2f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long get_ChartLink()
	{
		long result;
		InvokeHelper(0x30, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_MousePosition()
	{
		LPDISPATCH result;
		InvokeHelper(0x31, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void ChartRect(long Left, long Top, long Right, long Bottom)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x32, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Left, Top, Right, Bottom);
	}
	LPDISPATCH get_Tools()
	{
		LPDISPATCH result;
		InvokeHelper(0x33, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_SubHeader()
	{
		LPDISPATCH result;
		InvokeHelper(0x34, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_SubFooter()
	{
		LPDISPATCH result;
		InvokeHelper(0x35, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void ClearChart()
	{
		InvokeHelper(0x37, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void RefreshData()
	{
		InvokeHelper(0x36, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	LPDISPATCH Series(long SeriesIndex)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x38, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, SeriesIndex);
		return result;
	}

// Properties
//



};
