/*
 * FUN_1800e42e0 at 1800e42e0
 * undefined FUN_1800e42e0(void)
 * Address ranges: 1800e42e0-1800e4673
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1800e42e0(undefined8 param_1,uint *param_2,longlong param_3,int *param_4,uint param_5,
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
  uint uVar13;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
  param_2[2] = param_5;
  param_2[3] = param_6;
  (*__imp_USER32_dll_SetRect)
            (param_2 + 4,0,0,*(int *)(param_3 + 0x20) * param_5,*(int *)(param_3 + 0x24) * param_6);
  if (*(int *)(param_3 + 0x2c) == 7) {
    iVar8 = 0;
    iVar7 = 0;
    iVar3 = *(int *)(param_3 + 0x24) * 200;
    iVar6 = *(int *)(param_3 + 0x20) * 0x140;
LAB_1800e439c:
    (*__imp_USER32_dll_SetRect)(param_2 + 4,iVar7,iVar8,iVar6,iVar3);
  }
  else {
    iVar6 = (*__imp_USER32_dll_IsRectEmpty)(param_4 + 3);
    if (iVar6 == 0) {
      iVar3 = param_4[6] * *(int *)(param_3 + 0x24);
      iVar6 = param_4[5] * *(int *)(param_3 + 0x20);
      iVar8 = param_4[4] * *(int *)(param_3 + 0x24);
      iVar7 = param_4[3] * *(int *)(param_3 + 0x20);
      goto LAB_1800e439c;
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
  (*__imp_USER32_dll_SetRect)(param_2 + 8,0,0,param_7,param_8);
  if ((char)param_2[0xc] == '\0') goto LAB_1800e457c;
  uVar10 = *(uint *)(param_3 + 0x24);
  uVar1 = *(uint *)(param_3 + 0x2c);
  uVar2 = *(uint *)(param_3 + 0x20);
  (*__imp_USER32_dll_SetRect)(&local_60,0,0,param_7,param_8);
  uVar13 = uVar11;
  if ((uVar1 < 9) && ((0x10cU >> (ulonglong)(uVar1 & 0x1f) & 1) != 0)) {
LAB_1800e4518:
    if (uVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1800e4524);
      (*pcVar4)();
    }
    uVar10 = 0;
    if (uVar13 != 0) {
      uVar10 = (uVar12 * param_7) / uVar13;
    }
    if (param_8 < uVar10) {
      if (uVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1800e4558);
        (*pcVar4)();
      }
      uVar10 = 0;
      if (uVar12 != 0) {
        uVar10 = (uVar13 * param_8) / uVar12;
      }
      local_60 = (int)(param_7 - uVar10) / 2;
      iStack_58 = local_60 + uVar10;
    }
    else {
      iStack_5c = (int)(param_8 - uVar10) / 2;
      iStack_54 = iStack_5c + uVar10;
    }
  }
  else {
    if (uVar1 - 5 < 3) {
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1800e44e4);
        (*pcVar4)();
      }
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar11 / uVar2;
      }
      if (uVar1 < 0x501) {
        if (uVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1800e44fc);
          (*pcVar4)();
        }
        uVar1 = 0;
        if (uVar10 != 0) {
          uVar1 = uVar12 / uVar10;
        }
        if (uVar1 < 0x401) {
          uVar13 = (uVar12 * 4) / 3;
        }
      }
      goto LAB_1800e4518;
    }
    if (uVar1 == 1 || uVar1 == 4) {
      local_60 = (int)(param_7 - uVar11) / 2;
      iStack_58 = local_60 + uVar11;
      iStack_5c = (int)(param_8 - uVar12) / 2;
      iStack_54 = iStack_5c + uVar12;
    }
  }
  *(ulonglong *)(param_2 + 10) = CONCAT44(iStack_54,iStack_58);
  *(ulonglong *)(param_2 + 8) = CONCAT44(iStack_5c,local_60);
LAB_1800e457c:
  if ((param_2[10] - param_2[8] == uVar11) && (param_2[0xb] - param_2[9] == uVar12)) {
    uVar12 = 0;
  }
  else {
    uVar12 = param_4[7] << 3;
  }
  cVar5 = FUN_1800e6328(param_1,param_3);
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

