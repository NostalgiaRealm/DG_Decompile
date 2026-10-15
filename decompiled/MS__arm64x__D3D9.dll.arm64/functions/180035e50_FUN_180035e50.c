/*
 * FUN_180035e50 at 180035e50
 * undefined FUN_180035e50(void)
 * Address ranges: 180035e50-18003615f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180035e50(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar9 = *(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x1ac0;
  if (*(int *)(param_1 + 0x28) == 1) {
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar10 = 0;
      do {
        uVar11 = *(undefined8 *)(param_1 + 0x10);
        uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + uVar10 * 0x10);
        FUN_180101630(lVar9 + 0x1bc0);
        if (*(char *)(lVar9 + 0x1dc4) == '\0') {
LAB_180035f54:
          puVar3 = *(undefined8 **)(lVar9 + 0x1da0);
          *puVar3 = uVar11;
          puVar3[1] = uVar12;
          FUN_180036160();
LAB_180035f60:
          *(undefined4 *)(lVar9 + 0x1bc0) = 0;
        }
        else {
          puVar3 = (undefined8 *)FUN_180101500(lVar9 + 0x1bc0,0x10);
          pcVar2 = __imp_KERNEL32_dll_Sleep;
          if (puVar3 == (undefined8 *)0x0) {
            *(undefined4 *)(lVar9 + 0x1bc0) = 0;
            (*pcVar2)(100);
            FUN_180101630(lVar9 + 0x1bc0);
            goto LAB_180035f54;
          }
          FUN_1800015a0(lVar9 + 0x1dc0);
          puVar3[1] = 0x10;
          puVar3[2] = uVar11;
          puVar8 = (undefined8 *)((longlong)puVar3 + 0x27U & 0xfffffffffffffff8);
          puVar3[3] = uVar12;
          *puVar8 = 0;
          *puVar3 = FUN_180036160;
          *(undefined8 **)(lVar9 + 0x1c50 + (ulonglong)*(uint *)(lVar9 + 0x1dbc) * 0x28) = puVar8;
          pcVar2 = __imp_KERNEL32_dll_SetEvent;
          if (*(char *)(lVar9 + 0x1dc5) == '\0') goto LAB_180035f60;
          *(undefined4 *)(lVar9 + 0x1bc0) = 0;
          (*pcVar2)(*(undefined8 *)(lVar9 + 0x1c40));
        }
        lVar5 = *(longlong *)(param_1 + 8);
        if (*(char *)(param_1 + 0x31) == '\0') {
          uVar7 = *(uint *)(lVar5 + 0x1b0);
          if (uVar7 != 0) {
            uVar6 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar5 + 0x1a8) + uVar6 * 8) == param_1) {
                if ((int)uVar6 != -1) {
                  while (uVar1 = (int)uVar6 + 1, uVar1 < uVar7) {
                    *(undefined8 *)(*(longlong *)(lVar5 + 0x1a8) + uVar6 * 8) =
                         *(undefined8 *)(*(longlong *)(lVar5 + 0x1a8) + (ulonglong)uVar1 * 8);
                    uVar6 = (ulonglong)uVar1;
                    uVar7 = *(uint *)(lVar5 + 0x1b0);
                  }
                  *(int *)(lVar5 + 0x1b0) = *(int *)(lVar5 + 0x1b0) + -1;
                }
                break;
              }
              uVar1 = (int)uVar6 + 1;
              uVar6 = (ulonglong)uVar1;
            } while (uVar1 < uVar7);
          }
        }
        else {
          uVar7 = *(uint *)(lVar5 + 0x1c0);
          if (uVar7 != 0) {
            uVar6 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar5 + 0x1b8) + uVar6 * 8) == param_1) {
                if ((int)uVar6 != -1) {
                  while (uVar1 = (int)uVar6 + 1, uVar1 < uVar7) {
                    *(undefined8 *)(*(longlong *)(lVar5 + 0x1b8) + uVar6 * 8) =
                         *(undefined8 *)(*(longlong *)(lVar5 + 0x1b8) + (ulonglong)uVar1 * 8);
                    uVar6 = (ulonglong)uVar1;
                    uVar7 = *(uint *)(lVar5 + 0x1c0);
                  }
                  *(int *)(lVar5 + 0x1c0) = *(int *)(lVar5 + 0x1c0) + -1;
                }
                break;
              }
              uVar1 = (int)uVar6 + 1;
              uVar6 = (ulonglong)uVar1;
            } while (uVar1 < uVar7);
          }
        }
        uVar7 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar7;
      } while (uVar7 < *(uint *)(param_1 + 0x40));
    }
  }
  else {
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar10 = 0;
      do {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x38) + uVar10 * 0x10);
        FUN_180101630(lVar9 + 0x1bc0);
        if (*(char *)(lVar9 + 0x1dc4) == '\0') {
LAB_180036114:
          plVar4 = *(longlong **)(lVar9 + 0x1da0);
          *plVar4 = lVar9 + 0x2140;
          plVar4[1] = lVar5;
          FUN_180035ae0();
LAB_180036120:
          *(undefined4 *)(lVar9 + 0x1bc0) = 0;
        }
        else {
          puVar3 = (undefined8 *)FUN_180101500(lVar9 + 0x1bc0,0x10);
          pcVar2 = __imp_KERNEL32_dll_Sleep;
          if (puVar3 == (undefined8 *)0x0) {
            *(undefined4 *)(lVar9 + 0x1bc0) = 0;
            (*pcVar2)(100);
            FUN_180101630(lVar9 + 0x1bc0);
            goto LAB_180036114;
          }
          FUN_1800015a0(lVar9 + 0x1dc0);
          puVar3[1] = 0x10;
          puVar3[2] = lVar9 + 0x2140;
          puVar8 = (undefined8 *)((longlong)puVar3 + 0x27U & 0xfffffffffffffff8);
          puVar3[3] = lVar5;
          *puVar8 = 0;
          *puVar3 = FUN_180035ae0;
          *(undefined8 **)(lVar9 + 0x1c50 + (ulonglong)*(uint *)(lVar9 + 0x1dbc) * 0x28) = puVar8;
          pcVar2 = __imp_KERNEL32_dll_SetEvent;
          if (*(char *)(lVar9 + 0x1dc5) == '\0') goto LAB_180036120;
          *(undefined4 *)(lVar9 + 0x1bc0) = 0;
          (*pcVar2)(*(undefined8 *)(lVar9 + 0x1c40));
        }
        uVar7 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar7;
      } while (uVar7 < *(uint *)(param_1 + 0x40));
    }
    thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}

