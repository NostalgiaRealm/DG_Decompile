/*
 * FUN_1006c6a8 at 1006c6a8
 * undefined FUN_1006c6a8(void)
 * Address ranges: 1006c6a8-1006c847
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006c6a8(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  uint uVar4;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(char *)(param_1 + 0x2d4) != '\0') {
    if (*(int *)(param_1 + 0x2c0) != 0) {
      uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar3);
      *(int *)(param_1 + 0x2c0) = 0;
    }
    uVar4 = 0;
    do {
      if (*(int *)(param_1 + 0x18 + uVar4 * 0x28) != 0) {
        uVar3 = (*pcVar2)();
        (*extraout_w11_00)(uVar3);
        iVar1 = param_1 + uVar4 * 0x28;
        *(undefined8 *)(iVar1 + 0x18) = 0;
        *(undefined8 *)(iVar1 + 0x20) = 0;
        *(undefined1 *)(iVar1 + 0x28) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x10);
    if (*(int *)(param_1 + 0x4ec) != 0) {
      uVar3 = (*pcVar2)();
      (*extraout_w11_01)(uVar3);
      *(int *)(param_1 + 0x4ec) = 0;
    }
    FUN_100914d0(*(undefined4 *)(param_1 + 0x4f0));
    *(undefined8 *)(param_1 + 0x4f0) = 0;
    *(undefined4 *)(param_1 + 0x4f8) = 0;
    if (*(short *)(param_1 + 0xc) != 0) {
      uVar3 = (*(code *)PTR_FUN_100ba0cc)(0);
      (*(code *)PTR_FUN_100ba2e8)(*(short *)(param_1 + 0xc),uVar3);
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 != 0) {
        (*(code *)PTR_FUN_100ba0a8)(iVar1);
        *(int *)(param_1 + 0x10) = 0;
      }
    }
    FUN_1006bfd0(param_1);
    (*(code *)PTR_FUN_100ba094)(param_1 + 0x4a0);
    *(char *)(param_1 + 0x2d4) = '\0';
  }
  return;
}

