/*    
  This file was generated automatically with /nfs/data-012/marques/software/source/libxc/svn/scripts/maple2c.pl.   
  Do not edit this file directly as it can be overwritten!!   
   
  This Source Code Form is subject to the terms of the Mozilla Public   
  License, v. 2.0. If a copy of the MPL was not distributed with this   
  file, You can obtain one at http://mozilla.org/MPL/2.0/.   
   
  Maple version     : Maple 2016 (X86 64 LINUX)   
  Maple source      : ../maple/lda_x_rel.mpl   
  Type of functional: work_lda   
*/   
   
#ifdef DEVICE   
__device__ static void   
xc_lda_x_rel_func0_kernel(const void *p, xc_lda_work_t *r)   
#else   
static void   
func0(const xc_func_type *p, xc_lda_work_t *r)   
#endif   
{   
  double t1, t2, t3, t6, t7, t8, t9, t10;   
  double t11, t12, t13, t14, t15, t16, t17, t20;   
  double t21, t22, t26, t30, t31, t35, t36, t38;   
  double t42, t46, t47, t53, t59, t60, t65, t66;   
  double t73, t78, t79, t84, t87, t95, t96, t100;   
  double t118, t120, t121, t127, t130;   
   
   
  t1 = POW_1_3(0.3e1);   
  t2 = t1 * t1;   
  t3 = POW_1_3(0.4e1);   
  t6 = POW_1_3(0.1e1 / 0.31415926535897932385e1);   
  t7 = t6 * t6;   
  t8 = t2 * t3 * t7;   
  t9 = POW_1_3(0.2e1);   
  t10 = t9 * t9;   
  t11 = 0.1e1 / r->rs;   
  t12 = t10 * t11;   
  t13 = POW_1_3(0.9e1);   
  t14 = t13 * t13;   
  t15 = t14 * t3;   
  t16 = r->rs * r->rs;   
  t17 = 0.1e1 / t16;   
  t20 = 0.1e1 + 0.28556429993539872704e-4 * t15 * t17;   
  t21 = sqrt(t20);   
  t22 = t21 * t14;   
  t26 = t3 * t3;   
  t30 = log(0.26719108327908265315e-2 * t13 * t26 * t11 + sqrt(POW_2(0.26719108327908265315e-2 * t13 * t26 * t11) + 0.1e1));   
  t31 = t30 * t13;   
  t35 = 0.10396221848752237744e2 * t22 * t3 * r->rs - 0.97273285855626056438e3 * t31 * t26 * t16;   
  t36 = t35 * t35;   
  t38 = 0.1e1 - 0.15e1 * t36;   
  r->f = -0.18750000000000000000e0 * t8 * t12 * t38;   
   
  if(r->order < 1) return;   
   
  t42 = t10 * t17;   
  t46 = 0.1e1 / t21;   
  t47 = t46 * t13;   
  t53 = t46 * t14;   
  t59 = -0.26719108327908265315e-2 * t47 * t26 * t17 + 0.10396221848752237744e2 * t22 * t3 + 0.10396221848752237744e2 * t53 * t3 - 0.19454657171125211288e4 * t31 * t26 * r->rs;   
  t60 = t35 * t59;   
  r->dfdrs = 0.18750000000000000000e0 * t8 * t42 * t38 + 0.56250000000000000000e0 * t8 * t12 * t60;   
   
  if(r->order < 2) return;   
   
  t65 = 0.1e1 / t16 / r->rs;   
  t66 = t10 * t65;   
  t73 = t59 * t59;   
  t78 = 0.1e1 / t21 / t20;   
  t79 = t16 * t16;   
  t84 = t26 * t65;   
  t87 = t78 * t13;   
  t95 = -0.27468084472405941020e-5 * t78 / t79 / r->rs + 0.26719108327908265315e-2 * t47 * t84 + 0.26719108327908265315e-2 * t87 * t84 + 0.20792443697504475488e2 * t53 * t3 * t11 - 0.19454657171125211288e4 * t31 * t26;   
  t96 = t35 * t95;   
  r->d2fdrs2 = -0.37500000000000000000e0 * t8 * t66 * t38 - 0.11250000000000000000e1 * t8 * t42 * t60 + 0.56250000000000000000e0 * t8 * t12 * t73 + 0.56250000000000000000e0 * t8 * t12 * t96;   
   
  if(r->order < 3) return;   
   
  t100 = 0.1e1 / t79;   
  t118 = t20 * t20;   
  t120 = 0.1e1 / t21 / t118;   
  t121 = t79 * t79;   
  t127 = 0.1e1 / t79 / t16;   
  t130 = t26 * t100;   
  r->d3fdrs3 = 0.11250000000000000000e1 * t8 * t10 * t100 * t38 + 0.33750000000000000000e1 * t8 * t66 * t60 - 0.16875000000000000000e1 * t8 * t42 * t73 - 0.16875000000000000000e1 * t8 * t42 * t96 + 0.16875000000000000000e1 * t8 * t12 * t59 * t95 + 0.56250000000000000000e0 * t8 * t12 * t35 * (-0.23531712938786995922e-9 * t120 / t121 * t15 + 0.16480850683443564612e-4 * t78 * t127 - 0.80157324983724795945e-2 * t47 * t130 + 0.82404253417217823056e-5 * t120 * t127 - 0.26719108327908265315e-2 * t87 * t130);   
   
  if(r->order < 4) return;   
   
   
}   
   
