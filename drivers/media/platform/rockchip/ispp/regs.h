/* SPDX-License-Identifier: GPL-2.0 */
/* Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd. */

#ifndef _RKISPP_REGS_H
#define _RKISPP_REGS_H

/* registers */
#define RKISPP_CTRL			0x0000
#define RKISPP_CTRL_STRT		(RKISPP_CTRL + 0x0000)
#define RKISPP_CTRL_UPDATE		(RKISPP_CTRL + 0x0004)
#define RKISPP_CTRL_QUICK		(RKISPP_CTRL + 0x0008)
#define RKISPP_CTRL_RESET		(RKISPP_CTRL + 0x000C)
#define RKISPP_CTRL_CLKGATE		(RKISPP_CTRL + 0x0010)
#define RKISPP_CTRL_SIZE		(RKISPP_CTRL + 0x0014)
#define RKISPP_CTRL_TNR_SIZE		(RKISPP_CTRL + 0x0018)
#define RKISPP_CTRL_IP_VERSION		(RKISPP_CTRL + 0x001C)
#define RKISPP_CTRL_INT_MSK		(RKISPP_CTRL + 0x0020)
#define RKISPP_CTRL_INT_RAW_STA		(RKISPP_CTRL + 0x0024)
#define RKISPP_CTRL_INT_STA		(RKISPP_CTRL + 0x0028)
#define RKISPP_CTRL_INT_SET		(RKISPP_CTRL + 0x002C)
#define RKISPP_CTRL_INT_CLR		(RKISPP_CTRL + 0x0030)
#define RKISPP_QUICK_DIF		(RKISPP_CTRL + 0x0034)
#define RKISPP_CTRL_SYS_STATUS		(RKISPP_CTRL + 0x003C)
#define RKISPP_CTRL_QUICK_FRM_NUM	(RKISPP_CTRL + 0x0040)
#define RKISPP_CTRL_SYS_CTL_STA0	(RKISPP_CTRL + 0x0054)
#define RKISPP_CTRL_SYS_CTL_STA1	(RKISPP_CTRL + 0x0058)
#define RKISPP_CTRL_SYS_CTL_STA2	(RKISPP_CTRL + 0x005C)
#define RKISPP_CTRL_SYS_FRM_CNT0	(RKISPP_CTRL + 0x0060)
#define RKISPP_CTRL_SYS_FRM_CNT1	(RKISPP_CTRL + 0x0064)

