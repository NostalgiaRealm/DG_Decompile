/*
 * FUN_10002058 at 10002058
 * undefined FUN_10002058(void)
 * Address ranges: 10002058-10002157
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_10002058(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,undefined4 param_6,undefined2 param_7,int param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            undefined4 param_18,undefined4 param_19)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  iVar1 = 0;
  if (param_4 != 0) {
    iVar1 = param_4 + 0x58e0;
  }
  param_1[5] = iVar1;
  param_1[6] = param_8;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 0xc) = param_7;
  param_1[0xe] = param_2;
  param_1[0xf] = param_3;
  param_1[0x10] = param_17;
  *(undefined8 *)(param_1 + 0x11) = 0;
  param_1[0x13] = param_5;
  param_1[0x14] = param_6;
  param_1[0x15] = param_9;
  param_1[0x16] = param_11;
  param_1[0x17] = param_15;
  param_1[0x18] = param_13;
  uVar2 = 6;
  if (param_8 != 5) {
    uVar2 = 1;
  }
  param_1[0x19] = uVar2;
  param_1[0x1a] = param_19;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  *param_1 = &PTR_FUN_101292c8;
  param_1[0x1c] = &PTR_FUN_101292c0;
  return param_1;
}

