/*
 * FUN_100da390 at 100da390
 * undefined FUN_100da390(void)
 * Address ranges: 100da390-100dab97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100da390(int param_1,int param_2,int param_3)

{
  int *piVar1;
  char *pcVar2;
  short *psVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  uint uVar19;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  undefined8 uVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  undefined1 auVar24 [16];
  undefined1 local_70;
  int local_54;
  int *local_50;
  int *local_4c;
  int local_48;
  int iStack_44;
  
  local_70 = 1;
  if (param_2 != 0) {
    piVar1 = (int *)(param_2 + 8);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    DataMemoryBarrier(2,3);
  }
  pcVar9 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(int *)(param_1 + 0xc288) != 0) {
    iVar10 = FUN_100e5650(param_1 + 0x6718,*(int *)(param_1 + 0xc288));
    if (iVar10 != 0) {
      pcVar2 = (char *)(param_1 + 0x11);
      if ((*pcVar2 == '\0') || (*(char *)(*(int *)(iVar10 + 8) + 0x44e) != '\0')) {
        bVar8 = true;
      }
      else {
        bVar8 = false;
        FUN_100d4440(param_1);
      }
      psVar3 = (short *)(iVar10 + 0xc);
      if (bVar8) {
        iVar14 = 0;
        if (*psVar3 != -1) {
          local_50 = (int *)(param_1 + 0x12ac);
          local_54 = iVar10 + 0xe;
          local_4c = (int *)(param_1 + 0x6698);
          do {
            uVar4 = psVar3[iVar14 * 2];
            uVar5 = *(ushort *)(local_54 + iVar14 * 4);
            piVar1 = local_50 + (uint)uVar4 * 4;
            puVar16 = (undefined8 *)(param_1 + (uVar4 + 0x6ff) * 0x10);
            uVar22 = (uint)uVar4;
            uVar6 = uVar5 - uVar22 & 0x3fffffff;
            uVar19 = 0;
            if (uVar6 != 0) {
              do {
                uVar20 = *(undefined8 *)piVar1;
                uVar19 = uVar19 + 1;
                piVar1 = piVar1 + 2;
                *puVar16 = uVar20;
                puVar16 = puVar16 + 1;
              } while (uVar19 < uVar6 << 1);
            }
            uVar19 = *(uint *)(param_1 + 0x6690);
            uVar6 = *(uint *)(param_1 + 0x6694);
            iVar11 = *local_4c;
            local_48 = param_1;
            iStack_44 = iVar10;
            if (iVar11 == 1) {
              uVar21 = (uint)uVar5;
              if (uVar19 < uVar6) {
                if (uVar6 < uVar22 || uVar21 < uVar19) {
                  iVar11 = 1;
                  goto LAB_100da5bc;
                }
                if (uVar21 < uVar6) {
                  uVar21 = uVar6;
                }
                if (uVar19 < uVar22) {
                  uVar22 = uVar19;
                }
              }
            }
            else {
              if (uVar19 < uVar6) {
LAB_100da5bc:
                FUN_100d43c0(param_1,iVar11,uVar19,uVar6);
              }
              uVar21 = (uint)uVar5;
              *(int *)(param_1 + 0x6698) = 1;
              uVar22 = (uint)uVar4;
            }
            iVar14 = iVar14 + 1;
            *(uint *)(param_1 + 0x6690) = uVar22;
            *(uint *)(param_1 + 0x6694) = uVar21;
          } while (psVar3[iVar14 * 2] != -1);
        }
      }
      else {
        iVar14 = 0;
        if (*psVar3 != -1) {
          do {
            uVar4 = psVar3[iVar14 * 2];
            puVar16 = (undefined8 *)(param_1 + 0x12ac + (uint)uVar4 * 0x10);
            puVar17 = (undefined8 *)(param_1 + (uVar4 + 0x6ff) * 0x10);
            uVar6 = (uint)*(ushort *)(iVar10 + 0xe + iVar14 * 4) - (uint)uVar4 & 0x3fffffff;
            uVar19 = 0;
            if (uVar6 != 0) {
              do {
                uVar20 = *puVar16;
                uVar19 = uVar19 + 1;
                puVar16 = puVar16 + 1;
                *puVar17 = uVar20;
                puVar17 = puVar17 + 1;
              } while (uVar19 < uVar6 << 1);
            }
            iVar14 = iVar14 + 1;
          } while (psVar3[iVar14 * 2] != -1);
        }
      }
      psVar3 = (short *)(iVar10 + 0x810);
      iVar14 = 0;
      if (*psVar3 != -1) {
        do {
          uVar4 = psVar3[iVar14 * 2];
          uVar5 = *(ushort *)(iVar10 + 0x812 + iVar14 * 4);
          uVar12 = (ulonglong)uVar5;
          uVar13 = (ulonglong)(param_1 + 0x67e8 + (uint)uVar4 * 0x10);
          puVar16 = (undefined8 *)(param_1 + (uVar4 + 0xb04) * 0x10);
          uVar6 = (uint)uVar5 - (uint)uVar4 & 0x3fffffff;
          uVar19 = 0;
          uVar18 = uVar13;
          if (uVar6 != 0) {
            do {
              puVar17 = (undefined8 *)uVar18;
              uVar19 = uVar19 + 1;
              uVar18 = ZEXT48(puVar17 + 1);
              *puVar16 = *puVar17;
              puVar16 = puVar16 + 1;
            } while (uVar19 < uVar6 << 1);
          }
          if (*pcVar2 == '\0') {
            auVar24 = (*pcVar9)();
            (*extraout_w11)(auVar24._0_8_ & 0xffffffff,auVar24._8_8_ & 0xffffffff,
                            uVar12 & 0xffffffff,uVar13 & 0xffffffff);
          }
          iVar14 = iVar14 + 1;
        } while (psVar3[iVar14 * 2] != -1);
      }
      psVar3 = (short *)(iVar10 + 0x834);
      iVar14 = 0;
      if (*psVar3 != -1) {
        do {
          uVar19 = 0;
          uVar4 = psVar3[iVar14 * 2];
          uVar5 = *(ushort *)(iVar10 + 0x836 + iVar14 * 4);
          uVar12 = (ulonglong)uVar5;
          puVar16 = (undefined8 *)(param_1 + (uVar4 + 0x19ea) * 4);
          uVar13 = ZEXT48(puVar16);
          uVar22 = (uint)uVar5 - (uint)uVar4;
          puVar17 = (undefined8 *)(param_1 + (uVar4 + 0x2c50) * 4);
          uVar6 = uVar22 >> 1;
          uVar18 = uVar13;
          if (uVar6 != 0) {
            do {
              puVar15 = (undefined8 *)uVar18;
              uVar19 = uVar19 + 1;
              puVar16 = puVar15 + 1;
              uVar18 = ZEXT48(puVar16);
              *puVar17 = *puVar15;
              puVar17 = puVar17 + 1;
            } while (uVar19 < uVar6);
          }
          if ((uVar22 & 1) != 0) {
            *(undefined4 *)puVar17 = *(undefined4 *)puVar16;
          }
          if (*pcVar2 == '\0') {
            auVar24 = (*pcVar9)();
            (*extraout_w11_00)(auVar24._0_8_ & 0xffffffff,auVar24._8_8_ & 0xffffffff,
                               uVar12 & 0xffffffff,uVar13 & 0xffffffff);
          }
          iVar14 = iVar14 + 1;
        } while (psVar3[iVar14 * 2] != -1);
      }
    }
    FUN_100ec110(*(undefined4 *)(param_1 + 0xc288));
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xc288) = 0;
  }
  else if (param_3 == 0) {
    local_70 = 0;
  }
  else {
    *(int *)(param_1 + 0xc288) = param_2;
    FUN_10157940(&local_54);
    piVar1 = (int *)(param_1 + 0x11);
    if ((*(char *)piVar1 == '\0') || (*(char *)(*(int *)(param_3 + 8) + 0x44e) != '\0')) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    iVar10 = 0;
    psVar3 = (short *)(param_3 + 0xc);
    piVar23 = (int *)(param_3 + 8);
    if (*psVar3 != -1) {
      local_50 = (int *)(param_3 + 8);
      local_4c = piVar1;
      do {
        if (!bVar8) {
          FUN_100d4440(param_1);
        }
        uVar4 = psVar3[iVar10 * 2];
        uVar5 = *(ushort *)(param_3 + 0xe + iVar10 * 4);
        puVar16 = (undefined8 *)(*(int *)(param_3 + 8) + (uVar4 + 0x85) * 0x10);
        puVar17 = (undefined8 *)(param_1 + (uVar4 + 0x6ff) * 0x10);
        uVar22 = (uint)uVar4;
        uVar6 = uVar5 - uVar22 & 0x3fffffff;
        uVar19 = 0;
        if (uVar6 != 0) {
          do {
            uVar20 = *puVar16;
            uVar19 = uVar19 + 1;
            puVar16 = puVar16 + 1;
            *puVar17 = uVar20;
            puVar17 = puVar17 + 1;
          } while (uVar19 < uVar6 << 1);
        }
        if (bVar8) {
          uVar19 = *(uint *)(param_1 + 0x6690);
          iVar14 = *(int *)(param_1 + 0x6698);
          uVar6 = *(uint *)(param_1 + 0x6694);
          if (iVar14 == 1) {
            uVar21 = (uint)uVar5;
            if (uVar19 < uVar6) {
              if (uVar6 < uVar22 || uVar21 < uVar19) {
                iVar14 = 1;
                goto LAB_100da92c;
              }
              if (uVar21 < uVar6) {
                uVar21 = uVar6;
              }
              if (uVar19 < uVar22) {
                uVar22 = uVar19;
              }
            }
          }
          else {
            if (uVar19 < uVar6) {
LAB_100da92c:
              FUN_100d43c0(param_1,iVar14,uVar19,uVar6);
            }
            uVar21 = (uint)uVar5;
            *(int *)(param_1 + 0x6698) = 1;
            uVar22 = (uint)uVar4;
          }
          *(uint *)(param_1 + 0x6690) = uVar22;
          *(uint *)(param_1 + 0x6694) = uVar21;
        }
        iVar10 = iVar10 + 1;
        piVar23 = local_50;
        piVar1 = local_4c;
      } while (psVar3[iVar10 * 2] != -1);
    }
    iVar10 = 0;
    psVar3 = (short *)(param_3 + 0x810);
    if (*psVar3 != -1) {
      do {
        uVar4 = psVar3[iVar10 * 2];
        uVar5 = *(ushort *)(param_3 + 0x812 + iVar10 * 4);
        uVar18 = (ulonglong)uVar5;
        puVar16 = (undefined8 *)(*piVar23 + (uint)uVar4 * 0x10 + 0x48d8);
        puVar17 = (undefined8 *)(param_1 + (uVar4 + 0xb04) * 0x10);
        uVar6 = (uint)uVar5 - (uint)uVar4 & 0x3fffffff;
        uVar19 = 0;
        if (uVar6 != 0) {
          do {
            uVar20 = *puVar16;
            uVar19 = uVar19 + 1;
            puVar16 = puVar16 + 1;
            *puVar17 = uVar20;
            puVar17 = puVar17 + 1;
          } while (uVar19 < uVar6 << 1);
        }
        if ((char)*piVar1 == '\0') {
          auVar24 = (*pcVar9)();
          (*extraout_w11_01)(auVar24._0_8_ & 0xffffffff,auVar24._8_8_ & 0xffffffff,
                             uVar18 & 0xffffffff);
        }
        iVar10 = iVar10 + 1;
      } while (psVar3[iVar10 * 2] != -1);
    }
    iVar10 = 0;
    psVar3 = (short *)(param_3 + 0x834);
    if (*psVar3 != -1) {
      do {
        uVar19 = 0;
        uVar4 = psVar3[iVar10 * 2];
        uVar5 = *(ushort *)(param_3 + 0x836 + iVar10 * 4);
        uVar18 = (ulonglong)uVar5;
        uVar22 = (uint)uVar5 - (uint)uVar4;
        uVar6 = uVar22 >> 1;
        puVar16 = (undefined8 *)(*piVar23 + (uVar4 + 0x127a) * 4);
        puVar17 = (undefined8 *)(param_1 + (uVar4 + 0x2c50) * 4);
        if (uVar6 != 0) {
          do {
            uVar20 = *puVar16;
            uVar19 = uVar19 + 1;
            puVar16 = puVar16 + 1;
            *puVar17 = uVar20;
            puVar17 = puVar17 + 1;
          } while (uVar19 < uVar6);
        }
        if ((uVar22 & 1) != 0) {
          *(undefined4 *)puVar17 = *(undefined4 *)puVar16;
        }
        if ((char)*piVar1 == '\0') {
          auVar24 = (*pcVar9)();
          (*extraout_w11_02)(auVar24._0_8_ & 0xffffffff,auVar24._8_8_ & 0xffffffff,
                             uVar18 & 0xffffffff);
        }
        iVar10 = iVar10 + 1;
      } while (psVar3[iVar10 * 2] != -1);
    }
    FUN_101579f0(&local_54);
  }
  *(undefined1 *)(param_1 + 0xc2ee) = 1;
  return local_70;
}