#define	RKISPP_TNR			0x0200
#define RKISPP_TNR_CTRL			(RKISPP_TNR + 0x0000)
#define RKISPP_TNR_CUR_VIR_STRIDE	(RKISPP_TNR + 0x0004)
#define RKISPP_TNR_CUR_Y_BASE		(RKISPP_TNR + 0x0008)
#define RKISPP_TNR_CUR_UV_BASE		(RKISPP_TNR + 0x000C)
#define RKISPP_TNR_IIR_VIR_STRIDE	(RKISPP_TNR + 0x0010)
#define RKISPP_TNR_IIR_Y_BASE		(RKISPP_TNR + 0x0014)
#define RKISPP_TNR_IIR_UV_BASE		(RKISPP_TNR + 0x0018)
#define RKISPP_TNR_NXT_VIR_STRIDE	(RKISPP_TNR + 0x001C)
#define RKISPP_TNR_NXT_Y_BASE		(RKISPP_TNR + 0x0020)
#define RKISPP_TNR_NXT_UV_BASE		(RKISPP_TNR + 0x0024)
#define RKISPP_TNR_GAIN_CUR_VIR_STRIDE	(RKISPP_TNR + 0x0028)
#define RKISPP_TNR_GAIN_CUR_Y_BASE	(RKISPP_TNR + 0x002C)
#define RKISPP_TNR_GAIN_NXT_VIR_STRIDE	(RKISPP_TNR + 0x0030)
#define RKISPP_TNR_GAIN_NXT_Y_BASE	(RKISPP_TNR + 0x0034)
#define RKISPP_TNR_GAIN_KG_VIR_STRIDE	(RKISPP_TNR + 0x0038)
#define RKISPP_TNR_GAIN_KG_Y_BASE	(RKISPP_TNR + 0x003C)
#define RKISPP_TNR_WR_VIR_STRIDE	(RKISPP_TNR + 0x0040)
#define RKISPP_TNR_WR_Y_BASE		(RKISPP_TNR + 0x0044)
#define RKISPP_TNR_WR_UV_BASE		(RKISPP_TNR + 0x0048)
#define RKISPP_TNR_GAIN_WR_VIR_STRIDE	(RKISPP_TNR + 0x004C)
#define RKISPP_TNR_GAIN_WR_Y_BASE	(RKISPP_TNR + 0x0050)
#define RKISPP_TNR_CUR_Y_BASE_SHD	(RKISPP_TNR + 0x0054)
#define RKISPP_TNR_CUR_UV_BASE_SHD	(RKISPP_TNR + 0x0058)
#define RKISPP_TNR_IIR_Y_BASE_SHD	(RKISPP_TNR + 0x005C)
#define RKISPP_TNR_IIR_UV_BASE_SHD	(RKISPP_TNR + 0x0060)
#define RKISPP_TNR_NXT_Y_BASE_SHD	(RKISPP_TNR + 0x0064)
#define RKISPP_TNR_NXT_UV_BASE_SHD	(RKISPP_TNR + 0x0068)
#define RKISPP_TNR_GAIN_CUR_Y_BASE_SHD	(RKISPP_TNR + 0x006C)
#define RKISPP_TNR_GAIN_NXT_Y_BASE_SHD	(RKISPP_TNR + 0x0070)
#define RKISPP_TNR_WR_Y_BASE_SHD	(RKISPP_TNR + 0x0074)
#define RKISPP_TNR_WR_UV_BASE_SHD	(RKISPP_TNR + 0x0078)
#define RKISPP_TNR_GAIN_WR_Y_BASE_SHD	(RKISPP_TNR + 0x007C)
#define RKISPP_TNR_CORE_CTRL		(RKISPP_TNR + 0x0080)
#define RKISPP_TNR_CORE_PK0		(RKISPP_TNR + 0x0088)
#define RKISPP_TNR_CORE_GLB_GAIN	(RKISPP_TNR + 0x008C)
#define RKISPP_TNR_CORE_GLB_GAIN_DIV	(RKISPP_TNR + 0x0090)
#define RKISPP_TNR_CORE_SIG_X18		(RKISPP_TNR + 0x0094)
#define RKISPP_TNR_CORE_SIG_X910	(RKISPP_TNR + 0x0098)
#define RKISPP_TNR_CORE_SIG_Y01		(RKISPP_TNR + 0x009C)
#define RKISPP_TNR_CORE_SIG_Y23		(RKISPP_TNR + 0x00A0)
#define RKISPP_TNR_CORE_SIG_Y45		(RKISPP_TNR + 0x00A4)
#define RKISPP_TNR_CORE_SIG_Y67		(RKISPP_TNR + 0x00A8)
#define RKISPP_TNR_CORE_SIG_Y89		(RKISPP_TNR + 0x00AC)
#define RKISPP_TNR_CORE_SIG_YAB		(RKISPP_TNR + 0x00B0)
#define RKISPP_TNR_CORE_SIG_YCD		(RKISPP_TNR + 0x00B4)
#define RKISPP_TNR_CORE_SIG_YEF		(RKISPP_TNR + 0x00B8)
#define RKISPP_TNR_CORE_SIG_Y10		(RKISPP_TNR + 0x00BC)
#define RKISPP_TNR_CORE_LUMACURVE_Y01	(RKISPP_TNR + 0x00C4)
#define RKISPP_TNR_CORE_LUMACURVE_Y23	(RKISPP_TNR + 0x00C8)
#define RKISPP_TNR_CORE_LUMACURVE_Y45	(RKISPP_TNR + 0x00CC)
#define RKISPP_TNR_CORE_TH_Y		(RKISPP_TNR + 0x00D0)
#define RKISPP_TNR_CORE_TH_C		(RKISPP_TNR + 0x00D4)
#define RKISPP_TNR_CORE_TH_DLT		(RKISPP_TNR + 0x00D8)
#define RKISPP_TNR_CORE_GFCOEF_Y0_0	(RKISPP_TNR + 0x00DC)
#define RKISPP_TNR_CORE_GFCOEF_Y0_1	(RKISPP_TNR + 0x00E0)
#define RKISPP_TNR_CORE_GFCOEF_Y1	(RKISPP_TNR + 0x00E4)
#define RKISPP_TNR_CORE_GFCOEF_Y2	(RKISPP_TNR + 0x00E8)
#define RKISPP_TNR_CORE_GFCOEF_Y3	(RKISPP_TNR + 0x00EC)
#define RKISPP_TNR_CORE_GFCOEF_YG0_0	(RKISPP_TNR + 0x00F0)
#define RKISPP_TNR_CORE_GFCOEF_YG0_1	(RKISPP_TNR + 0x00F4)
#define RKISPP_TNR_CORE_GFCOEF_YG1	(RKISPP_TNR + 0x00F8)
#define RKISPP_TNR_CORE_GFCOEF_YG2	(RKISPP_TNR + 0x00FC)
#define RKISPP_TNR_CORE_GFCOEF_YG3	(RKISPP_TNR + 0x0100)
#define RKISPP_TNR_CORE_GFCOEF_YL0_0	(RKISPP_TNR + 0x0104)
#define RKISPP_TNR_CORE_GFCOEF_YL0_1	(RKISPP_TNR + 0x0108)
#define RKISPP_TNR_CORE_GFCOEF_YL1	(RKISPP_TNR + 0x010C)
#define RKISPP_TNR_CORE_GFCOEF_YL2	(RKISPP_TNR + 0x0110)
#define RKISPP_TNR_CORE_GFCOEF_CG0_0	(RKISPP_TNR + 0x0114)
#define RKISPP_TNR_CORE_GFCOEF_CG0_1	(RKISPP_TNR + 0x0118)
#define RKISPP_TNR_CORE_GFCOEF_CG1	(RKISPP_TNR + 0x011C)
#define RKISPP_TNR_CORE_GFCOEF_CG2	(RKISPP_TNR + 0x0120)
#define RKISPP_TNR_CORE_GFCOEF_CL0_0	(RKISPP_TNR + 0x0124)
#define RKISPP_TNR_CORE_GFCOEF_CL0_1	(RKISPP_TNR + 0x0128)
#define RKISPP_TNR_CORE_GFCOEF_CL1	(RKISPP_TNR + 0x012C)
#define RKISPP_TNR_CORE_SCALE_YG01	(RKISPP_TNR + 0x0130)
#define RKISPP_TNR_CORE_SCALE_YG23	(RKISPP_TNR + 0x0134)
#define RKISPP_TNR_CORE_SCALE_YL01	(RKISPP_TNR + 0x0138)
#define RKISPP_TNR_CORE_SCALE_YL2	(RKISPP_TNR + 0x013c)
#define RKISPP_TNR_CORE_SCALE_CG0	(RKISPP_TNR + 0x0140)
#define RKISPP_TNR_CORE_SCALE_CG1	(RKISPP_TNR + 0x0144)
#define RKISPP_TNR_CORE_SCALE_CG2	(RKISPP_TNR + 0x0148)
#define RKISPP_TNR_CORE_SCALE_CL0	(RKISPP_TNR + 0x014C)
#define RKISPP_TNR_CORE_SCALE_CL1	(RKISPP_TNR + 0x0150)
#define RKISPP_TNR_CORE_SCALE_CL2	(RKISPP_TNR + 0x0154)
#define RKISPP_TNR_CORE_WEIGHT		(RKISPP_TNR + 0x0158)
#define RKISPP_TNR_TILE_CNT		(RKISPP_TNR + 0x01c0)
#define RKISPP_TNR_STATE		(RKISPP_TNR + 0x01c4)

