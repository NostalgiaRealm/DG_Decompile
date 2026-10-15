/*
 * FUN_10095bb0 at 10095bb0
 * undefined FUN_10095bb0(void)
 * Address ranges: 10095bb0-10095c67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10095bb0(undefined8 param_1,int param_2,undefined8 param_3,int param_4,uint param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int extraout_w13;
  ulonglong extraout_x14;
  int local_80 [2];
  undefined4 local_78;
  undefined1 *local_74;
  undefined4 *local_70;
  undefined4 uStack_6c;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [48];
  
  if ((param_5 & 0xf) != 0) {
    uVar2 = FUN_1009f358(param_1,param_2,*(undefined4 *)(param_2 + param_4 * 4 + 0x1ac),
                         param_5 & 0xf,auStack_30);
    puVar1 = (undefined4 *)FUN_10095628(uVar2,extraout_x14 & 0xffffffff);
    local_40 = *puVar1;
    uStack_34 = puVar1[3];
    local_38 = puVar1[2];
    uStack_3c = puVar1[1];
    local_50 = *(undefined4 *)(extraout_w13 + 0xac);
    local_80[0] = extraout_w13 + 0x18;
    local_4c = 0xe4;
    local_70 = &local_50;
    uStack_6c = 0;
    local_74 = auStack_30;
    local_78 = 0x36;
    FUN_10122c20(local_80,0x18);
  }
  return;
}

