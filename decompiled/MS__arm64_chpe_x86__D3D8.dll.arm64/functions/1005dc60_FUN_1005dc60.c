/*
 * FUN_1005dc60 at 1005dc60
 * undefined FUN_1005dc60(void)
 * Address ranges: 1005dc60-1005deb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_1005dc60(int param_1,int *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 in_x6;
  code *extraout_w11;
  code *extraout_w11_00;
  code *pcVar7;
  int iVar8;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined1 local_44;
  
  iVar4 = *(int *)(param_1 + 0xc) + 0x10;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48 = 0x100;
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
  local_44 = 1;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  uVar5 = FUN_100fece0(0x100);
  local_50 = (int)uVar5;
  local_4c = local_50;
  if (((uint)param_3 >> 8 & 1) == 0) {
    uVar6 = FUN_10082dc8(param_1 + 0x34,*(undefined4 *)(param_1 + 0x24),param_3,uVar1,uVar3,iVar4,
                         in_x6,0x10051,&local_50);
    iVar8 = local_50;
    if ((uVar6 & 1) != 0) {
      iVar4 = FUN_100f2160(local_4c - local_50,local_50);
      *param_2 = iVar4;
    }
    goto LAB_1005de8c;
  }
  uVar6 = FUN_100782d0(uVar5,param_3,uVar3,iVar4,0x10051,&local_50);
  iVar8 = local_50;
  if ((uVar6 & 1) == 0) goto LAB_1005de8c;
  iVar2 = FUN_100f2160(local_4c - local_50,local_50);
  *param_2 = iVar2;
  if (iVar2 == 0) goto LAB_1005de8c;
  local_48 = 0x100;
  local_44 = 1;
  local_50 = FUN_100fece0(0x100);
  local_4c = local_50;
  uVar6 = FUN_100789c0(param_1 + 0x34,param_3,uVar3,*(undefined4 *)(param_1 + 0x24),iVar4,uVar1,
                       in_x6,0x20051,&local_50);
  iVar4 = local_50;
  if ((uVar6 & 1) == 0) {
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    pcVar7 = extraout_w11_00;
LAB_1005de14:
    (*pcVar7)(uVar3);
    *param_2 = 0;
  }
  else {
    iVar2 = FUN_100f2160(local_4c - local_50,local_50);
    param_2[0xb] = iVar2;
    if (*param_2 == 0) {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar3 = 0;
      pcVar7 = extraout_w11;
      goto LAB_1005de14;
    }
  }
  FUN_100fed00(iVar4);
LAB_1005de8c:
  FUN_100fed00(iVar8);
  return param_2;
}

