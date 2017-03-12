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
static const char *ng0 = "G:/digital/main.v";
static unsigned int ng1[] = {128U, 0U};
static unsigned int ng2[] = {127U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};
static int ng6[] = {3, 0};
static unsigned int ng7[] = {0U, 0U};
static unsigned int ng8[] = {1U, 0U};



static void Initial_52_0(char *t0)
{
    char t1[8];
    char t4[8];
    char t6[8];
    char t7[8];
    char *t2;
    char *t3;
    char *t5;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    unsigned int t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(53, ng0);

LAB2:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    memset(t1, 0, 8);
    xsi_vlog_unsigned_unary_minus(t1, 8, t2, 8);
    t3 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 8, t1, 8, t3, 8);
    t5 = (t0 + 5624);
    t8 = (t0 + 5624);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 5624);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t7 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB3;

LAB4:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    memset(t1, 0, 8);
    xsi_vlog_unsigned_unary_minus(t1, 8, t2, 8);
    t3 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 8, t1, 8, t3, 8);
    t5 = (t0 + 5624);
    t8 = (t0 + 5624);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 5624);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t7 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng2)));
    memset(t1, 0, 8);
    xsi_vlog_unsigned_minus(t1, 8, t2, 8, t3, 8);
    t5 = (t0 + 5624);
    t8 = (t0 + 5624);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 5624);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t4, t6, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t6 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng2)));
    memset(t1, 0, 8);
    xsi_vlog_unsigned_add(t1, 8, t2, 8, t3, 8);
    t5 = (t0 + 5624);
    t8 = (t0 + 5624);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 5624);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t4, t6, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t6 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng7)));
    memset(t1, 0, 8);
    xsi_vlog_unsigned_unary_minus(t1, 1, t2, 1);
    t3 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 1, t1, 1, t3, 1);
    t5 = (t0 + 5784);
    t8 = (t0 + 5784);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 5784);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t7 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng7)));
    memset(t1, 0, 8);
    xsi_vlog_unsigned_unary_minus(t1, 1, t2, 1);
    t3 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 1, t1, 1, t3, 1);
    t5 = (t0 + 5784);
    t8 = (t0 + 5784);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 5784);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t7 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng8)));
    memset(t1, 0, 8);
    xsi_vlog_unsigned_minus(t1, 1, t2, 1, t3, 1);
    t5 = (t0 + 5784);
    t8 = (t0 + 5784);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 5784);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t4, t6, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t6 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng8)));
    memset(t1, 0, 8);
    xsi_vlog_unsigned_add(t1, 1, t2, 1, t3, 1);
    t5 = (t0 + 5784);
    t8 = (t0 + 5784);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 5784);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t4, t6, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t6 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 5784);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t0 + 5784);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 5784);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t1, 1, t5, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t0 + 5944);
    t18 = (t0 + 5944);
    t26 = (t18 + 72U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t4, t27, 2, t28, 32, 1);
    t29 = (t4 + 4);
    t16 = *((unsigned int *)t29);
    t17 = (!(t16));
    if (t17 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5784);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t0 + 5784);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 5784);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t1, 1, t5, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t0 + 5944);
    t18 = (t0 + 5944);
    t26 = (t18 + 72U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t4, t27, 2, t28, 32, 1);
    t29 = (t4 + 4);
    t16 = *((unsigned int *)t29);
    t17 = (!(t16));
    if (t17 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 5784);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t0 + 5784);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 5784);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t1, 1, t5, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t0 + 5944);
    t18 = (t0 + 5944);
    t26 = (t18 + 72U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t4, t27, 2, t28, 32, 1);
    t29 = (t4 + 4);
    t16 = *((unsigned int *)t29);
    t17 = (!(t16));
    if (t17 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 5784);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t0 + 5784);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 5784);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t1, 1, t5, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t0 + 5944);
    t18 = (t0 + 5944);
    t26 = (t18 + 72U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t4, t27, 2, t28, 32, 1);
    t29 = (t4 + 4);
    t16 = *((unsigned int *)t29);
    t17 = (!(t16));
    if (t17 == 1)
        goto LAB25;

LAB26:
LAB1:    return;
LAB3:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t7), t25);
    goto LAB4;

LAB5:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t7), t25);
    goto LAB6;

LAB7:    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t6);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t5, t1, 0, *((unsigned int *)t6), t25);
    goto LAB8;

LAB9:    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t6);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t5, t1, 0, *((unsigned int *)t6), t25);
    goto LAB10;

LAB11:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t7), t25);
    goto LAB12;

LAB13:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t7), t25);
    goto LAB14;

LAB15:    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t6);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t5, t1, 0, *((unsigned int *)t6), t25);
    goto LAB16;

LAB17:    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t6);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t5, t1, 0, *((unsigned int *)t6), t25);
    goto LAB18;

LAB19:    xsi_vlogvar_assign_value(t15, t1, 0, *((unsigned int *)t4), 1);
    goto LAB20;

LAB21:    xsi_vlogvar_assign_value(t15, t1, 0, *((unsigned int *)t4), 1);
    goto LAB22;

LAB23:    xsi_vlogvar_assign_value(t15, t1, 0, *((unsigned int *)t4), 1);
    goto LAB24;

LAB25:    xsi_vlogvar_assign_value(t15, t1, 0, *((unsigned int *)t4), 1);
    goto LAB26;

}

static void Always_70_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 7112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 9416);
    *((int *)t2) = 1;
    t3 = (t0 + 7144);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(71, ng0);

LAB5:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 3624U);
    t5 = *((char **)t4);
    t4 = (t0 + 5464);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    goto LAB2;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 7360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng7)));
    t3 = (t0 + 9496);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 7);

LAB1:    return;
}

static void implSig2_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 7608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng7)));
    t3 = (t0 + 9560);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig3_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 7856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng7)));
    t3 = (t0 + 9624);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 7);

LAB1:    return;
}

static void implSig4_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 8104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng7)));
    t3 = (t0 + 9688);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig5_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 8352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng7)));
    t3 = (t0 + 9752);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 7);

LAB1:    return;
}

static void implSig6_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 8600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng7)));
    t3 = (t0 + 9816);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig7_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 8848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng7)));
    t3 = (t0 + 9880);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 7);

LAB1:    return;
}

static void implSig8_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 9096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng7)));
    t3 = (t0 + 9944);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}


extern void work_m_00000000003985179692_3823007873_init()
{
	static char *pe[] = {(void *)Initial_52_0,(void *)Always_70_1,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute,(void *)implSig4_execute,(void *)implSig5_execute,(void *)implSig6_execute,(void *)implSig7_execute,(void *)implSig8_execute};
	xsi_register_didat("work_m_00000000003985179692_3823007873", "isim/test_isim_beh.exe.sim/work/m_00000000003985179692_3823007873.didat");
	xsi_register_executes(pe);
}