#define RKISPP_NR			0x0400
#define RKISPP_NR_CTRL			(RKISPP_NR + 0x0000)
#define RKISPP_NR_VIR_STRIDE		(RKISPP_NR + 0x0004)
#define RKISPP_NR_ADDR_BASE_Y		(RKISPP_NR + 0x0008)
#define RKISPP_NR_ADDR_BASE_UV		(RKISPP_NR + 0x000C)
#define RKISPP_NR_VIR_STRIDE_GAIN	(RKISPP_NR + 0x001C)
#define RKISPP_NR_ADDR_BASE_GAIN	(RKISPP_NR + 0x0020)
#define RKISPP_NR_ADDR_BASE_Y_SHD	(RKISPP_NR + 0x0024)
#define RKISPP_NR_ADDR_BASE_UV_SHD	(RKISPP_NR + 0x0028)
#define RKISPP_FBC_VIR_HEIGHT		(RKISPP_NR + 0x002C)
#define RKISPP_NR_UVNR_CTRL_PARA	(RKISPP_NR + 0x0080)
#define RKISPP_NR_UVNR_GAIN_1SIGMA	(RKISPP_NR + 0x0084)
#define RKISPP_NR_UVNR_GAIN_OFFSET	(RKISPP_NR + 0x0088)
#define RKISPP_NR_UVNR_GAIN_GBLGAIN	(RKISPP_NR + 0x008C)
#define RKISPP_NR_UVNR_T1GEN_M3ALPHA	(RKISPP_NR + 0x0090)
#define RKISPP_NR_UVNR_T1FLT_MODE	(RKISPP_NR + 0x0094)
#define RKISPP_NR_UVNR_T1FLT_MSIGMA	(RKISPP_NR + 0x0098)
#define RKISPP_NR_UVNR_T1FLT_WTP	(RKISPP_NR + 0x009C)
#define RKISPP_NR_UVNR_T1FLT_WTQ0	(RKISPP_NR + 0x00A0)
#define RKISPP_NR_UVNR_T1FLT_WTQ1	(RKISPP_NR + 0x00A4)
#define RKISPP_NR_UVNR_T2GEN_M3ALPHA	(RKISPP_NR + 0x00A8)
#define RKISPP_NR_UVNR_T2GEN_MSIGMA	(RKISPP_NR + 0x00AC)
#define RKISPP_NR_UVNR_T2GEN_WTP	(RKISPP_NR + 0x00B0)
#define RKISPP_NR_UVNR_T2GEN_WTQ	(RKISPP_NR + 0x00B4)
#define RKISPP_NR_UVNR_T2FLT_MSIGMA	(RKISPP_NR + 0x00B8)
#define RKISPP_NR_UVNR_T2FLT_WT		(RKISPP_NR + 0x00BC)
#define RKISPP_NR_YNR_SGM_DX_1_8	(RKISPP_NR + 0x0104)
#define RKISPP_NR_YNR_SGM_DX_9_16	(RKISPP_NR + 0x0108)
#define RKISPP_NR_YNR_LSGM_Y_0_1	(RKISPP_NR + 0x010C)
#define RKISPP_NR_YNR_LSGM_Y_2_3	(RKISPP_NR + 0x0110)
#define RKISPP_NR_YNR_LSGM_Y_4_5	(RKISPP_NR + 0x0114)
#define RKISPP_NR_YNR_LSGM_Y_6_7	(RKISPP_NR + 0x0118)
#define RKISPP_NR_YNR_LSGM_Y_8_9	(RKISPP_NR + 0x011C)
#define RKISPP_NR_YNR_LSGM_Y_10_11	(RKISPP_NR + 0x0120)
#define RKISPP_NR_YNR_LSGM_Y_12_13	(RKISPP_NR + 0x0124)
#define RKISPP_NR_YNR_LSGM_Y_14_15	(RKISPP_NR + 0x0128)
#define RKISPP_NR_YNR_LSGM_Y_16		(RKISPP_NR + 0x012C)
#define RKISPP_NR_YNR_LCI		(RKISPP_NR + 0x0130)
#define RKISPP_NR_YNR_LGAIN_DIRE_MIN	(RKISPP_NR + 0x0134)
#define RKISPP_NR_YNR_IGAIN_DIRE_MAX	(RKISPP_NR + 0x0138)
#define RKISPP_NR_YNR_LMERGE		(RKISPP_NR + 0x013C)
#define RKISPP_NR_YNR_LWEIT_FLT		(RKISPP_NR + 0x0140)
#define RKISPP_NR_YNR_HSGM_Y_0_1	(RKISPP_NR + 0x0144)
#define RKISPP_NR_YNR_HSGM_Y_2_3	(RKISPP_NR + 0x0148)
#define RKISPP_NR_YNR_HSGM_Y_4_5	(RKISPP_NR + 0x014C)
#define RKISPP_NR_YNR_HSGM_Y_6_7	(RKISPP_NR + 0x0150)
#define RKISPP_NR_YNR_HSGM_Y_8_9	(RKISPP_NR + 0x0154)
#define RKISPP_NR_YNR_HSGM_Y_10_11	(RKISPP_NR + 0x0158)
#define RKISPP_NR_YNR_HSGM_Y_12_13	(RKISPP_NR + 0x015C)
#define RKISPP_NR_YNR_HSGM_Y_14_15	(RKISPP_NR + 0x0160)
#define RKISPP_NR_YNR_HSGM_Y_16		(RKISPP_NR + 0x0164)
#define RKISPP_NR_YNR_HLCI		(RKISPP_NR + 0x0168)
#define RKISPP_NR_YNR_LHCI		(RKISPP_NR + 0x016C)
#define RKISPP_NR_YNR_HHCI		(RKISPP_NR + 0x0170)
#define RKISPP_NR_YNR_HGAIN_SGM		(RKISPP_NR + 0x0174)
#define RKISPP_NR_YNR_HWEIT_D0		(RKISPP_NR + 0x0178)
#define RKISPP_NR_YNR_HWEIT_D1		(RKISPP_NR + 0x017C)
#define RKISPP_NR_YNR_HWEIT_D2		(RKISPP_NR + 0x0180)
#define RKISPP_NR_YNR_HWEIT_D3		(RKISPP_NR + 0x0184)
#define RKISPP_NR_YNR_HWEIT_D4		(RKISPP_NR + 0x0188)
#define RKISPP_NR_YNR_HGRAD_Y0		(RKISPP_NR + 0x018C)
#define RKISPP_NR_YNR_HGRAD_Y1		(RKISPP_NR + 0x0190)
#define RKISPP_NR_YNR_HGRAD_Y2		(RKISPP_NR + 0x0194)
#define RKISPP_NR_YNR_HGRAD_Y3		(RKISPP_NR + 0x0198)
#define RKISPP_NR_YNR_HGRAD_Y4		(RKISPP_NR + 0x019C)
#define RKISPP_NR_YNR_HGRAD_Y5		(RKISPP_NR + 0x01A0)
#define RKISPP_NR_YNR_HWEIT_1_2		(RKISPP_NR + 0x01A4)
#define RKISPP_NR_YNR_HWEIT_3_4		(RKISPP_NR + 0x01A8)
#define RKISPP_NR_YNR_HADJUST_EXGAIN	(RKISPP_NR + 0x01AC)
#define RKISPP_NR_YNR_HMAX_ADJUST	(RKISPP_NR + 0x01B0)
#define RKISPP_NR_YNR_HSTRENGTH		(RKISPP_NR + 0x01B4)
#define RKISPP_NR_YNR_LWEIT_CMP		(RKISPP_NR + 0x01B8)
#define RKISPP_NR_YNR_LMAXGAIN_LV4	(RKISPP_NR + 0x01BC)
#define RKISPP_NR_YNR_HSTV_Y_0_1	(RKISPP_NR + 0x01C0)
#define RKISPP_NR_YNR_HSTV_Y_2_3	(RKISPP_NR + 0x01C4)
#define RKISPP_NR_YNR_HSTV_Y_4_5	(RKISPP_NR + 0x01C8)
#define RKISPP_NR_YNR_HSTV_Y_6_7	(RKISPP_NR + 0x01CC)
#define RKISPP_NR_YNR_HSTV_Y_8_9	(RKISPP_NR + 0x01D0)
#define RKISPP_NR_YNR_HSTV_Y_10_11	(RKISPP_NR + 0x01D4)
#define RKISPP_NR_YNR_HSTV_Y_12_13	(RKISPP_NR + 0x01D8)
#define RKISPP_NR_YNR_HSTV_Y_14_15	(RKISPP_NR + 0x01DC)
#define RKISPP_NR_YNR_HSTV_Y_16		(RKISPP_NR + 0x01E0)
#define RKISPP_NR_YNR_ST_SCALE_LV1_LV2	(RKISPP_NR + 0x01E4)
#define RKISPP_NR_YNR_ST_SCALE_LV3	(RKISPP_NR + 0x01E8)
#define RKISPP_NR_BLOCK_CNT		(RKISPP_NR + 0x01f0)
#define RKISPP_NR_BUFFER_READY		(RKISPP_NR + 0x01f4)

