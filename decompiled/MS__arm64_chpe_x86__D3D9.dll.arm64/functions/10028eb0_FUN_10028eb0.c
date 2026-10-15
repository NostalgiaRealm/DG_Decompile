/*
 * FUN_10028eb0 at 10028eb0
 * undefined FUN_10028eb0(void)
 * Address ranges: 10028eb0-10028f73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10028eb0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  code *extraout_w11;
  undefined1 auVar2 [16];
  
  if (*(char *)(param_3 + 0x3c4) == '\0') {
    *(undefined4 *)(param_3 + 0x2c) = param_4;
    *(undefined4 *)(param_3 + 0x30) = param_5;
    *(undefined4 *)(param_3 + 0x34) = param_6;
    *(undefined4 *)(param_3 + 0x38) = param_7;
    *(undefined4 *)(param_3 + 0x3c) = param_1;
    *(undefined4 *)(param_3 + 0x40) = param_2;
    auVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(auVar2._0_8_ & 0xffffffff,auVar2._8_8_ & 0xffffffff);
  }
  else {
    iVar1 = *(int *)(*(int *)(param_3 + 0x3b4) + *(int *)(param_3 + 0x3c0) * 4);
    *(undefined4 *)(iVar1 + 0x4a34) = param_4;
    *(undefined4 *)(iVar1 + 19000) = param_5;
    *(undefined4 *)(iVar1 + 0x4a44) = param_1;
    *(undefined4 *)(iVar1 + 0x4a48) = param_2;
    *(undefined4 *)(iVar1 + 0x4a3c) = param_6;
    *(undefined4 *)(iVar1 + 0x4a40) = param_7;
    *(undefined1 *)(iVar1 + 0xac14) = 1;
  }
  return;
}

