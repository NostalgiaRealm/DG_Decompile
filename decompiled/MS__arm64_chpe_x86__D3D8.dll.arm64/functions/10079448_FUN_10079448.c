/*
 * FUN_10079448 at 10079448
 * undefined FUN_10079448(void)
 * Address ranges: 10079448-10079537
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10079448(undefined8 param_1,int param_2,undefined8 param_3,int param_4,uint param_5)

{
  int extraout_w1;
  undefined4 *puVar1;
  undefined4 extraout_w13;
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
    FUN_1007ff80(param_1,param_2,*(undefined4 *)(param_2 + param_4 * 4 + 0x1ac),param_5 & 0xf,
                 auStack_30);
    switch(extraout_w13) {
    case 2:
      puVar1 = &DAT_1012c990;
      break;
    case 3:
      puVar1 = &DAT_1012c980;
      break;
    case 4:
      puVar1 = &DAT_1012c970;
      break;
    default:
      puVar1 = &DAT_1012c960;
    }
    local_40 = *puVar1;
    local_38 = puVar1[2];
    local_50 = *(undefined4 *)(extraout_w1 + 0xac);
    local_4c = 0xe4;
    uStack_3c = puVar1[1];
    uStack_34 = puVar1[3];
    local_70 = &local_50;
    uStack_6c = 0;
    local_74 = auStack_30;
    local_80[0] = extraout_w1 + 0x18;
    local_78 = 0x36;
    FUN_100ef6a8(local_80,0x18);
  }
  return;
}

