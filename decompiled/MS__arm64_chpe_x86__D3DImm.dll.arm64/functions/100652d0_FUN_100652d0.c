/*
 * FUN_100652d0 at 100652d0
 * undefined FUN_100652d0(void)
 * Address ranges: 100652d0-10065383
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100652d0(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = param_1 + 1;
  *puVar1 = 0;
  param_1[2] = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  puVar2 = param_1 + 0x11;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR_FUN_1009ca40;
  *puVar2 = 0;
  param_1[0x12] = param_3;
  param_1[0x27] = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 0x13) = 0;
  *(undefined8 *)(param_1 + 0x19) = 0;
  *(undefined8 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)(param_1 + 0x21) = 0;
  *(undefined8 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)(param_1 + 0x25) = 0;
  *(undefined8 *)(param_1 + 0x23) = 0;
  FUN_10065990(puVar1,&DAT_1009c5d0,puVar2);
  FUN_10065990(puVar1,&DAT_1009c4e0,puVar2);
  return param_1;
}

