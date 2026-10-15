/*
 * FUN_10017d38 at 10017d38
 * undefined FUN_10017d38(void)
 * Address ranges: 10017d38-10017e43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10017d38(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  code *extraout_w11;
  undefined1 auVar3 [16];
  
  iVar1 = FUN_1001cae0(*(undefined4 *)(param_1 + 0x365c),*(undefined4 *)(param_1 + 0x2b1c));
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
    *(undefined1 *)(param_1 + 0x2db2) = uVar2;
    *(float *)(param_1 + 0x2da0) = (float)*(uint *)(iVar1 + 0x28) / (float)*(uint *)(iVar1 + 0x20);
    *(float *)(param_1 + 0x2da4) = (float)*(uint *)(iVar1 + 0x2c) / (float)*(uint *)(iVar1 + 0x24);
  }
  return;
}

