/*
 * FUN_100c3eb1 at 100c3eb1
 * undefined __fastcall FUN_100c3eb1(int * param_1, int * param_2, int param_3)
 * Address ranges: 100c3eb1-100c3ee4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100c3eb1(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  FUN_100c3d16(param_1,(undefined4 *)*param_2,param_2[1] - *param_2);
  iVar1 = *param_1;
  *(int *)(iVar1 + 4) = (param_1[1] - iVar1) + -8;
  *(uint *)(iVar1 + 0xc) = ((uint)((param_1[1] - *param_1) - param_3) >> 2) + 2;
  return;
}