#define RKISPP_SHARP			0x0600
#define RKISPP_SHARP_CTRL		(RKISPP_SHARP + 0x0000)
#define RKISPP_SHARP_WR_VIR_STRIDE	(RKISPP_SHARP + 0x0004)
#define RKISPP_SHARP_WR_Y_BASE		(RKISPP_SHARP + 0x0008)
#define RKISPP_SHARP_WR_UV_BASE		(RKISPP_SHARP + 0x000C)
#define RKISPP_SHARP_SC_DOWN		(RKISPP_SHARP + 0x0010)
#define RKISPP_SHARP_TMP_YUV_BASE	(RKISPP_SHARP + 0x0014)
#define RKISPP_SHARP_WR_Y_BASE_SHD	(RKISPP_SHARP + 0x0024)
#define RKISPP_SHARP_WR_UV_BASE_SHD	(RKISPP_SHARP + 0x0028)
#define RKISPP_SHARP_TILE_IDX		(RKISPP_SHARP + 0x0030)
#define RKISPP_SHARP_CORE_CTRL		(RKISPP_SHARP + 0x0080)
#define RKISPP_SHARP_HBF_FACTOR		(RKISPP_SHARP + 0x0084)
#define RKISPP_SHARP_EDGE_TH		(RKISPP_SHARP + 0x0088)
#define RKISPP_SHARP_EDGE_ALPHA		(RKISPP_SHARP + 0x008C)
#define RKISPP_SHARP_PBF_KERNEL		(RKISPP_SHARP + 0x0090)
#define RKISPP_SHARP_MRF_KERNEL0	(RKISPP_SHARP + 0x0094)
#define RKISPP_SHARP_MRF_KERNEL1	(RKISPP_SHARP + 0x0098)
#define RKISPP_SHARP_MBF_KERNEL0	(RKISPP_SHARP + 0x009C)
#define RKISPP_SHARP_MBF_KERNEL1	(RKISPP_SHARP + 0x00A0)
#define RKISPP_SHARP_MBF_KERNEL2	(RKISPP_SHARP + 0x00A4)
#define RKISPP_SHARP_HRF_KERNEL0	(RKISPP_SHARP + 0x00A8)
#define RKISPP_SHARP_HRF_KERNEL1	(RKISPP_SHARP + 0x00AC)
#define RKISPP_SHARP_HBF_KERNEL		(RKISPP_SHARP + 0x00B0)
#define RKISPP_SHARP_EDGE_COEF		(RKISPP_SHARP + 0x00B4)
#define RKISPP_SHARP_EDGE_SMOTH		(RKISPP_SHARP + 0x00B8)
#define RKISPP_SHARP_EDGE_GAUS0		(RKISPP_SHARP + 0x00BC)
#define RKISPP_SHARP_EDGE_GAUS1		(RKISPP_SHARP + 0x00C0)
#define RKISPP_SHARP_DOG_KERNEL0	(RKISPP_SHARP + 0x00C4)
#define RKISPP_SHARP_DOG_KERNEL1	(RKISPP_SHARP + 0x00C8)
#define RKISPP_SHARP_LUM_POINT0		(RKISPP_SHARP + 0x00CC)
#define RKISPP_SHARP_LUM_POINT1		(RKISPP_SHARP + 0x00D0)
#define RKISPP_SHARP_SHF_BITS		(RKISPP_SHARP + 0x00D4)
#define RKISPP_SHARP_PBF_SIGMA_INV0	(RKISPP_SHARP + 0x00D8)
#define RKISPP_SHARP_PBF_SIGMA_INV1	(RKISPP_SHARP + 0x00DC)
#define RKISPP_SHARP_LUM_CLP_M0		(RKISPP_SHARP + 0x00E0)
#define RKISPP_SHARP_LUM_CLP_M1		(RKISPP_SHARP + 0x00E4)
#define RKISPP_SHARP_LUM_MIN_M0		(RKISPP_SHARP + 0x00E8)
#define RKISPP_SHARP_LUM_MIN_M1		(RKISPP_SHARP + 0x00EC)
#define RKISPP_SHARP_MBF_SIGMA_INV0	(RKISPP_SHARP + 0x00F0)
#define RKISPP_SHARP_MBF_SIGMA_INV1	(RKISPP_SHARP + 0x00F4)
#define RKISPP_SHARP_LUM_CLP_H0		(RKISPP_SHARP + 0x00F8)
#define RKISPP_SHARP_LUM_CLP_H1		(RKISPP_SHARP + 0x00FC)
#define RKISPP_SHARP_HBF_SIGMA_INV0	(RKISPP_SHARP + 0x0100)
#define RKISPP_SHARP_HBF_SIGMA_INV1	(RKISPP_SHARP + 0x0104)
#define RKISPP_SHARP_EDGE_LUM_THED0	(RKISPP_SHARP + 0x0108)
#define RKISPP_SHARP_EDGE_LUM_THED1	(RKISPP_SHARP + 0x010C)
#define RKISPP_SHARP_CLAMP_POS_DOG0	(RKISPP_SHARP + 0x0110)
#define RKISPP_SHARP_CLAMP_POS_DOG1	(RKISPP_SHARP + 0x0114)
#define RKISPP_SHARP_CLAMP_NEG_DOG0	(RKISPP_SHARP + 0x0118)
#define RKISPP_SHARP_CLAMP_NEG_DOG1	(RKISPP_SHARP + 0x011C)
#define RKISPP_SHARP_DETAIL_ALPHA_DOG0	(RKISPP_SHARP + 0x0120)
#define RKISPP_SHARP_DETAIL_ALPHA_DOG1	(RKISPP_SHARP + 0x0124)
#define RKISPP_SHARP_RF_RATIO		(RKISPP_SHARP + 0x0128)
#define RKISPP_SHARP_GRAD_RATIO		(RKISPP_SHARP + 0x012C)

