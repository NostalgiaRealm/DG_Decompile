/*
 * FUN_18005cd50 at 18005cd50
 * undefined FUN_18005cd50(void)
 * Address ranges: 18005cd50-18005cdeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18005cd50(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_20 = 0;
  local_40 = 0x43425844;
  uStack_38 = 0;
  local_18 = 0;
  local_30 = 0x100000000;
  uStack_28 = 0x300000000;
  uVar1 = FUN_1800f5a90(param_2,&local_40,0x2c);
  *(int *)(*param_2 + 0x20) = (int)param_2[1] - (int)*param_2;
  uVar2 = FUN_18005c7f8(uVar1,param_2,param_3);
  if ((uVar2 & 1) != 0) {
    *(int *)(*param_2 + 0x24) = (int)param_2[1] - (int)*param_2;
    uVar2 = FUN_18005cba0(uVar2,param_2,param_3);
    if ((uVar2 & 1) != 0) {
      *(int *)(*param_2 + 0x28) = (int)param_2[1] - (int)*param_2;
      return 1;
    }
  }
  return 0;
}

