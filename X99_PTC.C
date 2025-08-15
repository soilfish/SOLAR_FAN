 //********************************************************* 
/**************************************************************************************
*                                 -----__-----                                        *
*                              	 | o         |	   	                                  *
*          PA1/AN1/C1IN-/ICSPDAT |1         6| PA0/AN0/C1IN+/ICSPCLK                        *
*                    		 GND |2         5| VDD                          *
*          PC1/AN5/C2IN-/P1E/INT |3         4| PA6/OSC2/CLKO/T1G                           *
*                                 ------------                                        *           
*  	                  		      FT61F020-URT（SOT23-6）    	                          *

*                                 -----__-----                                        *
*                              	 | o         |	   	                                  *
*                            VDD |1         8| GND                                    *
*              PA6/OSC2/T1G/CLKO |2         7| PA0/AN0/C1IN+/ICSPCLK                         *
*             		PC3/P1C/PWM4 |3         6| PA1/AN1/C1IN-/ICSPDAT                        *
*               PC2/AN6/P1D/PWM5 |4         5| PC4/C2OUT/P1B/PWM3                    *
*                                 ------------                                        *           
*  	                  		      FT61F021A-RB（SOP-8）    	                          *

*                                 -----__-----                                        *
*                              	 | o         |	   	                                  *
*                            VDD |1         8| GND                                    *
*              PA6/OSC2/T1G/CLKO |2         7| PA0/AN0/C1IN+/ICSPCLK                         *
*             		PC3/P1C/PWM4 |3         6| PA1/AN1/C1IN-/ICSPDAT                        *
*               PC2/AN6/P1D/PWM5 |4         5| PC1/AN5/C2IN-/P1E/INT                    *
*                                 ------------                                        *           
*  	                  		      FT61F021B-RB（SOP-8）    	                          *

*                                 -----__-----                                        *
*                              	 | o         |	   	                                  *
*              			     VDD |1        14| GND                                 *
*            PA7/OSC1/CLKI/T1CKI |2        13| PA0/AN0/C1IN+/ICSPCLK                          *
*              PA6/OSC2/T1G/CLKO |3        12| PA1/AN1/C1IN-/ICSPDAT                           *
*               PA4/ATEST0/Vregp |4        11| PA2/AN2/C1OUT/T0CKI                   				  *
*                   PC3/P1C/PWM4 |5        10| PA3/AN3/ATEST1                                    *
*               PC2/AN6/P1D/PWM5 |6         9| PC0/AN4/C2IN+/P1F/Vref                          *
*             PC4/C2OUT/P1B/PWM3 |7         8| PC1/AN5/C2IN-/P1E/INT                            *
*                                 ------------                                        *           
*  	                  		      FT60F022A-RB（SOP-14）    	                          *

*                                 -----__-----                                        *
*                              	 | o         |	   	                                  *
*             PC5/CCP1/P1A/Vregn |1        14| PC2/AN6/P1D/PWM5                                *
*                      PA4/Vregp |2        13| PC3/P1C/PWM4                         *
*             PC4/C2OUT/P1B/PWM3 |3        12| PA6/OSC2/T1G/CLKO                           *
*          PC1/AN5/C2IN-/P1E/INT |4        11| PA7/OSC1/CLKI/T1CKI                   				  *
*                  		 	 GND |5        10| VDD                                    *
*                        PA3/AN3 |6         9| PA0/AN0/C1IN+/ICSPCLK                           *
*            PA2/AN2/C1OUT/T0CKI |7         8| PA1/AN1/C1IN-/ICSPDAT                             *
*                                 ------------                                        *           
*  	                  		      FT60F022B-RB（SOP-14）    	                          *

*                                 -----__-----                                        *
*                              	 | o         |	   	                                  *
*               			 VDD |1        16| GND                                  *
*            PA7/OSC1/CLKI/T1CKI |2        15| PA0/AN0/C1IN+/ICSPCLK                         *
*              PA6/OSC2/T1G/CLKO |3        14| PA1/AN1/C1IN-/ICSPDAT                           *
*                      PA5/MCLRB |4        13| PA2/AN2/C1OUT/T0CKI                   				  *
*                   PC3/P1C/PWM4 |5        12| PA3/AN3/ATEST1                                    *
*               PC2/AN6/P1D/PWM5 |6        11| PC0/AN4/C2IN+/P1F/Vref                           *
*               PA4/ATEST0/Vregp |7        10| PC1/AN5/C2IN-/P1E/INT                            *
*             PC5/CCP1/P1A/Vregn |8         9| PC4/C2OUT/P1B/PWM3                          *
*                                 ------------                                        *           
*  	                  		      FT61F023-RB（SOP-16）    	                          *

*                                 -----__-----                                        *
*                              	 | o         |	   	                                  *
*               			 VDD |1        10| GND                                     *
*            PA7/OSC1/CLKI/T1CKI |2         9| PA0/AN0/C1IN+/ICSPCLK                         *
*          	   PA6/OSC2/T1G/CLKO |3         8| PA1/AN1/C1IN-/ICSPDAT                          *
*                   PC3/P1C/PWM4 |4         7| PA2/AN2/C1OUT/T0CKI                   				  *
*               PC2/AN6/P1D/PWM5 |5         6| PC4/C2OUT/P1B/PWM3                                   *
*                                 ------------                                        *           
*  	                  		      FT61F02F-MRB（MSOP-10）    	                          *



**************************************************************************************/

//*********************************************************
#include "SYSCFG.h"

/*
*  MCU_:    辉芒微FT61F023B															  *
*  型号:    HT-X99  		                                                					  *
*  MCU_:    																		  *
*  REV: 	0  		                                               					  *
*  频率: 	16MHz  		                                               				  *
*  修改时间:2023.02.03   
*  充电修改为 闪灯模式 20240926
*  定时灯保留 3 定时
*  修改一个定时灯为PTC   
*  显示按键 和功能不要      
*  电量同时风扇档位,按下显示 2 秒后 返回电量显示
*                                                       *
*/
//**********************************************************
//***********************宏定义*****************************
#define  uchar     unsigned char 
#define  uint      unsigned int
#define  ulong     unsigned long

#define  PWM3Dir  	TRISC4
#define  PWM5Dir  	TRISC2

/*****************************************************************
             脚位功能定义
*****************************************************************/
#define		Led1			PA6
#define		Led2			PA5
#define		Led3			PC3
#define		Led4			PA4

#define		LedPwm			PC2//PWM5

//#define		IRIN			PA7
#define     PTC             PA7

#define		FanPwm			PC4//PWM3
#define		FanFb			PC1//AN5
#define		FanPort			PC0

#define		Exp				PA0
#define		UsbCheck		PA1

//#define		BeepPort		PC5

#define		SwFb1			PA3//AN3
#define		SwFb2			PA2//AN2

//开机闪灯等待延时
#define START_COUNT_INTR   150

//充电闪灯类型 20240926
//#define   CHARGR_FLASH      0x01
//#define   CHARG_LED_TYPE_MARQU      0x02
//闪灯延时  60MS

//电机升压 20250814
#define HALL_FAN_VOT_45V  262
#define HALL_FAN_VOT_60V  315
#define HALL_FAN_VOT_75V  393
#define HALL_FAN_VOT_87V  456
#define HALL_FAN_VOT_92V  480

//V = 0.00654Y(470k/200k)<2.0V>  	1024      V = 0.00654Y 

volatile bit b10ms;
volatile bit b500ms;
volatile unsigned char Count10ms;
volatile unsigned char Count500ms;

volatile unsigned char FanCN;

volatile bit bNoIn; 	//休眠屏蔽标志位
volatile bit bStop; 	//睡眠标志位

volatile unsigned char OFFCount;
volatile unsigned char SleepCount;

volatile bit bFanOff;
volatile unsigned char FanOffCount;
volatile unsigned int BoostValue;
volatile unsigned int AimBoostValue;
volatile unsigned char VoutOverCount;
volatile unsigned char FanCloseCount;

volatile unsigned char LimitPwm;
volatile unsigned char NoLoadCount;

volatile bit bOver;

volatile bit bKeyPress;
volatile unsigned char KeyLast;
volatile unsigned char KeyState;
volatile unsigned char KeyNum;

