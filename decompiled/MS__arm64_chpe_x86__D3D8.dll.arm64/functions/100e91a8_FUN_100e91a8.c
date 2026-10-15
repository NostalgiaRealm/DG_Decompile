/*
 * FUN_100e91a8 at 100e91a8
 * undefined FUN_100e91a8(void)
 * Address ranges: 100e91a8-100e92b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e91a8(int param_1,ulonglong param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar3 = (*extraout_w11)(uVar2);
  if (uVar3 < param_2) {
    do {
      uVar2 = (*pcVar1)();
      (*extraout_w11_00)(uVar2,param_2,*(undefined4 *)(param_1 + 0x10));
      (*(code *)PTR_FUN_10134138)(*(undefined4 *)(param_1 + 0x10),0xffffffff);
      uVar2 = (*pcVar1)();
      uVar3 = (*extraout_w11_01)(uVar2);
    } while (uVar3 < param_2);
  }
  return;
}

