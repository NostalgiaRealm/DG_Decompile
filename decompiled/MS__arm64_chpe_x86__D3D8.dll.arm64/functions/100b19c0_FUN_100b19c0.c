/*
 * FUN_100b19c0 at 100b19c0
 * undefined FUN_100b19c0(void)
 * Address ranges: 100b19c0-100b1a47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b19c0(float param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  if ((*(uint *)(*(int *)(param_2 + 0x58f4) + 0x1c) >> 0x18 & 1) != 0) {
    uVar1 = *(uint *)(*(int *)(param_2 + 0xc) + 0x94f);
    if (uVar1 < 9) {
      if (uVar1 != 0) {
        param_1 = (float)uVar1;
      }
    }
    else {
      param_1 = 8.0;
    }
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                      (param_1,*(undefined4 *)(param_2 + 0x14),uVar1 != 0);
    (*extraout_w11)(uVar2);
  }
  return;
}

