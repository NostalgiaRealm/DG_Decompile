/*
 * FUN_10033050 at 10033050
 * undefined FUN_10033050(void)
 * Address ranges: 10033050-1003311b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10033050(int param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  uint uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1);
  auVar3 = FUN_1006a570(*(undefined4 *)(*(int *)(param_1 + 0x138) + 0x3300),
                        *(undefined4 *)(*(int *)(param_1 + 0x138) + 0x3304),
                        *(undefined4 *)(param_1 + 0x8d0));
  auVar3 = FUN_1006a210(auVar3._0_8_,auVar3._8_8_,0x17,param_1 + 0x858);
  FUN_1006a428(auVar3._0_8_,auVar3._8_8_,3,param_1 + 0x8b4,param_1 + 0x8c0);
  uVar2 = 0;
  do {
    if (*(int *)(param_1 + 0x1e8 + uVar2 * 0x104) != 0) {
      FUN_100395a0(param_1 + uVar2 * 0x104 + 0x13c);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 7);
  return;
}

