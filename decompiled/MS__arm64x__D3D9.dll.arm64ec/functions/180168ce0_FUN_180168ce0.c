/*
 * FUN_180168ce0 at 180168ce0
 * undefined FUN_180168ce0(void)
 * Address ranges: 180168ce0-180169b57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180168ce0(longlong param_1,int param_2,longlong param_3,char param_4,undefined8 param_5,
                  undefined8 *param_6,uint param_7,uint param_8,char param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined *puVar7;
  code *pcVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *puVar21;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  int iVar22;
  int iVar23;
  undefined8 uVar24;
  
  puVar7 = __hybrid_os_arm64x_dispatch_icall;
  iVar23 = 0;
  if (param_2 - 1U < 2) {
    uVar17 = 1;
    if (param_2 == 2) {
      uVar17 = 2;
    }
LAB_18016985c:
    if (uVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(0xf004,0x180169864);
      (*pcVar8)();
    }
    uVar16 = 0;
    if (uVar17 != 0) {
      uVar16 = param_8 / uVar17;
    }
    for (uVar16 = uVar16 * uVar17; uVar16 != 0; uVar16 = uVar16 - uVar19) {
      iVar18 = *(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x70);
      if (0x1000U - iVar18 < 0x10) {
        (*(code *)puVar7)();
        (*extraout_x11_06)(param_1,1);
        iVar18 = 0;
      }
      if (uVar17 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(0xf004,0x1801698d8);
        (*pcVar8)();
      }
      uVar19 = 0;
      if (uVar17 != 0) {
        uVar19 = (0x1000U - iVar18) / uVar17;
      }
      uVar10 = (ulonglong)*(uint *)(param_3 + 0xc);
      uVar19 = (0x1000 - ((0x1000U - iVar18) - uVar19 * uVar17)) - iVar18;
      if (uVar16 < uVar19) {
        uVar19 = uVar16;
      }
      if (param_4 == '\0') {
        (*(code *)puVar7)();
        (*extraout_x11_08)(param_1,param_2,param_5);
      }
      else {
        (*(code *)puVar7)();
        (*extraout_x11_07)(param_1,param_2,param_3,param_5,uVar10 & 0xffffffff,uVar19,0,param_10);
      }
      uVar2 = *(uint *)(param_1 + 0xfe8);
      if (param_9 == '\0') {
        if (param_7 == uVar2) {
          uVar20 = uVar2 * uVar19;
          puVar21 = (undefined8 *)((longlong)param_6 + (ulonglong)(iVar23 * uVar2));
          puVar1 = *(undefined8 **)(param_1 + 0x68);
          for (uVar2 = uVar20 >> 4; uVar2 != 0; uVar2 = uVar2 - 1) {
            puVar5 = puVar21 + 1;
            uVar24 = *puVar21;
            puVar21 = puVar21 + 2;
            puVar1[1] = *puVar5;
            *puVar1 = uVar24;
            puVar1 = puVar1 + 2;
          }
          uVar2 = uVar20 >> 2 & 3;
          uVar10 = 0;
          if (uVar2 != 0) {
            do {
              *(undefined4 *)((longlong)puVar1 + uVar10 * 4) =
                   *(undefined4 *)((longlong)puVar21 + uVar10 * 4);
              uVar9 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar9;
            } while (uVar9 < uVar2);
          }
          lVar13 = *(longlong *)(param_1 + 0x68) + (ulonglong)uVar20;
          goto LAB_180169aa4;
        }
        if (uVar19 != 0) {
          uVar9 = uVar2 >> 2 & 3;
          iVar18 = iVar23;
          uVar20 = uVar19;
          do {
            puVar21 = (undefined8 *)((longlong)param_6 + (ulonglong)(iVar18 * param_7));
            puVar1 = *(undefined8 **)(param_1 + 0x68);
            for (uVar3 = uVar2 >> 4; uVar3 != 0; uVar3 = uVar3 - 1) {
              puVar5 = puVar21 + 1;
              uVar24 = *puVar21;
              puVar21 = puVar21 + 2;
              puVar1[1] = *puVar5;
              *puVar1 = uVar24;
              puVar1 = puVar1 + 2;
            }
            uVar10 = 0;
            if (uVar9 != 0) {
              do {
                *(undefined4 *)((longlong)puVar1 + uVar10 * 4) =
                     *(undefined4 *)((longlong)puVar21 + uVar10 * 4);
                uVar3 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar3;
              } while (uVar3 < uVar9);
            }
            iVar18 = iVar18 + 1;
            uVar20 = uVar20 - 1;
            *(ulonglong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + (ulonglong)uVar2;
          } while (uVar20 != 0);
        }
      }
      else {
        uVar10 = 0;
        if (*(int *)(param_3 + 8) != 0) {
          do {
            if (param_6[uVar10 * 2] != 0) {
              lVar13 = param_6[uVar10 * 2] +
                       (ulonglong)(uint)(*(int *)(param_6 + uVar10 * 2 + 1) * iVar23);
              lVar11 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar10) * 8;
              bVar4 = *(byte *)(param_3 + 0x16 + lVar11) >> 2;
              iVar18 = 0;
              if (uVar19 != 0) {
                lVar11 = *(longlong *)(param_1 + 0x68) +
                         (ulonglong)*(byte *)(param_3 + 0x17 + lVar11) * 4;
                uVar20 = uVar19;
                do {
                  uVar12 = 0;
                  if (bVar4 != 0) {
                    do {
                      *(undefined4 *)(lVar11 + uVar12 * 4) = *(undefined4 *)(lVar13 + uVar12 * 4);
                      uVar9 = (int)uVar12 + 1;
                      uVar12 = (ulonglong)uVar9;
                    } while (uVar9 < bVar4);
                  }
                  iVar18 = iVar18 + 1;
                  lVar11 = lVar11 + (ulonglong)uVar2;
                  if (iVar18 == *(int *)((longlong)param_6 + uVar10 * 0x10 + 0xc)) {
                    iVar18 = 0;
                    lVar13 = lVar13 + (ulonglong)*(uint *)(param_6 + uVar10 * 2 + 1);
                  }
                  uVar20 = uVar20 - 1;
                } while (uVar20 != 0);
              }
            }
            uVar20 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar20;
          } while (uVar20 < *(uint *)(param_3 + 8));
        }
        lVar13 = *(longlong *)(param_1 + 0x68) + (ulonglong)(uVar2 * uVar19);
LAB_180169aa4:
        *(longlong *)(param_1 + 0x68) = lVar13;
      }
      iVar23 = uVar19 + iVar23;
      *(uint *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + uVar19;
    }
  }
  else {
    if (param_2 == 3) {
      uVar16 = 2;
    }
    else {
      uVar17 = 3;
      uVar16 = 3;
      if (param_2 == 4) goto LAB_18016985c;
      if (param_2 != 5) {
        if (param_2 != 6 || param_8 < 3) {
          return;
        }
        param_8 = param_8 - 2;
        iVar23 = 1;
        do {
          if (param_8 == 0) {
            return;
          }
          iVar18 = *(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x70);
          if ((0x1000U - iVar18 < 0x10) ||
             (iVar15 = *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x90), 0x1000U - iVar15 < 0x10)
             ) {
            (*(code *)puVar7)();
            (*extraout_x11)(param_1,1);
            iVar18 = 0;
            iVar15 = 0;
          }
          uVar10 = (ulonglong)*(uint *)(param_3 + 0xc);
          uVar16 = (0x1000U - iVar15) / 3;
          uVar17 = 0xffeU - iVar18;
          if (uVar16 <= 0xffeU - iVar18) {
            uVar17 = uVar16;
          }
          if (param_8 < uVar17) {
            uVar17 = param_8;
          }
          uVar12 = (ulonglong)(uVar17 * 3);
          if (param_4 == '\0') {
            (*(code *)puVar7)();
            (*extraout_x11_01)(param_1,4,param_5);
          }
          else {
            (*(code *)puVar7)();
            (*extraout_x11_00)(param_1,4,param_3,param_5,uVar10 & 0xffffffff,uVar17 + 2,
                               uVar12 & 0xffffffff,param_10);
          }
          uVar16 = *(uint *)(param_1 + 0xfe8);
          if (param_9 == '\0') {
            puVar21 = *(undefined8 **)(param_1 + 0x68);
            uVar19 = uVar16 >> 4;
            puVar1 = param_6;
            if (param_7 == uVar16) {
              for (; uVar19 != 0; uVar19 = uVar19 - 1) {
                uVar24 = *puVar1;
                puVar21[1] = puVar1[1];
                *puVar21 = uVar24;
                puVar21 = puVar21 + 2;
                puVar1 = puVar1 + 2;
              }
              uVar19 = uVar16 >> 2 & 3;
              uVar10 = 0;
              if (uVar19 != 0) {
                do {
                  *(undefined4 *)((longlong)puVar21 + uVar10 * 4) =
                       *(undefined4 *)((longlong)puVar1 + uVar10 * 4);
                  uVar2 = (int)uVar10 + 1;
                  uVar10 = (ulonglong)uVar2;
                } while (uVar2 < uVar19);
              }
            }
            else {
              for (; uVar19 != 0; uVar19 = uVar19 - 1) {
                uVar24 = *puVar1;
                puVar21[1] = puVar1[1];
                *puVar21 = uVar24;
                puVar21 = puVar21 + 2;
                puVar1 = puVar1 + 2;
              }
              uVar19 = uVar16 >> 2 & 3;
              uVar10 = 0;
              if (uVar19 != 0) {
                do {
                  *(undefined4 *)((longlong)puVar21 + uVar10 * 4) =
                       *(undefined4 *)((longlong)puVar1 + uVar10 * 4);
                  uVar2 = (int)uVar10 + 1;
                  uVar10 = (ulonglong)uVar2;
                } while (uVar2 < uVar19);
              }
            }
            puVar21 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (ulonglong)uVar16);
            *(undefined8 **)(param_1 + 0x68) = puVar21;
            *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
            uVar16 = *(uint *)(param_1 + 0xfe8);
            uVar19 = uVar16 >> 4;
            if (param_7 == uVar16) {
              puVar1 = (undefined8 *)((longlong)param_6 + (ulonglong)(uVar16 * iVar23));
              for (; uVar19 != 0; uVar19 = uVar19 - 1) {
                puVar5 = puVar1 + 1;
                uVar24 = *puVar1;
                puVar1 = puVar1 + 2;
                puVar21[1] = *puVar5;
                *puVar21 = uVar24;
                puVar21 = puVar21 + 2;
              }
              uVar19 = uVar16 >> 2 & 3;
              uVar10 = 0;
              if (uVar19 != 0) {
                do {
                  *(undefined4 *)((longlong)puVar21 + uVar10 * 4) =
                       *(undefined4 *)((longlong)puVar1 + uVar10 * 4);
                  uVar2 = (int)uVar10 + 1;
                  uVar10 = (ulonglong)uVar2;
                } while (uVar2 < uVar19);
              }
            }
            else {
              puVar1 = (undefined8 *)((longlong)param_6 + (ulonglong)(iVar23 * param_7));
              for (; uVar19 != 0; uVar19 = uVar19 - 1) {
                puVar5 = puVar1 + 1;
                uVar24 = *puVar1;
                puVar1 = puVar1 + 2;
                puVar21[1] = *puVar5;
                *puVar21 = uVar24;
                puVar21 = puVar21 + 2;
              }
              uVar19 = uVar16 >> 2 & 3;
              uVar10 = 0;
              if (uVar19 != 0) {
                do {
                  *(undefined4 *)((longlong)puVar21 + uVar10 * 4) =
                       *(undefined4 *)((longlong)puVar1 + uVar10 * 4);
                  uVar2 = (int)uVar10 + 1;
                  uVar10 = (ulonglong)uVar2;
                } while (uVar2 < uVar19);
              }
            }
            iVar18 = iVar23 + 1;
            puVar21 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (ulonglong)uVar16);
            *(undefined8 **)(param_1 + 0x68) = puVar21;
            *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
            uVar16 = *(uint *)(param_1 + 0xfe8);
            if (param_7 == uVar16) {
              uVar19 = uVar16 * uVar17;
              puVar1 = (undefined8 *)((longlong)param_6 + (ulonglong)(uVar16 * iVar18));
              for (uVar16 = uVar19 >> 4; uVar16 != 0; uVar16 = uVar16 - 1) {
                puVar5 = puVar1 + 1;
                uVar24 = *puVar1;
                puVar1 = puVar1 + 2;
                puVar21[1] = *puVar5;
                *puVar21 = uVar24;
                puVar21 = puVar21 + 2;
              }
              uVar16 = uVar19 >> 2 & 3;
              uVar10 = 0;
              if (uVar16 != 0) {
                do {
                  *(undefined4 *)((longlong)puVar21 + uVar10 * 4) =
                       *(undefined4 *)((longlong)puVar1 + uVar10 * 4);
                  uVar2 = (int)uVar10 + 1;
                  uVar10 = (ulonglong)uVar2;
                } while (uVar2 < uVar16);
              }
              lVar13 = *(longlong *)(param_1 + 0x68) + (ulonglong)uVar19;
              goto LAB_18016925c;
            }
            if (uVar17 != 0) {
              uVar2 = uVar16 >> 2 & 3;
              uVar19 = uVar17;
              do {
                puVar1 = (undefined8 *)((longlong)param_6 + (ulonglong)(iVar18 * param_7));
                for (uVar20 = uVar16 >> 4; uVar20 != 0; uVar20 = uVar20 - 1) {
                  puVar5 = puVar1 + 1;
                  uVar24 = *puVar1;
                  puVar1 = puVar1 + 2;
                  puVar21[1] = *puVar5;
                  *puVar21 = uVar24;
                  puVar21 = puVar21 + 2;
                }
                uVar10 = 0;
                if (uVar2 != 0) {
                  do {
                    *(undefined4 *)((longlong)puVar21 + uVar10 * 4) =
                         *(undefined4 *)((longlong)puVar1 + uVar10 * 4);
                    uVar20 = (int)uVar10 + 1;
                    uVar10 = (ulonglong)uVar20;
                  } while (uVar20 < uVar2);
                }
                iVar18 = iVar18 + 1;
                uVar19 = uVar19 - 1;
                puVar21 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (ulonglong)uVar16);
                *(undefined8 **)(param_1 + 0x68) = puVar21;
              } while (uVar19 != 0);
            }
          }
          else {
            uVar19 = *(uint *)(param_3 + 8);
            if (uVar19 != 0) {
              uVar10 = 0;
              do {
                lVar13 = param_6[uVar10 * 2];
                if (lVar13 != 0) {
                  lVar11 = *(longlong *)(param_1 + 0x68);
                  lVar14 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar10) * 8;
                  bVar4 = *(byte *)(param_3 + 0x17 + lVar14);
                  bVar6 = *(byte *)(param_3 + 0x16 + lVar14) >> 2;
                  uVar12 = 0;
                  if (bVar6 != 0) {
                    do {
                      *(undefined4 *)(lVar11 + (ulonglong)bVar4 * 4 + uVar12 * 4) =
                           *(undefined4 *)(lVar13 + uVar12 * 4);
                      uVar19 = (int)uVar12 + 1;
                      uVar12 = (ulonglong)uVar19;
                    } while (uVar19 < bVar6);
                    uVar19 = *(uint *)(param_3 + 8);
                  }
                }
                uVar2 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar2;
              } while (uVar2 < uVar19);
            }
            *(ulonglong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + (ulonglong)uVar16;
            *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
            uVar16 = *(uint *)(param_1 + 0xfe8);
            uVar19 = *(uint *)(param_3 + 8);
            if (uVar19 != 0) {
              uVar10 = 0;
              do {
                lVar13 = param_6[uVar10 * 2];
                if (lVar13 != 0) {
                  iVar18 = *(int *)(param_6 + uVar10 * 2 + 1);
                  lVar11 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar10) * 8;
                  bVar4 = *(byte *)(param_3 + 0x17 + lVar11);
                  lVar14 = *(longlong *)(param_1 + 0x68);
                  bVar6 = *(byte *)(param_3 + 0x16 + lVar11) >> 2;
                  uVar12 = 0;
                  if (bVar6 != 0) {
                    do {
                      *(undefined4 *)(lVar14 + (ulonglong)bVar4 * 4 + uVar12 * 4) =
                           *(undefined4 *)(lVar13 + (ulonglong)(uint)(iVar18 * iVar23) + uVar12 * 4)
                      ;
                      uVar19 = (int)uVar12 + 1;
                      uVar12 = (ulonglong)uVar19;
                    } while (uVar19 < bVar6);
                    uVar19 = *(uint *)(param_3 + 8);
                  }
                }
                uVar2 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar2;
              } while (uVar2 < uVar19);
            }
            *(ulonglong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + (ulonglong)uVar16;
            *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
            uVar16 = *(uint *)(param_1 + 0xfe8);
            if (*(int *)(param_3 + 8) != 0) {
              uVar10 = 0;
              do {
                if (param_6[uVar10 * 2] != 0) {
                  lVar13 = param_6[uVar10 * 2] +
                           (ulonglong)(uint)(*(int *)(param_6 + uVar10 * 2 + 1) * (iVar23 + 1));
                  lVar11 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar10) * 8;
                  bVar4 = *(byte *)(param_3 + 0x16 + lVar11) >> 2;
                  iVar18 = 0;
                  if (uVar17 != 0) {
                    lVar11 = *(longlong *)(param_1 + 0x68) +
                             (ulonglong)*(byte *)(param_3 + 0x17 + lVar11) * 4;
                    uVar19 = uVar17;
                    do {
                      uVar12 = 0;
                      if (bVar4 != 0) {
                        do {
                          *(undefined4 *)(lVar11 + uVar12 * 4) =
                               *(undefined4 *)(lVar13 + uVar12 * 4);
                          uVar2 = (int)uVar12 + 1;
                          uVar12 = (ulonglong)uVar2;
                        } while (uVar2 < bVar4);
                      }
                      iVar18 = iVar18 + 1;
                      lVar11 = lVar11 + (ulonglong)uVar16;
                      if (iVar18 == *(int *)((longlong)param_6 + uVar10 * 0x10 + 0xc)) {
                        iVar18 = 0;
                        lVar13 = lVar13 + (ulonglong)*(uint *)(param_6 + uVar10 * 2 + 1);
                      }
                      uVar19 = uVar19 - 1;
                    } while (uVar19 != 0);
                  }
                }
                uVar19 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar19;
              } while (uVar19 < *(uint *)(param_3 + 8));
            }
            lVar13 = *(longlong *)(param_1 + 0x68) + (ulonglong)(uVar16 * uVar17);
LAB_18016925c:
            *(longlong *)(param_1 + 0x68) = lVar13;
          }
          iVar18 = *(int *)(param_1 + 0x74);
          *(uint *)(param_1 + 0x74) = iVar18 + uVar17;
          uVar16 = 0;
          if (uVar17 != 0) {
            do {
              **(int **)(param_1 + 0x88) = uVar16 + iVar18 + -1;
              iVar15 = uVar16 + iVar18;
              uVar16 = uVar16 + 1;
              *(int *)(*(longlong *)(param_1 + 0x88) + 4) = iVar15;
              *(int *)(*(longlong *)(param_1 + 0x88) + 8) = iVar18 + -2;
              *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 0xc;
            } while (uVar16 < uVar17);
          }
          param_8 = param_8 - uVar17;
          iVar23 = uVar17 + iVar23;
          *(uint *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + uVar17 * 3;
        } while( true );
      }
    }
    if (uVar16 <= param_8) {
      uVar17 = uVar16 - 1;
      do {
        iVar18 = *(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x70);
        if (0x1000U - iVar18 < 0x10) {
          (*(code *)puVar7)();
          (*extraout_x11_02)(param_1,1);
          iVar18 = 0;
        }
        uVar10 = (ulonglong)*(uint *)(param_3 + 0xc);
        uVar19 = 0x1000U - iVar18 & 0xfffffffe;
        if (param_8 < uVar19) {
          uVar19 = param_8;
        }
        uVar12 = (ulonglong)uVar19;
        if (param_4 == '\0') {
          (*(code *)puVar7)();
          (*extraout_x11_04)(param_1,param_2,param_5);
        }
        else {
          (*(code *)puVar7)();
          (*extraout_x11_03)(param_1,param_2,param_3,param_5,uVar10 & 0xffffffff,uVar12 & 0xffffffff
                             ,0,param_10);
        }
        (*(code *)puVar7)();
        (*extraout_x11_05)(param_1,0);
        uVar2 = *(uint *)(param_1 + 0xfe8);
        if (param_9 == '\0') {
          if (param_7 == uVar2) {
            uVar20 = uVar2 * uVar17;
            puVar21 = (undefined8 *)((longlong)param_6 + (ulonglong)(iVar23 * uVar2));
            puVar1 = *(undefined8 **)(param_1 + 0x68);
            for (uVar2 = uVar20 >> 4; uVar2 != 0; uVar2 = uVar2 - 1) {
              puVar5 = puVar21 + 1;
              uVar24 = *puVar21;
              puVar21 = puVar21 + 2;
              puVar1[1] = *puVar5;
              *puVar1 = uVar24;
              puVar1 = puVar1 + 2;
            }
            uVar2 = uVar20 >> 2 & 3;
            uVar10 = 0;
            if (uVar2 != 0) {
              do {
                *(undefined4 *)((longlong)puVar1 + uVar10 * 4) =
                     *(undefined4 *)((longlong)puVar21 + uVar10 * 4);
                uVar9 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar9;
              } while (uVar9 < uVar2);
            }
            puVar21 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (ulonglong)uVar20);
            *(undefined8 **)(param_1 + 0x68) = puVar21;
          }
          else {
            uVar20 = 0;
            uVar9 = uVar2 >> 2 & 3;
            iVar18 = iVar23;
            do {
              puVar21 = (undefined8 *)((longlong)param_6 + (ulonglong)(iVar18 * param_7));
              puVar1 = *(undefined8 **)(param_1 + 0x68);
              for (uVar3 = uVar2 >> 4; uVar3 != 0; uVar3 = uVar3 - 1) {
                puVar5 = puVar21 + 1;
                uVar24 = *puVar21;
                puVar21 = puVar21 + 2;
                puVar1[1] = *puVar5;
                *puVar1 = uVar24;
                puVar1 = puVar1 + 2;
              }
              uVar10 = 0;
              if (uVar9 != 0) {
                do {
                  *(undefined4 *)((longlong)puVar1 + uVar10 * 4) =
                       *(undefined4 *)((longlong)puVar21 + uVar10 * 4);
                  uVar3 = (int)uVar10 + 1;
                  uVar10 = (ulonglong)uVar3;
                } while (uVar3 < uVar9);
              }
              uVar20 = uVar20 + 1;
              iVar18 = iVar18 + 1;
              puVar21 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (ulonglong)uVar2);
              *(undefined8 **)(param_1 + 0x68) = puVar21;
            } while (uVar20 < uVar17);
          }
          *(uint *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + uVar16 + -1;
          uVar2 = *(uint *)(param_1 + 0xfe8);
          iVar18 = iVar23 + uVar16 + -1;
          iVar15 = uVar19 - uVar17;
          if (param_7 == uVar2) {
            uVar20 = iVar15 * uVar2;
            puVar1 = (undefined8 *)((longlong)param_6 + (ulonglong)(uVar2 * iVar18));
            for (uVar2 = uVar20 >> 4; uVar2 != 0; uVar2 = uVar2 - 1) {
              puVar5 = puVar1 + 1;
              uVar24 = *puVar1;
              puVar1 = puVar1 + 2;
              puVar21[1] = *puVar5;
              *puVar21 = uVar24;
              puVar21 = puVar21 + 2;
            }
            uVar2 = uVar20 >> 2 & 3;
            uVar10 = 0;
            if (uVar2 != 0) {
              do {
                *(undefined4 *)((longlong)puVar21 + uVar10 * 4) =
                     *(undefined4 *)((longlong)puVar1 + uVar10 * 4);
                uVar9 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar9;
              } while (uVar9 < uVar2);
            }
            lVar13 = *(longlong *)(param_1 + 0x68) + (ulonglong)uVar20;
            goto LAB_1801697a0;
          }
          if (iVar15 != 0) {
            uVar20 = uVar2 >> 2 & 3;
            iVar22 = iVar15;
            do {
              puVar1 = (undefined8 *)((longlong)param_6 + (ulonglong)(iVar18 * param_7));
              for (uVar9 = uVar2 >> 4; uVar9 != 0; uVar9 = uVar9 - 1) {
                puVar5 = puVar1 + 1;
                uVar24 = *puVar1;
                puVar1 = puVar1 + 2;
                puVar21[1] = *puVar5;
                *puVar21 = uVar24;
                puVar21 = puVar21 + 2;
              }
              uVar10 = 0;
              if (uVar20 != 0) {
                do {
                  *(undefined4 *)((longlong)puVar21 + uVar10 * 4) =
                       *(undefined4 *)((longlong)puVar1 + uVar10 * 4);
                  uVar9 = (int)uVar10 + 1;
                  uVar10 = (ulonglong)uVar9;
                } while (uVar9 < uVar20);
              }
              iVar18 = iVar18 + 1;
              iVar22 = iVar22 + -1;
              puVar21 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (ulonglong)uVar2);
              *(undefined8 **)(param_1 + 0x68) = puVar21;
            } while (iVar22 != 0);
          }
        }
        else {
          uVar10 = 0;
          if (*(int *)(param_3 + 8) != 0) {
            do {
              if (param_6[uVar10 * 2] != 0) {
                iVar18 = 0;
                lVar11 = param_6[uVar10 * 2] +
                         (ulonglong)(uint)(*(int *)(param_6 + uVar10 * 2 + 1) * iVar23);
                lVar13 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar10) * 8;
                bVar4 = *(byte *)(param_3 + 0x16 + lVar13);
                uVar20 = 0;
                lVar13 = *(longlong *)(param_1 + 0x68) +
                         (ulonglong)*(byte *)(param_3 + 0x17 + lVar13) * 4;
                do {
                  uVar12 = 0;
                  uVar9 = (uint)(bVar4 >> 2);
                  if (uVar9 != 0) {
                    do {
                      *(undefined4 *)(lVar13 + uVar12 * 4) = *(undefined4 *)(lVar11 + uVar12 * 4);
                      uVar3 = (int)uVar12 + 1;
                      uVar12 = (ulonglong)uVar3;
                    } while (uVar3 < uVar9);
                  }
                  iVar18 = iVar18 + 1;
                  lVar13 = lVar13 + (ulonglong)uVar2;
                  if (iVar18 == *(int *)((longlong)param_6 + uVar10 * 0x10 + 0xc)) {
                    iVar18 = 0;
                    lVar11 = lVar11 + (ulonglong)*(uint *)(param_6 + uVar10 * 2 + 1);
                  }
                  uVar20 = uVar20 + 1;
                } while (uVar20 < uVar17);
              }
              uVar20 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar20;
            } while (uVar20 < *(uint *)(param_3 + 8));
          }
          *(ulonglong *)(param_1 + 0x68) =
               *(longlong *)(param_1 + 0x68) + (ulonglong)(uVar2 * uVar17);
          *(uint *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + uVar16 + -1;
          uVar2 = *(uint *)(param_1 + 0xfe8);
          iVar15 = uVar19 - uVar17;
          if (*(int *)(param_3 + 8) != 0) {
            uVar10 = 0;
            do {
              if (param_6[uVar10 * 2] != 0) {
                lVar13 = param_6[uVar10 * 2] +
                         (ulonglong)(*(int *)(param_6 + uVar10 * 2 + 1) * (iVar23 + uVar16 + -1));
                lVar11 = (ulonglong)*(byte *)(param_3 + 0x214 + uVar10) * 8;
                bVar4 = *(byte *)(param_3 + 0x16 + lVar11) >> 2;
                iVar18 = 0;
                if (iVar15 != 0) {
                  lVar11 = *(longlong *)(param_1 + 0x68) +
                           (ulonglong)*(byte *)(param_3 + 0x17 + lVar11) * 4;
                  iVar22 = iVar15;
                  do {
                    uVar12 = 0;
                    if (bVar4 != 0) {
                      do {
                        *(undefined4 *)(lVar11 + uVar12 * 4) = *(undefined4 *)(lVar13 + uVar12 * 4);
                        uVar20 = (int)uVar12 + 1;
                        uVar12 = (ulonglong)uVar20;
                      } while (uVar20 < bVar4);
                    }
                    iVar18 = iVar18 + 1;
                    lVar11 = lVar11 + (ulonglong)uVar2;
                    if (iVar18 == *(int *)((longlong)param_6 + uVar10 * 0x10 + 0xc)) {
                      iVar18 = 0;
                      lVar13 = lVar13 + (ulonglong)*(uint *)(param_6 + uVar10 * 2 + 1);
                    }
                    iVar22 = iVar22 + -1;
                  } while (iVar22 != 0);
                }
              }
              uVar20 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar20;
            } while (uVar20 < *(uint *)(param_3 + 8));
          }
          lVar13 = *(longlong *)(param_1 + 0x68) + (ulonglong)(iVar15 * uVar2);
LAB_1801697a0:
          *(longlong *)(param_1 + 0x68) = lVar13;
        }
        iVar23 = iVar15 + iVar23;
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + iVar15;
        param_8 = (uVar17 - uVar19) + param_8;
      } while (uVar16 <= param_8);
    }
  }
  return;
}

