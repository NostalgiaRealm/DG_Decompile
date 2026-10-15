/*
 * FUN_1011c788 at 1011c788
 * undefined FUN_1011c788(void)
 * Address ranges: 1011c788-1011c90b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_1011c788(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
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
  
  puVar1 = (undefined4 *)FUN_101321c0(0x48);
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
    *puVar1 = &PTR_FUN_10160350;
    puVar1[0xe] = &PTR_D3DPERF_GetStatus_native_10160338;
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
    FUN_10112948(puVar1[2],puVar1[3],local_80,param_5,local_68,uVar2,0,param_8,puVar1 + 0x10);
    if (puVar1[0x10] == 0) {
      FUN_1011c6d0(puVar1);
      FUN_10132260(puVar1,0x48);
      puVar1 = (undefined4 *)0x0;
    }
  }
  return puVar1;
}

