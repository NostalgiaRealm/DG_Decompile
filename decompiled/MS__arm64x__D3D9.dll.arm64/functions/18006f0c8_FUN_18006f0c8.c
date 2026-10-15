/*
 * FUN_18006f0c8 at 18006f0c8
 * undefined FUN_18006f0c8(void)
 * Address ranges: 18006f0c8-18006f15f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006f0c8(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  uint param_5,ulonglong param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int extraout_w10;
  undefined4 extraout_w11;
  undefined8 extraout_x13;
  undefined8 extraout_x13_00;
  longlong extraout_x14;
  longlong extraout_x14_00;
  longlong lVar4;
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
    uVar2 = func_0x00018018b228(param_1,param_2,
                                *(undefined4 *)(param_2 + (param_6 & 0xffffffff) * 4 + 0x1c0),uVar1,
                                auStack_30);
    if (extraout_w10 == 0) {
      uStack_38 = 0xffffffffffffffff;
      local_40 = 0xffffffffffffffff;
      uVar2 = extraout_x13;
      lVar4 = extraout_x14;
      local_50 = extraout_w11;
    }
    else {
      puVar3 = (undefined8 *)FUN_18006e680(uVar2,param_6 & 0xffffffff);
      local_50 = *(undefined4 *)(extraout_x14_00 + 0xbc);
      uStack_38 = puVar3[1];
      local_40 = *puVar3;
      uVar2 = extraout_x13_00;
      lVar4 = extraout_x14_00;
    }
    local_4c = 0xe4;
    FUN_1800f58b8(lVar4 + 0x20,uVar2,0x36,auStack_30,&local_50,0);
  }
  return;
}

