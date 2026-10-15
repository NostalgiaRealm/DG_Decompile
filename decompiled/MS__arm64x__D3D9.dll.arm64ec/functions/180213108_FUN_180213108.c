/*
 * FUN_180213108 at 180213108
 * undefined FUN_180213108(void)
 * Address ranges: 180213108-18021315f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180213108(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  FUN_180214fe8(param_1,*param_2,param_2[1] - *param_2);
  lVar1 = *param_1;
  *(int *)(lVar1 + 4) = ((int)param_1[1] - (int)lVar1) + -8;
  *(uint *)(lVar1 + 0xc) = ((uint)(((int)param_1[1] - (int)*param_1) - param_3) >> 2) + 2;
  return;
}

