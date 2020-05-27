/***********************************************************************
** Copyright (C) Tongwei Video Technology Co.,Ltd. All rights reserved.
** Author       : YSW
** Date         : 2010-11-17
** Name         : dvrdvsdefine.h
** Version      : 1.0
** Description  :	����DVR/DVS��ص�һЩ��������
** Modify Record:
				1:����
***********************************************************************/

/***********************************************************************
							������
***********************************************************************
�豸������Ϣ/��������
	|
	|�����豸���кš��̼��汾�š��̼��汾�������ڡ��ں˰汾�š�Ӳ���汾��
	|
	|������Ƶ��ʽ���豸ID���豸����
	|
	|�����豸�������ԡ��������뱣������Ļ������VGA��������
	|
�ֳ�Ԥ��
	|
	|��������Ԥ����Զ��Ԥ����ͨ�����ء�����ָ������ѯ
	|
	|����ͨ�����ơ�¼��״̬������״̬�������������������ַ��ͻ��Ӳ�̴��󡢴���������ϵͳʱ��
	|
	|�����������š����л�
	|
	|�����ֳ��������������ڡ���������
	|
Ԥ����Ƶ/��������
	|
	|����ɫ�ʵ��ڡ���ʱ��Ƭʹ�ò�ͬɫ�ʷ���
	|
	|�����ַ����ӣ�ͨ�����ơ�ʱ������Զ�����Ϣ
	|
	|���������ڵ�
	|
����Ƶ��¼/��������
	|
	|��������������ֱ��ʡ�֡�ʡ��������͡����ʡ������޶�
	|
	|��������¼�񣺾�ǰ¼��ʱ�䡢����¼��ʱ�䡢��ͬ�ı�������趨
	|
	|����¼�ƿ��أ���Ƶ���ء���Ƶ���ء�����Ƶ�󶨹�ϵ
	|
	|�������ݹ���ʱ�䡢����¼�ơ�����¼�ƣ�һ��¼�Ƶ�һ���������̣����Ƿ�ѭ������
	|
	|����¼��ƻ�����ʱ¼�񡢴���������¼���ƶ���ⱨ��¼����Ƶ�ڵ�����¼��
	|
	|�����ֶ�¼��Զ�̿����ֶ�¼��
	|
ץͼ/��������
	|
	|����ͼƬ�ߴ硢ͼƬ������ץȡ�����ץȡ��Ŀ
	|
	|�����ֶ�ץͼ��ͼƬ������ͼƬ�鿴����ʾ��
	|
��������/��������
	|
	|�����������ͣ��������������ƶ���ⱨ������Ƶ�ڵ���������Ƶ��ʧ���������ܷ�������
	|
	|�������ƻ������ʱ�ӡ��������豸���͡��������豸���ơ��ƶ��������������
	|
	|��������������̵��������������������������������澯ʾ�������ʼ����ϱ�����
	|
	|����������¼������¼��ָ��ͨ��������¼��־��������ʼ������������
	|
	|����������������̨Ԥ�õ㡢��̨Ѳ���ߡ���̨�켣
	|
	|�����ʼ�������ͨ����Ϣ���������͡�����ͼƬ��ָ��ͨ����ͼƬ��Ŀ��ʱ������
	|
�������/��������
	|
	|�����̵������������ء���Ӧʱ�������Ӧʱ�ӡ�����������
	|
	|�������������������ء���Ӧʱ�������Ӧʱ��
	|
	|�����ֶ�������Զ���ֶ�����
	|
��ʷ��Ƶ����/�ط�/����
	|
	|������ʱ�����������ݷֲ�ͼ�����ֲ�ͬ¼������
	|
	|�������¼��������¼��б����ɹ����¼�����
	|
	|�������ļ��������ļ��б������ָ�¼��Σ�������/ɾ���ļ�
	|
	|������ͼƬ������ͼƬ��ʾ������/ɾ��ͼƬ��ͼƬ���ݣ�����Ϊ��
	|
	|���������طţ�ָ����ʼʱ��طţ�ָ��һ��ͨ������ָ���¼��طš�ָ���ļ��ط�
	|
	|�����طſ��ƣ���ͣ����������ˡ���֡���š����¶�λ���˳��طš�ץͼ���棨Ӳ�̣���ѡ���������ڱ���
	|
	|�����ֶ����ݣ����տ�ʼʱ�䣬����ʱ�䱸�ݡ�ָ���ļ����ݡ��������ݡ�DVR��AVI�����ļ���ʽ����ϱ��ݣ����ͨ�����ݵ�һ���ļ���
	|
	|�����Զ����ݣ�ָ��ʱ�䣬�����������ݵ����洢�������ݵ����������
	|
����/��������
	|
	|���������ַ�趨����̬��ַ����̬��ַ��PPPoE
	|
	|�����˿��趨��HTTP�˿ڡ����ݶ˿ڡ������˿ڡ�����
	|
	|�����ಥ��ַ�趨
	|
	|����DDNS�趨���ͻ����������ϱ������趨��
	|
	|���������������ı���������ã��ֱ��ʡ�֡�ʡ����뷽ʽ�����ʡ������޶����Ƿ�����Ӧ�����ʻ��������ԣ�
	|
	|�������������趨���û�ע�����޶�����Ƶͨ�����޶����Ƿ񿪷����������ڰ�����
	|
	|�����鿴����״̬���ֳ���ʾ����״̬���������ӣ������ӡ���ͻ�����鿴�����û����Ƴ������û�
	|
�ʼ�����/����
	|
	|��������ʱ�����ʼ���һ��ʱ��������ʼ����ʼ���ָ���Ƿ��������ָ��ʱ�䷢���ʼ����ֶ������ʼ�
	|
	|����
	|
FTP����
	|
	|����
	|
��̨����/��������
	|
	|�������ڲ������á�Ԥ�õ��趨��Ѳ�����趨���켣����
	|
	|������̨���ƣ��˸�����ֹͣ����Ȧ�����㡢���š����ʣ�128�����ƹ⡢��ˢ���Զ���ɨ
	|
	|�������Ʒ�ʽ�������ά���ơ����ͨ���Ի�����ơ�ǰ��塢ң������רҵ���̡�Զ�̿���
	|
	|����Э�飺
	|
���ù���
	|
	|�����������á�Զ�����á����õ���/���õ��롢�ָ���������
	|
���̹���/�������
	|
	|������ʽ�����̡�������ݡ��趨���̷��顢�趨�������ԣ�ֻ������д�����ࡢ���ݣ�
	|
	|����
	|
ϵͳά��
	|
	|�����̼��������豸������顢Զ��������FTP����
	|
�û�����/Ȩ���趨
	|
	|
	|
��־��¼/����/����
	|
	|����

***********************************************************************
							������
***********************************************************************/
#ifndef __DVR_DVS_DEFINE_H__
#define __DVR_DVS_DEFINE_H__
#include "dvrdvstypedef.h"

