/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *STD_STANDARD;
extern char *IEEE_P_2592010699;
extern char *STD_TEXTIO;
static const char *ng3 = "text_file";
static const char *ng4 = "C:/Users/User/Documents/ISE_Project/AMS/Avalon_Master_Slave_tb.vhd";
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


void work_a_1571761849_2372691052_sub_4072978924_4163069965(char *t0, char *t1, char *t2, char *t3, char *t4)
{
    char t5[488];
    char t6[32];
    char t10[8];
    char t16[8];
    char t22[8];
    char t25[16];
    char t32[8];
    char t51[16];
    char t52[16];
    char t53[16];
    char t54[16];
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    int t41;
    int t42;
    int t43;
    char *t44;
    int t45;
    char *t46;
    int t47;
    unsigned char t48;
    char *t49;
    char *t50;
    unsigned int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    static char *nl0[] = {&&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB14, &&LAB15, &&LAB16, &&LAB17, &&LAB18, &&LAB19, &&LAB20, &&LAB21, &&LAB22, &&LAB23, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB24, &&LAB25, &&LAB26, &&LAB27, &&LAB28, &&LAB29, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB24, &&LAB25, &&LAB26, &&LAB27, &&LAB28, &&LAB29, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30, &&LAB30};

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 192);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 1U;
    t13 = (t5 + 124U);
    t14 = ((STD_STANDARD) + 0);
    t15 = (t13 + 88U);
    *((char **)t15) = t14;
    t17 = (t13 + 56U);
    *((char **)t17) = t16;
    xsi_type_set_default_value(t14, t16, 0);
    t18 = (t13 + 80U);
    *((unsigned int *)t18) = 1U;
    t19 = (t5 + 244U);
    t20 = ((STD_STANDARD) + 384);
    t21 = (t19 + 88U);
    *((char **)t21) = t20;
    t23 = (t19 + 56U);
    *((char **)t23) = t22;
    *((int *)t22) = 0;
    t24 = (t19 + 80U);
    *((unsigned int *)t24) = 4U;
    t26 = (t25 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = 3;
    t27 = (t26 + 4U);
    *((int *)t27) = 0;
    t27 = (t26 + 8U);
    *((int *)t27) = -1;
    t28 = (0 - 3);
    t29 = (t28 * -1);
    t29 = (t29 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t29;
    t27 = (t5 + 364U);
    t30 = ((IEEE_P_2592010699) + 4024);
    t31 = (t27 + 88U);
    *((char **)t31) = t30;
    t33 = (t27 + 56U);
    *((char **)t33) = t32;
    xsi_type_set_default_value(t30, t32, t25);
    t34 = (t27 + 64U);
    *((char **)t34) = t25;
    t35 = (t27 + 80U);
    *((unsigned int *)t35) = 4U;
    t36 = (t6 + 4U);
    *((char **)t36) = t2;
    t37 = (t6 + 12U);
    *((char **)t37) = t3;
    t38 = (t6 + 20U);
    *((char **)t38) = t4;

LAB2:    t39 = (t19 + 56U);
    t40 = *((char **)t39);
    t41 = *((int *)t40);
    t39 = (t4 + 0U);
    t43 = *((int *)t39);
    t44 = (t4 + 4U);
    t45 = *((int *)t44);
    t46 = (t4 + 8U);
    t47 = *((int *)t46);
    if (t43 > t45)
        goto LAB6;

LAB7:    if (t47 == -1)
        goto LAB11;

LAB12:    t42 = t45;

LAB8:    t48 = (t41 < t42);
    if (t48 != 0)
        goto LAB3;

LAB5:
LAB1:    return;
LAB3:    t49 = (t7 + 56U);
    t50 = *((char **)t49);
    t49 = (t50 + 0);
    std_textio_read8(STD_TEXTIO, t1, t2, t49);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t48 = *((unsigned char *)t9);
    t8 = (char *)((nl0) + t48);
    goto **((char **)t8);

LAB4:;
LAB6:    if (t47 == 1)
        goto LAB9;

LAB10:    t42 = t43;
    goto LAB8;

LAB9:    t42 = t45;
    goto LAB8;

LAB11:    t42 = t43;
    goto LAB8;

LAB13:    t8 = (t27 + 56U);
    t9 = *((char **)t8);
    t8 = (t4 + 0U);
    t28 = *((int *)t8);
    t11 = (t4 + 0U);
    t42 = *((int *)t11);
    t12 = (t4 + 4U);
    t43 = *((int *)t12);
    t14 = (t4 + 8U);
    t45 = *((int *)t14);
    if (t42 > t43)
        goto LAB33;

LAB34:    if (t45 == -1)
        goto LAB38;

LAB39:    t41 = t43;

LAB35:    t15 = (t19 + 56U);
    t17 = *((char **)t15);
    t47 = *((int *)t17);
    t56 = (t41 - t47);
    t29 = (t28 - t56);
    t15 = (t4 + 0U);
    t58 = *((int *)t15);
    t18 = (t4 + 4U);
    t59 = *((int *)t18);
    t20 = (t4 + 8U);
    t60 = *((int *)t20);
    if (t58 > t59)
        goto LAB40;

LAB41:    if (t60 == -1)
        goto LAB45;

LAB46:    t57 = t59;

LAB42:    t21 = (t19 + 56U);
    t23 = *((char **)t21);
    t61 = *((int *)t23);
    t62 = (t57 - t61);
    t63 = (t62 - 3);
    t21 = (t4 + 4U);
    t64 = *((int *)t21);
    t24 = (t4 + 8U);
    t65 = *((int *)t24);
    xsi_vhdl_check_range_of_slice(t28, t64, t65, t56, t63, -1);
    t55 = (t29 * 1U);
    t66 = (0 + t55);
    t26 = (t3 + t66);
    t30 = (t25 + 12U);
    t67 = *((unsigned int *)t30);
    t67 = (t67 * 1U);
    memcpy(t26, t9, t67);
    t8 = (t19 + 56U);
    t9 = *((char **)t8);
    t28 = *((int *)t9);
    t41 = (t28 + 4);
    t8 = (t19 + 56U);
    t11 = *((char **)t8);
    t8 = (t11 + 0);
    *((int *)t8) = t41;
    goto LAB2;

LAB14:    t11 = (t0 + 535372);
    t14 = (t27 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    memcpy(t14, t11, 4U);
    goto LAB13;

LAB15:    t8 = (t0 + 535376);
    t11 = (t27 + 56U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    memcpy(t11, t8, 4U);
    goto LAB13;

LAB16:    t8 = (t0 + 535380);
    t11 = (t27 + 56U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    memcpy(t11, t8, 4U);
    goto LAB13;

LAB17:    t8 = (t0 + 535384);
    t11 = (t27 + 56U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    memcpy(t11, t8, 4U);
    goto LAB13;

LAB18:    t8 = (t0 + 535388);
    t11 = (t27 + 56U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    memcpy(t11, t8, 4U);
    goto LAB13;

LAB19:    t8 = (t0 + 535392);
    t11 = (t27 + 56U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    memcpy(t11, t8, 4U);
    goto LAB13;

LAB20:    t8 = (t0 + 535396);
    t11 = (t27 + 56U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    memcpy(t11, t8, 4U);
    goto LAB13;

LAB21:    t8 = (t0 + 535400);
    t11 = (t27 + 56U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    memcpy(t11, t8, 4U);
    goto LAB13;

LAB22:    t8 = (t0 + 535404);
    t11 = (t27 + 56U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    memcpy(t11, t8, 4U);
    goto LAB13;

LAB23:    t8 = (t0 + 535408);
    t11 = (t27 + 56U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    memcpy(t11, t8, 4U);
    goto LAB13;

LAB24:    t8 = (t0 + 535412);
    t11 = (t27 + 56U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    memcpy(t11, t8, 4U);
    goto LAB13;

LAB25:    t8 = (t0 + 535416);
    t11 = (t27 + 56U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    memcpy(t11, t8, 4U);
    goto LAB13;

LAB26:    t8 = (t0 + 535420);
    t11 = (t27 + 56U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    memcpy(t11, t8, 4U);
    goto LAB13;

LAB27:    t8 = (t0 + 535424);
    t11 = (t27 + 56U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    memcpy(t11, t8, 4U);
    goto LAB13;

LAB28:    t8 = (t0 + 535428);
    t11 = (t27 + 56U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    memcpy(t11, t8, 4U);
    goto LAB13;

LAB29:    t8 = (t0 + 535432);
    t11 = (t27 + 56U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    memcpy(t11, t8, 4U);
    goto LAB13;

LAB30:    t8 = (t0 + 535436);
    t11 = (t27 + 56U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    memcpy(t11, t8, 4U);
    if ((unsigned char)0 == 0)
        goto LAB31;

LAB32:    goto LAB13;

LAB31:    t8 = (t0 + 535440);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t48 = *((unsigned char *)t12);
    t14 = ((STD_STANDARD) + 1008);
    t15 = (t52 + 0U);
    t17 = (t15 + 0U);
    *((int *)t17) = 1;
    t17 = (t15 + 4U);
    *((int *)t17) = 25;
    t17 = (t15 + 8U);
    *((int *)t17) = 1;
    t28 = (25 - 1);
    t29 = (t28 * 1);
    t29 = (t29 + 1);
    t17 = (t15 + 12U);
    *((unsigned int *)t17) = t29;
    t11 = xsi_base_array_concat(t11, t51, t14, (char)97, t8, t52, (char)99, t48, (char)101);
    t17 = (t0 + 535465);
    t21 = ((STD_STANDARD) + 1008);
    t23 = (t54 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 1;
    t24 = (t23 + 4U);
    *((int *)t24) = 1;
    t24 = (t23 + 8U);
    *((int *)t24) = 1;
    t41 = (1 - 1);
    t29 = (t41 * 1);
    t29 = (t29 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t29;
    t20 = xsi_base_array_concat(t20, t53, t21, (char)97, t11, t51, (char)97, t17, t54, (char)101);
    t29 = (25U + 1U);
    t55 = (t29 + 1U);
    xsi_report(t20, t55, 2);
    goto LAB32;

LAB33:    if (t45 == 1)
        goto LAB36;

LAB37:    t41 = t42;
    goto LAB35;

LAB36:    t41 = t43;
    goto LAB35;

LAB38:    t41 = t42;
    goto LAB35;

LAB40:    if (t60 == 1)
        goto LAB43;

LAB44:    t57 = t58;
    goto LAB42;

LAB43:    t57 = t59;
    goto LAB42;

LAB45:    t57 = t58;
    goto LAB42;

}

char *work_a_1571761849_2372691052_sub_3055972483_4163069965(char *t1)
{
    char t2[208];
    char t15[32];
    char t24[524288];
    char t39[16];
    char *t0;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    int t30;
    int t31;
    int t32;
    int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    int t40;
    unsigned int t41;
    unsigned char t42;

LAB0:    t4 = ((STD_TEXTIO) + 3440);
    t5 = (t1 + 535466);
    t7 = (t2 + 4U);
    t8 = xsi_create_file_variable_in_buffer(0, ng3, t4, t5, 44U, 1);
    *((char **)t7) = t8;
    t9 = (t2 + 12U);
    t10 = ((STD_TEXTIO) + 3280);
    t11 = (t9 + 56U);
    *((char **)t11) = t10;
    t12 = (t9 + 40U);
    *((char **)t12) = 0;
    t13 = (t9 + 64U);
    *((int *)t13) = 1;
    t14 = (t9 + 48U);
    *((char **)t14) = 0;
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = 65535;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (65535 - 0);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t15 + 16U);
    t20 = (t17 + 0U);
    *((int *)t20) = 7;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - 7);
    t19 = (t21 * -1);
    t19 = (t19 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t19;
    t20 = (t2 + 84U);
    t22 = (t1 + 6928);
    t23 = (t20 + 88U);
    *((char **)t23) = t22;
    t25 = (t20 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, 0);
    t26 = (t20 + 64U);
    t27 = (t22 + 80U);
    t28 = *((char **)t27);
    *((char **)t26) = t28;
    t29 = (t20 + 80U);
    *((unsigned int *)t29) = 524288U;
    t30 = xsi_vhdl_pow(2, 16);
    t31 = (t30 - 1);
    t32 = 0;
    t33 = t31;

LAB2:    if (t32 <= t33)
        goto LAB3;

LAB5:    t4 = (t20 + 56U);
    t5 = *((char **)t4);
    t42 = (524288U != 524288U);
    if (t42 == 1)
        goto LAB7;

LAB8:    t0 = xsi_get_transient_memory(524288U);
    memcpy(t0, t5, 524288U);

LAB1:    xsi_access_variable_delete(t9);
    t4 = (t2 + 4U);
    t5 = *((char **)t4);
    xsi_delete_file_variable(t5);
    return t0;
LAB3:    t34 = (t2 + 4U);
    t35 = *((char **)t34);
    std_textio_readline(STD_TEXTIO, (char *)0, t35, t9);
    t4 = (t20 + 56U);
    t5 = *((char **)t4);
    t18 = (t32 - 0);
    t19 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 65535, 1, t32);
    t21 = (8 - 1);
    t30 = (0 - t21);
    t36 = (t30 * -1);
    t36 = (t36 + 1);
    t36 = (t36 * 1U);
    t37 = (t36 * t19);
    t38 = (0 + t37);
    t4 = (t5 + t38);
    t31 = (8 - 1);
    t6 = (t39 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = t31;
    t7 = (t6 + 4U);
    *((int *)t7) = 0;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t40 = (0 - t31);
    t41 = (t40 * -1);
    t41 = (t41 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t41;
    work_a_1571761849_2372691052_sub_4072978924_4163069965(t1, (char *)0, t9, t4, t39);

LAB4:    if (t32 == t33)
        goto LAB5;

LAB6:    t18 = (t32 + 1);
    t32 = t18;
    goto LAB2;

LAB7:    xsi_size_not_matching(524288U, 524288U, 0);
    goto LAB8;

LAB9:;
}

static void work_a_1571761849_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 4808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(139, ng4);
    t2 = (t0 + 5984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(140, ng4);
    t2 = (t0 + 3648U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4616);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(141, ng4);
    t2 = (t0 + 5984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(142, ng4);
    t2 = (t0 + 3648U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4616);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1571761849_2372691052_p_1(char *t0)
{
    char t9[16];
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    int64 t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t10;
    char *t11;
    unsigned int t12;
    char *t13;

LAB0:    t1 = (t0 + 5056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(149, ng4);
    t3 = (100 * 1000LL);
    t2 = (t0 + 4864);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(151, ng4);
    t2 = (t0 + 3648U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 10);
    t2 = (t0 + 4864);
    xsi_process_wait(t2, t5);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(155, ng4);
    t2 = (t0 + 6048);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(156, ng4);
    t2 = (t0 + 6112);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(157, ng4);
    t2 = (t0 + 6176);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(158, ng4);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 1, 16);
    t10 = (16U != 16U);
    if (t10 == 1)
        goto LAB12;

LAB13:    t4 = (t0 + 6240);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    memcpy(t11, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(159, ng4);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 0, 2);
    t4 = (t9 + 12U);
    t12 = *((unsigned int *)t4);
    t12 = (t12 * 1U);
    t10 = (2U != t12);
    if (t10 == 1)
        goto LAB14;

LAB15:    t6 = (t0 + 6304);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t2, 2U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(160, ng4);
    t2 = (t0 + 6368);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(161, ng4);
    t2 = (t0 + 3648U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 10);
    t2 = (t0 + 4864);
    xsi_process_wait(t2, t5);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB13;

LAB14:    xsi_size_not_matching(2U, t12, 0);
    goto LAB15;

LAB16:    xsi_set_current_line(162, ng4);
    t2 = (t0 + 6368);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(163, ng4);
    t2 = (t0 + 3648U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 10);
    t2 = (t0 + 4864);
    xsi_process_wait(t2, t5);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(164, ng4);
    t2 = (t0 + 6368);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(166, ng4);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    goto LAB2;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

}

static void work_a_1571761849_2372691052_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(172, ng4);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5872);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(173, ng4);
    t1 = (t0 + 3112U);
    t5 = *((char **)t1);
    t1 = (t0 + 2312U);
    t6 = *((char **)t1);
    t1 = (t0 + 10780U);
    t7 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t6, t1);
    t8 = (t7 - 0);
    t9 = (t8 * 1);
    xsi_vhdl_check_range_of_index(0, 65535, 1, t7);
    t10 = (8U * t9);
    t11 = (0 + t10);
    t12 = (t5 + t11);
    t13 = (t0 + 6432);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t12, 16U);
    xsi_driver_first_trans_fast(t13);
    goto LAB3;

}

static void work_a_1571761849_2372691052_p_3(char *t0)
{
    char *t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;

LAB0:    xsi_set_current_line(185, ng4);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5888);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(186, ng4);
    t4 = (t0 + 2792U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(187, ng4);
    t15 = (t0 + 5360);
    t16 = (t0 + 4152U);
    t17 = (t0 + 2952U);
    t18 = *((char **)t17);
    t17 = (t0 + 10796U);
    t19 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t18, t17);
    std_textio_write5(STD_TEXTIO, t15, t16, t19, (unsigned char)0, 0);
    xsi_set_current_line(188, ng4);
    t1 = (t0 + 5360);
    t4 = (t0 + 3976U);
    t5 = (t0 + 4152U);
    std_textio_writeline(STD_TEXTIO, t1, t4, t5);
    goto LAB6;

LAB8:    t4 = (t0 + 2152U);
    t8 = *((char **)t4);
    t9 = (1 - 15);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t4 = (t8 + t12);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t3 = t14;
    goto LAB10;

}


extern void work_a_1571761849_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1571761849_2372691052_p_0,(void *)work_a_1571761849_2372691052_p_1,(void *)work_a_1571761849_2372691052_p_2,(void *)work_a_1571761849_2372691052_p_3};
	static char *se[] = {(void *)work_a_1571761849_2372691052_sub_4072978924_4163069965,(void *)work_a_1571761849_2372691052_sub_3055972483_4163069965};
	xsi_register_didat("work_a_1571761849_2372691052", "isim/Avalon_Master_Slave_tb_isim_beh.exe.sim/work/a_1571761849_2372691052.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
