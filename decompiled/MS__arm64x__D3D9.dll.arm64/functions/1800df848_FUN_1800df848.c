/*
 * FUN_1800df848 at 1800df848
 * undefined FUN_1800df848(void)
 * Address ranges: 1800df848-1800dfb4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1800df848(longlong param_1,undefined8 *param_2,ulonglong param_3,uint param_4,int param_5,
             uint param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  undefined4 uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 uVar20;
  uint local_60 [2];
  longlong *local_58;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar12 = 2;
  if (param_5 != 1) {
    uVar12 = 3;
  }
  uVar9 = func_0x0001801faba0(param_1,param_3 & 0xffffffff);
  if ((uVar9 != 0xffffffff) &&
     (uVar8 = (ulonglong)uVar9, param_4 < *(uint *)(param_1 + uVar8 * 0x10 + 0x128))) {
    lVar18 = (uVar8 + 0x12) * 0x10;
    lVar6 = (ulonglong)param_4 * 8;
    if (*(int *)(lVar6 + *(longlong *)(param_1 + lVar18)) == 0) {
      lVar19 = (uVar8 + 2) * 0x10;
      thunk_FUN_180102fc0(*(undefined8 *)(*(longlong *)(param_1 + lVar19) + lVar6));
      *(undefined8 *)(*(longlong *)(param_1 + lVar19) + lVar6) = 0;
      *(undefined4 *)(lVar6 + *(longlong *)(param_1 + lVar18)) = 0;
      local_60[0] = 0;
      local_58 = (longlong *)0x0;
      plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x10) + (param_3 & 0xffffffff) * 0x28 + 0x18)
      ;
      iVar10 = (**(code **)(*plVar11 + 0x38))(plVar11,param_4,&local_58);
      if (-1 < iVar10) {
        (**(code **)(*local_58 + 0x40))(local_58,0x1c,uVar12,local_60,0);
        lVar15 = CONCAT44(0,local_60[0]) * 0x1c;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = CONCAT44(0,local_60[0]);
        if (SUB168(auVar7 * ZEXT816(0x1c),8) != 0) {
          lVar15 = -1;
        }
        lVar15 = thunk_FUN_180102f80(lVar15);
        if (lVar15 != 0) {
          *(longlong *)(*(longlong *)(param_1 + lVar19) + lVar6) = lVar15;
          iVar10 = (**(code **)(*local_58 + 0x40))(local_58,0x1c,2,local_60,lVar15);
          if (iVar10 < 0) {
            thunk_FUN_180102fc0(lVar15);
            *(undefined8 *)(*(longlong *)(param_1 + lVar19) + lVar6) = 0;
          }
          else {
            *(uint *)(lVar6 + *(longlong *)(param_1 + lVar18)) = local_60[0];
            *(undefined4 *)(*(longlong *)(param_1 + lVar18) + lVar6 + 4) = uVar12;
            lVar19 = *(longlong *)(param_1 + lVar18);
            uVar14 = 1;
            if (1 < *(uint *)(lVar6 + lVar19)) {
              do {
                uVar9 = (uint)uVar14;
                if (uVar9 != 0) {
                  piVar1 = (int *)(lVar15 + uVar14 * 0x1c);
                  uVar17 = uVar14;
LAB_1800df9e4:
                  uVar5 = (int)uVar17 - 1;
                  uVar17 = (ulonglong)uVar5;
                  if ((((*(int *)(lVar15 + uVar17 * 0x1c) != *piVar1) ||
                       (*(int *)(lVar15 + 4 + uVar17 * 0x1c) != *(int *)(lVar15 + uVar14 * 0x1c + 4)
                       )) || (*(int *)(lVar15 + 8 + uVar17 * 0x1c) !=
                              *(int *)(lVar15 + uVar14 * 0x1c + 8))) ||
                     (*(int *)(lVar15 + 0xc + uVar17 * 0x1c) != piVar1[3])) goto LAB_1800dfa2c;
                  *(int *)(lVar6 + lVar19) = *(int *)(lVar6 + lVar19) + -1;
                  lVar19 = *(longlong *)(param_1 + lVar18);
                  if (uVar9 < *(uint *)(lVar6 + lVar19)) {
                    do {
                      uVar5 = (int)uVar14 + 1;
                      puVar2 = (undefined8 *)(lVar15 + (ulonglong)uVar5 * 0x1c);
                      uVar20 = *puVar2;
                      puVar3 = (undefined8 *)(lVar15 + uVar14 * 0x1c);
                      uVar16 = puVar2[2];
                      puVar3[1] = puVar2[1];
                      *puVar3 = uVar20;
                      puVar3[2] = uVar16;
                      *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar2 + 3);
                      lVar19 = *(longlong *)(param_1 + lVar18);
                      uVar14 = (ulonglong)uVar5;
                    } while (uVar5 < *(uint *)(lVar6 + lVar19));
                  }
                  uVar14 = (ulonglong)(uVar9 - 1);
                }
LAB_1800dfaa0:
                uVar9 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar9;
              } while (uVar9 < *(uint *)(lVar6 + lVar19));
            }
          }
        }
        (**(code **)(*local_58 + 0x10))();
      }
    }
    if (param_6 < *(uint *)(lVar6 + *(longlong *)(param_1 + lVar18))) {
      puVar4 = (undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + (uVar8 + 2) * 0x10) + lVar6) +
               ((ulonglong)param_6 * 8 - (ulonglong)param_6) * 4);
      uVar12 = puVar4[1];
      *(undefined4 *)param_2 = *puVar4;
      *(undefined4 *)((longlong)param_2 + 4) = uVar12;
      *(undefined4 *)((longlong)param_2 + 0x14) = 0x20;
      uVar9 = puVar4[2];
      uVar5 = puVar4[3];
      *(uint *)(param_2 + 1) = uVar9;
      *(uint *)((longlong)param_2 + 0xc) = uVar5;
      if (uVar5 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        if (uVar5 != 0) {
          uVar13 = uVar9 / uVar5;
        }
      }
      *(uint *)(param_2 + 2) = uVar13;
    }
  }
  return param_2;
LAB_1800dfa2c:
  if (uVar5 == 0) goto LAB_1800dfaa0;
  goto LAB_1800df9e4;
}

