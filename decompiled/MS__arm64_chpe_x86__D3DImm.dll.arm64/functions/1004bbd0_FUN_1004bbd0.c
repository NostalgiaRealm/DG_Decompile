/*
 * FUN_1004bbd0 at 1004bbd0
 * undefined FUN_1004bbd0(void)
 * Address ranges: 1004bbd0-1004bc6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004bbd0(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  uint uVar4;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = param_1 + 0x17d8;
  }
  uVar4 = 0;
  if (*(uint *)(param_1 + 0x17e0) != 0) {
    do {
      uVar3 = (*pcVar2)();
      (*extraout_w11)(uVar3,iVar1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x17e0));
  }
  return;
}

