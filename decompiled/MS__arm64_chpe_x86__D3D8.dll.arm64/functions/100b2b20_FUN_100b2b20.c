/*
 * FUN_100b2b20 at 100b2b20
 * undefined FUN_100b2b20(void)
 * Address ranges: 100b2b20-100b2c33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100b2b20(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  code *extraout_w11;
  undefined1 auStack_40 [16];
  
  if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar1 = true;
    iVar2 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar2 == 0) {
      FUN_10006560(0);
    }
  }
  uVar3 = 0x8876086c;
  if (*(char *)(param_1 + -0x4edf) != '\0') {
    FUN_10121020(auStack_40);
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar3);
    *(char *)(param_1 + -0x4edf) = '\0';
    uVar3 = 0;
    FUN_10120f70(auStack_40);
  }
  if (bVar1) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return uVar3;
}

