/*
 * FUN_1004f170 at 1004f170
 * undefined FUN_1004f170(void)
 * Address ranges: 1004f170-1004f257
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1004f170(undefined8 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  ulonglong extraout_x12;
  ulonglong extraout_x12_00;
  ulonglong extraout_x12_01;
  ulonglong extraout_x12_02;
  ulonglong extraout_x13;
  ulonglong extraout_x13_00;
  ulonglong extraout_x13_01;
  
  puVar1 = (undefined4 *)FUN_10081cb0(0xd8);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined8 *)(puVar1 + 0xc) = 0;
    *(undefined8 *)(puVar1 + 10) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0xe) = 0;
    *(undefined8 *)(puVar1 + 0x14) = 0;
    *(undefined8 *)(puVar1 + 0x12) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)(puVar1 + 0x16) = 0;
    *(undefined8 *)(puVar1 + 0x1c) = 0;
    *(undefined8 *)(puVar1 + 0x1a) = 0;
    puVar1[0x1f] = param_2;
    puVar1[0x34] = 0;
    *(undefined1 *)(puVar1 + 0x35) = 1;
    puVar1[0x1e] = 0;
    *(undefined8 *)(puVar1 + 0x22) = 0;
    *(undefined8 *)(puVar1 + 0x20) = 0;
    *(undefined8 *)(puVar1 + 0x26) = 0;
    *(undefined8 *)(puVar1 + 0x24) = 0;
    *(undefined8 *)(puVar1 + 0x2a) = 0;
    *(undefined8 *)(puVar1 + 0x28) = 0;
    *(undefined8 *)(puVar1 + 0x2e) = 0;
    *(undefined8 *)(puVar1 + 0x2c) = 0;
    *(undefined8 *)(puVar1 + 0x32) = 0;
    *(undefined8 *)(puVar1 + 0x30) = 0;
    FUN_100662f8(puVar1,&DAT_1009c5d0,0);
    FUN_100662f8(extraout_x12 & 0xffffffff,&DAT_1009c4f0,extraout_x13 & 0xffffffff);
    FUN_100662f8(extraout_x12_00 & 0xffffffff,&DAT_1009c500,extraout_x13_00 & 0xffffffff);
    FUN_100662f8(extraout_x12_01 & 0xffffffff,&DAT_1009c510,extraout_x13_01 & 0xffffffff);
    uVar2 = extraout_x12_02 & 0xffffffff;
  }
  return uVar2;
}

