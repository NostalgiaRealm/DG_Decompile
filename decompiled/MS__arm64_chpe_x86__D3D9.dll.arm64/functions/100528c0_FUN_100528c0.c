/*
 * FUN_100528c0 at 100528c0
 * undefined FUN_100528c0(void)
 * Address ranges: 100528c0-100529b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100528c0(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  code *extraout_w11;
  int iVar5;
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar1 = (int *)(param_1 + 0x28);
  iVar5 = *piVar1 + -1;
  if (iVar5 != 0) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x24) + iVar5 * 8);
      if (iVar2 != 0) {
        FUN_1011e7a0(*(undefined4 *)(*(int *)(param_1 + 8) + 0x172c0),iVar2,0,0);
      }
      if (*(int *)(*(int *)(param_1 + 0x24) + iVar5 * 8) != 0) {
        uVar4 = (*pcVar3)();
        (*extraout_w11)(uVar4,1);
      }
      if (*piVar1 != 0) {
        *piVar1 = *piVar1 + -1;
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  return;
}

