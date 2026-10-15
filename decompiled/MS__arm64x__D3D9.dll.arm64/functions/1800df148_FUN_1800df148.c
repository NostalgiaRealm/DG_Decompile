/*
 * FUN_1800df148 at 1800df148
 * undefined FUN_1800df148(void)
 * Address ranges: 1800df148-1800df2cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_1800df148(longlong param_1,int *param_2,ulonglong param_3,undefined4 param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *local_1c0;
  int local_1b8;
  int iStack_1b4;
  uint local_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined8 local_1a4;
  undefined1 auStack_198 [8];
  uint local_190;
  uint uStack_18c;
  undefined1 auStack_178 [68];
  undefined4 local_134;
  int local_cc;
  int iStack_c8;
  uint local_c0;
  undefined1 auStack_98 [104];
  
  lVar8 = *(longlong *)(param_1 + 0x10);
  local_1c0 = (longlong *)0x0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  plVar4 = *(longlong **)(lVar8 + (param_3 & 0xffffffff) * 0x28 + 0x18);
  iVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,param_4,&local_1c0);
  if (iVar3 < 0) {
    local_1c0 = (longlong *)0x0;
  }
  plVar4 = local_1c0;
  local_134 = 0xdc;
  if (local_1c0 == (longlong *)0x0) {
    uVar7 = 0;
    uVar6 = 0;
    (*__imp_USER32_dll_EnumDisplaySettingsW)(0,0xffffffff,auStack_178);
  }
  else {
    (**(code **)(*local_1c0 + 0x38))(local_1c0,auStack_98);
    (*__imp_USER32_dll_EnumDisplaySettingsW)(auStack_98,0xffffffff,auStack_178);
    local_1a4 = 1;
    local_1b8 = local_cc;
    iStack_1b4 = iStack_c8;
    local_1b0 = local_c0;
    uStack_1ac = 1;
    local_1a8 = *(undefined4 *)(&DAT_180232e48 + (ulonglong)*(uint *)(lVar8 + 0x678) * 4);
    iVar3 = (**(code **)(*plVar4 + 0x48))(plVar4,&local_1b8,auStack_198,0);
    uVar7 = local_c0;
    uVar6 = 1;
    if (-1 < iVar3) {
      uVar7 = local_190;
      uVar6 = uStack_18c;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((*(int *)(lVar8 + 0x668) == 0) ||
     (iVar3 = *(int *)(lVar8 + 0x668), iVar5 = *(int *)(lVar8 + 0x66c), *(int *)(lVar8 + 0x66c) == 0
     )) {
    iVar3 = local_cc;
    iVar5 = iStack_c8;
  }
  if ((*(uint *)(lVar8 + 0x670) != 0) && (*(uint *)(lVar8 + 0x674) != 0)) {
    uVar7 = *(uint *)(lVar8 + 0x670);
    uVar6 = *(uint *)(lVar8 + 0x674);
  }
  *param_2 = iVar3;
  param_2[1] = iVar5;
  param_2[2] = uVar7;
  param_2[3] = uVar6;
  if (uVar6 != 0) {
    uVar1 = 0;
    if (uVar6 != 0) {
      uVar1 = uVar7 / uVar6;
    }
    param_2[4] = uVar1;
    param_2[5] = 0x20;
    return param_2;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x1800df2ac);
  (*pcVar2)();
}

