/*
 * FUN_10066a40 at 10066a40
 * undefined FUN_10066a40(void)
 * Address ranges: 10066a40-10066b0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10066a40(undefined8 param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  
  iVar3 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar3 == 0) {
    FUN_1004bc70(0);
  }
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = 0x80070057;
  if (param_2 != 0) {
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar4);
    uVar4 = (*pcVar1)();
    cVar2 = (*extraout_w11_00)(uVar4,*(undefined4 *)(param_2 + 0x60));
    uVar4 = 0x80004005;
    if (cVar2 != '\0') {
      uVar4 = 0;
    }
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar4;
}

