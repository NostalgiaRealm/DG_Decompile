/*
 * FUN_10029508 at 10029508
 * undefined FUN_10029508(void)
 * Address ranges: 10029508-1002965f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_10029508(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  
  FUN_10033c80(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  *param_1 = &PTR_FUN_100b2150;
  iVar1 = *(int *)(param_2 + 0xcf00);
  param_1[0x10] = iVar1;
  iVar2 = *(int *)(param_2 + 0xcf00);
  param_1[0x13] = param_3;
  param_1[0x12] = iVar2;
  param_1[0x14] = iVar2 + param_3 * 0x16c0 + 0x6c0;
  *(undefined8 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 0x17) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x19) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1b) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x20) = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)(param_1 + 0x1d) = 0;
  iVar2 = *(int *)(param_2 + 0xcf00);
  param_1[0x22] = param_3;
  param_1[0x21] = iVar2;
  param_1[0x23] = iVar2 + param_3 * 0x16c0 + 0x6c0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2a) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  param_1[0x11] = iVar1 + param_3 * 0x16c0 + 0x6c0;
  return param_1;
}

