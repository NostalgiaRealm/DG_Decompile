/*
 * FUN_1009a870 at 1009a870
 * undefined4 __stdcall FUN_1009a870(int param_1, uint param_2, uint param_3, int param_4, undefined4 * param_5)
 * Address ranges: 1009a870-1009a8aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009a870(int param_1,uint param_2,uint param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x8876086c;
  if (param_2 < *(uint *)(param_1 + -0x591c)) {
    iVar1 = *(int *)(*(int *)(param_1 + -0x5920) + param_2 * 4);
    uVar2 = FUN_1009db0a(-(uint)(iVar1 != 0) & iVar1 - 8U,param_3,param_4,param_5);
  }
  return uVar2;
}

