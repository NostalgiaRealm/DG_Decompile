/*
 * FUN_100b5bc0 at 100b5bc0
 * undefined FUN_100b5bc0(void)
 * Address ranges: 100b5bc0-100b5c6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b5bc0(int param_1,undefined1 param_2)

{
  code *extraout_w11;
  undefined1 auVar1 [16];
  
  if (*(uint *)(param_1 + 0x58b0) < *(uint *)(param_1 + 0x58b4)) {
    auVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(auVar1._0_8_ & 0xffffffff,auVar1._8_8_ & 0xffffffff,
                    *(undefined4 *)(param_1 + 0x58b4));
    *(uint *)(param_1 + 0x58b4) = 0;
    *(undefined4 *)(param_1 + 0x58b8) = 0;
    *(undefined4 *)(param_1 + 0x58b0) = 0;
  }
  FUN_1000a880(param_1,param_2);
  return;
}

