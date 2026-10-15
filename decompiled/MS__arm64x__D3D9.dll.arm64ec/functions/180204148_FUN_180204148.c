/*
 * FUN_180204148 at 180204148
 * undefined FUN_180204148(void)
 * Address ranges: 180204148-180204413
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180204148(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *pcVar9;
  code *extraout_x11_07;
  longlong lVar10;
  ulonglong uVar11;
  longlong local_190;
  longlong local_188;
  int local_180 [2];
  undefined1 auStack_178 [296];
  int local_50;
  int iStack_4c;
  
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  local_188 = 0;
  if (*(longlong *)(param_1 + 0x688) != 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    iVar4 = (*extraout_x11)();
    if (iVar4 != 0) {
      return 1;
    }
  }
  (*(code *)puVar3)(0x180224000);
  iVar4 = (*extraout_x11_00)(&DAT_180238910,&local_188);
  if (-1 < iVar4) {
    if (*(longlong *)(param_1 + 0x688) != 0) {
      (*(code *)puVar3)(0x180224000);
      (*extraout_x11_01)();
    }
    *(longlong *)(param_1 + 0x688) = local_188;
  }
  local_188 = *(longlong *)(param_1 + 0x688);
  if (local_188 == 0) {
    return 0;
  }
  FUN_1802229d8(*(undefined8 *)(param_1 + 0x690));
  *(undefined8 *)(param_1 + 0x690) = 0;
  *(undefined8 *)(param_1 + 0x698) = 0;
  iVar4 = 0;
  local_190 = 0;
  uVar6 = (*(code *)puVar3)(0x180224000);
  pcVar9 = extraout_x11_02;
  do {
    iVar5 = (*pcVar9)(uVar6,iVar4,&local_190);
    if (iVar5 < 0) {
      uVar11 = 0;
      do {
        if (*(char *)(param_1 + 0x2c + uVar11 * 0x28) != '\0') {
          if (*(uint *)(param_1 + 0x698) != 0) {
            uVar8 = 0;
            do {
              if (*(int *)(*(longlong *)(param_1 + 0x690) + uVar8 * 4) == (int)uVar11) {
                if ((int)uVar8 != -1) goto LAB_1802043e4;
                break;
              }
              uVar7 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar7;
            } while (uVar7 < *(uint *)(param_1 + 0x698));
          }
          (*(code *)puVar3)();
          (*extraout_x11_07)();
          *(undefined1 *)(param_1 + 0x2c + uVar11 * 0x28) = 0;
        }
LAB_1802043e4:
        uVar7 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar7;
        if (0xf < uVar7) {
          return 1;
        }
      } while( true );
    }
    uVar6 = (*(code *)puVar3)(0x180224000);
    iVar5 = (*extraout_x11_03)(uVar6,auStack_178);
    if (-1 < iVar5) {
      uVar7 = 0xffffffff;
      uVar11 = 0;
      do {
        lVar10 = uVar11 * 0x28;
        if (((*(int *)(param_1 + 0x20 + lVar10) == local_50) &&
            (*(int *)(param_1 + lVar10 + 0x24) == iStack_4c)) &&
           ((local_50 != 0 || (iStack_4c != 0)))) {
          (*(code *)puVar3)(0x180224000);
          (*extraout_x11_04)();
          local_190 = 0;
          goto LAB_1802042b8;
        }
        uVar2 = uVar7;
        if (uVar7 == 0xffffffff) {
          uVar2 = (uint)uVar11;
        }
        uVar1 = (uint)uVar11 + 1;
        uVar11 = (ulonglong)uVar1;
        if (*(longlong *)(param_1 + lVar10 + 0x18) == 0) {
          uVar7 = uVar2;
        }
      } while (uVar1 < 0x10);
      uVar11 = (ulonglong)uVar7;
LAB_1802042b8:
      iVar5 = (int)uVar11;
      if (local_190 == 0) {
        if (iVar5 != -1) goto LAB_180204334;
      }
      else if (iVar5 == -1) {
        (*(code *)puVar3)(0x180224000);
        (*extraout_x11_05)();
      }
      else {
        *(longlong *)(param_1 + 0x18 + (longlong)iVar5 * 0x28) = local_190;
        lVar10 = param_1 + (longlong)iVar5 * 0x28;
        *(ulonglong *)(lVar10 + 0x20) = CONCAT44(iStack_4c,local_50);
        *(undefined1 *)(lVar10 + 0x2c) = 1;
LAB_180204334:
        local_180[0] = iVar5;
        FUN_180108518(param_1 + 0x690,local_180);
      }
    }
    iVar4 = iVar4 + 1;
    uVar6 = (*(code *)puVar3)(0x180224000);
    pcVar9 = extraout_x11_06;
  } while( true );
}

