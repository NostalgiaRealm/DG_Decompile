/*
 * FUN_10020f09 at 10020f09
 * LPRECT __stdcall FUN_10020f09(LPRECT param_1, float param_2, float param_3)
 * Address ranges: 10020f09-10020f73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPRECT FUN_10020f09(LPRECT param_1,float param_2,float param_3)

{
  int iVar1;
  float in_XMM2_Da;
  float in_XMM3_Da;
  
  iVar1 = (int)in_XMM2_Da;
  if (param_2 < in_XMM2_Da) {
    iVar1 = (int)param_2;
  }
  param_1->left = iVar1;
  iVar1 = (int)in_XMM3_Da;
  if (param_3 < in_XMM3_Da) {
    iVar1 = (int)param_3;
  }
  param_1->top = iVar1;
  iVar1 = (int)param_2;
  if (param_2 < in_XMM2_Da) {
    iVar1 = (int)in_XMM2_Da;
  }
  param_1->right = iVar1;
  iVar1 = (int)param_3;
  if (param_3 < in_XMM3_Da) {
    iVar1 = (int)in_XMM3_Da;
  }
  param_1->bottom = iVar1;
  InflateRect(param_1,2,2);
  return param_1;
}

