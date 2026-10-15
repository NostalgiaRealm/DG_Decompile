/*
 * FUN_1006fb98 at 1006fb98
 * undefined FUN_1006fb98(void)
 * Address ranges: 1006fb98-1006fc0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006fb98(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  int in_w3;
  code *extraout_w11;
  uint uVar4;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = 0;
  do {
    piVar1 = (int *)(in_w3 + uVar4 * 4);
    if (*piVar1 != 0) {
      uVar3 = (*pcVar2)();
      (*extraout_w11)(uVar3);
      *piVar1 = 0;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  return;
}

