/*
 * FUN_10113218 at 10113218
 * undefined FUN_10113218(void)
 * Address ranges: 10113218-101132b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10113218(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x628);
  *(int *)(param_1 + 0x628) = iVar1 + 1;
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((iVar1 == 0) && (*(int *)(param_1 + 0x8e0) != 0)) {
    uVar4 = 0;
    if (*(uint *)(param_1 + 0x958) != 0) {
      do {
        uVar3 = (*pcVar2)();
        (*extraout_w11)(uVar3);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 0x958));
    }
  }
  return;
}

