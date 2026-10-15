/*
 * FUN_10058dd0 at 10058dd0
 * undefined FUN_10058dd0(void)
 * Address ranges: 10058dd0-10058e6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10058dd0(undefined8 param_1,int param_2)

{
  int iVar1;
  code *extraout_w11;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  uVar2 = 0x80070057;
  if (param_2 != 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar1 = (*extraout_w11)(param_2);
    if ((*(uint *)(iVar1 + 0x6c) & 0x20010) != 0) {
      uVar2 = 0;
    }
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar2;
}

