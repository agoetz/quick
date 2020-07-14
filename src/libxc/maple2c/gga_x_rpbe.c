/*    
  This file was generated automatically with /nfs/data-012/marques/software/source/libxc/svn/scripts/maple2c.pl.   
  Do not edit this file directly as it can be overwritten!!   
   
  This Source Code Form is subject to the terms of the Mozilla Public   
  License, v. 2.0. If a copy of the MPL was not distributed with this   
  file, You can obtain one at http://mozilla.org/MPL/2.0/.   
   
  Maple version     : Maple 2016 (X86 64 LINUX)   
  Maple source      : ../maple/gga_x_rpbe.mpl   
  Type of functional: work_gga_x   
*/   
   
#ifdef DEVICE   
__device__ void xc_gga_x_rpbe_enhance_kernel
  (const void *p,  xc_gga_work_x_t *r)   
#else   
void xc_gga_x_rpbe_enhance   
  (const xc_func_type *p,  xc_gga_work_x_t *r)   
#endif   
{   
  double t1, t2, t3, t4, t5, t6, t7, t9;   
  double t13, t22, t23, t27, t37, t41;   
   
  gga_x_rpbe_params *params;   
   
#ifndef DEVICE   
  assert(p->params != NULL);   
  params = (gga_x_rpbe_params * )(p->params);   
#else   
  params = (gga_x_rpbe_params * )(p);   
#endif   
   
  t1 = M_CBRT6;   
  t2 = params->rpbe_mu * t1;   
  t3 = 0.31415926535897932385e1 * 0.31415926535897932385e1;   
  t4 = cbrt(t3);   
  t5 = t4 * t4;   
  t6 = 0.1e1 / t5;   
  t7 = r->x * r->x;   
  t9 = 0.1e1 / params->rpbe_kappa;   
  t13 = exp(-t2 * t6 * t7 * t9 / 0.24e2);   
  r->f = 0.1e1 + params->rpbe_kappa * (0.1e1 - t13);   
   
  if(r->order < 1) return;   
   
  r->dfdx = t2 * t6 * r->x * t13 / 0.12e2;   
   
  if(r->order < 2) return;   
   
  t22 = params->rpbe_mu * params->rpbe_mu;   
  t23 = t1 * t1;   
  t27 = t22 * t23 / t4 / t3;   
  r->d2fdx2 = t2 * t6 * t13 / 0.12e2 - t27 * t7 * t9 * t13 / 0.144e3;   
   
  if(r->order < 3) return;   
   
  t37 = t3 * t3;   
  t41 = params->rpbe_kappa * params->rpbe_kappa;   
  r->d3fdx3 = -t27 * r->x * t9 * t13 / 0.48e2 + t22 * params->rpbe_mu / t37 * t7 * r->x / t41 * t13 / 0.288e3;   
   
  if(r->order < 4) return;   
   
   
}   
   
#ifndef DEVICE   
#define maple2c_order 3   
#define maple2c_func  xc_gga_x_rpbe_enhance   
#define kernel_id 42 
#endif