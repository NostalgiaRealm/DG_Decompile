/*
 * FUN_1800ee0e8 at 1800ee0e8
 * undefined __fastcall FUN_1800ee0e8(longlong * param_1, longlong * param_2, int param_3)
 * Address ranges: 1800ee0e8-1800ee12f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ee0e8(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  FUN_1800edd90(param_1,(undefined8 *)*param_2,param_2[1] - *param_2);
  lVar1 = *param_1;
  *(int *)(lVar1 + 4) = ((int)param_1[1] - (int)lVar1) + -8;
  *(uint *)(lVar1 + 0xc) = ((uint)(((int)param_1[1] - (int)*param_1) - param_3) >> 2) + 2;
  return;
}

