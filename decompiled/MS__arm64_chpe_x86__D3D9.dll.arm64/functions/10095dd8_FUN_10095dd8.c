/*
 * FUN_10095dd8 at 10095dd8
 * undefined FUN_10095dd8(void)
 * Address ranges: 10095dd8-10095edf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10095dd8(undefined8 param_1,int param_2,undefined8 param_3,ulonglong param_4,uint param_5,
                 int param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int extraout_w13;
  int extraout_w13_00;
  int extraout_w14;
  int local_80 [2];
  undefined4 local_78;
  undefined1 *local_74;
  undefined4 *local_70;
  undefined4 uStack_6c;
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
    uVar3 = FUN_1009f358(param_1,param_2,*(undefined4 *)(param_2 + param_6 * 4 + 0x1ac),uVar1,
                         auStack_30);
    local_80[0] = extraout_w13 + 0x18;
    if (extraout_w14 == 0) {
      local_4c = 0xe4;
      local_70 = &local_50;
      uStack_6c = 0;
      local_74 = auStack_30;
      local_78 = 0x36;
      uStack_38 = 0xffffffffffffffff;
      local_40 = 0xffffffffffffffff;
      FUN_10122c20(local_80,0x18);
    }
    else {
      puVar2 = (undefined8 *)FUN_10095628(uVar3,param_6);
      uStack_38 = puVar2[1];
      local_40 = *puVar2;
      local_50 = *(undefined4 *)(extraout_w13_00 + 0xac);
      local_4c = 0xe4;
      local_70 = &local_50;
      uStack_6c = 0;
      local_74 = auStack_30;
      local_78 = 0x36;
      FUN_10122c20(local_80,0x18);
    }
  }
  return;
}

