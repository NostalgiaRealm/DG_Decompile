/*
 * FUN_18021b1c8 at 18021b1c8
 * undefined FUN_18021b1c8(void)
 * Address ranges: 18021b1c8-18021b31f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18021b1c8(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  int local_80 [6];
  undefined4 local_68 [2];
  undefined8 local_60;
  ulonglong uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  
  lVar4 = *(longlong *)(param_1 + 8);
  lVar1 = 0;
  if (lVar4 != 0) {
    lVar1 = lVar4 + 0x6d0;
  }
  uVar5 = *(undefined8 *)(lVar4 + 0x1b500);
  puVar3 = (undefined8 *)FUN_1802229a8(0x58);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *puVar3 = &PTR_FUN_1802390b0;
    puVar3[1] = lVar1;
    *(undefined4 *)(puVar3 + 6) = param_3;
    puVar3[8] = &PTR_D3DPERF_GetStatus_native_180239080;
    puVar3[9] = 0;
    *(undefined4 *)(puVar3 + 2) = param_2;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x34) = 0;
    *(undefined1 *)((longlong)puVar3 + 0x3c) = 0;
    puVar3[10] = uVar5;
  }
  if (puVar3 != (undefined8 *)0x0) {
    local_68[0] = 1;
    uStack_58 = (ulonglong)*(uint *)(puVar3 + 6);
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
      uVar5 = 0xac3;
    }
    else if (param_4 == 3) {
      uVar5 = 0x400;
    }
    else {
      uVar5 = 0;
    }
    local_80[0] = param_4;
    FUN_18020d338(puVar3[1],*(undefined4 *)(puVar3 + 2),local_80,param_5,local_68,uVar5,0,param_8,
                  puVar3 + 9);
    if (puVar3[9] == 0) {
      FUN_180210728();
      FUN_1802229d8(puVar3,0x58);
      puVar3 = (undefined8 *)0x0;
    }
  }
  puVar2 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3 + 8;
  }
  return puVar2;
}

