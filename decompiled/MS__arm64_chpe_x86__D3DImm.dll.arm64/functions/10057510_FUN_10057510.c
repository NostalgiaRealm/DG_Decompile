/*
 * FUN_10057510 at 10057510
 * undefined FUN_10057510(void)
 * Address ranges: 10057510-100575e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10057510(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  uVar2 = 0x80070057;
  if ((param_3 != (undefined4 *)0x0) && (*param_3 = 0, param_2 < 8)) {
    uVar2 = 0;
    if (*(int *)(param_1 + param_2 * 4 + 0x14d4) != 0) {
      uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar2 = (*extraout_w11)(uVar2,param_4,param_3);
    }
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar2;
}

