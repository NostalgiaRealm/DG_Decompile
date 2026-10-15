/*
 * FUN_100b1870 at 100b1870
 * undefined FUN_100b1870(void)
 * Address ranges: 100b1870-100b191f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b1870(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  uint uVar4;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = param_1 + 0x58d0;
  }
  uVar4 = 0;
  if (*(uint *)(param_1 + 0x58d8) != 0) {
    do {
      uVar3 = (*pcVar2)();
      (*extraout_w11)(uVar3,iVar1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x58d8));
  }
  FUN_10006cb0(param_1);
  return;
}

