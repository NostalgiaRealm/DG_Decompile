/*
 * FUN_100d6bf0 at 100d6bf0
 * undefined FUN_100d6bf0(void)
 * Address ranges: 100d6bf0-100d6d5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d6bf0(int param_1)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined4 uVar6;
  
  if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar1 = true;
    iVar4 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar4 == 0) {
      FUN_100071d0(0);
    }
  }
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar6 = 0x8876086c;
  if (*(char *)(param_1 + -0x59ef) == '\0') {
    uVar6 = 0x88760868;
    if (*(int *)(param_1 + -0x669c) != 0) {
      uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      cVar3 = (*extraout_w11)(uVar5);
      if (cVar3 == '\0') goto LAB_100d6d20;
    }
    if (*(int *)(param_1 + -0x668c) != 0) {
      uVar5 = (*pcVar2)();
      cVar3 = (*extraout_w11_00)(uVar5);
      if (cVar3 == '\0') goto LAB_100d6d20;
    }
    *(char *)(param_1 + -0x59ef) = '\x01';
    uVar6 = 0;
  }
LAB_100d6d20:
  if (bVar1) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return uVar6;
}

