/*
 * FUN_1004dde8 at 1004dde8
 * undefined FUN_1004dde8(void)
 * Address ranges: 1004dde8-1004e257
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004dde8(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  code *extraout_w11;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_60 [16];
  undefined1 local_50 [16];
  
  piVar1 = (int *)(param_1 + 4);
  iVar8 = *piVar1;
  iVar14 = -0x7789fdb8;
  piVar2 = (int *)(iVar8 + 0xb0);
  puVar3 = (uint *)(iVar8 + 0xb8);
  if (*puVar3 != 0) {
    local_50._0_8_ = 0;
    local_50._8_8_ = 0;
    auVar22 = ZEXT816(0);
    if (param_2 != (int *)0x0) {
      auVar22 = FUN_10054830(param_1,param_2);
    }
    if (*puVar3 == 1) {
      if (((param_2 == (int *)0x0) || (*param_2 == param_2[2])) ||
         (bVar11 = false, param_2[1] == param_2[3])) {
        bVar11 = true;
      }
      if (*(int *)(*(int *)(iVar8 + 0xb4) + 4) == -1 || bVar11) {
        auVar22 = *(undefined1 (*) [16])(*(int *)(iVar8 + 0xb4) + 8);
      }
    }
    iVar14 = -0x7789ff6a;
    local_50 = auVar22;
    iVar12 = (*(code *)PTR_FUN_100ba248)(local_50);
    if (iVar12 == 0) {
      iVar14 = -0x7789fdb8;
      uVar21 = 0;
      if (*puVar3 != 0) {
        do {
          piVar4 = (int *)(*(int *)(iVar8 + 0xb4) + uVar21 * 0x18);
          if (*piVar4 == param_1) {
            iVar12 = (*(code *)PTR_FUN_100ba1d8)(piVar4 + 2,local_50);
            if (iVar12 != 0) break;
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 < *puVar3);
      }
      if ((uVar21 != *puVar3) && (*piVar2 != 0)) {
        iVar14 = -0x7fffbffb;
        iVar12 = (*(code *)PTR_FUN_100ba018)(local_50);
        if (iVar12 != 0) {
          iVar13 = (*(code *)PTR_FUN_100ba004)(iVar12,*piVar2,iVar12,1);
          if ((iVar13 != 0) && (iVar14 = -0x7789ff6a, iVar13 == 2)) {
            iVar13 = (*(code *)PTR_FUN_100ba004)(*piVar2,*piVar2,iVar12,4);
            iVar14 = -0x7fffbffb;
            if ((iVar13 != 0) && (iVar14 = 0, iVar13 == 1)) {
              FUN_100a9d50(auStack_60);
              iVar14 = FUN_1004e9d0(param_1);
              if (DAT_100c291c != 0) {
                puVar17 = (undefined4 *)(*(int *)(param_1 + 0xfc) + 0xc);
                uVar15 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
                (*extraout_w11)(uVar15,*puVar17,param_1);
              }
              (*(code *)PTR_FUN_100ba020)(*piVar2);
              *piVar2 = 0;
              *(undefined1 *)(param_1 + 9) = 0;
              piVar2 = (int *)(param_1 + 0x1dc);
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
                if (bVar11) {
                  *piVar2 = *piVar2 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              DataMemoryBarrier(2,3);
              uVar16 = FUN_1004d790(param_1 + 0x150);
              if ((uVar16 & 1) != 0) {
                *(uint *)(*piVar1 + 200) = *(uint *)(*piVar1 + 200) | 8;
                for (iVar13 = param_1; iVar9 = iVar13, *(int *)(iVar13 + 0x10c) != 0;
                    iVar13 = *(int *)(iVar13 + 0x10c)) {
                }
                do {
                  iVar19 = *piVar1;
                  uVar18 = *(uint *)(iVar19 + 200);
                  if ((uVar18 >> 3 & 1) == 0) break;
                  if ((*(uint *)(iVar9 + 0x1bc) & 0xfe00) != 0x200) {
                    uVar6 = 0xfffffff7;
                    if (*(int *)(*(int *)(iVar9 + 4) + 0xc0) == 1) {
                      uVar6 = 0xffffffff;
                    }
                    *(uint *)(iVar19 + 200) = uVar6 & uVar18;
                    iVar19 = *piVar1;
                  }
                  piVar2 = (int *)(iVar9 + 0x110);
                  iVar9 = *piVar2;
                } while (*piVar2 != 0);
                uVar18 = 0;
                do {
                  if ((*(uint *)(iVar19 + 200) >> 3 & 1) == 0) break;
                  iVar20 = iVar19;
                  for (iVar9 = *(int *)(iVar13 + uVar18 * 4 + 0x120); iVar9 != 0;
                      iVar9 = *(int *)(iVar9 + 0x110)) {
                    uVar6 = *(uint *)(iVar20 + 200);
                    if ((uVar6 >> 3 & 1) == 0) break;
                    if ((*(uint *)(iVar9 + 0x1bc) & 0xfe00) == 0x200) {
                      iVar19 = *piVar1;
                    }
                    else {
                      uVar7 = 0xfffffff7;
                      if (*(int *)(*(int *)(iVar9 + 4) + 0xc0) == 1) {
                        uVar7 = 0xffffffff;
                      }
                      *(uint *)(iVar20 + 200) = uVar7 & uVar6;
                      iVar20 = *piVar1;
                      iVar19 = iVar20;
                    }
                  }
                  uVar18 = uVar18 + 1;
                } while (uVar18 < 5);
              }
              FUN_1004fc90(param_1,1);
              FUN_100a9ca0(auStack_60);
            }
          }
          (*(code *)PTR_FUN_100ba020)(iVar12);
          if (iVar14 == 0) {
            puVar3 = (uint *)(iVar8 + 0xb8);
            uVar18 = *puVar3;
            if (uVar21 < uVar18) {
              uVar21 = uVar21 + 1;
              if (uVar21 < uVar18) {
                do {
                  uVar6 = uVar21 + 1;
                  puVar5 = (undefined8 *)(*(int *)(iVar8 + 0xb4) + uVar21 * 0x18);
                  puVar5[-2] = puVar5[1];
                  puVar5[-3] = *puVar5;
                  puVar5[-1] = puVar5[2];
                  uVar18 = *puVar3;
                  uVar21 = uVar6;
                } while (uVar6 < uVar18);
              }
              *puVar3 = uVar18 - 1;
            }
          }
        }
      }
    }
  }
  return iVar14;
}

