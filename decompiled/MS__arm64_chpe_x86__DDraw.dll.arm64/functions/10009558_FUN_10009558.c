/*
 * FUN_10009558 at 10009558
 * undefined FUN_10009558(void)
 * Address ranges: 10009558-100095e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10009558(int param_1)

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

