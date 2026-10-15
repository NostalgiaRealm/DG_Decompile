/*
 * FUN_100f0a80 at 100f0a80
 * undefined FUN_100f0a80(void)
 * Address ranges: 100f0a80-100f0b1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100f0a80(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  uint uVar3;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar3 = 0;
  if (*(uint *)(param_1 + 0x518) != 0) {
    do {
      uVar2 = (*pcVar1)();
      (*extraout_w11)(uVar2,*(undefined4 *)(param_2 + 8),param_2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x518));
  }
  return;
}

