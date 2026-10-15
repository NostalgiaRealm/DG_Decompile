/*
 * FUN_180055f94 at 180055f94
 * ulonglong __fastcall FUN_180055f94(longlong param_1, uint param_2, uint param_3, undefined4 param_4)
 * Address ranges: 180055f94-1800561c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180055f94(longlong param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  ulonglong in_RAX;
  undefined8 uVar11;
  LPVOID pvVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong *local_res8;
  uint local_res10 [2];
  
  uVar19 = (ulonglong)param_3;
  if (*(uint *)(param_1 + 0x328) != 0) {
    uVar14 = 0;
    do {
      if (*(uint *)(*(longlong *)(param_1 + 800) + uVar14 * 4) == param_2) {
        if ((int)uVar14 != -1) {
          lVar15 = uVar14 + 2;
          FUN_18005dbc0(*(LPVOID *)(*(longlong *)(param_1 + lVar15 * 0x10) + uVar19 * 8));
          lVar20 = uVar14 + 0x12;
          *(undefined8 *)(*(longlong *)(param_1 + lVar15 * 0x10) + uVar19 * 8) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + lVar20 * 0x10) + uVar19 * 8) = 0;
          local_res10[0] = 0;
          local_res8 = (longlong *)0x0;
          plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x18 + (ulonglong)param_2 * 0x28);
          iVar10 = (**(code **)(*plVar5 + 0x38))(plVar5,uVar19,&local_res8);
          if (-1 < iVar10) {
            (**(code **)(*local_res8 + 0x40))(local_res8,0x1c,param_4,local_res10,0);
            uVar11 = SUB168(ZEXT416(0x1c) * ZEXT416(local_res10[0]),0);
            if (SUB168(ZEXT416(0x1c) * ZEXT416(local_res10[0]),8) != 0) {
              uVar11 = 0xffffffffffffffff;
            }
            pvVar12 = (LPVOID)thunk_FUN_18005db9c(uVar11);
            if (pvVar12 != (LPVOID)0x0) {
              *(LPVOID *)(*(longlong *)(param_1 + lVar15 * 0x10) + uVar19 * 8) = pvVar12;
              iVar10 = (**(code **)(*local_res8 + 0x40))(local_res8,0x1c,2,local_res10,pvVar12);
              if (iVar10 < 0) {
                FUN_18005dbc0(pvVar12);
                *(undefined8 *)(*(longlong *)(param_1 + lVar15 * 0x10) + uVar19 * 8) = 0;
              }
              else {
                uVar13 = 1;
                *(uint *)(*(longlong *)(param_1 + lVar20 * 0x10) + uVar19 * 8) = local_res10[0];
                *(undefined4 *)(*(longlong *)(param_1 + lVar20 * 0x10) + 4 + uVar19 * 8) = param_4;
                lVar15 = *(longlong *)(param_1 + lVar20 * 0x10);
                if (1 < *(uint *)(lVar15 + uVar19 * 8)) {
                  do {
                    uVar14 = (ulonglong)uVar13;
                    if (uVar13 != 0) {
                      lVar18 = (ulonglong)uVar13 * 0x1c;
LAB_18005610e:
                      uVar16 = (int)uVar14 - 1;
                      uVar14 = (ulonglong)uVar16;
                      lVar17 = uVar14 * 0x1c;
                      if ((((*(int *)((longlong)pvVar12 + lVar17) !=
                             *(int *)((longlong)pvVar12 + lVar18)) ||
                           (*(int *)((longlong)pvVar12 + lVar17 + 4) !=
                            *(int *)((longlong)pvVar12 + lVar18 + 4))) ||
                          (*(int *)((longlong)pvVar12 + lVar17 + 8) !=
                           *(int *)((longlong)pvVar12 + lVar18 + 8))) ||
                         (*(int *)((longlong)pvVar12 + lVar17 + 0xc) !=
                          *(int *)((longlong)pvVar12 + lVar18 + 0xc))) goto LAB_180056140;
                      piVar1 = (int *)(lVar15 + uVar19 * 8);
                      *piVar1 = *piVar1 + -1;
                      lVar15 = *(longlong *)(param_1 + lVar20 * 0x10);
                      uVar16 = uVar13;
                      if (uVar13 < *(uint *)(lVar15 + uVar19 * 8)) {
                        do {
                          uVar14 = (ulonglong)uVar16;
                          uVar16 = uVar16 + 1;
                          puVar2 = (undefined4 *)((ulonglong)uVar16 * 0x1c + (longlong)pvVar12);
                          uVar6 = puVar2[1];
                          uVar7 = puVar2[2];
                          uVar8 = puVar2[3];
                          puVar4 = (undefined8 *)
                                   ((ulonglong)uVar16 * 0x1c + 0xc + (longlong)pvVar12);
                          uVar11 = *puVar4;
                          uVar9 = puVar4[1];
                          puVar3 = (undefined4 *)(uVar14 * 0x1c + (longlong)pvVar12);
                          *puVar3 = *puVar2;
                          puVar3[1] = uVar6;
                          puVar3[2] = uVar7;
                          puVar3[3] = uVar8;
                          puVar4 = (undefined8 *)(uVar14 * 0x1c + 0xc + (longlong)pvVar12);
                          *puVar4 = uVar11;
                          puVar4[1] = uVar9;
                          lVar15 = *(longlong *)(param_1 + lVar20 * 0x10);
                        } while (uVar16 < *(uint *)(lVar15 + uVar19 * 8));
                      }
                      uVar13 = uVar13 - 1;
                    }
LAB_18005618d:
                    uVar13 = uVar13 + 1;
                  } while (uVar13 < *(uint *)(lVar15 + uVar19 * 8));
                }
              }
            }
            (**(code **)(*local_res8 + 0x10))();
          }
          lVar15 = *(longlong *)(param_1 + lVar20 * 0x10);
          return CONCAT71((int7)((ulonglong)lVar15 >> 8),*(int *)(lVar15 + uVar19 * 8) != 0);
        }
        break;
      }
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
    } while (uVar13 < *(uint *)(param_1 + 0x328));
  }
  return in_RAX & 0xffffffffffffff00;
LAB_180056140:
  if (uVar16 == 0) goto LAB_18005618d;
  goto LAB_18005610e;
}

