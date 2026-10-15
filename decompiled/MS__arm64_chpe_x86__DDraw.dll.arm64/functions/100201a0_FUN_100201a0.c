/*
 * FUN_100201a0 at 100201a0
 * undefined FUN_100201a0(void)
 * Address ranges: 100201a0-100202a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100201a0(int *param_1,undefined4 param_2,undefined8 param_3,int param_4,int param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulonglong uVar1;
  uint uVar2;
  int *piVar3;
  code *extraout_w11;
  uint local_50 [2];
  int local_48;
  undefined8 local_44;
  undefined8 local_3c;
  
  uVar2 = FUN_100837f8(param_1[2] + 0x1580,param_2,0,param_4);
  if (uVar2 != 0) goto LAB_10020264;
  piVar3 = (int *)0x0;
  if (param_5 != 0) {
    local_48 = param_5;
    if ((*(uint *)(param_4 + 0x30) & 1) == 0) {
      if ((*(uint *)(param_4 + 0x30) >> 1 & 1) == 0) goto LAB_10020228;
      uVar1 = (ulonglong)local_44 >> 0x20;
      local_44 = CONCAT44((uint)uVar1 & 0xffffff00,0x3f800000);
    }
    else {
      local_3c = 0;
      local_44 = 0;
    }
    piVar3 = &local_48;
  }
LAB_10020228:
  local_50[0] = 0;
  FUN_100729c8(*param_1 + 0x520,param_1[1],param_2,0,param_4,0,piVar3,param_8,local_50);
  uVar2 = local_50[0];
  if (local_50[0] == 0) {
    return 0;
  }
LAB_10020264:
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2);
  return uVar2;
}

