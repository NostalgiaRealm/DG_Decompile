/*
 * FUN_1800df578 at 1800df578
 * undefined FUN_1800df578(void)
 * Address ranges: 1800df578-1800df847
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800df578(longlong param_1,ulonglong param_2,uint param_3,int param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 uVar19;
  uint local_50 [2];
  longlong *local_48;
  
  param_2 = param_2 & 0xffffffff;
  iVar11 = 2;
  if (param_4 != 1) {
    iVar11 = 3;
  }
  uVar7 = func_0x0001801faba0(param_1,param_2);
  if ((uVar7 == 0xffffffff) || (*(uint *)(param_1 + (ulonglong)uVar7 * 0x10 + 0x128) <= param_3)) {
    uVar9 = 0;
  }
  else {
    lVar17 = ((ulonglong)uVar7 + 0x12) * 0x10;
    lVar12 = *(longlong *)(param_1 + lVar17);
    lVar5 = (ulonglong)param_3 * 8;
    if (((*(int *)(lVar12 + lVar5) == 0) || (*(int *)(lVar12 + lVar5 + 4) != iVar11)) &&
       (uVar7 = func_0x0001801faba0(param_1,param_2), uVar7 != 0xffffffff)) {
      lVar18 = ((ulonglong)uVar7 + 2) * 0x10;
      thunk_FUN_180102fc0(*(undefined8 *)(*(longlong *)(param_1 + lVar18) + lVar5));
      *(undefined8 *)(*(longlong *)(param_1 + lVar18) + lVar5) = 0;
      lVar12 = ((ulonglong)uVar7 + 0x12) * 0x10;
      *(undefined4 *)(lVar5 + *(longlong *)(param_1 + lVar12)) = 0;
      local_50[0] = 0;
      local_48 = (longlong *)0x0;
      plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x10) + param_2 * 0x28 + 0x18);
      iVar8 = (**(code **)(*plVar10 + 0x38))(plVar10,param_3,&local_48);
      if (-1 < iVar8) {
        (**(code **)(*local_48 + 0x40))(local_48,0x1c,iVar11,local_50,0);
        lVar14 = CONCAT44(0,local_50[0]) * 0x1c;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = CONCAT44(0,local_50[0]);
        if (SUB168(auVar6 * ZEXT816(0x1c),8) != 0) {
          lVar14 = -1;
        }
        lVar14 = thunk_FUN_180102f80(lVar14);
        if (lVar14 != 0) {
          *(longlong *)(*(longlong *)(param_1 + lVar18) + lVar5) = lVar14;
          iVar8 = (**(code **)(*local_48 + 0x40))(local_48,0x1c,2,local_50,lVar14);
          if (iVar8 < 0) {
            thunk_FUN_180102fc0(lVar14);
            *(undefined8 *)(*(longlong *)(param_1 + lVar18) + lVar5) = 0;
          }
          else {
            *(uint *)(lVar5 + *(longlong *)(param_1 + lVar12)) = local_50[0];
            *(int *)(*(longlong *)(param_1 + lVar12) + lVar5 + 4) = iVar11;
            lVar18 = *(longlong *)(param_1 + lVar12);
            uVar13 = 1;
            if (1 < *(uint *)(lVar5 + lVar18)) {
              do {
                uVar7 = (uint)uVar13;
                if (uVar7 != 0) {
                  piVar1 = (int *)(lVar14 + uVar13 * 0x1c);
                  uVar16 = uVar13;
LAB_1800df730:
                  uVar4 = (int)uVar16 - 1;
                  uVar16 = (ulonglong)uVar4;
                  if (((*(int *)(lVar14 + uVar16 * 0x1c) != *piVar1) ||
                      (*(int *)(lVar14 + 4 + uVar16 * 0x1c) != *(int *)(lVar14 + uVar13 * 0x1c + 4))
                      ) || ((*(int *)(lVar14 + 8 + uVar16 * 0x1c) !=
                             *(int *)(lVar14 + uVar13 * 0x1c + 8) ||
                            (*(int *)(lVar14 + 0xc + uVar16 * 0x1c) != piVar1[3]))))
                  goto LAB_1800df778;
                  *(int *)(lVar5 + lVar18) = *(int *)(lVar5 + lVar18) + -1;
                  lVar18 = *(longlong *)(param_1 + lVar12);
                  if (uVar7 < *(uint *)(lVar5 + lVar18)) {
                    do {
                      uVar4 = (int)uVar13 + 1;
                      puVar2 = (undefined8 *)(lVar14 + (ulonglong)uVar4 * 0x1c);
                      uVar19 = *puVar2;
                      puVar3 = (undefined8 *)(lVar14 + uVar13 * 0x1c);
                      uVar15 = puVar2[2];
                      puVar3[1] = puVar2[1];
                      *puVar3 = uVar19;
                      puVar3[2] = uVar15;
                      *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar2 + 3);
                      lVar18 = *(longlong *)(param_1 + lVar12);
                      uVar13 = (ulonglong)uVar4;
                    } while (uVar4 < *(uint *)(lVar5 + lVar18));
                  }
                  uVar13 = (ulonglong)(uVar7 - 1);
                }
LAB_1800df7ec:
                uVar7 = (int)uVar13 + 1;
                uVar13 = (ulonglong)uVar7;
              } while (uVar7 < *(uint *)(lVar5 + lVar18));
            }
          }
        }
        (**(code **)(*local_48 + 0x10))();
      }
    }
    uVar9 = *(undefined4 *)(lVar5 + *(longlong *)(param_1 + lVar17));
  }
  return uVar9;
LAB_1800df778:
  if (uVar4 == 0) goto LAB_1800df7ec;
  goto LAB_1800df730;
}

