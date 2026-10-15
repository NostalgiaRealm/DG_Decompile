/*
 * FUN_10043970 at 10043970
 * undefined FUN_10043970(void)
 * Address ranges: 10043970-10043a3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10043970(int param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  uint uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1);
  auVar3 = FUN_10066d50(*(undefined4 *)(*(int *)(param_1 + 0x138) + 0x3180),
                        *(undefined4 *)(*(int *)(param_1 + 0x138) + 0x3184),
                        *(undefined4 *)(param_1 + 0x4c0));
  auVar3 = FUN_100669f0(auVar3._0_8_,auVar3._8_8_,0x17,param_1 + 0x448);
  FUN_10066c08(auVar3._0_8_,auVar3._8_8_,3,param_1 + 0x4a4,param_1 + 0x4b0);
  uVar2 = 0;
  do {
    if (*(int *)(param_1 + 0x1e8 + uVar2 * 0x104) != 0) {
      FUN_1004a6a8(param_1 + uVar2 * 0x104 + 0x13c);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  return;
}

