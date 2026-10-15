/*
 * FUN_1006f170 at 1006f170
 * undefined FUN_1006f170(void)
 * Address ranges: 1006f170-1006f26b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1006f170(int param_1,int param_2,undefined8 *param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  code *extraout_w11;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  undefined4 uStack_20;
  int local_1c;
  uint uStack_18;
  
  puVar2 = (undefined4 *)(param_1 + *(int *)(param_2 + 8) * 0x1510 + 0x510);
  if (param_4 == 0) {
    local_1c = 0;
  }
  else {
    local_1c = *(int *)(&DAT_100a2280 + param_4 * 4);
    if ((local_1c - 3U < 2) && (*(char *)(param_1 + 0x2d7) != '\0')) {
      iVar3 = 1;
      goto LAB_1006f1d8;
    }
  }
  iVar3 = 0;
LAB_1006f1d8:
  local_40 = param_3[2];
  local_34 = 1;
  uStack_48 = param_3[1];
  local_50 = *param_3;
  uStack_20 = 1;
  local_38 = *(undefined4 *)(param_3 + 3);
  local_2c = 0x200000060;
  uStack_18 = iVar3 << 0xb | 2;
  *(char *)(param_2 + 0xd5c) = (char)iVar3;
  local_24 = param_5;
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1,*puVar2,&local_50,(int *)(param_2 + 4));
  return *(int *)(param_2 + 4) != 0;
}