volatile unsigned char FlashCount;

volatile bit bADCheck;
volatile unsigned int AddDCValue;
volatile unsigned int DCADValue;
volatile unsigned int DCValue;
volatile bit bDCCN;
volatile unsigned int MaxADValue;
volatile unsigned int MinADValue;

volatile unsigned char ADCount;

volatile unsigned char LedCN;

volatile bit bDisOn;
volatile unsigned char DisCount;
volatile unsigned char DisCN;
volatile unsigned char DisBuff;
volatile unsigned char DisBuff1;

volatile bit bFristOn;
volatile unsigned char BTCN;
volatile unsigned char UpCount;
volatile unsigned char DownCount;

volatile bit bUsbOn;
volatile unsigned char UsbCount;
volatile unsigned char UsbOutCount;
volatile unsigned char ChargeCount;
volatile unsigned char ChargeOutCount;

volatile bit bACWork;
volatile unsigned char UsbCheckCount;
volatile unsigned char ExpCount;
volatile bit bExp;
volatile unsigned char FullCount;
volatile bit bFull;

volatile bit bUsbCheck;
volatile unsigned char CheckCount;

volatile unsigned char StartCount;

volatile unsigned int WorkTimer;
volatile unsigned int AimSpeed;
volatile unsigned char ChangeCount;

volatile unsigned int DisStartCount;

volatile unsigned char TimerCN;
volatile unsigned int TimerCount;

unsigned char PtcCN;

static bit  awaken; 
unsigned char read_pa;

//volatile bit	bIRL0;
//volatile bit bIRGet0;
//volatile bit bIROK0;
//volatile bit bIRStatus0;

//volatile unsigned char  IRByte0;
//volatile unsigned char  IRNum0;
//volatile unsigned char  IRGata0;
//volatile unsigned char  IRRecCount0;
//volatile unsigned char  IRCode0;
//volatile unsigned char  IRHCount0;

//volatile unsigned char BeepCount;

volatile unsigned int KeyValue1;
volatile unsigned int KeyValue2;

volatile unsigned char ADCheckCN;

volatile unsigned char DisLed;
bit FAN_GEAR_FLAG;

void ParaInit()
{
	b10ms      = 0;
   	b500ms     = 0; 
   	Count10ms  = 0;
   	Count500ms = 0;
	
	FanCN = 0;
	
	bNoIn = 0;
	bStop = 0;
	
    awaken = 0;
    read_pa = 0;	
	
	OFFCount = 0;
	SleepCount = 0;
	
	
	bFanOff = 0;
	FanOffCount = 0;
	BoostValue = 0;
	AimBoostValue = 0;
	VoutOverCount = 0;
	FanCloseCount = 0;
	
	LimitPwm = 0;
	NoLoadCount = 0;
	
	bOver = 0;
	
	bKeyPress = 0;
	KeyLast = 0;
	KeyState = 0;
	KeyNum = 0;
    
    FAN_GEAR_FLAG = 0;
	
	FlashCount = 0;

	bADCheck = 0;

	AddDCValue = 0;
	DCADValue = 0;
	DCValue = 0;
	bDCCN = 0;
	ADCount = 0;
	MaxADValue = 0;
	MinADValue = 0xFFFF;
	
	LedCN = 0;
	
	bDisOn = 0;
	DisCount = 0;
	DisCN = 0;
	DisBuff = 0;
	DisBuff1 = 0;
    
    PtcCN = 0;

	bACWork = 0;
	bExp = 0;
	FullCount = 0;
	bFull = 0;

	bFristOn = 1;
	BTCN = 0;
	UpCount = 0;
	DownCount = 0;
	
	bUsbOn = 0;
	UsbCount = 0;
	UsbOutCount = 0;
	ChargeCount = 0;
	ChargeOutCount = 0;
	
	UsbCheckCount = 0;
	ExpCount = 0;
	bUsbCheck = 0;
	CheckCount = 0;
	
	StartCount = 0;
	
	WorkTimer = 0;
	AimSpeed = 0;
	ChangeCount = 0;
	
	DisStartCount = 0;
	TimerCN = 0;
	TimerCount = 0;
	
//	bIRL0 = 0;
//	bIRGet0 = 0;
//	bIROK0 = 0;
//	bIRStatus0 = 0;
//	IRHCount0= 0;
//	IRByte0 = 0;
//	IRGata0 = 0;
//	IRNum0 = 0;
//	IRCode0 = 0;
	
//	BeepCount = 0;
	
	KeyValue1 = 600;
	KeyValue2 = 600;
	ADCheckCN = 0;
	
	DisLed = 0;
}

/*-------------------------------------------------
 *  函数名：POWER_INITIAL
 *	功能：  上电系统初始化
 *  输入：  无
 *  输出：  无
 --------------------------------------------------*/	
//系统初始化
void POWER_Init() 
{
	OSCCON = 0B01110001;	//16MHz  内部振荡器	
			//7(LFMOD)低频内振模式：	1:256K   0：32K
			//6:4(IRCF)内置振荡器频率选择
			/*
				111:  	16MHz
				110:	8MHz
				101：	4MHz
				100：	2MHz
				011：	1MHz
				010：	500kHz
				001：	250kHz
				000：	32kHz
			*/
			//0（SCS）系统时钟选择位：   1：内部振荡器  0：时钟源由FOSC<2：0>决定即编译选项时选择

	INTCON = 0; 	//暂禁止所有中断
			//7(GIE)全局中断使能:   1：允许所有未屏蔽中断   0：禁止
			//6(PEIE)外设中断使能：	1：允许   0：禁止
			//5(T0IE)定时0中断使能：  1：允许   0：禁止
			//4(INTE)外部中断使能：  1：允许   0：禁止
			//3(PAIE)PORTA电平中断使能：  1：允许   0：禁止
			//2(T0IF)定时器0溢出中断标志位
			//1(INTF)外部中断标志位
			//0(PAIF)PORTA 电平变化中断标志位
				
	TRISA = 0x0F;	//PORTA输入设置   1：输入  0：输出 PA0 PA1 PA2 PA3
	PORTA = 0x80;	//PA7
	TRISC = 0x02;	//PORTC输入设置   1：输入  0：输出  PC1
	PORTC = 0x00;   //
	
	WPUA = 0x00;    //PORTA端口上拉控制 1-开上拉 0-关上拉 PA7
	WPUC = 0x00;	//PORTC端口上拉控制 1-开上拉 0-关上拉  

	OPTION = 0B00000001; // Timer0:4分频     
			//7(/PAPU)PORTA上拉使能位:  1：使能PORTA上拉   0：上拉由各端口锁存器值使能
			//6(INTEDG)中断沿选择: 1: 上升沿中断 0：下降沿中断 
			//5(T0CS)Timer0时钟选择:  1:PA2/T0CKI引脚的跳变   0：内部指令周期（FOSC/2）
			//4(T0SE)Timer0时钟边沿选择：  1:PA2/T0CKI引脚下降沿  0：上升沿
			//3(PSA)预分频分频位：1：WDT  0：Timer0
			//2:0 预分频比选择位：
			/*			Timer0		WDT
				000： 	1:2  		1:1
				001:	1:4			1:2
				010:	1:8			1:4
				011:	1:16		1:8
				100:	1:32		1:16
				101:	1:64		1:32
				110:	1:128		1:64
				111:	1:256		1:128
			*/
	TMR0 = 56;				//定时器值：（256-56)*4*2/16M = 100us
	T0IF = 0;				//清空T0软件中断
	
	MSCKCON = 0B00000000;	//Bit4->0,禁止LVR(60F02x M版之前)
                            //Bit4->0, LVREN使能时,开启LVR(60F02x M版及M版之后)  
                            //Bit4->1, LVREN使能时,工作时开启LVR, 睡眠时自动关闭LVR(60F02x M版及M版之后)         
	
	CMCON0 = 0B00000111; 	//关闭比较器，CxIN为数字IO口
			//7(C2OUT)比较器2输出bit
			//6(C1OUT)比较器1输出bit
			//5(C2INV)比较器2输出反向bit
			//4(C1INV)比较器1输出反向bit
			//3(CIS)比较器输入切换
			//2:0(CM)比较器模式位
			/*
				000:  	比较器关闭，CxIN为模拟IO口
				001：	3个输入共用到2个比较器上
				010：	4个输入共用到2个比较器上
				011：	2个共参考比较器
				100：	2个独立比较器
				101：	1个独立比较器
				110：	2个带输出共参考比较器
				111:	比较器关闭，CxIN为数字IO口
			*/
}

