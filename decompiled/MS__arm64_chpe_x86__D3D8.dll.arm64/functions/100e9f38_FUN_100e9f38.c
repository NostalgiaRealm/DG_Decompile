/*
 * FUN_100e9f38 at 100e9f38
 * undefined FUN_100e9f38(void)
 * Address ranges: 100e9f38-100ea0bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_100e9f38(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int local_80 [6];
  undefined4 local_68 [2];
  undefined8 local_60;
  ulonglong uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  
  puVar1 = (undefined4 *)FUN_100febf0(0x48);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[2] = param_1;
    puVar1[3] = param_2;
    puVar1[4] = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    puVar1[10] = param_3;
    *(undefined8 *)(puVar1 + 0xb) = 0;
    *(undefined1 *)(puVar1 + 0xd) = 0;
    *puVar1 = &PTR_FUN_1012ac50;
    puVar1[0xe] = &PTR_FUN_1012ac38;
    puVar1[0x10] = 0;
    puVar1[0x11] = param_6;
  }
  if (puVar1 != (undefined4 *)0x0) {
    local_68[0] = 1;
    uStack_58 = (ulonglong)(uint)puVar1[10];
    local_80[1] = 0;
    local_80[2] = 0;
    local_80[3] = 0;
    local_80[4] = 0;
    local_38 = 0;
    local_60 = 0x10000;
    local_40 = 0x100000000;
    local_50 = 0x1000100000001;
    uStack_48 = 0x100000000;
    if (param_4 == 2) {
      uVar2 = 0xac3;
    }
    else if (param_4 == 3) {
      uVar2 = 0x400;
    }
    else {
      uVar2 = 0;
    }
    local_80[0] = param_4;
    FUN_100e00f8(puVar1[2],puVar1[3],local_80,param_5,local_68,uVar2,0,param_8,puVar1 + 0x10);
    if (puVar1[0x10] == 0) {
      FUN_100e9e80(puVar1);
      FUN_100fec90(puVar1,0x48);
      puVar1 = (undefined4 *)0x0;
    }
  }
  return puVar1;
}