#define RKISPP_SCL0			0x0800
#define RKISPP_SCL0_CTRL		(RKISPP_SCL0 + 0x0000)
#define RKISPP_SCL0_CUR_VIR_STRIDE	(RKISPP_SCL0 + 0x0004)
#define RKISPP_SCL0_CUR_Y_BASE		(RKISPP_SCL0 + 0x0008)
#define RKISPP_SCL0_CUR_UV_BASE		(RKISPP_SCL0 + 0x000C)
#define RKISPP_SCL0_CUR_Y_BASE_SHD	(RKISPP_SCL0 + 0x0010)
#define RKISPP_SCL0_CUR_UV_BASE_SHD	(RKISPP_SCL0 + 0x0014)
#define RKISPP_SCL0_FACTOR		(RKISPP_SCL0 + 0x0018)

#define RKISPP_SCL1			0x0900
#define RKISPP_SCL1_CTRL		(RKISPP_SCL1 + 0x0000)
#define RKISPP_SCL1_CUR_VIR_STRIDE	(RKISPP_SCL1 + 0x0004)
#define RKISPP_SCL1_CUR_Y_BASE		(RKISPP_SCL1 + 0x0008)
#define RKISPP_SCL1_CUR_UV_BASE		(RKISPP_SCL1 + 0x000C)
#define RKISPP_SCL1_CUR_Y_BASE_SHD	(RKISPP_SCL1 + 0x0010)
#define RKISPP_SCL1_CUR_UV_BASE_SHD	(RKISPP_SCL1 + 0x0014)
#define RKISPP_SCL1_FACTOR		(RKISPP_SCL1 + 0x0018)