void PWM_INITIAL (void) 
{
/*
*将相关的TRIS位置1禁止PWMx引脚的输出驱动器；
*装裁PWMxCR0寄存器以设置PWMx周期，中断产生方式以及选择时钟源；
*用适当的值装载PWMxCR1寄存器配置为PWM模式，合适的预分频比；
*装载PRx寄存器设置PWM占空比；
*配置并启动TIMERx：
	将PWMxCR1寄存器的TMRXIF中断标志位清零
	将PWMxCR1寄存器的TMRxON位置1启动TIMERx
*重新开始一个PWM周期后，使能PWM输出：
	等待TIMERx溢出（PWMxCR1寄存器的TMRxIF位置1）
	将相关的TRIS位清零使能PWMx引脚的输出驱动器
*PWM周期=2^TMRXPS * 2^PXPER * [(T3CKDIV+1)/PWM时钟源]
*/
  //-------------------------------
	PWM3Dir = 1; 			//PWM3输出PIN暂为输入模式
	//-------------------------------
	PWM3CR0 = 0B00010000; 	//7(P3INTS) 禁止中断
							//6:4(P3PER) 周期位选择
							/*	000:4位
								001:5位
								010:6位
								011:8位
								100:9位
								101:10位
								110:11位
								111:12位
							*/
							//3:1（P3CKSRC） 时钟选择
							/*	000:系统时钟SYSCLK/(T3CKDIV+1)
								001:内部RC快时钟/(T3CKDIV+1)
								010：T0CK/(T3CKDIV+1)
								011：T1CK/(T3CKDIV+1)
								100：内部RC快时钟/(T3CKDIV+1)    同时PWM3输出低电平
								101：内部RC快时钟/(T3CKDIV+1)    同时PWM3输出高电平
								110：内部RC快时钟/(T3CKDIV+1)    同时PWM3根据高脉冲调制P3CK
								111：内部RC快时钟/(T3CKDIV+1)    同时PWM3根据低脉冲调制P3CK 
							*/
							//0（P3BZR）	0：PWM 输出							

	PWM3CR1 = 0B10000000;
                   			//7（P3EN）1:TMR4为PWM/BUZZER模式  0:TMR4为定时器模式
	               			//6（P3POL）1：低电平有效，0：为高电平有效
	               			//5:3（TMR3PS）预分频比设置
							/*	000  	1:1
								001		1:2
								010		1:4
								011		1:8
								100		1:16
								101		1:32
								110		1:64
								111		1:128
	               			*/
							//2(TMR3ON) 1:打开定时器  0：关闭
	               			//1（TMR3IE）1：允许产生中断   0：禁止中断
	               			//0（TMR3IF）1：P3INTS = 1时，TMR4发生了匹配   P3INTS = 0时，TMR4发生了溢出
							//			 0：没有发生溢出或匹配 	               		
	TMR3L = 0;	//TIMER3计数结果低8位
	TMR3H = 0;	//7:4 TIMER3计数结果高4位   3:0 TR3高4位	
	T3CKDIV = 2; 			//周期 = 2^0*2^8*[(T3CKDIV+1)/16000000]
							//频率 = 16M/2^0/2^5/[(T3CKDIV+1) =  166.7kHz
				  			
	PR3L = 0;	//TR3低8位  占空比=PR3L/2^5
	
	PWM3Dir = 0; 			//PWM3输出PIN暂为输入模式
	
	PWM5Dir = 1; 			//PWM4输出PIN暂为输入模式
	//-------------------------------
	PWM5CR0 = 0B00100000; 	//7(P4INTS) 禁止中断
							//6:4(P4PER) 周期位选择
							/*	000:4位
								001:5位
								010:6位
								011:8位
								100:9位
								101:10位
								110:11位
								111:12位
							*/
							//3:1（P4CKSRC） 时钟选择
							/*	000:系统时钟SYSCLK/(T4CKDIV+1)
								001:内部RC快时钟/(T4CKDIV+1)
								010：T0CK/(T4CKDIV+1)
								011：T1CK/(T4CKDIV+1)
								100：内部RC快时钟/(T4CKDIV+1)    同时PWM4输出低电平
								101：内部RC快时钟/(T4CKDIV+1)    同时PWM4输出高电平
								110：内部RC快时钟/(T4CKDIV+1)    同时PWM4根据高脉冲调制P4CK
								111：内部RC快时钟/(T4CKDIV+1)    同时PWM4根据低脉冲调制P4CK 
							*/
							//0（P4BZR）	0：PWM 输出							

	PWM5CR1 = 0B10000000;
                   			//7（P4EN）1:TMR4为PWM/BUZZER模式  0:TMR4为定时器模式
	               			//6（P4POL）1：低电平有效，0：为高电平有效
	               			//5:3（TMR4PS）预分频比设置
							/*	000  	1:1
								001		1:2
								010		1:4
								011		1:8
								100		1:16
								101		1:32
								110		1:64
								111		1:128
	               			*/
							//2(TMR4ON) 1:打开定时器  0：关闭
	               			//1（TMR4IE）1：允许产生中断   0：禁止中断
	               			//0（TMR4IF）1：P4INTS = 1时，TMR4发生了匹配   P4INTS = 0时，TMR4发生了溢出
							//			 0：没有发生溢出或匹配 	               		
	TMR5L = 0;	//TIMER4计数结果低8位
	TMR5H = 0;	//7:4 TIMER4计数结果高4位   3:0 TR4高4位	
	T5CKDIV = 12; 			//周期 = 2^0*2^8*[(T4CKDIV+1)/16000000]
							//频率 = 16M/2^0/2^6/[(T4CKDIV+1) =  20.8kHz
				  			
	PR5L = 0;	//TR4低8位  占空比=PR4L/2^5

	
	PWM5Dir = 0; 			//PWM4输出PIN暂为输入模式
}

/*-------------------------------------------------
 * 函数名称：   TIMER2_INITIAL
 * 功能：      初始化设置定时器2
 * 相关寄存器： T2CON TMR2 PR2 TMR2IE TMR2IF PEIE GIE
 -------------------------------------------------*/
void TIMER2_INITIAL (void) 
{
	T2CON = 0B00000001; //Bit[1,0]=01,T2时钟分频 1:4
			            //Bit[6-3]=0000,T2输出时钟分频1:1 
	TMR2 = 0;           //TMR2赋初值
	PR2 = 200;          //设置TMR2输出比较值定时100us=(1/16000000)*2*4*200(PR2)
						//16M-2T-4分频 
	TMR2IF = 0;         //清TIMER2中断标志
	TMR2IE = 0;         //使能TIMER2的中断
	TMR2ON = 0;         //使能TIMER2启动
	PEIE=1;             //使能外设中断
	GIE = 1;            //使能全局中断
}

void ADC_INITIAL(void) 
{
	ADCON1 = 0B00000000; 	
			//7(DIVS)A/D分频时钟源选择位  1:慢时钟  0:FOSC
			//6:4(ADCS)A/D转换时钟选择位 
			/*	DIVS为0时，
				000: FOSC/2
				001: FOSC/8
				010: FOSC/32
				x11: FRC(内部振荡器，32k/256kHz)
				100：FOSC/4
				101：FOSC/16
				110：FOSC/64
			*/
	ADCON0 = 0B10100001; 	//11：Vref引脚   10:3V   01:2V   00：VDD
			//7(ADFM)转换结果格式选择位： 1：右对齐    0：左对齐
			//6:5(VCFG)参考电压选择位： 11：Vref引脚   10:3V   01:2V   00：VDD
			//4:2(CHS)模拟通道选择位
			/*
				000: AN0
				001: AN1
				010: AN2
				011: AN3
				100: AN4
				101: AN5
				110: AN6
				111: 内部1/4 VDD
			*/
			//1(GO/DONE)转换状态位：1：A/D转换正在进行  0：A/D转换完成/不在进行中
			//0(ADON)使能位：  1：使能   0：禁止
	ANSEL = 0xAC;   	//使能为模拟输入   AN2 AN3 AN5  1/4VDD 
			//7:0(ANSEL7)模拟选择位	
}   

