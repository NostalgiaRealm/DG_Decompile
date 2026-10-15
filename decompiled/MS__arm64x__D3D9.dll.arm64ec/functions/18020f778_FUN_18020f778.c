/*
 * FUN_18020f778 at 18020f778
 * undefined FUN_18020f778(void)
 * Address ranges: 18020f778-18020f9c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18020f778(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  code *extraout_x11;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  int iVar17;
  ulonglong uVar18;
  
  puVar7 = __hybrid_os_arm64x_dispatch_icall;
  if (*(int *)(param_1 + 0x80) != 0) {
    uVar14 = 0;
    if (*(int *)(param_1 + 0x80) == 0) {
      puVar15 = (undefined8 *)&DAT_00000008;
      goto LAB_18020f7e0;
    }
    do {
      puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + uVar14 * 0x18 + 0x10);
LAB_18020f7e0:
      (*(code *)puVar7)();
      uVar8 = (*extraout_x11)();
      plVar16 = (longlong *)*puVar15;
      uVar18 = 0xffffffff;
      uVar1 = *(uint *)(plVar16 + 2);
      iVar6 = param_2;
      while (uVar1 != 0xffffffff) {
        plVar2 = (longlong *)(*plVar16 + (ulonglong)uVar1 * 0x20);
        iVar17 = (int)plVar2[3];
        if (iVar17 == 0 || (iVar17 == 0 || iVar6 == 0)) break;
        if (uVar8 < (ulonglong)plVar2[2]) {
          uVar4 = *(uint *)((longlong)plVar2 + 0x1c);
          uVar18 = (ulonglong)uVar1;
        }
        else {
          if ((iVar17 == param_3) && (param_4[1] == 0)) {
            uVar4 = *(uint *)(param_1 + 0x68);
            if (uVar4 != 0) {
              uVar11 = plVar2[1];
              uVar12 = 0;
              uVar10 = uVar4;
              do {
                uVar5 = uVar10 + uVar12 >> 1;
                uVar13 = (ulonglong)uVar5;
                uVar9 = *(ulonglong *)(*(longlong *)(param_1 + 0x60) + uVar13 * 0x48);
                if (uVar9 <= uVar11) {
                  if (uVar11 <= uVar9) break;
                  uVar12 = uVar5 + 1;
                  uVar13 = (ulonglong)(uVar5 + 1);
                  uVar5 = uVar10;
                }
                uVar10 = uVar5;
              } while (uVar10 != uVar12);
              if ((((uint)uVar13 != uVar4) &&
                  (puVar3 = (ulonglong *)(*(longlong *)(param_1 + 0x60) + uVar13 * 0x48),
                  *puVar3 == uVar11)) && (puVar3 + 2 != (ulonglong *)0x0)) {
                *param_4 = (puVar3[3] - uVar11) + *plVar2;
                param_4[1] = puVar3[2];
                param_4[2] = *plVar2;
                param_4[3] = plVar2[1];
              }
            }
          }
          else {
            FUN_18020f450(param_1,iVar17,*plVar2,plVar2[1]);
          }
          uVar4 = *(uint *)((longlong)plVar2 + 0x1c);
          *(undefined4 *)(plVar2 + 3) = 0;
          iVar17 = (int)uVar18;
          if ((uVar4 == 0xffffffff) || (*(int *)(*plVar16 + (ulonglong)uVar4 * 0x20 + 0x18) == 0)) {
            if (iVar17 != -1) {
              *(int *)((longlong)plVar16 + 0x14) = iVar17;
            }
          }
          else {
            if (iVar17 == -1) {
              *(uint *)(plVar16 + 2) = uVar4;
            }
            else {
              *(uint *)(*plVar16 + uVar18 * 0x20 + 0x1c) = uVar4;
            }
            *(undefined4 *)((longlong)plVar2 + 0x1c) =
                 *(undefined4 *)
                  (*plVar16 + (ulonglong)*(uint *)((longlong)plVar16 + 0x14) * 0x20 + 0x1c);
            *(uint *)(*plVar16 + (ulonglong)*(uint *)((longlong)plVar16 + 0x14) * 0x20 + 0x1c) =
                 uVar1;
          }
        }
        iVar6 = iVar6 + -1;
        uVar1 = uVar4;
      }
      uVar1 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x80));
  }
  return;
}

