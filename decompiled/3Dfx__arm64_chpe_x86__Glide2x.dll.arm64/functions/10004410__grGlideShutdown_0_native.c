/*
 * _grGlideShutdown@0_native at 10004410
 * undefined _grGlideShutdown@0_native(void)
 * Address ranges: 10004410-10004413
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_10008018
 */

void _grGlideShutdown_0_native(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  
  iVar3 = FUN_1001ba50();
  *(undefined1 *)(iVar3 + 0x3d) = 1;
  if (*(char *)(iVar3 + 0x3c) != '\0') {
    FUN_1001cc78(iVar3);
  }
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar1 = (int *)(iVar3 + 0xc);
  if (*piVar1 != 0) {
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar4);
    if (*(int *)(*piVar1 + 0x29c) != 0) {
      FUN_10079ff0(*(int *)(*piVar1 + 0x29c),1);
    }
    uVar4 = (*pcVar2)();
    (*extraout_w11_00)(uVar4);
    *piVar1 = 0;
  }
  piVar1 = (int *)(iVar3 + 0x18);
  if (*piVar1 != 0) {
    uVar4 = (*pcVar2)();
    (*extraout_w11_01)(uVar4);
    if (*piVar1 != 0) {
      uVar4 = (*pcVar2)();
      (*extraout_w11_02)(uVar4,1);
    }
    *piVar1 = 0;
  }
  FUN_10079ff0(*(undefined4 *)(iVar3 + 0x5c),0xc4);
  *(undefined4 *)(iVar3 + 0x5c) = 0;
  FUN_100068a0(*(undefined4 *)(iVar3 + 0x1c));
  *(undefined4 *)(iVar3 + 0x1c) = 0;
  *(undefined1 *)(iVar3 + 0x3e) = 0;
  *(undefined1 *)(iVar3 + 0x3d) = 0;
  return;
}

