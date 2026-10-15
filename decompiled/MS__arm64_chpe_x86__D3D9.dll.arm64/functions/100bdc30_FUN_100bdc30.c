/*
 * FUN_100bdc30 at 100bdc30
 * undefined FUN_100bdc30(void)
 * Address ranges: 100bdc30-100bdd17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100bdc30(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  code *extraout_w11;
  int iVar3;
  int local_50 [8];
  
  iVar3 = -0x7fffbffb;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar1 = (*extraout_w11)(param_2,local_50,0);
  if (-1 < iVar1) {
    if (((local_50[0] == 4) && (2 < *(int *)(param_1 + 0x34) - 3U)) &&
       (*(int *)(*(int *)(param_1 + 0x44) + 0x12e8) == 0)) {
      param_3 = param_3 + *(int *)(param_1 + 0x2c) * param_4;
      uVar2 = FUN_1011f310(*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x172c0),param_2,param_3);
      if ((uVar2 & 1) != 0) {
        return param_3;
      }
    }
    iVar3 = -1;
  }
  return iVar3;
}