//��¼ʱ��Ľṹ��
typedef struct _dd_time_
{
	unsigned char	second;		//Seconds after minute (0�C59)
	unsigned char	minute;		//Minutes after hour (0�C59)
	unsigned char	hour;		//Hours since midnight (0�C23)
	unsigned char	wday;		//Day of week (0�C6; Sunday = 0)
	unsigned char	mday;		//Day of month (1�C31)
	unsigned char	month;		//Month (0�C11; January = 0)
	unsigned short	year;		//Year (current year minus 1900)
	int				nTotalseconds;		//������
	int				nMicrosecond;	//΢��
}DD_TIME, *LP_DD_TIME;

//��¼ʱ��Ľṹ��
typedef struct _dd_time_ex_
{
    unsigned char	second;		//Seconds after minute (0�C59)
    unsigned char	minute;		//Minutes after hour (0�C59)
    unsigned char	hour;		//Hours since midnight (0�C23)
    unsigned char	wday;		//Day of week (0�C6; Sunday = 0)
    unsigned char	mday;		//Day of month (1�C31)
    unsigned char	month;		//Month (1�C12; January = 1)
    unsigned short	year;		//Year (current year )
    int				nTotalseconds;		//������
    int				nMicrosecond;	//΢��
}DD_TIME_EX;//��DD_TIME���������ڣ�DD_TIME��month��year��ֵ��ͬ


//��¼�����յĽṹ��
typedef struct _dd_date_
{
	unsigned char  mday;	//day of month, (1 - 31)
	unsigned char  month;	//month, (1 - 12)
	unsigned short year;	//current solar year(��Ԫ���)
}DD_DATE, *LP_DD_DATE;

