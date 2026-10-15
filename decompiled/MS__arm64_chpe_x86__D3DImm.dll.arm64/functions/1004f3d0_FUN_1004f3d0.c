/*
 * FUN_1004f3d0 at 1004f3d0
 * undefined FUN_1004f3d0(void)
 * Address ranges: 1004f3d0-1004f4e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004f3d0(undefined8 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong extraout_x12;
  ulonglong extraout_x12_00;
  ulonglong extraout_x12_01;
  int extraout_w13;
  ulonglong extraout_x14;
  ulonglong extraout_x14_00;
  ulonglong extraout_x14_01;
  
  puVar1 = (undefined4 *)FUN_10081cb0(0xd4);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 *)(puVar1 + 5) = 0;
    *(undefined8 *)(puVar1 + 3) = 0;
    *(undefined8 *)(puVar1 + 9) = 0;
    *(undefined8 *)(puVar1 + 7) = 0;
    *(undefined8 *)(puVar1 + 0xd) = 0;
    *(undefined8 *)(puVar1 + 0xb) = 0;
    *(undefined8 *)(puVar1 + 0x11) = 0;
    *(undefined8 *)(puVar1 + 0xf) = 0;
    *(undefined8 *)(puVar1 + 0x15) = 0;
    *(undefined8 *)(puVar1 + 0x13) = 0;
    *(undefined8 *)(puVar1 + 0x19) = 0;
    *(undefined8 *)(puVar1 + 0x17) = 0;
    *(undefined8 *)(puVar1 + 0x1d) = 0;
    *(undefined8 *)(puVar1 + 0x1b) = 0;
    *puVar1 = &PTR_FUN_1009ca68;
    puVar1[0x1f] = 0;
    puVar1[0x20] = param_2;
    *(undefined8 *)(puVar1 + 0x21) = 0;
    *(undefined8 *)(puVar1 + 0x23) = 0;
    *(undefined8 *)(puVar1 + 0x25) = 0;
    *(undefined8 *)(puVar1 + 0x27) = 0;
    puVar1[0x34] = 0x1010000;
    FUN_100662f8(puVar1 + 1,&DAT_1009c5d0,0);
    FUN_100662f8(extraout_x12 & 0xffffffff,&DAT_1009c530,extraout_x14 & 0xffffffff);
    FUN_100662f8(extraout_x12_00 & 0xffffffff,&DAT_1009c540,extraout_x14_00 & 0xffffffff);
    FUN_100662f8(extraout_x12_01 & 0xffffffff,&DAT_1009c550,extraout_x14_01 & 0xffffffff);
    *(undefined8 *)(extraout_w13 + 0xac) = 0;
    *(undefined8 *)(extraout_w13 + 0xa4) = 0;
    *(undefined8 *)(extraout_w13 + 0xbc) = 0;
    *(undefined8 *)(extraout_w13 + 0xb4) = 0;
    *(undefined8 *)(extraout_w13 + 0xc4) = 0;
    *(undefined4 *)(extraout_w13 + 0xcc) = 0;
    *(undefined4 *)(extraout_w13 + 0xa4) = 0x2c;
    iVar2 = extraout_w13;
  }
  return iVar2;
}

