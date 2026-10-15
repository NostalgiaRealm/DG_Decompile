/*
 * FUN_10030360 at 10030360
 * undefined FUN_10030360(void)
 * Address ranges: 10030360-100304c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10030360(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  *(undefined8 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_100b2254;
  param_1[3] = &PTR_FUN_100b1b34;
  param_1[4] = 0;
  param_1[5] = param_2;
  *(undefined8 *)(param_1 + 6) = 0x1b00000000;
  *(undefined8 *)(param_1 + 8) = 0x1c0000001e;
  *(undefined8 *)(param_1 + 10) = 0x1b0000001c;
  *(undefined8 *)(param_1 + 0xc) = 0x1c0000001e;
  param_1[0xe] = 0x1c;
  *(undefined8 *)(param_1 + 0x26) = 0;
  param_1[0x28] = 0;
  *(undefined8 *)(param_1 + 0x33bc) = 0;
  *(undefined1 *)(param_1 + 0x33be) = 0;
  *(undefined8 *)(param_1 + 0x338e) = 0;
  *(undefined8 *)(param_1 + 0x338c) = 0;
  *(undefined8 *)(param_1 + 0x3392) = 0;
  *(undefined8 *)(param_1 + 0x3390) = 0;
  *(undefined8 *)(param_1 + 0x3396) = 0;
  *(undefined8 *)(param_1 + 0x3394) = 0;
  *(undefined8 *)(param_1 + 0x339a) = 0;
  *(undefined8 *)(param_1 + 0x3398) = 0;
  *(undefined8 *)(param_1 + 0x339e) = 0;
  *(undefined8 *)(param_1 + 0x339c) = 0;
  *(undefined8 *)(param_1 + 0x33a2) = 0;
  *(undefined8 *)(param_1 + 0x33a0) = 0;
  *(undefined8 *)(param_1 + 0x33a6) = 0;
  *(undefined8 *)(param_1 + 0x33a4) = 0;
  *(undefined8 *)(param_1 + 0x33aa) = 0;
  *(undefined8 *)(param_1 + 0x33a8) = 0;
  *(undefined8 *)(param_1 + 0x33ae) = 0;
  *(undefined8 *)(param_1 + 0x33ac) = 0;
  *(undefined8 *)(param_1 + 0x33b2) = 0;
  *(undefined8 *)(param_1 + 0x33b0) = 0;
  *(undefined8 *)(param_1 + 0x33b6) = 0;
  *(undefined8 *)(param_1 + 0x33b4) = 0;
  *(undefined8 *)(param_1 + 0x33ba) = 0;
  *(undefined8 *)(param_1 + 0x33b8) = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0;
  *(undefined8 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 0x13) = 0;
  *(undefined8 *)(param_1 + 0x19) = 0;
  *(undefined8 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  (*(code *)PTR_FUN_100ba118)(param_1 + 0x1e);
  uVar2 = 0;
  do {
    uVar1 = uVar2 + 1;
    fVar3 = (float)uVar2 / 255.0;
    param_1[(uVar2 + 0x102e) * 3] = fVar3;
    param_1[uVar2 * 3 + 0x308b] = fVar3;
    param_1[uVar2 * 3 + 0x308c] = fVar3;
    uVar2 = uVar1;
  } while (uVar1 < 0x100);
  return param_1;
}

