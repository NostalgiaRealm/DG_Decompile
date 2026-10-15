/*
 * FUN_10056a68 at 10056a68
 * undefined FUN_10056a68(void)
 * Address ranges: 10056a68-10056b77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10056a68(int param_1,ulonglong param_2)

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
      (*(code *)PTR_FUN_1009d100)(*(undefined4 *)(param_1 + 0x10),0xffffffff);
      uVar2 = (*pcVar1)();
      uVar3 = (*extraout_w11_01)(uVar2);
    } while (uVar3 < param_2);
  }
  return;
}