void DelayUs(unsigned char Time)
{
	unsigned char a;
	for(a=0;a<Time;a++)
	{
		NOP();
	}
}  

/*-------------------------------------------------
 *	函数名称：DelayMs
 *	功能：   短延时函数
 *	输入参数：Time延时时间长度 延时时长Time ms
 *	返回参数：无 
 -------------------------------------------------*/
void DelayMs(unsigned char Time)
{
	unsigned char a,b;
	for(a=0;a<Time;a++)
	{
		for(b=0;b<5;b++)
		{
		 	DelayUs(197); //快1%
		}
	}
}

/*-------------------------------------------------
 *  函数名: GET_ADC_DATA
 *	功能：  读取通道ADC值
 *  输入：  AN_CN 通道序号
 *  输出：  INT类型AD值(单次采样无滤波)
 --------------------------------------------------*/
uint GET_ADC_DATA(uchar AN_CH) 
{ 
	unsigned char ADCON0Buff; 
	unsigned int tBuffer;
	unsigned int ADC_DATA;
	
	tBuffer = 0;
	ADC_DATA = 0;
	 
	ADCON0Buff = ADCON0 & 0B11100011; 	//清空通道值

	AN_CH <<=2;              
	ADCON0Buff |=  AN_CH;   			//选择通道      

	ADCON0 = ADCON0Buff; 				//重新加载通道值
    DelayUs(10); 
	GO_DONE = 1;             			//启动ADC 
	while( GO_DONE == 1 );    			//等待ADC转换完成

	ADC_DATA =  ADRESH;
	ADC_DATA <<=8;
	ADC_DATA |= ADRESL;      			//10Bit ADC值整合
	tBuffer =  ADC_DATA;
	return  tBuffer;
}

/*
void LVD_INITIAL(void)
{
	PCON = 0x30;//2.4V
	*/
				/*
					6:4(LVDL)低电压侦测选择位
							000 	保留
							001		保留
							010		2.0V
							011		2.4V
							100		2.8V
							101		3.0V
							110		3.6V
							111		4.0V
					3（LVDEN）低电压侦测使能  1：开启   0：关闭
					2（LVDW）低电压标志位     1：电压低于LVDL      0：高于LVDL
					1（/POR）上电复位标志     1：没发生上电复位或者由软件置1  0：发生了上电复位
					0（/BOR）低电压复位标志   1：没发生低电压复位或者由软件置1  0：发生了低电压复位
				*/
/*	LVDEN = 0;
}*/

void WDT_INITIAL (void) 
{
	CLRWDT();  				//清看门狗
	PSA    = 0;     				//时钟分频分给WDT
	WDTCON = 0B00010011;   //WDTPS=1010=1:16384,预分频1:1
                        	//定时时间=(16384*1)/32000=512ms          
}

void LedSetFunction()
{
	bDisOn = 1;
	LedCN++;
	if(LedCN > 3)
		LedCN = 0;
//	BeepCount = 25;
}

void DisSetFunction()
{
	if( (FanCN > 0) || (LedCN > 0) || (bACWork) || (bUsbOn))
	{
		if( bDisOn )
        {
			bDisOn = 0;        
        }
		else 
        {
			bDisOn = 1;        
        }
//		BeepCount = 25;
	}
}

void TimerSetFunction()
{
	if(FanCN > 0 || PtcCN )
	{	
		TimerCount = 0;
		TimerCN++;
		
        //20241007 改回 8H 
		if(TimerCN > 3) //4定时改为3定时 20240926
			TimerCN = 0;
		
		bDisOn = 1;
//		BeepCount = 25;
	}
}

void FanSpeedFunction()
{
	if(FanCN > 0)
	{
		if(FanCN == 1)
			LimitPwm = 18;
		else if(FanCN == 2)
			LimitPwm = 20;
		else if(FanCN == 3)
			LimitPwm = 22;
		else if(FanCN == 4)
			LimitPwm = 24;
		
		WorkTimer++;
        //V = 0.01908Y(470k/53.6k)  1024	
		if(WorkTimer >= 30000)
		{
			WorkTimer = 30000;     
			
			if(FanCN == 1)
				AimSpeed = HALL_FAN_VOT_45V;//236 4.5V 262 
			else if(FanCN == 2)
				AimSpeed = HALL_FAN_VOT_60V;//6.0V
			else if(FanCN == 3)
				AimSpeed = HALL_FAN_VOT_75V;//7.5V
			else if(FanCN == 4)
				AimSpeed = HALL_FAN_VOT_87V;//8.7V
			
			ChangeCount++;
			if(ChangeCount >= 200)
			{
				ChangeCount = 0;
				
				if(AimBoostValue > AimSpeed)
					AimBoostValue--;
			}
		}
		else 
		{        
			if(FanCN == 1)
				AimSpeed = HALL_FAN_VOT_45V;//4.5V
			else if(FanCN == 2)
				AimSpeed = HALL_FAN_VOT_60V;//6V
			else if(FanCN == 3)
				AimSpeed = HALL_FAN_VOT_75V;//7.5V
			else if(FanCN == 4)
				AimSpeed = HALL_FAN_VOT_92V;//9.2V
			
			AimBoostValue = AimSpeed;
			ChangeCount   = 0;
		}
		
		TMR3ON = 1;
	}
	else 
	{
		WorkTimer   = 0;
		ChangeCount = 0;
		
		PR3L        = 0;
		TMR3ON      = 0;
		PORTC       &= 0xEF;//PC4
	}
	
	if(LedCN > 0)
	{
		if(LedCN == 1)//60%      64 P100
			PR5L = 64;
		else if(LedCN == 2)//80%  45 P70
			PR5L = 45;
		else if(LedCN == 3)//100%  20 P30
			PR5L = 20;
		
		TMR5ON = 1;
	}
	else 
	{
		PR5L   = 0;
		TMR5ON = 0;
		PORTC  &= 0xFB;//PC2
	}
}

//void TIMER_LED_VAL( unsigned char val1, unsigned char val2 )
//{
//	DisBuff1 |= val1; 
//	DisBuff1 &= val2;				
//}

