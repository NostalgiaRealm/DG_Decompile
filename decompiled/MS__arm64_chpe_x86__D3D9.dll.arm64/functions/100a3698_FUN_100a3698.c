/*
 * FUN_100a3698 at 100a3698
 * undefined FUN_100a3698(void)
 * Address ranges: 100a3698-100a3727
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a3698(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  uint uVar4;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  puVar1 = (uint *)(param_1 + 8);
  uVar4 = 0;
  if (*puVar1 != 0) {
    do {
      uVar3 = (*pcVar2)();
      (*extraout_w11)(uVar3);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *puVar1);
  }
  *puVar1 = 0;
  return;
}

