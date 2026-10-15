/*
 * FUN_1800f01d0 at 1800f01d0
 * undefined FUN_1800f01d0(void)
 * Address ranges: 1800f01d0-1800f03fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f01d0(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  if (*(int *)(param_1 + 0x80) != 0) {
    uVar19 = 0;
    if (*(int *)(param_1 + 0x80) == 0) {
      puVar9 = (undefined8 *)0x0;
      puVar14 = (undefined8 *)&DAT_00000008;
      goto LAB_1800f0234;
    }
    do {
      lVar2 = *(longlong *)(param_1 + 0x78) + uVar19 * 0x18;
      puVar9 = (undefined8 *)(lVar2 + 8);
      puVar14 = (undefined8 *)(lVar2 + 0x10);
LAB_1800f0234:
      uVar7 = (**(code **)(*(longlong *)*puVar9 + 0x40))();
      plVar15 = (longlong *)*puVar14;
      uVar18 = 0xffffffff;
      iVar16 = param_2;
      uVar1 = *(uint *)(plVar15 + 2);
      while (uVar1 != 0xffffffff) {
        plVar3 = (longlong *)(*plVar15 + (ulonglong)uVar1 * 0x20);
        iVar17 = (int)plVar3[3];
        if (iVar17 == 0 || (iVar17 == 0 || iVar16 == 0)) break;
        if (uVar7 < (ulonglong)plVar3[2]) {
          uVar5 = *(uint *)((longlong)plVar3 + 0x1c);
          uVar18 = (ulonglong)uVar1;
        }
        else {
          if ((iVar17 == param_3) && (param_4[1] == 0)) {
            uVar5 = *(uint *)(param_1 + 0x68);
            if (uVar5 != 0) {
              uVar10 = plVar3[1];
              uVar11 = 0;
              uVar8 = uVar5;
              do {
                uVar6 = uVar8 + uVar11 >> 1;
                uVar12 = (ulonglong)uVar6;
                uVar13 = *(ulonglong *)(*(longlong *)(param_1 + 0x60) + uVar12 * 0x48);
                if (uVar13 <= uVar10) {
                  if (uVar10 <= uVar13) break;
                  uVar11 = uVar6 + 1;
                  uVar12 = (ulonglong)(uVar6 + 1);
                  uVar6 = uVar8;
                }
                uVar8 = uVar6;
              } while (uVar8 != uVar11);
              if ((((uint)uVar12 != uVar5) &&
                  (puVar4 = (ulonglong *)(*(longlong *)(param_1 + 0x60) + uVar12 * 0x48),
                  *puVar4 == uVar10)) && (puVar4 + 2 != (ulonglong *)0x0)) {
                *param_4 = (puVar4[3] - uVar10) + *plVar3;
                param_4[1] = puVar4[2];
                param_4[2] = *plVar3;
                param_4[3] = plVar3[1];
              }
            }
          }
          else {
            FUN_1800efec0(param_1,iVar17,*plVar3,plVar3[1]);
          }
          uVar5 = *(uint *)((longlong)plVar3 + 0x1c);
          *(undefined4 *)(plVar3 + 3) = 0;
          iVar17 = (int)uVar18;
          if ((uVar5 == 0xffffffff) || (*(int *)(*plVar15 + (ulonglong)uVar5 * 0x20 + 0x18) == 0)) {
            if (iVar17 != -1) {
              *(int *)((longlong)plVar15 + 0x14) = iVar17;
            }
          }
          else {
            if (iVar17 == -1) {
              *(uint *)(plVar15 + 2) = uVar5;
            }
            else {
              *(uint *)(*plVar15 + uVar18 * 0x20 + 0x1c) = uVar5;
            }
            *(undefined4 *)((longlong)plVar3 + 0x1c) =
                 *(undefined4 *)
                  (*plVar15 + (ulonglong)*(uint *)((longlong)plVar15 + 0x14) * 0x20 + 0x1c);
            *(uint *)(*plVar15 + (ulonglong)*(uint *)((longlong)plVar15 + 0x14) * 0x20 + 0x1c) =
                 uVar1;
          }
        }
        iVar16 = iVar16 + -1;
        uVar1 = uVar5;
      }
      uVar1 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x80));
  }
  return;
}

