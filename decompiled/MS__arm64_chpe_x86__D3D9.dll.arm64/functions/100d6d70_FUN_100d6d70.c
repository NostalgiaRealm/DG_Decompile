/*
 * FUN_100d6d70 at 100d6d70
 * undefined FUN_100d6d70(void)
 * Address ranges: 100d6d70-100d6e83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d6d70(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  code *extraout_w11;
  undefined1 auStack_40 [16];
  
  if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar1 = true;
    iVar2 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar2 == 0) {
      FUN_100071d0(0);
    }
  }
  uVar3 = 0x8876086c;
  if (*(char *)(param_1 + -0x59ef) != '\0') {
    FUN_10157b40(auStack_40);
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar3);
    *(char *)(param_1 + -0x59ef) = '\0';
    uVar3 = 0;
    FUN_10157a90(auStack_40);
  }
  if (bVar1) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return uVar3;
}

