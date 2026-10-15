/*
 * FUN_1006c098 at 1006c098
 * undefined FUN_1006c098(void)
 * Address ranges: 1006c098-1006c3ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1006c098(int param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 uVar8;
  uint uVar9;
  int local_180;
  int local_17c;
  uint local_178 [2];
  undefined1 auStack_170 [284];
  int iStack_54;
  int iStack_50;
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_17c = 0;
  piVar1 = (int *)(param_1 + 0x4ec);
  if (*piVar1 != 0) {
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar5 = (*extraout_w11)(uVar4);
    if (iVar5 != 0) {
      return 1;
    }
  }
  (*pcVar3)();
  iVar5 = (*extraout_w11_00)(&DAT_10097a50,&local_17c);
  if (-1 < iVar5) {
    if (*piVar1 != 0) {
      uVar4 = (*pcVar3)();
      (*extraout_w11_01)(uVar4);
    }
    *piVar1 = local_17c;
  }
  local_17c = *piVar1;
  if (local_17c == 0) {
    return 0;
  }
  piVar1 = (int *)(param_1 + 0x4f0);
  FUN_1007a4e0(*piVar1);
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  piVar1[0] = 0;
  piVar1[1] = 0;
  local_180 = 0;
  iVar5 = 0;
  uVar4 = (*pcVar3)();
  uVar8 = extraout_x11;
  do {
    iVar6 = (*(code *)uVar8)(uVar4,iVar5,&local_180);
    if (iVar6 < 0) {
      uVar9 = 0;
      do {
        if (*(char *)(param_1 + 0x28 + uVar9 * 0x28) != '\0') {
          if (*(uint *)(param_1 + 0x4f4) != 0) {
            uVar7 = 0;
            do {
              if (*(uint *)(*piVar1 + uVar7 * 4) == uVar9) {
                if (uVar7 != 0xffffffff) goto LAB_1006c3c8;
                break;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(param_1 + 0x4f4));
          }
          uVar4 = (*pcVar3)();
          (*extraout_w11_05)(uVar4);
          *(undefined1 *)(param_1 + uVar9 * 0x28 + 0x28) = 0;
        }
LAB_1006c3c8:
        uVar9 = uVar9 + 1;
        if (0xf < uVar9) {
          return 1;
        }
      } while( true );
    }
    uVar4 = (*pcVar3)();
    iVar6 = (*extraout_w11_02)(uVar4,auStack_170);
    if (-1 < iVar6) {
      uVar7 = 0xffffffff;
      uVar9 = 0;
      do {
        if (((*(int *)(param_1 + 0x1c + uVar9 * 0x28) == iStack_54) &&
            (*(int *)(param_1 + uVar9 * 0x28 + 0x20) == iStack_50)) &&
           ((iStack_54 != 0 || (iStack_50 != 0)))) {
          uVar4 = (*pcVar3)();
          (*extraout_w11_03)(uVar4);
          local_180 = 0;
          uVar7 = uVar9;
          break;
        }
        iVar6 = uVar9 * 0x28;
        uVar2 = uVar7;
        if (uVar7 == 0xffffffff) {
          uVar2 = uVar9;
        }
        uVar9 = uVar9 + 1;
        if (*(int *)(param_1 + iVar6 + 0x18) == 0) {
          uVar7 = uVar2;
        }
      } while (uVar9 < 0x10);
      if (local_180 == 0) {
        if (uVar7 != 0xffffffff) goto LAB_1006c2f4;
      }
      else if (uVar7 == 0xffffffff) {
        uVar4 = (*pcVar3)();
        (*extraout_w11_04)(uVar4);
      }
      else {
        iVar6 = param_1 + uVar7 * 0x28;
        *(int *)(iVar6 + 0x18) = local_180;
        *(ulonglong *)(iVar6 + 0x1c) = CONCAT44(iStack_50,iStack_54);
        *(undefined1 *)(iVar6 + 0x28) = 1;
LAB_1006c2f4:
        local_178[0] = uVar7;
        FUN_10009e60(piVar1,local_178);
      }
    }
    iVar5 = iVar5 + 1;
    uVar4 = (*pcVar3)();
    uVar8 = extraout_x11_00;
  } while( true );
}