#define RKISPP_SCL2			0x0A00
#define RKISPP_SCL2_CTRL		(RKISPP_SCL2 + 0x0000)
#define RKISPP_SCL2_CUR_VIR_STRIDE	(RKISPP_SCL2 + 0x0004)
#define RKISPP_SCL2_CUR_Y_BASE		(RKISPP_SCL2 + 0x0008)
#define RKISPP_SCL2_CUR_UV_BASE		(RKISPP_SCL2 + 0x000C)
#define RKISPP_SCL2_CUR_Y_BASE_SHD	(RKISPP_SCL2 + 0x0010)
#define RKISPP_SCL2_CUR_UV_BASE_SHD	(RKISPP_SCL2 + 0x0014)
#define RKISPP_SCL2_FACTOR		(RKISPP_SCL2 + 0x0018)

#define RKISPP_ORB			0x0B00
#define RKISPP_ORB_WR_BASE		(RKISPP_ORB + 0x0004)
#define RKISPP_ORB_WR_BASE_SHD		(RKISPP_ORB + 0x0008)
#define RKISPP_ORB_TOTAL_NUM		(RKISPP_ORB + 0x000c)
#define RKISPP_ORB_CORE_CTRL		(RKISPP_ORB + 0x0080)
#define RKISPP_ORB_LIMIT_VALUE		(RKISPP_ORB + 0x0084)
#define RKISPP_ORB_MAX_FEATURE		(RKISPP_ORB + 0x0088)

#define RKISPP_FEC			0x0C00
#define RKISPP_FEC_CTRL			(RKISPP_FEC + 0x0000)
#define RKISPP_FEC_RD_VIR_STRIDE	(RKISPP_FEC + 0x0004)
#define RKISPP_FEC_RD_Y_BASE		(RKISPP_FEC + 0x0008)
#define RKISPP_FEC_RD_UV_BASE		(RKISPP_FEC + 0x000C)
#define RKISPP_FEC_MESH_XINT_BASE	(RKISPP_FEC + 0x0010)
#define RKISPP_FEC_MESH_XFRA_BASE	(RKISPP_FEC + 0x0014)
#define RKISPP_FEC_MESH_YINT_BASE	(RKISPP_FEC + 0x0018)
#define RKISPP_FEC_MESH_YFRA_BASE	(RKISPP_FEC + 0x001C)
#define RKISPP_FEC_WR_VIR_STRIDE	(RKISPP_FEC + 0x0020)
#define RKISPP_FEC_WR_Y_BASE		(RKISPP_FEC + 0x0024)
#define RKISPP_FEC_WR_UV_BASE		(RKISPP_FEC + 0x0028)
#define RKISPP_FEC_RD_Y_BASE_SHD	(RKISPP_FEC + 0x002C)
#define RKISPP_FEC_RD_UV_BASE_SHD	(RKISPP_FEC + 0x0030)
#define RKISPP_FEC_MESH_XINT_BASE_SHD	(RKISPP_FEC + 0x0034)
#define RKISPP_FEC_MESH_XFRA_BASE_SHD	(RKISPP_FEC + 0x0038)
#define RKISPP_FEC_MESH_YINT_BASE_SHD	(RKISPP_FEC + 0x003C)
#define RKISPP_FEC_MESH_YFRA_BASE_SHD	(RKISPP_FEC + 0x0040)
#define RKISPP_FEC_WR_Y_BASE_SHD	(RKISPP_FEC + 0x0044)
#define RKISPP_FEC_WR_UV_BASE_SHD	(RKISPP_FEC + 0x0048)
#define RKISPP_FEC_FBCE_HEAD_OFFSET	(RKISPP_FEC + 0x0050)
#define RKISPP_FEC_CORE_CTRL		(RKISPP_FEC + 0x0080)
#define RKISPP_FEC_PIC_SIZE		(RKISPP_FEC + 0x0088)
#define RKISPP_FEC_DST_SIZE		(RKISPP_FEC + 0x0088)
#define RKISPP_FEC_MESH_SIZE		(RKISPP_FEC + 0x008C)
#define RKISPP_FEC_DMA_STATUS		(RKISPP_FEC + 0x0090)
#define RKISPP_FEC_CROP			(RKISPP_FEC + 0x0094)
#define RKISPP_FEC_SRC_SIZE		(RKISPP_FEC + 0x0098)

