/*
 * FUN_140011c30 at 140011c30
 * ulonglong __fastcall FUN_140011c30(longlong param_1, uint param_2, uint param_3, undefined4 param_4)
 * Address ranges: 140011c30-140011e94
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_140011c30(longlong param_1,uint param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  ulonglong in_RAX;
  undefined8 uVar12;
  LPVOID pvVar13;
  longlong lVar14;
  uint uVar15;
  longlong *plVar16;
  uint uVar17;
  int *piVar18;
  longlong lVar19;
  longlong *local_res8;
  uint local_res10 [2];
  
  if (*(uint *)(param_1 + 0x328) != 0) {
    in_RAX = 0;
    do {
      if (*(uint *)(*(longlong *)(param_1 + 800) + in_RAX * 4) == param_2) {
        if ((int)in_RAX != -1) {
          lVar3 = (ulonglong)param_3 * 8;
          lVar19 = in_RAX + 2;
          FUN_140024260(*(LPVOID *)(*(longlong *)(param_1 + lVar19 * 0x10) + lVar3));
          plVar16 = (longlong *)((in_RAX + 0x12) * 0x10 + param_1);
          *(undefined8 *)(lVar3 + *(longlong *)(param_1 + lVar19 * 0x10)) = 0;
          *(undefined4 *)(lVar3 + *plVar16) = 0;
          local_res10[0] = 0;
          local_res8 = (longlong *)0x0;
          plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 8 + (ulonglong)param_2 * 0x28);
          iVar11 = (**(code **)(*plVar5 + 0x38))(plVar5,(ulonglong)param_3,&local_res8);
          if (-1 < iVar11) {
            (**(code **)(*local_res8 + 0x40))(local_res8,0x1c,param_4,local_res10,0);
            uVar12 = SUB168(ZEXT816(0x1c) * ZEXT416(local_res10[0]),0);
            if (SUB168(ZEXT816(0x1c) * ZEXT416(local_res10[0]),8) != 0) {
              uVar12 = 0xffffffffffffffff;
            }
            pvVar13 = (LPVOID)thunk_FUN_14002423c(uVar12);
            if (pvVar13 != (LPVOID)0x0) {
              *(LPVOID *)(lVar3 + *(longlong *)(param_1 + lVar19 * 0x10)) = pvVar13;
              iVar11 = (**(code **)(*local_res8 + 0x40))(local_res8,0x1c,2,local_res10,pvVar13);
              if (iVar11 < 0) {
                FUN_140024260(pvVar13);
                *(undefined8 *)(lVar3 + *(longlong *)(param_1 + lVar19 * 0x10)) = 0;
              }
              else {
                uVar10 = 1;
                *(uint *)(lVar3 + *plVar16) = local_res10[0];
                *(undefined4 *)(*plVar16 + 4 + lVar3) = param_4;
                lVar19 = *plVar16;
                if (1 < *(uint *)(lVar19 + lVar3)) {
                  do {
                    if (uVar10 != 0) {
                      piVar18 = (int *)((ulonglong)uVar10 * 0x1c + (longlong)pvVar13);
                      uVar15 = uVar10;
LAB_140011dc0:
                      uVar15 = uVar15 - 1;
                      lVar14 = (ulonglong)uVar15 * 0x1c;
                      if ((((*(int *)((longlong)pvVar13 + lVar14) != *piVar18) ||
                           (*(int *)((longlong)pvVar13 + lVar14 + 4) != piVar18[1])) ||
                          (*(int *)((longlong)pvVar13 + lVar14 + 8) != piVar18[2])) ||
                         (*(int *)((longlong)pvVar13 + lVar14 + 0xc) != piVar18[3]))
                      goto LAB_140011dec;
                      *(int *)(lVar19 + lVar3) = *(int *)(lVar19 + lVar3) + -1;
                      lVar19 = *plVar16;
                      uVar15 = uVar10;
                      if (uVar10 < *(uint *)(lVar19 + lVar3)) {
                        do {
                          uVar17 = uVar15 + 1;
                          puVar1 = (undefined4 *)((ulonglong)uVar17 * 0x1c + (longlong)pvVar13);
                          uVar6 = puVar1[1];
                          uVar7 = puVar1[2];
                          uVar8 = puVar1[3];
                          puVar4 = (undefined8 *)
                                   ((ulonglong)uVar17 * 0x1c + 0xc + (longlong)pvVar13);
                          uVar12 = *puVar4;
                          uVar9 = puVar4[1];
                          puVar2 = (undefined4 *)((ulonglong)uVar15 * 0x1c + (longlong)pvVar13);
                          *puVar2 = *puVar1;
                          puVar2[1] = uVar6;
                          puVar2[2] = uVar7;
                          puVar2[3] = uVar8;
                          puVar4 = (undefined8 *)
                                   ((ulonglong)uVar15 * 0x1c + 0xc + (longlong)pvVar13);
                          *puVar4 = uVar12;
                          puVar4[1] = uVar9;
                          lVar19 = *plVar16;
                          uVar15 = uVar17;
                        } while (uVar17 < *(uint *)(lVar19 + lVar3));
                      }
                      uVar10 = uVar10 - 1;
                    }
LAB_140011e42:
                    uVar10 = uVar10 + 1;
                  } while (uVar10 < *(uint *)(lVar19 + lVar3));
                }
              }
            }
            (**(code **)(*local_res8 + 0x10))();
          }
          return CONCAT71((int7)((ulonglong)*plVar16 >> 8),*(int *)(lVar3 + *plVar16) != 0);
        }
        break;
      }
      uVar10 = (int)in_RAX + 1;
      in_RAX = (ulonglong)uVar10;
    } while (uVar10 < *(uint *)(param_1 + 0x328));
  }
  return in_RAX & 0xffffffffffffff00;
LAB_140011dec:
  if (uVar15 == 0) goto LAB_140011e42;
  goto LAB_140011dc0;
}

