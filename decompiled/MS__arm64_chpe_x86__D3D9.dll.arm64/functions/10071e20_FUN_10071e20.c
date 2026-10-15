/*
 * FUN_10071e20 at 10071e20
 * undefined FUN_10071e20(void)
 * Address ranges: 10071e20-10072093
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10071e20(int param_1,int *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  code *pcVar7;
  int iVar8;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined1 local_4c;
  
  iVar5 = *(int *)(param_1 + 0xc) + 0x10;
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_50 = 0x100;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  local_4c = 1;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  local_58 = FUN_101322b0(0x100);
  iVar3 = param_1 + 0x88;
  local_54 = local_58;
  if (((uint)param_3 >> 8 & 1) == 0) {
    uVar6 = FUN_100a2720(iVar3,*(undefined4 *)(param_1 + 0x24),param_3,uVar1,uVar4,iVar5,
                         param_1 + 0x2c,0x10051,&local_58);
    iVar8 = local_58;
    if ((uVar6 & 1) != 0) {
      iVar5 = FUN_10125730(local_54 - local_58,local_58);
      *param_2 = iVar5;
    }
    goto LAB_10072068;
  }
  uVar6 = FUN_10093d88(iVar3,param_3,uVar4,iVar5,0x10051,&local_58);
  iVar8 = local_58;
  if ((uVar6 & 1) == 0) goto LAB_10072068;
  iVar2 = FUN_10125730(local_54 - local_58,local_58);
  *param_2 = iVar2;
  if (iVar2 == 0) goto LAB_10072068;
  local_50 = 0x100;
  local_4c = 1;
  local_58 = FUN_101322b0(0x100);
  local_54 = local_58;
  uVar6 = FUN_10094488(iVar3,param_3,uVar4,*(undefined4 *)(param_1 + 0x24),iVar5,uVar1,
                       param_1 + 0x2c,0x20051,&local_58);
  iVar5 = local_58;
  if ((uVar6 & 1) == 0) {
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    pcVar7 = extraout_w11_00;
LAB_10071ff0:
    (*pcVar7)(uVar4);
    *param_2 = 0;
  }
  else {
    iVar3 = FUN_10125730(local_54 - local_58,local_58);
    param_2[0xb] = iVar3;
    if (*param_2 == 0) {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar4 = 0;
      pcVar7 = extraout_w11;
      goto LAB_10071ff0;
    }
  }
  FUN_101322d0(iVar5);
LAB_10072068:
  FUN_101322d0(iVar8);
  return param_2;
}