#define FMT_WR_MASK			GENMASK(7, 4)
#define FMT_RD_MASK			GENMASK(3, 0)
#define FMT_YUV420			0
#define FMT_YC_SWAP			BIT(3)
#define FMT_YUYV			BIT(2)
#define FMT_YUV422			BIT(1)
#define FMT_FBC				BIT(0)

#define NR_NEW_ALGO			BIT(16)

/* ISPP_STRT */
#define FEC_ST				BIT(2)
#define NR_SHP_ST			BIT(1)
#define TNR_ST				BIT(0)

/* ISPP_UPDATE */
#define ALL_FORCE_UPD (FEC_FORCE_UPD | TNR_FORCE_UPD | OTHER_FORCE_UPD)
#define FEC_FORCE_UPD			BIT(2)
#define TNR_FORCE_UPD			BIT(1)
#define OTHER_FORCE_UPD			BIT(0)

/* ISPP_CTRL_QUICK */
#define GLB_QUICK_MODE_MASK		GENMASK(9, 8)
#define SW_PP_FBC_MODE_DIS		BIT(30)
#define SW_PP_MMU_PLUS_DIS		BIT(29)
#define SW_PP2ISP_HOLD_SEL		BIT(28)
#define GLB_FEC2SCL_EN			BIT(11)
#define GLB_NR_SD32_TNR			BIT(10)
#define GLB_QUICK_MODE(a)		(((a) & 0x3) << 8)
#define GLB_NOC_HURRY(a)		(((a) & 0x3) << 4)
#define GLB_TNR_RDY_DIS			BIT(3)
#define GLB_TNR2NR_RDY_MODE		BIT(2)
#define GLB_DIRECT_MODE			BIT(1)
#define GLB_QUICK_EN			BIT(0)

/* ISPP_CTRL_RESET */
#define FBCD_ERR_PROTECT_DIS		BIT(12)
#define GLB_SOFT_RST_SCL		BIT(11)
#define GLB_SOFT_RST_SHP		BIT(10)
#define GLB_SOFT_RST_NR			BIT(9)
#define GLB_SOFT_RST_TNR		BIT(8)
#define RST_PROTECT_DIS			BIT(1)
#define GLB_SOFT_RST_ALL		((u32)BIT(0))

/* ISPP_CLKGATE */
#define GATE_DIS_ALL			0xff
#define GATE_DIS_GLOBAL_RAM_CLK		BIT(7)
#define GATE_DIS_SWS			BIT(6)
#define GATE_DIS_FEC			BIT(5)
#define GATE_DIS_SCL			BIT(4)
#define GATE_DIS_SHP			BIT(3)
#define GATE_DIS_NR			BIT(2)
#define GATE_DIS_TNR			BIT(1)
#define GATE_DIS_GLB			BIT(0)

/* INT_MASK INT_RAW_STA INT_STA INT_SET INT_CLR */
#define INT_FRAME(stream) \
	((stream)->config->frame_end_id)
#define NR_LOST_ERR			BIT(26)
#define TNR_LOST_ERR			BIT(25)
#define UVNR_MONITOR_ERR		BIT(24)
#define FBCH_EMPTY_NR			BIT(23)
#define FBCH_EMPTY_TNR			BIT(22)
#define FBCD_DEC_ERR_NR			BIT(21)
#define FBCD_DEC_ERR_TNR		BIT(20)
#define BUS_ERR_NR			BIT(17)
#define BUS_ERR_TNR			BIT(16)
#define CMD_NR_SHP_ST_DONE		BIT(12)
#define CMD_TNR_ST_DONE			BIT(11)
#define SCL2_INT			BIT(10)
#define SCL1_INT			BIT(9)
#define SCL0_INT			BIT(8)
#define FEC_INT				BIT(7)
#define ORB_INT				BIT(6)
#define SHP_INT				BIT(4)
#define NR_INT				BIT(3)
#define TNR_INT				BIT(2)
#define FRAME_INT			BIT(1)
#define QUICK_INT			BIT(0)

/* ISPP_QUICK_DIF */
#define GLB_TNR2NR_DIF(a)		(((a) & 0xff) << 16)
#define GLB_ISP2NR_DIF(a)		(((a) & 0xff) << 8)
#define GLB_NR2FEC_DIF(a)		((a) & 0xff)

/* SYS_STATUS */
#define TNR_WORKING			BIT(0)
#define NR_WORKING			BIT(1)
#define SHP_WORKING			BIT(2)
#define ORB_WORKING			BIT(3)
#define SCL0_WORKING			BIT(4)
#define SCL1_WORKING			BIT(5)
#define SCL2_WORKING			BIT(6)
#define FEC_WORKING			BIT(7)

/* SYS_CTL_STA0 */
#define TNR_TILE_LINE_CNT_MASK		GENMASK(6, 0)
#define NR_TILE_LINE_CNT_MASK		GENMASK(14, 8)
#define FEC_TILE_LINE_CNT_MASK		GENMASK(22, 16)

