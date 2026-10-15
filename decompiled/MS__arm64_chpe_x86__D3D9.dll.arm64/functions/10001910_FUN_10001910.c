/*
 * FUN_10001910 at 10001910
 * undefined FUN_10001910(void)
 * Address ranges: 10001910-100019a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10001910(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  uint uVar4;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = param_1 + 0x60;
  }
  uVar4 = 0;
  if (*(uint *)(param_1 + 0x68) != 0) {
    do {
      uVar3 = (*pcVar2)();
      (*extraout_w11)(uVar3,iVar1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x68));
  }
  return;
}