unsigned char LED_FLASH = 0;
void PowerLedFunction()
{
	if(DisStartCount)
	{
		DisStartCount--;
		
		if(DisStartCount < 50)
		{
			DisLed   = 5;
			DisBuff1 = 0xFF;
		}
		else if(DisStartCount < 100)
		{
			DisLed   = 0;
			DisBuff1 = 0;
		}
		else
		{
			DisLed = 5;
			DisBuff1 = 0xFF;
		}
	}
	else if(bDisOn)
	{
		if(bACWork)
		{
			if(BTCN == 5)
				DisLed = 5;
			else 
			{
				FlashCount++;
				if(FlashCount >= 50)
				{
					FlashCount = 0;
					
						if(DisLed > 4)
							DisLed = BTCN - 1;  
						else
							DisLed = BTCN;  
                    
//                    #ifdef CHARG_MQRQUEE
//						DisLed++;  //跑马
//						if(DisLed > 4)
//							DisLed = BTCN - 1;                      
//                    #endif  
				}
			}
		}
		else 
        {
			DisLed = BTCN;        
        }
		
        //PTC
		if( TimerCN == 1 )
		{
			if( PtcCN )
			{
				DisBuff1 |= 0x10; 
				DisBuff1 &= 0x9F;				
			}
			else
			{
				DisBuff1 |= 0x10;
				DisBuff1 &= 0x1F;				
			}
		}
		else if( TimerCN == 2 )
		{
			if( PtcCN )
			{			
				DisBuff1 |= 0xA0;
				DisBuff1 &= 0xAF;
			}
			else
			{
				DisBuff1 |= 0x20;
				DisBuff1 &= 0x2F;				
			}
		}
		else if( TimerCN == 3 )
		{
			if( PtcCN )
			{			
				DisBuff1 |= 0xC0;
				DisBuff1 &= 0xCF;
			}	
			else
			{
				DisBuff1 |= 0x40;
				DisBuff1 &= 0x4F;				
			}
		}
		else if( TimerCN == 0 )
        {
			if( PtcCN )
			{
				DisBuff1 |= 0x80;
				DisBuff1 &= 0x8F;				
			}
	        else
			{
				DisBuff1 &= 0x0F;  				
			}      
        }	
        	
	}
	else 
	{
		DisLed   = 0;
		DisBuff1 = 0;
	}
	
	/*
	switch(DisLed)
	{
		case 0:		DisBuff = 0;break;
		case 1:		DisBuff |= 0x01;DisBuff &= 0xF1;break;
		case 2:		DisBuff |= 0x03;DisBuff &= 0xF3;break;
		case 3:		DisBuff |= 0x07;DisBuff &= 0xF7;break;
		case 4:		DisBuff |= 0x0F;break;
		case 5:		DisBuff |= 0x0F;break;
		default:	DisBuff = 0;break;
	}
	*/
	
//	if(DisLed == 0)			DisBuff = 0;
//	else if(DisLed == 1)	{DisBuff |= 0x01;DisBuff &= 0xF1;}
//	else if(DisLed == 2)	{DisBuff |= 0x03;DisBuff &= 0xF3;}
//	else if(DisLed == 3)	{DisBuff |= 0x07;DisBuff &= 0xF7;}
//	else					 DisBuff |= 0x0F;

    //充电开启 电量闪灯
    if( !FAN_GEAR_FLAG )
    {
		if( ++LED_FLASH >= 120 )
		{
			LED_FLASH = 0;
		}    
	    
		//充电闪灯
		if( LED_FLASH < 60 )    
		{
			if( DisLed == 0 )
			{
				DisBuff |= 0x01; //LED1 ON
				DisBuff &= 0xF1;         
			}
			else if( DisLed == 1 )
			{
				DisBuff |= 0x03; //LED2 ON
				DisBuff &= 0xF3;        
			} 
			else if( DisLed == 2 )
			{
				DisBuff |= 0x07; //LED3 ON
				DisBuff &= 0xF7;        
			}
			else if( DisLed == 3 )
			{
				DisBuff |= 0x0F;        
			}    
		}
		else if( LED_FLASH >= 60 && 
				 LED_FLASH < 120 ) //关状态  
		{
			if( DisLed == 0 )   
			{
				DisBuff = 0;   
			}  
			else if( DisLed == 1 )
			{
				DisBuff |= 0x01;       
				DisBuff &= 0xF1;         
			}
			else if( DisLed == 2 )
			{
				DisBuff |= 0x03; 
				DisBuff &= 0xF3;          
			}  
			else if( DisLed == 3 )
			{
				DisBuff |= 0x07;
				DisBuff &= 0xF7;        
			}        
		}  
		//充电开启   		     
    }
    else  //档位显示
    {
 		if( FanCN == 1 )
		{
			DisBuff |= 0x01; 
			DisBuff &= 0xF1;         
		}
        else if( FanCN == 2 )
        {
			DisBuff |= 0x02; 
			DisBuff &= 0xF2;  
        }   
        else if( FanCN == 3 )
        {
			DisBuff |= 0x04; 
			DisBuff &= 0xF4;  
        }  
        else if( FanCN == 4 )
        {
			DisBuff |= 0x08; 
			DisBuff &= 0xF8;  
        }                        
        else if( FanCN == 0 )
        {
            DisBuff = 0;
        }   
    }
}

void WorkCheckFunction()
{
	if(bUsbOn)//放电检测
	{
		UsbCount = 0;
		
		if(bUsbCheck == 0)
		{
			UsbOutCount++;
			if(UsbOutCount >= 150)
			{
				UsbOutCount = 0;

				bUsbOn = 0;
			}
		}
		else 
			UsbOutCount = 0;
	}
	else 
	{
		UsbOutCount = 0;
		
		if(bUsbCheck)
		{
			UsbCount++;
			if(UsbCount >= 10)
			{
				UsbCount = 0;
				
				if(bUsbOn == 0)
					bDisOn = 1;
				
				bUsbOn = 1;
			}
		}
		else 
			UsbCount = 0;
	}
}

void ACCheckFunction()
{
	if(bACWork)//充电检测
	{
		ChargeCount = 0;
		
		if(bExp)
		{
			FullCount++;
			if(FullCount >= 150)
			{
				FullCount = 150;
				bFull = 1;
			}
		}
		else 
			FullCount = 0;
		
		if(bExp == 0)
		{
			ChargeOutCount++;
			if(ChargeOutCount >= 150)
			{
				ChargeOutCount = 0;
				bACWork = 0;
			}
			
			if(ChargeOutCount >= 50)
				bFull = 0;
		}
		else 
			ChargeOutCount = 0;
	}
	else 
	{
		FullCount = 0;
		ChargeOutCount = 0;
	
		bFull = 0;
		
		if(bExp)
		{
			ChargeCount++;
			if(ChargeCount >= 3)
			{
				ChargeCount = 3;
				
				if(bACWork == 0)
					bDisOn = 1;
                    
				bACWork = 1;
				bOver   = 0;
			}
		}
		else 
			ChargeCount = 0;
	}
}

//IR接收数据
//void IRGetFunction0(void)
//{
//	bIRGet0 = 0;
//	if(bIRStatus0 == 0)
//	{
//		if((IRByte0 > 27)&&(IRByte0 < 63))//判断开始码
//		{
//			bIRStatus0 = 1;
//			IRNum0 = 0;
//			IRGata0 = 0;
//		}
//	}
//	else
//	{
//		if((IRByte0 > 2)&&(IRByte0 < 9))//接收为低电平
//			IRGata0 = IRGata0 << 1;
//		else if((IRByte0 > 10)&&(IRByte0 < 24))//接收为高电平
//		{
//			IRGata0 = IRGata0 << 1;
//			IRGata0++;
//		}
//		else 
//			bIRStatus0 = 0;
//		
//		IRNum0++;
//		if(IRNum0 == 8)//判断第一接收码为0x00
//		{
//			if(IRGata0 != 0x00)
//				bIRStatus0 = 0;
//		}
//		
//		if(IRNum0 == 16)//判断第二接收码为0xFF
//		{
//			if(IRGata0 != 0xFF)
//				bIRStatus0 = 0;
//		}
//		
//		if(IRNum0 == 24)//接收第三码为数据码
//			IRCode0 = IRGata0;
//		
//		if(IRNum0 == 32)//接收第四码为数据码反码
//		{
//			IRNum0 = 0;
//			bIRStatus0 = 0;
//			IRGata0 =~ IRGata0;
//			if(IRCode0 == IRGata0)//判断接收是否配对
//			{
//				bIROK0 = 1;
//				IRRecCount0 = 25;
//			}
//		}
//	}
//}

/*
	A2	E2

	E0	90
	
	30	7A
*/

//IR处理
//void IRDriverFunction0(void)
//{
//	bIROK0 = 0;
//	switch(IRCode0)
//	{
//		case 0xA2://  OFF/ON
//			if(FanCN > 0)
//			{
//				FanCN = 0;
//				bFanOff = 1;
//				StartCount = 0;
//				
//	//			TimerCount = 0;
//				TimerCN = 0;
//			}
//			else 
//			{
//				FanCN = 1;
//				FanPort = 1;
//				bFanOff = 0;
//				StartCount = 50;
//			}
//			BeepCount = 25;
//			bDisOn = 1;
//			break;
//			
//		case 0xE0://-
//			if(FanCN > 0)
//			{
//				if(FanCN > 1)
//					FanCN--;
//				
//				bDisOn = 1;
//				BeepCount = 25;
//				WorkTimer = 0;
//			}
//			break;
//			
//		case 0x90://+
//			if(FanCN > 0)
//			{
//				if(FanCN < 4)
//					FanCN++;
//				
//				bDisOn = 1;
//				BeepCount = 25;
//				WorkTimer = 0;
//			}
//			break;
//			
//		case 0x30://Timer
//			TimerSetFunction();
//			break;
//		
//		case 0xE2://Led
//			LedSetFunction();
//			break;
//			
//		case 0x7A://显示
//			DisSetFunction();
//			break;
//		
//		default:
//			IRCode0 = 0;
//			break;
//	}
//}

