/*
 * FUN_100b29a0 at 100b29a0
 * undefined FUN_100b29a0(void)
 * Address ranges: 100b29a0-100b2b0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100b29a0(int param_1)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined4 uVar6;
  
  if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar1 = true;
    iVar4 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar4 == 0) {
      FUN_10006560(0);
    }
  }
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar6 = 0x8876086c;
  if (*(char *)(param_1 + -0x4edf) == '\0') {
    uVar6 = 0x88760868;
    if (*(int *)(param_1 + -0x58c8) != 0) {
      uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      cVar3 = (*extraout_w11)(uVar5);
      if (cVar3 == '\0') goto LAB_100b2ad0;
    }
    if (*(int *)(param_1 + -0x58b8) != 0) {
      uVar5 = (*pcVar2)();
      cVar3 = (*extraout_w11_00)(uVar5);
      if (cVar3 == '\0') goto LAB_100b2ad0;
    }
    *(char *)(param_1 + -0x4edf) = '\x01';
    uVar6 = 0;
  }
LAB_100b2ad0:
  if (bVar1) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return uVar6;
}

