/*
 * FUN_180143ef0 at 180143ef0
 * undefined FUN_180143ef0(void)
 * Address ranges: 180143ef0-180144223
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180143ef0(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar8 = *(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x1ac0;
  if (*(int *)(param_1 + 0x28) == 1) {
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar9 = 0;
      do {
        uVar10 = *(undefined8 *)(param_1 + 0x10);
        uVar11 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + uVar9 * 0x10);
        FUN_180221850(lVar8 + 0x1bc0);
        if (*(char *)(lVar8 + 0x1dc4) == '\0') {
LAB_180144000:
          puVar2 = *(undefined8 **)(lVar8 + 0x1da0);
          *puVar2 = uVar10;
          puVar2[1] = uVar11;
          FUN_180144228();
LAB_18014400c:
          FUN_180221bb0(lVar8 + 0x1bc0);
        }
        else {
          puVar2 = (undefined8 *)FUN_1802218b0(lVar8 + 0x1bc0,0x10);
          if (puVar2 == (undefined8 *)0x0) {
            FUN_180221bb0(lVar8 + 0x1bc0);
            thunk_FUN_1802237c0(100);
            FUN_180221850(lVar8 + 0x1bc0);
            goto LAB_180144000;
          }
          FUN_1801042e0(lVar8 + 0x1dc0);
          puVar2[1] = 0x10;
          puVar2[2] = uVar10;
          puVar7 = (undefined8 *)((longlong)puVar2 + 0x27U & 0xfffffffffffffff8);
          puVar2[3] = uVar11;
          DataMemoryBarrier(2,3);
          *puVar7 = 0;
          *puVar2 = FUN_180144228;
          *(undefined8 **)(lVar8 + 0x1c50 + (ulonglong)*(uint *)(lVar8 + 0x1dbc) * 0x28) = puVar7;
          if (*(char *)(lVar8 + 0x1dc5) == '\0') goto LAB_18014400c;
          FUN_180221bb0(lVar8 + 0x1bc0);
          thunk_FUN_180223874(*(undefined8 *)(lVar8 + 0x1c40));
        }
        lVar4 = *(longlong *)(param_1 + 8);
        if (*(char *)(param_1 + 0x31) == '\0') {
          uVar6 = *(uint *)(lVar4 + 0x1b0);
          if (uVar6 != 0) {
            uVar5 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar4 + 0x1a8) + uVar5 * 8) == param_1) {
                if ((int)uVar5 != -1) {
                  while (uVar1 = (int)uVar5 + 1, uVar1 < uVar6) {
                    *(undefined8 *)(*(longlong *)(lVar4 + 0x1a8) + uVar5 * 8) =
                         *(undefined8 *)(*(longlong *)(lVar4 + 0x1a8) + (ulonglong)uVar1 * 8);
                    uVar5 = (ulonglong)uVar1;
                    uVar6 = *(uint *)(lVar4 + 0x1b0);
                  }
                  *(int *)(lVar4 + 0x1b0) = *(int *)(lVar4 + 0x1b0) + -1;
                }
                break;
              }
              uVar1 = (int)uVar5 + 1;
              uVar5 = (ulonglong)uVar1;
            } while (uVar1 < uVar6);
          }
        }
        else {
          uVar6 = *(uint *)(lVar4 + 0x1c0);
          if (uVar6 != 0) {
            uVar5 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar4 + 0x1b8) + uVar5 * 8) == param_1) {
                if ((int)uVar5 != -1) {
                  while (uVar1 = (int)uVar5 + 1, uVar1 < uVar6) {
                    *(undefined8 *)(*(longlong *)(lVar4 + 0x1b8) + uVar5 * 8) =
                         *(undefined8 *)(*(longlong *)(lVar4 + 0x1b8) + (ulonglong)uVar1 * 8);
                    uVar5 = (ulonglong)uVar1;
                    uVar6 = *(uint *)(lVar4 + 0x1c0);
                  }
                  *(int *)(lVar4 + 0x1c0) = *(int *)(lVar4 + 0x1c0) + -1;
                }
                break;
              }
              uVar1 = (int)uVar5 + 1;
              uVar5 = (ulonglong)uVar1;
            } while (uVar1 < uVar6);
          }
        }
        uVar6 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(param_1 + 0x40));
    }
  }
  else {
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar9 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x38) + uVar9 * 0x10);
        FUN_180221850(lVar8 + 0x1bc0);
        if (*(char *)(lVar8 + 0x1dc4) == '\0') {
LAB_1801441d8:
          plVar3 = *(longlong **)(lVar8 + 0x1da0);
          *plVar3 = lVar8 + 0x2140;
          plVar3[1] = lVar4;
          FUN_180143b10();
LAB_1801441e4:
          FUN_180221bb0(lVar8 + 0x1bc0);
        }
        else {
          puVar2 = (undefined8 *)FUN_1802218b0(lVar8 + 0x1bc0,0x10);
          if (puVar2 == (undefined8 *)0x0) {
            FUN_180221bb0(lVar8 + 0x1bc0);
            thunk_FUN_1802237c0(100);
            FUN_180221850(lVar8 + 0x1bc0);
            goto LAB_1801441d8;
          }
          FUN_1801042e0(lVar8 + 0x1dc0);
          puVar2[1] = 0x10;
          puVar2[2] = lVar8 + 0x2140;
          puVar7 = (undefined8 *)((longlong)puVar2 + 0x27U & 0xfffffffffffffff8);
          puVar2[3] = lVar4;
          DataMemoryBarrier(2,3);
          *puVar7 = 0;
          *puVar2 = FUN_180143b10;
          *(undefined8 **)(lVar8 + 0x1c50 + (ulonglong)*(uint *)(lVar8 + 0x1dbc) * 0x28) = puVar7;
          if (*(char *)(lVar8 + 0x1dc5) == '\0') goto LAB_1801441e4;
          FUN_180221bb0(lVar8 + 0x1bc0);
          thunk_FUN_180223874(*(undefined8 *)(lVar8 + 0x1c40));
        }
        uVar6 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(param_1 + 0x40));
    }
    FUN_1802229d8(*(undefined8 *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}

