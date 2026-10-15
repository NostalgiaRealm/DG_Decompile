/*
 * FUN_180040e00 at 180040e00
 * undefined __fastcall FUN_180040e00(longlong param_1)
 * Address ranges: 180040e00-180040ff6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180040e00(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  
  if (*(int *)(param_1 + 0x28) == 1) {
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar12 = 0;
      lVar10 = (ulonglong)*(uint *)(param_1 + 0x20) * 0x1ac0 + *(longlong *)(param_1 + 0x10);
      piVar1 = (int *)(lVar10 + 0x1bc0);
      do {
        lVar2 = *(longlong *)(param_1 + 0x10);
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + uVar12 * 0x10);
        FUN_1800fab60(piVar1);
        if (*(char *)(lVar10 + 0x1dc4) == '\0') {
LAB_180040ef8:
          plVar4 = *(longlong **)(lVar10 + 0x1da0);
          *plVar4 = lVar2;
          plVar4[1] = lVar3;
          FUN_180040ff8(plVar4);
LAB_180040f0b:
          FUN_1800facb0(piVar1);
        }
        else {
          puVar5 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x10);
          if (puVar5 == (undefined8 *)0x0) {
            FUN_1800facb0(piVar1);
            Sleep(100);
            FUN_1800fab60(piVar1);
            goto LAB_180040ef8;
          }
          LOCK();
          *(int *)(lVar10 + 0x1dc0) = *(int *)(lVar10 + 0x1dc0) + 1;
          UNLOCK();
          puVar5[1] = 0x10;
          puVar5[2] = lVar2;
          puVar8 = (undefined8 *)((longlong)puVar5 + 0x27U & 0xfffffffffffffff8);
          puVar5[3] = lVar3;
          *puVar8 = 0;
          *puVar5 = FUN_180040ff8;
          *(undefined8 **)(lVar10 + 0x1c50 + (ulonglong)*(uint *)(lVar10 + 0x1dbc) * 0x28) = puVar8;
          if (*(char *)(lVar10 + 0x1dc5) == '\0') goto LAB_180040f0b;
          FUN_1800facb0(piVar1);
          SetEvent(*(HANDLE *)(lVar10 + 0x1c40));
        }
        lVar2 = *(longlong *)(param_1 + 8);
        if (*(char *)(param_1 + 0x31) == '\0') {
          uVar11 = *(uint *)(lVar2 + 0x1b0);
          if (uVar11 != 0) {
            uVar7 = 0;
            do {
              iVar6 = (int)uVar7;
              if (*(longlong *)(*(longlong *)(lVar2 + 0x1a8) + uVar7 * 8) == param_1) {
                if (iVar6 != -1) {
                  uVar9 = iVar6 + 1;
                  if (uVar9 < uVar11) {
                    do {
                      uVar7 = (ulonglong)uVar9;
                      uVar11 = uVar9 - 1;
                      uVar9 = uVar9 + 1;
                      *(undefined8 *)(*(longlong *)(lVar2 + 0x1a8) + (ulonglong)uVar11 * 8) =
                           *(undefined8 *)(*(longlong *)(lVar2 + 0x1a8) + uVar7 * 8);
                    } while (uVar9 < *(uint *)(lVar2 + 0x1b0));
                  }
                  *(int *)(lVar2 + 0x1b0) = *(int *)(lVar2 + 0x1b0) + -1;
                }
                break;
              }
              uVar7 = (ulonglong)(iVar6 + 1U);
            } while (iVar6 + 1U < uVar11);
          }
        }
        else {
          uVar11 = *(uint *)(lVar2 + 0x1c0);
          if (uVar11 != 0) {
            uVar7 = 0;
            do {
              iVar6 = (int)uVar7;
              if (*(longlong *)(*(longlong *)(lVar2 + 0x1b8) + uVar7 * 8) == param_1) {
                if (iVar6 != -1) {
                  uVar9 = iVar6 + 1;
                  if (uVar9 < uVar11) {
                    do {
                      uVar7 = (ulonglong)uVar9;
                      uVar11 = uVar9 - 1;
                      uVar9 = uVar9 + 1;
                      *(undefined8 *)(*(longlong *)(lVar2 + 0x1b8) + (ulonglong)uVar11 * 8) =
                           *(undefined8 *)(*(longlong *)(lVar2 + 0x1b8) + uVar7 * 8);
                    } while (uVar9 < *(uint *)(lVar2 + 0x1c0));
                  }
                  *(int *)(lVar2 + 0x1c0) = *(int *)(lVar2 + 0x1c0) + -1;
                }
                break;
              }
              uVar7 = (ulonglong)(iVar6 + 1U);
            } while (iVar6 + 1U < uVar11);
          }
        }
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
      } while (uVar11 < *(uint *)(param_1 + 0x40));
    }
  }
  else {
    FUN_180040824(param_1);
  }
  return;
}

