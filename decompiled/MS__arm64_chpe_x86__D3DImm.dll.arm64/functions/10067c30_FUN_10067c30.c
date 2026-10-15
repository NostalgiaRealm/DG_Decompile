/*
 * FUN_10067c30 at 10067c30
 * undefined FUN_10067c30(void)
 * Address ranges: 10067c30-10067cb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10067c30(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  uint uVar3;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar3 = 0;
  if (*(uint *)(param_1 + 0x90) != 0) {
    do {
      uVar2 = (*pcVar1)();
      (*extraout_w11)(uVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x90));
  }
  return;
}