void Per10msFunction()
{
	CLRWDT();				//清看门狗
	
   	b10ms = 0;
	
	bADCheck = 1;
	
//	if(BeepCount)
//		BeepCount--;
	
	if(StartCount)
		StartCount--;
	
	FanSpeedFunction();
	PowerLedFunction();//指示灯
	
	WorkCheckFunction();
	ACCheckFunction();

	if( (FanCN   == 0)   &&
        (LedCN   == 0)   &&
        (bACWork == 0)   &&
        (bUsbOn  == 0) )
		bDisOn  = 0;
	
//	if(IRRecCount0)
//		IRRecCount0--;
	
	if(bFanOff)//关风扇，利用马达将升压电压泄放
	{		
		if(BoostValue < 288)//对比升压电压值 //5.5V
		{
			FanOffCount++;
			if(FanOffCount >= 10)//泄放延时
			{
				FanOffCount = 0;
				
				bFanOff = 0;
				FanPort = 0;
			}
		}
		else
        {
			FanOffCount = 0;        
        }
			
		FanCloseCount++;
		if(FanCloseCount >= 200)
		{
			FanCloseCount = 0;
				
			bFanOff = 0;
			FanPort = 0;
		}
	}
	else
	{
		FanOffCount   = 0;
		FanCloseCount = 0;
	}
	
	if(SleepCount) 	//防止重复进入睡眠
   	   	SleepCount--;
//   	else
//   	   	bNoIn = 0;
	
	KeyLast++;
	if(KeyLast > 250)			
		KeyLast = 0;
		
	if(bKeyPress)			
		return;
	if((KeyValue1 < 500)||(KeyValue2 < 500))	
	{
		bKeyPress = 1;
		KeyState  = 0;
		KeyLast   = 0;
	}
}

void Per500msFunction()
{
   	b500ms = 0;
	
	if( ( FanCN   == 0 ) && 
        ( bFanOff == 0 ) &&
        ( LedCN   == 0 ) &&
        ( bACWork == 0 ) &&
        ( bUsbOn  == 0 ) &&
		( PtcCN   == 0 ) &&
        ( bKeyPress == 0 ) )
	{
		OFFCount++;
		if(OFFCount >= 6)
		{
			OFFCount = 0;
			bStop    = 1;
		}
	}
	else
	{
		OFFCount = 0;		
	}
       
    //档位电量按键切换 20241008    
    static unsigned char FAN_FLASH_CNT = 0;    
    if( FAN_GEAR_FLAG && ++FAN_FLASH_CNT >= 4 )
    {
        FAN_GEAR_FLAG = 0;
        FAN_FLASH_CNT = 0;
    }
	
	if( ( FanCN   > 0 ) &&
	    ( TimerCN > 0 ) )
	{
		TimerCount++;
		if(TimerCount >= 7200)
		{
			TimerCount = 0;
			
			TimerCN--;
			if(TimerCN == 0)
			{
				FanCN   = 0;
				PtcCN   = 0;
				PTC     = 0;
				bFanOff = 1;
			
//				BeepCount = 25;
			}
		}
	}
	else 
    {
		TimerCount = 0;    
    }
}

//******************************按键函数**********************************
void KeyFunction(void)
{
	/*
	if(bOver)
	{
		bKeyPress = 0;
		KeyState = 0;
		KeyLast = 0;
		return;
	}*/
	
	switch(KeyState)
	{
		case 0x00:
			if(KeyLast > 2)
			{
				if( ( KeyValue1 < 500 ) ||
				    ( KeyValue2 < 500 ) )
				{
					KeyState = 1;
					KeyLast  = 0;
				}
				else
				{
					KeyState  = 0;
					bKeyPress = 0;
				}
			}
			break;
			
		case 0x01:
			KeyState = 2;
			
			if(KeyValue1 < 150)//Led
				LedSetFunction();
//			else if(KeyValue1 < 500)//Dis 202410085 禁用显示按键
//				DisSetFunction();
			
			if(KeyValue2 < 150)//Fan
			{
				KeyLast = 0;
//				KeyState = 4;

				WorkTimer = 0;
					
				FanCN++;
                FAN_GEAR_FLAG = 1;
				if(FanCN > 4)
				{
					FanCN      = 0;
					bFanOff    = 1;
					StartCount = 0;
					
					TimerCount = 0;
					TimerCN    = 0;
				}
				else 
				{
					FanPort = 1;
					bFanOff = 0;
					StartCount = 50;
				}
				
				bDisOn = 1;
//				BeepCount = 25;
			}
			else if(KeyValue2 < 500)//Timer
                //跳转到 LAST case 4 增加长短按判断
                //直接定时切换 20241007
				//TimerSetFunction();

                //不跳转到长按 20241007
                KeyState = 4;
			break;

		case 0x02:
			if((KeyValue1 > 500)&&(KeyValue2 > 500))
			{
				KeyState = 3;
				KeyLast  = 0;
			}
			break;

		case 0x03:
			if(KeyLast > 2)
			{
				if((KeyValue1 > 500)&&(KeyValue2 > 500))
				{
					KeyState  = 0;
					bKeyPress = 0;
				}
				else
					KeyState  = 2;
			}
			break;
            

		case 0x04:
			if( KeyLast >= 100 )
			{
                if( KeyValue2 < 500 )
                {
                    //20241007 禁用PTC功能增加定时8H
                     if( PtcCN == 4)
					 {
						 PtcCN = 0;
						 PTC   = 0;
					 }  
                     else
					 {
                         PtcCN = 4;
						 PTC   = 1;						 
					 }
                }
                
				KeyLast  = 0;
				KeyState = 2;
			}
            else //短按
            {
				if( KeyValue2 >= 500 ) //释放
				{   
                    TimerSetFunction();
                    
                    bKeyPress = 0;
					KeyLast   = 0;
                   	KeyState  = 2;                      
                }
            }
			break;

		default:
			KeyState  = 0;
			bKeyPress = 0;
			break;
	}
}

