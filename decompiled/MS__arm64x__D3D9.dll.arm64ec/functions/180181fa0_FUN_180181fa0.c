/*
 * FUN_180181fa0 at 180181fa0
 * undefined FUN_180181fa0(void)
 * Address ranges: 180181fa0-180182073
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180181fa0(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  uint param_5,ulonglong param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 extraout_x10;
  undefined8 extraout_x10_00;
  longlong extraout_x11;
  longlong extraout_x11_00;
  int extraout_w12;
  undefined4 *local_70;
  undefined8 uStack_68;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [48];
  
  uVar1 = 0xf;
  if ((param_4 & 0x3f00) != 0) {
    uVar1 = param_5 & 0xf;
  }
  if (uVar1 != 0) {
    uVar2 = FUN_18018b228(param_1,param_2,
                          *(undefined4 *)(param_2 + (param_6 & 0xffffffff) * 4 + 0x1c0),uVar1,
                          auStack_30);
    if (extraout_w12 == 0) {
      local_4c = 0xe4;
      local_70 = &local_50;
      uStack_68 = 0;
      uStack_38 = 0xffffffffffffffff;
      local_40 = 0xffffffffffffffff;
      FUN_180214e10(extraout_x11 + 0x20,extraout_x10,0x36,auStack_30,&local_70,0x10);
    }
    else {
      puVar3 = (undefined8 *)FUN_180181450(uVar2,param_6 & 0xffffffff);
      local_50 = *(undefined4 *)(extraout_x11_00 + 0xbc);
      uStack_38 = puVar3[1];
      local_40 = *puVar3;
      local_4c = 0xe4;
      local_70 = &local_50;
      uStack_68 = 0;
      FUN_180214e10(extraout_x11_00 + 0x20,extraout_x10_00,0x36,auStack_30,&local_70,0x10);
    }
  }
  return;
}

