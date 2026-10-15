/*
 * FUN_10072ed0 at 10072ed0
 * undefined FUN_10072ed0(void)
 * Address ranges: 10072ed0-100730af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10072ed0(int param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  code *extraout_w11;
  int iVar5;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined1 local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined1 local_44;
  
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
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
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x16c0 + 0x6c4);
  local_58 = 0x100;
  if (((uint)param_3 >> 8 & 1) == 0) {
    local_54 = 1;
    local_60 = FUN_101322b0(0x100);
    local_5c = local_60;
    uVar4 = FUN_1009e818(param_1 + 0x10,param_1 + 0x18,param_3,0x10051,&local_60,
                         *(undefined1 *)(param_1 + 0x2cc),param_2 + 1);
    iVar5 = local_60;
    if ((uVar4 & 1) != 0) {
      iVar1 = FUN_10125730(local_5c - local_60,local_60);
      *param_2 = iVar1;
    }
  }
  else {
    local_54 = 1;
    local_60 = FUN_101322b0(0x100);
    local_48 = 0x100;
    local_44 = 1;
    local_5c = local_60;
    local_50 = FUN_101322b0(0x100);
    local_4c = local_50;
    uVar4 = FUN_100929f8(param_1 + 0x10,param_1 + 0x18,param_3,*(undefined1 *)(param_1 + 0x2cc),
                         iVar5 == 0x1002,0x10051,&local_60,param_2 + 1,0x20051);
    iVar1 = local_50;
    iVar5 = local_60;
    if ((uVar4 & 1) != 0) {
      iVar2 = FUN_10125730(local_5c - local_60,local_60);
      *param_2 = iVar2;
      if (iVar2 != 0) {
        iVar2 = FUN_10125730(local_4c - iVar1,iVar1);
        param_2[0xb] = iVar2;
        if (iVar2 == 0) {
          uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          (*extraout_w11)(uVar3);
          *param_2 = 0;
        }
      }
    }
    FUN_101322d0(iVar1);
  }
  FUN_101322d0(iVar5);
  return param_2;
}

