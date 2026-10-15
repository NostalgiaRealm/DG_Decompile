/*
 * FUN_100da0c0 at 100da0c0
 * undefined FUN_100da0c0(void)
 * Address ranges: 100da0c0-100da157
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100da0c0(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  code *extraout_w11;
  undefined1 auStack_50 [64];
  
  if (param_2 != 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_2,auStack_50);
    iVar1 = FUN_100da158(param_1,auStack_50);
    if (iVar1 != 0) {
      uVar2 = 0;
      do {
        if (*(int *)(iVar1 + 0x1c + uVar2 * 0x24) == param_2) {
          *(undefined1 *)(iVar1 + uVar2 * 0x24 + 0x20) = 0;
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < 0x14);
    }
  }
  return;
}

