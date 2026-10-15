/*
 * FUN_18008dfa8 at 18008dfa8
 * char __fastcall FUN_18008dfa8(longlong * param_1, undefined4 param_2, undefined4 param_3, uint param_4, uint param_5, uint param_6, undefined4 param_7, int param_8, int param_9, int param_10, undefined4 param_11, uint param_12, undefined4 param_13, undefined4 param_14, undefined8 param_15, char param_16, char param_17)
 * Address ranges: 18008dfa8-18008e1d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_18008dfa8(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5
                  ,uint param_6,undefined4 param_7,int param_8,int param_9,int param_10,
                  undefined4 param_11,uint param_12,undefined4 param_13,undefined4 param_14,
                  undefined8 param_15,char param_16,char param_17)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_c8;
  int local_c4;
  undefined8 local_c0;
  longlong lStack_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  uint local_a8;
  uint local_a4;
  undefined4 local_a0;
  ulonglong local_9c;
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_80;
  int local_7c;
  undefined4 local_78;
  undefined8 local_74;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  
  local_a0 = param_7;
  local_94 = param_11;
  local_8c = param_13;
  iVar4 = 5;
  local_88 = param_14;
  local_a4 = param_5;
  local_9c = (ulonglong)param_6;
  local_90 = param_12;
  if ((param_6 == 1) || (iVar2 = 6, param_17 == '\0')) {
    iVar2 = iVar4;
  }
  local_c4 = iVar4;
  if ((param_12 & 0x40) != 0) {
    local_c4 = iVar2;
  }
  local_c0 = 0;
  lStack_b8 = 0;
  if (param_16 != '\0') {
    local_c4 = 9;
  }
  local_c8 = param_8;
  if (local_c4 == 4) {
LAB_18008e06c:
    local_c0 = 0xffffffff00000000;
  }
  else {
    if (local_c4 == 5) {
      lStack_b8 = (ulonglong)param_5 << 0x20;
      goto LAB_18008e06c;
    }
    if (local_c4 == 9) goto LAB_18008e06c;
  }
  local_80 = param_9;
  local_7c = (param_6 != 1) + 5;
  local_78 = 0;
  local_74 = 0;
  local_68 = param_10;
  local_64 = 3;
  if (param_6 != 1) {
    local_64 = iVar4;
  }
  local_60 = 0;
  local_58 = 0;
  plVar3 = *(longlong **)param_1[2];
  local_b0 = param_2;
  local_ac = param_3;
  local_a8 = param_4;
  if ((param_6 == 1) ||
     (iVar4 = (**(code **)(*plVar3 + 0x28))(plVar3,&local_b0,0,param_1 + 4), -1 < iVar4)) {
    local_9c = 1;
    iVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (-1 < iVar4) {
      cVar1 = FUN_18008dd60((longlong)param_1,-(ulonglong)(param_8 != 0) & (ulonglong)&local_c8,
                            -(ulonglong)(param_9 != 0) & (ulonglong)&local_80,
                            -(ulonglong)(param_10 != 0) & (ulonglong)&local_68,param_4,param_5,
                            param_17);
      if (cVar1 != '\0') goto LAB_18008e18b;
      (**(code **)(*(longlong *)param_1[3] + 0x10))();
      param_1[3] = 0;
    }
    plVar3 = (longlong *)param_1[4];
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
      param_1[4] = 0;
    }
  }
  cVar1 = '\0';
LAB_18008e18b:
  plVar3 = param_1 + 4;
  if (*plVar3 == 0) {
    if (param_1[3] != 0) {
      param_1[3] = param_1[3] +
                   (ulonglong)*(uint *)(*param_1 + 0x30 + (ulonglong)*(uint *)(param_1 + 1) * 0x28);
    }
  }
  else {
    *plVar3 = *plVar3 + (ulonglong)
                        *(uint *)(*param_1 + 0x30 + (ulonglong)*(uint *)(param_1 + 1) * 0x28);
  }
  return cVar1;
}

