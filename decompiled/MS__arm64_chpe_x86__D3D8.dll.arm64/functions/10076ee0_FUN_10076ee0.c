/*
 * FUN_10076ee0 at 10076ee0
 * undefined FUN_10076ee0(void)
 * Address ranges: 10076ee0-10077097
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10076ee0(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined *puVar8;
  int extraout_w12;
  int local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  uint uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  
  param_5 = param_5 & 0xff;
  uVar5 = FUN_10079568(param_1,param_3,param_4);
  iVar2 = *(int *)(extraout_w12 + 0x1a0);
  if (iVar2 != 0) {
    uVar1 = 0xf;
    if (param_4 != 0 && param_4 != 3) {
      uVar1 = param_5;
    }
    uVar5 = uVar5 & 0xff;
    uVar3 = *(undefined1 *)(uVar1 + 0x1012c920);
    puVar8 = &DAT_1012c930;
    uVar6 = FUN_100ee580(extraout_w12 + 0x18,(&DAT_1012c930)[uVar1 * 2],1);
    uVar7 = uVar6 & 0xffffffff;
    uVar4 = puVar8[uVar1 * 2 + 1];
    uStack_6c = param_2;
    if (param_4 == 0) {
      if (*(char *)(iVar2 + 0x49e) == '\0') {
        uVar5 = FUN_10076d90(uVar6,param_2,iVar2,uVar7,uVar4,uVar5,uVar3);
      }
      else {
        uVar5 = FUN_100766f0();
      }
      local_50 = 0;
      local_58 = 0xe4;
      local_5c = *(undefined4 *)(iVar2 + 0x3f8);
      local_70 = iVar2 + 0x18;
      local_54 = 0x3f800000;
      local_60 = 8;
      local_68 = 0x36;
      uStack_64 = uVar5;
      FUN_100ef510(&local_70,0x24);
    }
    else if (param_4 == 3) {
      if (*(char *)(iVar2 + 0x49f) == '\0') {
        uVar5 = FUN_10076d90(uVar6,param_2,iVar2,uVar7,uVar4,uVar5,uVar3);
      }
      else {
        uVar5 = FUN_10076b68();
      }
      local_50 = 0;
      local_58 = 0xe4;
      local_5c = *(undefined4 *)(iVar2 + 0x3f8);
      local_70 = iVar2 + 0x18;
      local_54 = 0x3f800000;
      local_60 = 8;
      local_68 = 0x36;
      uStack_64 = uVar5;
      FUN_100ef510(&local_70,0x24);
    }
    else {
      uVar5 = FUN_10076d90(uVar6,param_2,iVar2,uVar7,uVar4,uVar5,uVar3);
    }
  }
  return uVar5;
}

