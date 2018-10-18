/*
* Copyright (c) 2013, �人�������عɷ����޹�˾
* All rights reserved.
* 
* �ļ����ƣ�hncevent.h
* �ļ���ʶ���������ù����ƻ���
* ժ    Ҫ���¼��ӿ�
* ����ƽ̨��Linux/Windows
* 
* ��    ����1.00
* ��    �ߣ�HNC-8 Team
* ��    �ڣ�2013��9��25��
* ˵    ����
*/

#ifndef __HNC_EVENT_H__
#define __HNC_EVENT_H__

#include "eventdef.h"
#include "hncdatatype.h"


///////////////////////////////////////////////////////////////////////////////
//
//    Bit32 HNC_EventGetSysEv(SEventElement *ev)
//
//    ���ܣ�
//            ����Ϣ�����л�ȡϵͳ�ڲ��¼�
//
//    ������
//            ev ������������¼���
//
//    ������
//            
//
//    ���أ�
//            0���ɹ���-1��ʧ��
//
//////////////////////////////////////////////////////////////////////////
HNCAPI Bit32 HNC_EventGetSysEv(SEventElement *ev);

///////////////////////////////////////////////////////////////////////////////
//
//    uBit16 HNC_EventGet(SEventElement *ev)
//
//    ���ܣ�
//            ����Ϣ�����л�ȡ�¼�(ϵͳ�ڲ��¼�+HNCGUI�����¼�)
//
//    ������
//            ev ������������¼���
//
//    ������
//            
//
//    ���أ�
//            ��ֵ
//
//////////////////////////////////////////////////////////////////////////
extern uBit16 HNC_EventGet(SEventElement *ev);

///////////////////////////////////////////////////////////////////////////////
//
//    Bit32 HNC_EventPut(SEventElement *ev, Bit16 clientNo)
//
//    ���ܣ�
//            ���¼�������Ϣ����
//
//    ������
//            ev ���¼���
//
//    ������
//            
//
//    ���أ�
//            0���ɹ���-1��ʧ�ܣ�
//
//////////////////////////////////////////////////////////////////////////
HNCAPI Bit32 HNC_EventPut(SEventElement *ev, Bit16 clientNo = 0);

#endif // __HNC_EVENT_H__