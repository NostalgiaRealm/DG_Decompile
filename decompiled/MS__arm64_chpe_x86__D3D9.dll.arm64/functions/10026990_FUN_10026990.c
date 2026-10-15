/*
 * FUN_10026990 at 10026990
 * undefined FUN_10026990(void)
 * Address ranges: 10026990-10026a1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10026990(int param_1,int param_2,ulonglong param_3)

{
  uint uVar1;
  code *extraout_w11;
  undefined1 auVar2 [16];
  
  if (*(uint *)(param_1 + 0x31c) != 0) {
    uVar1 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x318) + uVar1 * 4) == param_2) {
        if (uVar1 == 0xffffffff || 7 < (int)uVar1) {
          return;
        }
        auVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(auVar2._0_8_ & 0xffffffff,auVar2._8_8_ & 0xffffffff,param_3 & 0xffffffff);
        return;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x31c));
  }
  return;
}

