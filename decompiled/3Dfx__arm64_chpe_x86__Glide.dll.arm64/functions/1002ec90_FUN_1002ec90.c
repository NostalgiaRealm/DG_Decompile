/*
 * FUN_1002ec90 at 1002ec90
 * undefined FUN_1002ec90(void)
 * Address ranges: 1002ec90-1002ed97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002ec90(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  code *extraout_w11;
  undefined1 auVar3 [16];
  
  iVar1 = FUN_1002c2c0(param_1,*(undefined4 *)(param_1 + 0x2964));
  if (iVar1 != -1) {
    auVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar1 = (*extraout_w11)(auVar3._0_8_ & 0xffffffff,auVar3._8_8_ & 0xffffffff);
    if ((*(uint *)(iVar1 + 0x28) == *(uint *)(iVar1 + 0x20)) &&
       (*(uint *)(iVar1 + 0x2c) == *(uint *)(iVar1 + 0x24))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)(param_1 + 0x2bca) = uVar2;
    *(float *)(param_1 + 0x2bb8) = (float)*(uint *)(iVar1 + 0x28) / (float)*(uint *)(iVar1 + 0x20);
    *(float *)(param_1 + 0x2bbc) = (float)*(uint *)(iVar1 + 0x2c) / (float)*(uint *)(iVar1 + 0x24);
  }
  return;
}