typedef struct _dd_frame_info_
{
	unsigned int		frameType;	//֡���ͣ�ȡֵ�ο�DD_FRAME_TYPE
	unsigned int		length;

	unsigned int		keyFrame;	//0 ���ǹؼ�֡

	unsigned short      width;
	unsigned short      height;

	unsigned char      *pData;

	unsigned short		deviceIndex;
	unsigned short      channel;

	unsigned int       bufIndex;
	unsigned int		frameIndex;		//֡����

	unsigned int		frameAttrib;	//֡���ԣ�ȡֵΪDD_FRAME_ATTRIB�ж���ĸ�ֵ�����
	unsigned int		streamID;

	LONGLONG			time;			//��֡����ʱ�䣬������ʱ������룬�ڸı��豸ʱ��ʱ��仯
	LONGLONG			relativeTime;	//���ʱ�䣬�ڸı��豸ʱ��ʱ����仯���Ǹ�������ʱ��

	DD_TIME				localTime;		//�豸����ʱ�䣬������д
}DD_FRAME_INFO, *LP_DD_FRAME_INFO;

typedef struct _dd_log_info_
{
	unsigned int	majorType;		//�����ͣ�ȡֵ�ο�DD_LOG_CONTENT
	unsigned int	minorType;		//�����ͣ�ȡֵ�ο�DD_LOG_TYPE

	unsigned int	time;			//����־����ʱ��

	unsigned int	IP;				//��������־ʱ�û�IP
	char			name [36];		//����־��Ӧ���û�����

	DD_TIME			localTime;		//�豸����ʱ�䣬������д

	unsigned int	infoLen;
	char			info[1024];
}DD_LOG_INFO, *LP_DD_LOG_INFO;

typedef struct _dd_record_log_
{
	unsigned char	bLocked;		//0��ʾδ������1��ʾ����
	unsigned char	bUnofficial;	//0��ʾ��ʽ��¼��1��ʾ����ʽ��¼�����޸�ʱ�����ص���¼��
	unsigned char	enableCard;		//�Ƿ�ʹ�ÿ���
	unsigned char	recv1;			//�����ֽ�

	unsigned short	diskIndex;		//�������
	unsigned short	fileIndex;		//�ļ����
	unsigned short	logIndex;		//�����
	unsigned short	recv2;			//�����ֽ�

	unsigned short	deviceID;		//�豸���
	unsigned short	cameraID;		//����ͷ���
	
	unsigned int	channel;		//����ͨ����
	unsigned int	type;			//¼�����ͣ�ȡֵ�ο�DD_RECORD_TYPE
	
	unsigned int	size;			//�ö�¼�����ݳ���

	DD_TIME			startTime;		//��ʼʱ��
	DD_TIME			endTime;		//����ʱ��

	char			cardNo[32];		//����
}DD_RECORD_LOG, *LP_DD_RECORD_LOG;

typedef struct _dd_cruise_point_info
{
	unsigned int			presetIndex;
	unsigned int			dwellSpeed;
	unsigned int			dwellTime;
}DD_CRUISE_POINT_INFO;

typedef struct _dd_ch_cruise_
{
    unsigned int			channel;
    unsigned int			cruiseIndex;
    unsigned char           cruiseName[64];
}DD_CH_CRUISE;

typedef struct _dd_ptz_preset_config_ex_
{
    unsigned int channel;		//ͨ��
    unsigned int presetIndex;//Ԥ�õ��±�
    unsigned char presetName[64];//Ԥ�õ�
}DD_PTZ_PRESET_CONFIG_Ex;


//3D��̨���Ʋ���
typedef struct 
{
	int selBeginX;		//�����ѡ������ʼ���x���꣨����ڵ�ǰ�������Ͻǣ�
	int selBeginY;		//�����ѡ����������y���꣨����ڵ�ǰ�������Ͻǣ�
	int selEndX;		//�����ѡ����������x���꣨����ڵ�ǰ�������Ͻǣ�
	int selEndY;		//�����ѡ����������y���꣨����ڵ�ǰ�������Ͻǣ�
	int displayWidth;	//ͼ����ʾ�������
	int displayHeight; 	//ͼ����ʾ����߶�
	int reserve[2];		//����
}PTZ_3D_POINT_INFO, *LPPTZ_3D_POINT_INFO;

#endif //__DVR_DVS_DEFINE_H__