void BTCheckFunction()
{
	bADCheck = 0;
	
	if(bOver)
		return;
	
	if(bDCCN)
	{
		bDCCN = 0;
		AddDCValue += DCValue;
		
		if(MaxADValue < DCValue)
			MaxADValue = DCValue;
		
		if(MinADValue > DCValue)
			MinADValue = DCValue;
	}
	else 
		bDCCN = 1;
	
	ADCount++;
	if(ADCount >= 20)
	{
		ADCount = 0;
		
		AddDCValue -= MaxADValue;
		AddDCValue -= MinADValue;
		
		DCADValue = AddDCValue >> 3;
		AddDCValue = 0;
		
		MaxADValue = 0;
		MinADValue = 0xFFFF;
//V = 0.0078125Y<2.0V>  	1024      	
/*						DC								AC
				降				回弹				升				回落
	5			
												544	4.25V		512	4.0V	
	4			
			500 3.91V		531	4.15V			529 4.13V		499	3.9V
	3					
			486 3.8V		512	4.0V			521 4.07V		474 3.7V
	2					
			474	3.7V		499	3.9V			508 3.97V		435 3.4V
	1					
			384	3.0V
	0
*/
		if(bFristOn)
		{
			bFristOn = 0;
			
			if(bACWork)
			{
				BTCN = 1;
				if(DCADValue > 508)//3.97V
					BTCN = 2;
				else if(DCADValue > 521)//4.07V
					BTCN = 3;
				else if(DCADValue > 529)//4.13V
					BTCN = 4;
			}
			else 
			{
				BTCN = 4;
				if(DCADValue < 500)//3.91V
					BTCN = 3;
				else if(DCADValue < 486)//3.8V
					BTCN = 2;
				else if(DCADValue < 474)//3.7V
					BTCN = 1;
			}
		}
		else
		{
			switch(BTCN)
			{
				case 0:
					BTCN = 1;
					break;
				
				case 1:
					if(bACWork)
					{
						if(DCADValue > 508)//升  3.97V  
						{
							UpCount++;
							if(UpCount > 3)
							{
								UpCount = 0;
								BTCN    = 2;
							}
						}
						else
							UpCount = 0;
						DownCount = 0;
					}
					else 
					{
						if(DCADValue < 384)//降   3.0V     过放
						{
							DownCount++;
							if(DownCount > 3)
							{
								DownCount = 0;
								BTCN = 0;
								
								PR3L = 0;
								TMR3ON = 0;
								PORTC &= 0xEF;//PC4
								
								if(FanCN > 0)
									bFanOff = 1;
								
								FanCN = 0;
								StartCount = 0;
								
								bOver = 1;
//								BeepCount = 25;
								
								LedCN = 0;
								PR5L = 0;
								TMR5ON = 0;	
								PORTC  &= 0xFB;//PC2
								//20241009 FIX PTC 
								PTC = 0;
								
								TimerCN = 0;
								TimerCount = 0;
							}
							UpCount = 0;
						}
						else if(DCADValue > 499)//回弹  3.9V
						{
							UpCount++;
							if(UpCount > 3)
							{
								UpCount = 0;
								BTCN = 2;
							}
							DownCount = 0;
						}
						else 
						{
							DownCount = 0;
							UpCount = 0;
						}
					}
					break;
				
				case 2:
					if(bACWork)
					{
						if(DCADValue > 521)//升  4.07V
						{
							UpCount++;
							if(UpCount > 3)
							{
								UpCount = 0;
								BTCN = 3;
							}
							DownCount = 0;
						}
						else if(DCADValue < 435)//回落  3.4V
						{
							DownCount++;
							if(DownCount > 3)
							{
								DownCount = 0;
								BTCN = 1;
							}
							UpCount = 0;
						}						
						else
						{
							UpCount = 0;
							DownCount = 0;
						}
					}
					else 
					{
						if(DCADValue < 474)//降    3.7V
						{
							DownCount++;
							if(DownCount > 3)
							{
								DownCount = 0;
								BTCN = 1;
							}
							UpCount = 0;
						}
						else if(DCADValue > 512)//回弹   4.0V
						{
							UpCount++;
							if(UpCount > 3)
							{
								UpCount = 0;
								BTCN = 3;
							}
							DownCount = 0;
						}
						else 
						{
							DownCount = 0;
							UpCount = 0;
						}
					}
					break;
				
				case 3:
					if(bACWork)
					{
						if(DCADValue > 529)//升    4.13V
						{
							UpCount++;
							if(UpCount > 3)
							{
								UpCount = 0;
								BTCN = 4;
							}
							DownCount = 0;
						}
						else if(DCADValue < 474)//回落   3.7V
						{
							DownCount++;
							if(DownCount > 3)
							{
								DownCount = 0;
								BTCN = 2;
							}
							UpCount = 0;
						}						
						else
						{
							UpCount = 0;
							DownCount = 0;
						}
					}
					else 
					{
						if(DCADValue < 486)//降  3.8V
						{
							DownCount++;
							if(DownCount > 3)
							{
								DownCount = 0;
								BTCN = 2;
							}
							UpCount = 0;
						}
						else if(DCADValue > 513)//回弹  4.15V
						{
							UpCount++;
							if(UpCount > 3)
							{
								UpCount = 0;
								BTCN = 4;
							}
							DownCount = 0;
						}
						else 
						{
							DownCount = 0;
							UpCount = 0;
						}
					}
					break;
				
				case 4:
					if(bACWork)
					{
						if(DCADValue > 539)//升    4.25V
						{
							UpCount++;
							if(UpCount > 3)
							{
								UpCount = 0;
								BTCN = 5;
							}
							DownCount = 0;
						}
						else if(DCADValue < 499)//回落   3.9V
						{
							DownCount++;
							if(DownCount > 3)
							{
								DownCount = 0;
								BTCN = 3;
							}
							UpCount = 0;
						}						
						else
						{
							UpCount = 0;
							DownCount = 0;
						}
					}
					else 
					{
						if(DCADValue < 500)//降  3.91V
						{
							DownCount++;
							if(DownCount > 3)
							{
								DownCount = 0;
								BTCN = 3;
							}
							UpCount = 0;
						}
						else 
						{
							DownCount = 0;
							UpCount = 0;
						}
					}
					break;
				
				case 5:
					if(bACWork)
					{
						if(DCADValue < 512)//降 4.0V
						{
							DownCount++;
							if(DownCount > 3)
							{
								DownCount = 0;
								BTCN = 4;
							}
						}
						else 
							DownCount = 0;
					}
					else
					{
						BTCN = 4;
						DownCount = 0;
					}
					UpCount = 0;
					break;
				
				default:
					BTCN = 0;
					break;
			}
		}
	}
}

void EnterSleep()
{
//   	if(bNoIn)
//   	   	return;	
//   	bStop = 0;
//	
//	CLRWDT();				//清看门狗

    //复位休眠标志
   	bStop = 0;
	bOver = 0;

    //红外触发不进入休眠
//	if(IRIN == 0)
//		return;

    //中断标志位
   // unsigned char read_pa;
   // static bit  awaken; 
    
    //允许进入休眠
    awaken  = 1;
    
    //复位中断标志
	read_pa = PORTA;
    PAIF    = 0;
    
    //关闭T0 中断
	T0IE    = 0;	
	
	PR3L   = 0;
	TMR3ON = 0; 
	PR4L   = 0;
	TMR4ON = 0;	
	
	TRISA = 0x0F;	//PORTA输入设置   1：输入  0：输出	PA0 PA1 PA2 PA3 PA7
	PORTA = 0x00;		//PA7
	WPUA  = 0x00;    //PORTA端口上拉控制 1-开上拉 0-关上拉 PA7
	TRISC = 0x00;	//PORTC输入设置   1：输入  0：输出  
	PORTC = 0x00;   //
	WPUC  = 0x00;	//PORTC端口上拉控制 1-开上拉 0-关上拉   
	
    //关AD
	ANSEL  = 0x00;
	ADCON0 = 0x00;
	ADON   = 0;
	
//	CLRWDT();				//清看门狗
//	SWDTEN = 0;//关看门狗
	
    //喂狗
	CLRWDT();  
	NOP();NOP();NOP();
	GIE  = 0;
    
	//再复位一次中断标志
	PORTA = PORTA;
	PAIF  = 0;    
    
	//设置中断唤醒IO
	IOCA7 = 1;
	IOCA2 = 1;
	IOCA0 = 1;
	IOCA1 = 1;
	IOCA3 = 1;
	
	PAIE = 1;
	
    //休眠宏跳转
	#asm
		StartSleep:
	#endasm        
	
    NOP();
    SLEEP(); 
    NOP();
    
    //有中断触发 退出休眠
   // if( PAIF || ( PAIE == 0 && PAIF == 0 ))
   // {
	//	awaken = 0;
   //     bStop  = 0;
  //  }
    
    //跳转休眠宏
	if( awaken == 1 )
	{
		#asm  
			goto StartSleep
		#endasm
	}
	
	PAIF  = 0;
	IOCA7 = 0;
	IOCA0 = 0;
	IOCA1 = 0;
	IOCA2 = 0;
	IOCA3 = 0;
	PAIE  = 0;	

//	POWER_Init();		//系统初始化
//	TIMER2_INITIAL();	//TIMER2初始化
//	ADC_INITIAL();		//ADC初始化
//	PWM_INITIAL();		//PWM初始化
////	LVD_INITIAL();		//LVD初始化
//	WDT_INITIAL();		//WDT初始化
	
//	ParaInit();

    //重新设置ADC   
    ADCON0 = 0B10100001;
	ADON   = 1;

    ANSEL  = 0xAC;    
	
	NOP();NOP();
    PSA = 0;     		//时钟分频分给WDT定时器   
	CLRWDT();			//喂狗
    
    //IO重新实始化
	TRISA = 0x0F;	//PORTA输入设置   1：输入  0：输出 PA0 PA1 PA2 PA3 PA7
	PORTA = 0x80;	//PA7
	TRISC = 0x02;	//PORTC输入设置   1：输入  0：输出  PC1
	PORTC = 0x00;   //
	
	WPUA = 0x00;    //PORTA端口上拉控制 1-开上拉 0-关上拉 PA7
	WPUC = 0x00;	//PORTC端口上拉控制 1-开上拉 0-关上拉      
    
	T0IE = 1;				//开定时器/计数器0中断
	GIE  = 1;  	//开中断
//	SleepCount = 200;   	//2s内不再进入休眠状态
//	bNoIn = 1;
}

