/*
 * FUN_10019c18 at 10019c18
 * undefined FUN_10019c18(void)
 * Address ranges: 10019c18-10019dc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019c18(undefined8 param_1,int param_2,uint param_3,undefined8 param_4,uint param_5,
                 undefined8 param_6,int *param_7,int *param_8)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined1 auStack_a0 [16];
  uint local_90;
  uint local_88;
  short local_84;
  short local_82;
  undefined4 local_7c;
  undefined1 auStack_68 [16];
  uint local_58;
  uint local_50;
  short local_4c;
  short local_4a;
  undefined4 local_44;
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar4,auStack_68);
  uVar4 = (*pcVar3)();
  (*extraout_w11_00)(uVar4,auStack_a0);
  if ((((*param_7 != 0) || (param_7[1] != 0)) ||
      (param_7[2] != local_58 >> (ulonglong)(param_3 & 0x1f))) ||
     (bVar2 = true, param_7[3] != local_50 >> (ulonglong)(param_3 & 0x1f))) {
    bVar2 = false;
  }
  if (((*param_8 != 0) || (param_8[1] != 0)) ||
     ((param_8[2] != local_90 >> (ulonglong)(param_5 & 0x1f) ||
      (bVar1 = true, param_8[3] != local_88 >> (ulonglong)(param_5 & 0x1f))))) {
    bVar1 = false;
  }
  *(undefined4 *)(param_2 + 0x1c) = local_7c;
  *(undefined4 *)(param_2 + 0x20) = local_44;
  *(bool *)(param_2 + 0x4a) = bVar1 && bVar2;
  if (((!bVar1) || (!bVar2)) ||
     ((local_82 != 1 || (((local_4a != 1 || (local_84 != 1)) || (uVar5 = 1, local_4c != 1)))))) {
    uVar5 = 0;
  }
  *(undefined1 *)(param_2 + 0x49) = uVar5;
  return;
}

