/*
 * FUN_10061b20 at 10061b20
 * undefined FUN_10061b20(void)
 * Address ranges: 10061b20-10061c5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10061b20(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined *puVar3;
  
  puVar1 = param_1 + 1;
  *puVar1 = 0;
  param_1[2] = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0;
  *(undefined8 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 0x13) = 0;
  *(undefined8 *)(param_1 + 0x19) = 0;
  *(undefined8 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)(param_1 + 0x21) = 0;
  param_1[0x23] = 0;
  *param_1 = &PTR_FUN_1009c998;
  *(undefined8 *)(param_1 + 0x1f) = 0;
  param_1[0x24] = param_2;
  param_1[0x25] = param_3;
  *(undefined8 *)(param_1 + 0x27) = 0;
  *(undefined8 *)(param_1 + 0x29) = 0;
  *(undefined8 *)(param_1 + 0x2b) = 0;
  *(undefined8 *)(param_1 + 0x2d) = 0;
  *(undefined8 *)(param_1 + 0x2f) = 0;
  *(undefined8 *)(param_1 + 0x31) = 0;
  *(undefined8 *)(param_1 + 0x33) = 0;
  *(undefined8 *)(param_1 + 0x35) = 0;
  *(undefined8 *)(param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0x7bf) = 0;
  FUN_10058fb0(puVar1,&DAT_1009c5d0,0);
  uVar2 = FUN_10062e80(param_1);
  if ((uVar2 & 1) == 0) {
    puVar3 = &DAT_1009c420;
  }
  else {
    FUN_10058fb0(puVar1,&DAT_1009c3f0,0);
    FUN_10058fb0(puVar1,&DAT_1009c400,0);
    puVar3 = &DAT_1009c410;
  }
  FUN_10058fb0(puVar1,puVar3,0);
  return param_1;
}