#ifdef DEVICE   
__device__ static void   
xc_lda_x_rel_func1_kernel(const void *p, xc_lda_work_t *r)   
#else   
static void   
func1(const xc_func_type *p, xc_lda_work_t *r)   
#endif   
{   
  double t1, t2, t3, t4, t6, t7, t8, t9;   
  double t10, t11, t12, t14, t15, t17, t18, t19;   
  double t20, t21, t22, t23, t24, t27, t28, t29;   
  double t33, t37, t38, t42, t43, t45, t46, t50;   
  double t55, t56, t57, t58, t64, t70, t71, t76;   
  double t77, t82, t83, t87, t91, t92, t97, t98;   
  double t103, t106, t114, t115, t122, t126, t128, t131;   
  double t132, t136, t156, t158, t159, t165, t168;   
   
   
  t1 = POW_1_3(0.3e1);   
  t2 = t1 * t1;   
  t3 = POW_1_3(0.4e1);   
  t4 = t2 * t3;   
  t6 = POW_1_3(0.1e1 / 0.31415926535897932385e1);   
  t7 = t6 * t6;   
  t8 = t4 * t7;   
  t9 = POW_1_3(0.2e1);   
  t10 = t9 * t9;   
  t11 = 0.1e1 + r->z;   
  t12 = POW_1_3(t11);   
  t14 = 0.1e1 - r->z;   
  t15 = POW_1_3(t14);   
  t17 = t12 * t11 + t15 * t14;   
  t18 = t10 * t17;   
  t19 = 0.1e1 / r->rs;   
  t20 = POW_1_3(0.9e1);   
  t21 = t20 * t20;   
  t22 = t21 * t3;   
  t23 = r->rs * r->rs;   
  t24 = 0.1e1 / t23;   
  t27 = 0.1e1 + 0.28556429993539872704e-4 * t22 * t24;   
  t28 = sqrt(t27);   
  t29 = t28 * t21;   
  t33 = t3 * t3;   
  t37 = log(0.26719108327908265315e-2 * t20 * t33 * t19 + sqrt(POW_2(0.26719108327908265315e-2 * t20 * t33 * t19) + 0.1e1));   
  t38 = t37 * t20;   
  t42 = 0.10396221848752237744e2 * t29 * t3 * r->rs - 0.97273285855626056438e3 * t38 * t33 * t23;   
  t43 = t42 * t42;   
  t45 = 0.1e1 - 0.15e1 * t43;   
  t46 = t19 * t45;   
  r->f = -0.3e1 / 0.32e2 * t8 * t18 * t46;   
   
  if(r->order < 1) return;   
   
  t50 = t24 * t45;   
  t55 = t4 * t7 * t10;   
  t56 = t17 * t19;   
  t57 = 0.1e1 / t28;   
  t58 = t57 * t20;   
  t64 = t57 * t21;   
  t70 = -0.26719108327908265315e-2 * t58 * t33 * t24 + 0.10396221848752237744e2 * t29 * t3 + 0.10396221848752237744e2 * t64 * t3 - 0.19454657171125211288e4 * t38 * t33 * r->rs;   
  t71 = t42 * t70;   
  r->dfdrs = 0.3e1 / 0.32e2 * t8 * t18 * t50 + 0.28125000000000000000e0 * t55 * t56 * t71;   
  t76 = 0.4e1 / 0.3e1 * t12 - 0.4e1 / 0.3e1 * t15;   
  t77 = t10 * t76;   
  r->dfdz = -0.3e1 / 0.32e2 * t8 * t77 * t46;   
   
  if(r->order < 2) return;   
   
  t82 = 0.1e1 / t23 / r->rs;   
  t83 = t82 * t45;   
  t87 = t17 * t24;   
  t91 = t70 * t70;   
  t92 = t19 * t91;   
  t97 = 0.1e1 / t28 / t27;   
  t98 = t23 * t23;   
  t103 = t33 * t82;   
  t106 = t97 * t20;   
  t114 = -0.27468084472405941020e-5 * t97 / t98 / r->rs + 0.26719108327908265315e-2 * t58 * t103 + 0.26719108327908265315e-2 * t106 * t103 + 0.20792443697504475488e2 * t64 * t3 * t19 - 0.19454657171125211288e4 * t38 * t33;   
  t115 = t42 * t114;   
  r->d2fdrs2 = -0.3e1 / 0.16e2 * t8 * t18 * t83 - 0.56250000000000000000e0 * t55 * t87 * t71 + 0.28125000000000000000e0 * t8 * t18 * t92 + 0.28125000000000000000e0 * t55 * t56 * t115;   
  t122 = t76 * t19;   
  r->d2fdrsz = 0.3e1 / 0.32e2 * t8 * t77 * t50 + 0.28125000000000000000e0 * t55 * t122 * t71;   
  t126 = t12 * t12;   
  t128 = t15 * t15;   
  t131 = 0.4e1 / 0.9e1 / t126 + 0.4e1 / 0.9e1 / t128;   
  t132 = t10 * t131;   
  r->d2fdz2 = -0.3e1 / 0.32e2 * t8 * t132 * t46;   
   
  if(r->order < 3) return;   
   
  t136 = 0.1e1 / t98;   
  t156 = t27 * t27;   
  t158 = 0.1e1 / t28 / t156;   
  t159 = t98 * t98;   
  t165 = 0.1e1 / t98 / t23;   
  t168 = t33 * t136;   
  r->d3fdrs3 = 0.9e1 / 0.16e2 * t8 * t18 * t136 * t45 + 0.16875000000000000000e1 * t55 * t17 * t82 * t71 - 0.84375000000000000000e0 * t8 * t18 * t24 * t91 - 0.84375000000000000000e0 * t55 * t87 * t115 + 0.84375000000000000000e0 * t55 * t56 * t70 * t114 + 0.28125000000000000000e0 * t55 * t56 * t42 * (-0.23531712938786995922e-9 * t158 / t159 * t22 + 0.16480850683443564612e-4 * t97 * t165 - 0.80157324983724795945e-2 * t58 * t168 + 0.82404253417217823056e-5 * t158 * t165 - 0.26719108327908265315e-2 * t106 * t168);   
  r->d3fdrs2z = -0.3e1 / 0.16e2 * t8 * t77 * t83 - 0.56250000000000000000e0 * t55 * t76 * t24 * t71 + 0.28125000000000000000e0 * t8 * t77 * t92 + 0.28125000000000000000e0 * t55 * t122 * t115;   
  r->d3fdrsz2 = 0.3e1 / 0.32e2 * t8 * t132 * t50 + 0.28125000000000000000e0 * t55 * t131 * t19 * t71;   
  r->d3fdz3 = -0.3e1 / 0.32e2 * t8 * t10 * (-0.8e1 / 0.27e2 / t126 / t11 + 0.8e1 / 0.27e2 / t128 / t14) * t46;   
   
  if(r->order < 4) return;   
   
   
}   
   
#ifdef DEVICE   
__device__ void   
xc_lda_x_rel_func_kernel(const void *p, xc_lda_work_t *r)   
{   
  if(r->nspin == XC_UNPOLARIZED)   
xc_lda_x_rel_func0_kernel(p, r);   
  else   
xc_lda_x_rel_func1_kernel(p, r);   
}   
#else   
void    
xc_lda_x_rel_func(const xc_func_type *p, xc_lda_work_t *r)   
{   
  if(p->nspin == XC_UNPOLARIZED)   
    func0(p, r);   
  else   
    func1(p, r);   
}   
#endif   
   
#ifndef DEVICE   
#define maple2c_order 3   
#define maple2c_func  xc_lda_x_rel_func   
#define kernel_id 29 
#endif