/*-------------------------------------------------
 *  函数名:  main 
 *	功能：  主函数
 *  输入：  无
 *  输出：  无
 --------------------------------------------------*/
void main()
{
	GIE = 0;                //关中断
	
	CLRWDT();				//清看门狗
	
	POWER_Init();		//系统初始化
	TIMER2_INITIAL();	//TIMER2初始化
	ADC_INITIAL();		//ADC初始化
	PWM_INITIAL();		//PWM初始化
//	LVD_INITIAL();		//LVD初始化
	WDT_INITIAL();		//WDT初始化
			
	ParaInit();
	
	DelayMs(100);//等待100ms
	
	GIE  = 1; 				//开中断
	T0IE = 1;				//开定时器/计数器0中断
	
	DisStartCount = START_COUNT_INTR;
	
//	BeepCount = 25;

	while(1)
	{
		if(b10ms)  	   	   	   	Per10msFunction();
   	   	if(b500ms) 	   	   	   	Per500msFunction();
		if(bADCheck)			BTCheckFunction();
		if(bKeyPress)			KeyFunction();
//		if(bStop)				EnterSleep();

        //增加一个计数器延长进入休眠时间 20240928
		if(bStop && !SleepCount ) EnterSleep();
		
//		if(bIROK0)							IRDriverFunction0();	
//		if(bIRGet0)							IRGetFunction0();//IR接收数据
	}
}

//********************************************************
//**************中断处理**********************************
//PIC_HI-TECH使用
void interrupt ISR(void)
{ 
   
  //定时器0的中断处理**********************
	if(T0IE && T0IF)                //8.192ms翻转一次≈60Hz
	{
		T0IF = 0;
		TMR0 = 56;				//定时器值：（256-56)*4*2/16M = 100us
	
		Count10ms++;
    	if(Count10ms >= 100)//100
  		{
  			Count10ms = 0;
  			b10ms     = 1;
			
			Count500ms++;
			if(Count500ms >= 50)
			{
				Count500ms = 0;
				b500ms     = 1;
			}
  		}
				
//		if(BeepCount)
//			BeepPort =~ BeepPort;
//		else 
//		{
//			BeepPort = 0;
			
			ADCheckCN++;
			if(ADCheckCN > 10)
			{
				ADCheckCN = 0;
				DCValue = GET_ADC_DATA(7);
			}
			else if(ADCheckCN == 3)
				KeyValue1 = GET_ADC_DATA(3);
			else if(ADCheckCN == 6)
				KeyValue2 = GET_ADC_DATA(2);
			
			if(UsbCheck)
				UsbCheckCount++;
			
			if(Exp)
				ExpCount++;
			
			CheckCount++;
			if(CheckCount >= 100)
			{
				CheckCount = 0;
				
				if(UsbCheckCount > 10)
					bUsbCheck = 1;
				else 
					bUsbCheck = 0;
				
				if(ExpCount > 3)
					bExp = 1;
				else 
					bExp = 0;
				
				UsbCheckCount = 0;
				ExpCount      = 0;
			}
			
//		}
	
		DisCount++;
		if(DisCount >= 5)
		{
			DisCount = 0;
			
//			4:PA4   3:PC3   2:PA5   1:PA6
			PORTA &=~ 0x70;//PA4 PA5 PA6     清零
			PORTC &=~ 0x08;//PC3    		清零
			TRISA |= 0x70;//PA4 PA5 PA6
			TRISC |= 0x08;//PC3
		
			DisCN++;
			if(DisCN > 11)
			{
				DisCN = 0;
				if(DisBuff1 & 0x80)//1+2   PA6 + PA5
					{TRISA &=~ 0x60;Led1 = 1;Led2 = 0;}
			}
			else if((DisCN == 1)&&(DisBuff1 & 0x40))//1+2   PA6 + PA5
				{TRISA &=~ 0x60;Led1 = 0;Led2 = 1;}
			else if((DisCN == 2)&&(DisBuff1 & 0x08))//1+3   PA6+PC3			
				{TRISA &=~ 0x40;TRISC &=~ 0x08;Led1 = 1;Led3 = 0;}
			else if((DisCN == 3)&&(DisBuff1 & 0x02))//1+3   PA6+PC3
				{TRISA &=~ 0x40;TRISC &=~ 0x08;Led1 = 0;Led3 = 1;}	
			else if((DisCN == 4)&&(DisBuff & 0x08))//1+4   PA4+PA6			
				{TRISA &=~ 0x50;Led1 = 1;Led4 = 0;}
			else if((DisCN == 5)&&(DisBuff & 0x01))//1+4   PA4+PA6			
				{TRISA &=~ 0x50;Led1 = 0;Led4 = 1;}
			else if((DisCN == 6)&&(DisBuff & 0x02))//3+4   PA4+PC3		
				{TRISA &=~ 0x10;TRISC &=~ 0x08; Led3 = 1;Led4 = 0;}	
			else if((DisCN == 7)&&(DisBuff1 & 0x01))//3+4   PA4+PC3		
				{TRISA &=~ 0x10;TRISC &=~ 0x08; Led3 = 0;Led4 = 1;}
			else if((DisCN == 8)&&(DisBuff1 & 0x04))//2+3   PA5+PC3		
				{TRISA &=~ 0x20;TRISC &=~ 0x08; Led2 = 1;Led3 = 0;}
			else if((DisCN == 9)&&(DisBuff1 & 0x20))//2+3   PA5+PC3		
				{TRISA &=~ 0x20;TRISC &=~ 0x08; Led2 = 0;Led3 = 1;}
			else if((DisCN == 10)&&(DisBuff & 0x04))//2+4   PA4+PA5		
				{TRISA &=~ 0x30; Led2 = 1;Led4 = 0;}
			else if((DisCN == 11)&&(DisBuff1 & 0x10))//2+4   PA4+PA5		
				{TRISA &=~ 0x30; Led2 = 0;Led4 = 1;}
		}
		
//		if(IRIN == 0)//解码红外
//		{
//			if((bIRL0)&&((IRRecCount0 == 0)))//两次按键时间间隔为250ms
//			{
//				IRByte0 = IRHCount0;
//				bIRGet0 = 1;
//			}
//			bIRL0 = 0;
//			IRHCount0 = 0;
//		}
//		else
//		{
//			bIRL0 = 1;
//			IRHCount0++;
//			if(IRHCount0 > 120)
//			{
//				IRHCount0 = 60;
//				IRNum0 = 0;
//				IRGata0 = 0;
//			}
//		}
						
                //升压操作
//V = 0.01908Y(470k/53.6k)  1024
		BoostValue = GET_ADC_DATA(5);

		if((FanCN > 0)&&(StartCount == 0))//风扇启动，每100us检测升压电压
		{
			if(PR3L > 0)
			{
				if(BoostValue > AimBoostValue)
                {
					PR3L--;                
                }
			}
			
			if(PR3L < LimitPwm)
			{
				if(BoostValue < AimBoostValue)
                {
					PR3L++;                
                }
			}
			
			if(BoostValue >= 700)//升压超过13.5V
			{
				PR3L = 0;
				VoutOverCount++;
				if(VoutOverCount >= 10)
				{
					VoutOverCount = 0;

					FanCN   = 0;
					bFanOff = 1;
					TMR3ON  = 0;
				}
			}
			else
				VoutOverCount = 0;
				
			if(PR3L	== 0)//空载关闭 20241008
			{
				NoLoadCount++;
				if(NoLoadCount >= 200)
				{
					NoLoadCount = 0;
					
					FanCN   = 0;
					bFanOff = 1;
					TMR3ON  = 0;
				}
			}
			else
            {
				NoLoadCount = 0;            
            }
		}
		else
        {
			VoutOverCount = 0;        
        }
	} 
	
	//1(INTF)外部中断标志位
	//0(PAIF)PORTA 电平变化中断标志位	
    //有中断触发 退出休眠
    if( (PAIF || ( PAIE == 0 && PAIF == 0 )) && awaken )
    {       
		awaken = 0;
        bStop  = 0;
        
		//再复位一次中断标志
		PORTA = PORTA;
		PAIF  = 0;          
    }	
} 
