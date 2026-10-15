/*
 * FUN_10040b48 at 10040b48
 * undefined FUN_10040b48(void)
 * Address ranges: 10040b48-10040bd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_10040b48(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong extraout_x12;
  ulonglong extraout_x13;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0;
  param_1[0x11] = 0;
  *param_1 = &PTR_FUN_100b2640;
  uVar1 = ZEXT48(param_1 + 0x11);
  *(undefined8 *)(param_1 + 0x14) = param_3;
  *(undefined8 *)(param_1 + 0x12) = param_2;
  FUN_10036ed0(param_1 + 1,&DAT_100b1a30,uVar1);
  FUN_10036ed0(extraout_x12 & 0xffffffff,&DAT_100b1a40,uVar1 & 0xffffffff);
  return extraout_x13 & 0xffffffff;
}

