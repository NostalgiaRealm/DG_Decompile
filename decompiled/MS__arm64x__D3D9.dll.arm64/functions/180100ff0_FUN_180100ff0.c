/*
 * FUN_180100ff0 at 180100ff0
 * undefined FUN_180100ff0(void)
 * Address ranges: 180100ff0-180101213
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180100ff0(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,int param_5,
                  ulonglong param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 local_70;
  int local_68;
  int iStack_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined4 local_3c;
  
  local_70 = 0;
  local_68 = param_4;
  iStack_64 = param_5;
  if ((param_4 == 0) || (param_5 == 0)) {
    (*__imp_USER32_dll_GetWindowRect)(param_2,&local_70);
    uVar8 = 0x615;
  }
  else {
    (*__imp_USER32_dll_MapWindowPoints)(param_2,0,&local_70,2);
    uVar1 = (*__imp_USER32_dll_GetWindowLongW)(param_2,0xffffffec);
    uVar2 = (*__imp_USER32_dll_GetWindowLongW)(param_2,0xfffffff0);
    (*__imp_USER32_dll_AdjustWindowRectEx)(&local_70,uVar2,0,uVar1);
    uVar8 = 0x614;
  }
  iVar7 = 0;
  iVar6 = 0;
  if ((param_6 & 1) == 0) {
    iVar3 = (*__imp_USER32_dll_GetSystemMetrics)(0x4c);
    iVar4 = (*__imp_USER32_dll_GetSystemMetrics)(0x4d);
    if (iVar3 > (int)local_70) {
      iVar7 = iVar3 - (int)local_70;
    }
    uVar9 = (uint)(iVar3 <= (int)local_70);
    if (iVar4 <= local_70._4_4_) goto LAB_1801011b4;
    iVar6 = iVar4 - local_70._4_4_;
LAB_1801011b0:
    uVar9 = 0;
  }
  else {
    lVar5 = (*__imp_USER32_dll_MonitorFromWindow)(param_2,2);
    if (lVar5 != 0) {
      local_60 = 0x28;
      uStack_54 = 0;
      local_5c = 0;
      uStack_44 = 0;
      uStack_4c = 0;
      local_3c = 0;
      iVar3 = (*__imp_USER32_dll_GetMonitorInfoW)(lVar5,&local_60);
      if (iVar3 != 0) {
        iVar3 = (int)local_5c + (((int)uStack_54 - (int)local_5c) - (local_68 - (int)local_70)) / 2;
        local_68 = iVar3 + (local_68 - (int)local_70);
        iVar4 = local_5c._4_4_ +
                ((uStack_54._4_4_ - local_5c._4_4_) - (iStack_64 - local_70._4_4_)) / 2;
        iStack_64 = iVar4 + (iStack_64 - local_70._4_4_);
        local_70 = CONCAT44(iVar4,iVar3);
        if (iVar3 < (int)local_5c) {
          iVar7 = (int)local_5c - iVar3;
        }
        if (iVar4 < local_5c._4_4_) {
          iVar6 = local_5c._4_4_ - iVar4;
        }
        goto LAB_1801011b0;
      }
    }
    uVar9 = 1;
  }
LAB_1801011b4:
  (*__imp_USER32_dll_OffsetRect)(&local_70,iVar7,iVar6);
  if (*(char *)(param_3 + 0x44) != '\0') {
    uVar9 = 1;
  }
  (*__imp_USER32_dll_SetWindowPos)
            (param_2,0,local_70 & 0xffffffff,local_70._4_4_,local_68 - (int)local_70,
             iStack_64 - local_70._4_4_,uVar8 | uVar9 << 1);
  return;
}

