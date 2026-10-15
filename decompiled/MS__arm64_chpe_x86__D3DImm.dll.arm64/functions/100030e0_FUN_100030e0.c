/*
 * FUN_100030e0 at 100030e0
 * undefined FUN_100030e0(void)
 * Address ranges: 100030e0-1000316f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100030e0(int param_1,int param_2,ulonglong param_3)

{
  uint uVar1;
  code *extraout_w11;
  undefined1 auVar2 [16];
  
  if (*(uint *)(param_1 + 0x17c) != 0) {
    uVar1 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x178) + uVar1 * 4) == param_2) {
        if (uVar1 == 0xffffffff || 7 < (int)uVar1) {
          return;
        }
        auVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(auVar2._0_8_ & 0xffffffff,auVar2._8_8_ & 0xffffffff,param_3 & 0xffffffff);
        return;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x17c));
  }
  return;
}