/* TNR CTRL */
#define SW_TNR_WR_FORMAT_MASK		GENMASK(7, 4)
#define SW_TNR_RD_FORMAT_MASK		GENMASK(3, 0)
#define SW_TNR_THROUGH_MODE		BIT(10)
#define SW_TNR_1ST_FRM			BIT(9)
#define SW_TNR_RD_PINGPONG2TO1		BIT(8)
#define SW_TNR_WR_YUYV_YCSWAP		BIT(7)
#define SW_TNR_WR_YUYV_FORMAT		BIT(6)
#define SW_TNR_WR_YUV_FORMAT		BIT(5)
#define SW_TNR_WR_FBCE_MODE		BIT(4)
#define SW_TNR_RD_YUYV_YCSWAP		BIT(3)
#define SW_TNR_RD_YUYV_FORMAT		BIT(2)
#define SW_TNR_RD_YUV_FORMAT		BIT(1)
#define SW_TNR_FBCD_MODE		BIT(0)

/* CORE_CTRL */
#define SW_TNR_GLB_GAIN_EN_SHD		BIT(28)
#define SW_TNR_OPTC_EN_SHD		BIT(27)
#define SW_TNR_OPTY_EN_SHD		BIT(26)
#define SW_TNR_MODE_SHD			BIT(25)
#define SW_TNR_EN_SHD			BIT(24)
#define SW_TNR_GLB_GAIN_EN		BIT(4)
#define SW_TNR_OPTC_EN			BIT(3)
#define SW_TNR_OPTY_EN			BIT(2)
#define SW_TNR_MODE			BIT(1)
#define SW_TNR_EN			BIT(0)

/* NR CTRL */
#define SW_NR_RD_FBCD_READ_MODE		BIT(31)
#define SW_NR_NEW_ALGORITHM		BIT(16)
#define SW_UVNR_1ST_FRM_SELF_MODE	BIT(10)
#define SW_UVNR_1ST_FRM_SELF		BIT(9)
#define SW_NR_RD_YUYV_YCSWAP		BIT(3)
#define SW_NR_RD_YUYV_FORMAT		BIT(2)
#define SW_NR_RD_YUV_FORMAT		BIT(1)
#define SW_NR_RD_FBCD_MODE		BIT(0)

/* NR_CTRL_PARA */
#define SW_UVNR_BIG_EN			BIT(6)
#define SW_UVNR_NOBIG_EN		BIT(5)
#define SW_UVNR_SD32_SELF_EN		BIT(4)
#define SW_NR_GAIN_BYPASS		BIT(3)
#define SW_UVNR_STEP2_ON		BIT(2)
#define SW_UVNR_STEP1_ON		BIT(1)
#define SW_NR_EN			BIT(0)

/* SHP CTRL*/
#define SW_SHP_WR_FORMAT_MASK		GENMASK(3, 0)
#define SW_SHP_WR_ROT_MODE(a)		(((a) & 0x3) << 5)
#define SW_SHP_WR_YUV_LIMIT		BIT(4)
#define SW_SHP_WR_YUYV_YCSWAP		BIT(3)
#define SW_SHP_WR_YUYV_FORMAT		BIT(2)
#define SW_SHP_WR_YUY_FORMAT		BIT(1)
#define SW_SHP_WR_FBCE_MODE		BIT(0)

/* CORE_CTRL */
#define SW_SHP_EDGE_AVG_EN		BIT(4)
#define SW_SHP_YIN_FLT_EN		BIT(3)
#define SW_SHP_DMA_DIS			BIT(2)
#define SW_SHP_ALPHA_ADP_EN		BIT(1)
#define SW_SHP_EN			BIT(0)

/* SCL_CTRL */
#define SW_SCL_BYPASS_SHD		BIT(31)
#define SW_SCL_ENABLE_SHD		BIT(30)
#define SW_SCL_RAM_CLK_ON		BIT(8)
#define SW_SCL_WR_YUV_LIMIT		BIT(7)
#define SW_SCL_WR_YUYV_YCSWAP		BIT(6)
#define SW_SCL_WR_YUYV_FORMAT		BIT(5)
#define SW_SCL_WR_YUV_FORMAT		BIT(4)
#define SW_SCL_WR_UV_DIS		BIT(3)
#define SW_SCL_FIRST_MODE		BIT(2)
#define SW_SCL_BYPASS			BIT(1)
#define SW_SCL_ENABLE			BIT(0)

/* FEC_CTRL*/
#define SW_FEC_WR_YUV_LIMIT		BIT(8)
#define SW_FEC_WR_YUYV_YC_SWAP		BIT(7)
#define SW_FEC_WR_YUYV_FORMAT		BIT(6)
#define SW_FEC_WR_YUV_FORMAT		BIT(5)
#define SW_FEC_WR_FBCE_MODE		BIT(4)
#define SW_FEC_RD_YUYV_YCSWAP		BIT(3)
#define SW_FEC_RD_YUYV_FORMAT		BIT(2)
#define SW_FEC_RD_YUV_FORMAT		BIT(1)

/* FEC_CORE_CTRL */
#define SW_FEC_EN_SHD			BIT(31)
#define SW_OFFSET_ENABLE		BIT(31)
#define SW_MINBUF_NON_UPDATE_SHD	BIT(30)
#define SW_MINBUF_NON_UPDATE		BIT(6)
#define SW_MESH_DENSITY			BIT(5)
#define SW_BIC_MODE			GENMASK(4, 3)
#define SW_FEC2DDR_DIS			BIT(1)
#define SW_FEC_EN			BIT(0)

/* ORB_CORE_CTRL */
#define SW_ORB_EN			BIT(0)

#endif /* _RKISPP_REGS_H */
