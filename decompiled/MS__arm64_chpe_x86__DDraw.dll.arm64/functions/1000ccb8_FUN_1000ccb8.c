/*
 * FUN_1000ccb8 at 1000ccb8
 * undefined FUN_1000ccb8(void)
 * Address ranges: 1000ccb8-1000ce73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000ccb8(undefined8 param_1,int param_2,uint param_3,undefined8 param_4,uint param_5,
                 undefined8 param_6,int *param_7,int *param_8)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  uint local_90;
  uint local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint local_60;
  uint local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar4,&local_60);
  uVar4 = (*pcVar3)();
  (*extraout_w11_00)(uVar4,&local_90);
  if ((((*param_7 != 0) || (param_7[1] != 0)) ||
      (param_7[2] != local_60 >> (ulonglong)(param_3 & 0x1f))) ||
     (bVar2 = true, param_7[3] != local_5c >> (ulonglong)(param_3 & 0x1f))) {
    bVar2 = false;
  }
  if (((*param_8 != 0) || (param_8[1] != 0)) ||
     ((param_8[2] != local_90 >> (ulonglong)(param_5 & 0x1f) ||
      (bVar1 = true, param_8[3] != local_8c >> (ulonglong)(param_5 & 0x1f))))) {
    bVar1 = false;
  }
  *(undefined4 *)(param_2 + 0x10) = local_80;
  *(undefined4 *)(param_2 + 0x14) = local_50;
  *(undefined4 *)(param_2 + 0x18) = uStack_7c;
  *(undefined4 *)(param_2 + 0x1c) = uStack_4c;
  *(bool *)(param_2 + 0x46) = bVar1 && bVar2;
  if (((!bVar1) || (!bVar2)) ||
     ((local_88 != 1 || (((local_58 != 1 || (local_84 != 1)) || (uVar5 = 1, local_54 != 1)))))) {
    uVar5 = 0;
  }
  *(undefined1 *)(param_2 + 0x45) = uVar5;
  return;
}

