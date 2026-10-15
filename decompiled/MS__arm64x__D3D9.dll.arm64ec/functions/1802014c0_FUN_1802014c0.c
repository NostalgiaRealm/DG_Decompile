/*
 * FUN_1802014c0 at 1802014c0
 * undefined FUN_1802014c0(void)
 * Address ranges: 1802014c0-180201837
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1802014c0(undefined8 param_1,uint *param_2,longlong param_3,int *param_4,uint param_5,
                    uint param_6,uint param_7,uint param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_64;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  param_2[2] = param_5;
  param_2[3] = param_6;
  thunk_FUN_180223c20(param_2 + 4,0,0,*(int *)(param_3 + 0x20) * param_5,
                      *(int *)(param_3 + 0x24) * param_6);
  if (*(int *)(param_3 + 0x2c) == 7) {
    iVar8 = 0;
    iVar7 = 0;
    iVar3 = *(int *)(param_3 + 0x24) * 200;
    iVar6 = *(int *)(param_3 + 0x20) * 0x140;
LAB_180201568:
    thunk_FUN_180223c20(param_2 + 4,iVar7,iVar8,iVar6,iVar3);
  }
  else {
    iVar6 = thunk_FUN_180223d24(param_4 + 3);
    if (iVar6 == 0) {
      iVar3 = param_4[6] * *(int *)(param_3 + 0x24);
      iVar6 = param_4[5] * *(int *)(param_3 + 0x20);
      iVar8 = param_4[4] * *(int *)(param_3 + 0x24);
      iVar7 = param_4[3] * *(int *)(param_3 + 0x20);
      goto LAB_180201568;
    }
  }
  *(bool *)((longlong)param_2 + 0x31) = param_9 != param_10;
  uVar12 = param_2[7] - param_2[5];
  uVar11 = param_2[6] - param_2[4];
  if ((((param_2[4] == 0 && param_2[5] == 0) && param_2[6] == param_7) && param_2[7] == param_8) &&
     (((*(char *)(param_3 + 0xd6d) == '\0' || (*(int *)(param_3 + 0x30) != 2)) ||
      (uVar11 == (uVar12 * 4) / 3)))) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  *(undefined1 *)(param_2 + 0xc) = uVar9;
  thunk_FUN_180223c20(param_2 + 8,0,0,param_7,param_8);
  if ((char)param_2[0xc] == '\0') goto LAB_180201744;
  uVar10 = *(uint *)(param_3 + 0x24);
  uVar1 = *(uint *)(param_3 + 0x2c);
  uVar2 = *(uint *)(param_3 + 0x20);
  thunk_FUN_180223c20(&local_50,0,0,param_7,param_8);
  local_64 = uVar11;
  if ((uVar1 < 9) && ((0x10cU >> (ulonglong)(uVar1 & 0x1f) & 1) != 0)) {
LAB_1802016dc:
    if (local_64 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1802016ec);
      (*pcVar4)();
    }
    uVar10 = 0;
    if (local_64 != 0) {
      uVar10 = (uVar12 * param_7) / local_64;
    }
    if (param_8 < uVar10) {
      if (uVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180201720);
        (*pcVar4)();
      }
      uVar10 = 0;
      if (uVar12 != 0) {
        uVar10 = (local_64 * param_8) / uVar12;
      }
      local_50 = (int)(param_7 - uVar10) / 2;
      iStack_48 = local_50 + uVar10;
    }
    else {
      iStack_4c = (int)(param_8 - uVar10) / 2;
      iStack_44 = iStack_4c + uVar10;
    }
  }
  else {
    if (uVar1 - 5 < 3) {
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1802016a4);
        (*pcVar4)();
      }
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar11 / uVar2;
      }
      if (uVar1 < 0x501) {
        if (uVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1802016bc);
          (*pcVar4)();
        }
        uVar1 = 0;
        if (uVar10 != 0) {
          uVar1 = uVar12 / uVar10;
        }
        if (uVar1 < 0x401) {
          local_64 = (uVar12 * 4) / 3;
        }
      }
      goto LAB_1802016dc;
    }
    if (uVar1 == 1 || uVar1 == 4) {
      local_50 = (int)(param_7 - uVar11) / 2;
      iStack_48 = local_50 + uVar11;
      iStack_4c = (int)(param_8 - uVar12) / 2;
      iStack_44 = iStack_4c + uVar12;
    }
  }
  *(ulonglong *)(param_2 + 10) = CONCAT44(iStack_44,iStack_48);
  *(ulonglong *)(param_2 + 8) = CONCAT44(iStack_4c,local_50);
LAB_180201744:
  if ((param_2[10] - param_2[8] == uVar11) && (param_2[0xb] - param_2[9] == uVar12)) {
    uVar12 = 0;
  }
  else {
    uVar12 = param_4[7] << 3;
  }
  cVar5 = FUN_180203718(param_1,param_3);
  if ((((param_4[1] != 100) || (param_4[2] != 100)) ||
      (((cVar5 == '\0' || (*(char *)(param_3 + 0xd68) != '\0')) &&
       ((*param_4 != 100 || (*(char *)(param_3 + 0xd69) == '\0')))))) ||
     (uVar11 = 0, *(int *)(param_3 + 0x2c) - 6U < 3)) {
    uVar11 = 1;
  }
  if ((1 < *(uint *)(param_3 + 0x20)) || (uVar10 = 0, 1 < *(uint *)(param_3 + 0x24))) {
    uVar10 = 2;
  }
  uVar11 = uVar10 | (uint)((*(int *)(param_3 + 0x2c) - 6U & 0xfffffffd) == 0) << 2 | uVar11;
  *param_2 = uVar11 | uVar12;
  param_2[1] = uVar11;
  return param_2;
}

