/*
 * _grGlideShutdown@0_native at 10005500
 * undefined _grGlideShutdown@0_native(void)
 * Address ranges: 10005500-10005503
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_100450d8
 */

void _grGlideShutdown_0_native(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  
  iVar3 = FUN_100093b8();
  uVar5 = FUN_10008178();
  if ((uVar5 & 1) == 0) {
    *(undefined1 *)(iVar3 + 0x3d) = 1;
    if (*(char *)(iVar3 + 0x3c) != '\0') {
      FUN_1000ab08(iVar3,0);
    }
    pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    piVar1 = (int *)(iVar3 + 0xc);
    if (*piVar1 != 0) {
      uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar4);
      if (*(int *)(*piVar1 + 0x318) != 0) {
        FUN_1007dd10(*(int *)(*piVar1 + 0x318),1);
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
    FUN_10006a00(*(undefined4 *)(iVar3 + 0x1c));
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    *(undefined1 *)(iVar3 + 0x3e) = 0;
    *(undefined1 *)(iVar3 + 0x3d) = 0;
  }
  return;
}

