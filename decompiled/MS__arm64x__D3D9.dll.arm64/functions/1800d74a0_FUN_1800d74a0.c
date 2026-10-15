/*
 * FUN_1800d74a0 at 1800d74a0
 * undefined FUN_1800d74a0(void)
 * Address ranges: 1800d74a0-1800d7a23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_1800d74a0(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  char *pcVar12;
  undefined8 *puVar13;
  char cVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint local_70 [2];
  int local_68 [2];
  longlong local_60;
  undefined8 uStack_58;
  
  *(undefined4 *)(param_1 + 0xa0) = param_3;
  lVar16 = *(longlong *)(param_1 + 0x90);
  if (lVar16 != 0) {
    lVar15 = *(longlong *)(lVar16 + -8);
    lVar17 = lVar16 + lVar15 * 0x18;
    while (lVar15 != 0) {
      lVar18 = *(longlong *)(lVar17 + -0x10);
      lVar15 = lVar15 + -1;
      lVar17 = lVar17 + -0x18;
      if (lVar18 != 0) {
        FUN_180001cf0(lVar18,0x28,*(undefined8 *)(lVar18 + -8),FUN_1800d8508);
        thunk_FUN_180102fc0(lVar18 + -8,*(longlong *)(lVar18 + -8) * 0x28 + 8);
      }
    }
    thunk_FUN_180102fc0(lVar16 + -8,*(longlong *)(lVar16 + -8) * 0x18 + 8);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  bVar8 = 0;
  puVar11 = (undefined8 *)thunk_FUN_180102f80(0x188);
  if (puVar11 != (undefined8 *)0x0) {
    puVar2 = puVar11 + 1;
    *puVar11 = 0x10;
    lVar16 = 0x10;
    puVar13 = puVar2;
    do {
      puVar13[1] = 0;
      puVar13[2] = 0;
      lVar16 = lVar16 + -1;
      puVar13 = puVar13 + 3;
    } while (lVar16 != 0);
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = *(uint *)(param_1 + 0x9c);
      uVar19 = 0;
      lVar16 = *(longlong *)(param_1 + 0x90);
      if (uVar3 != 0) {
        do {
          FUN_1800d8c30(puVar2 + uVar19 * 3,lVar16 + uVar19 * 0x18);
          uVar1 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar1;
        } while (uVar1 < uVar3);
      }
      lVar16 = *(longlong *)(param_1 + 0x90);
      if (lVar16 != 0) {
        lVar15 = *(longlong *)(lVar16 + -8);
        lVar17 = lVar16 + lVar15 * 0x18;
        while (lVar15 != 0) {
          lVar18 = *(longlong *)(lVar17 + -0x10);
          lVar15 = lVar15 + -1;
          lVar17 = lVar17 + -0x18;
          if (lVar18 != 0) {
            FUN_180001cf0(lVar18,0x28,*(undefined8 *)(lVar18 + -8),FUN_1800d8508);
            thunk_FUN_180102fc0(lVar18 + -8,*(longlong *)(lVar18 + -8) * 0x28 + 8);
          }
        }
        thunk_FUN_180102fc0(lVar16 + -8,*(longlong *)(lVar16 + -8) * 0x18 + 8);
      }
      uVar3 = *(uint *)(param_1 + 0x98);
      *(undefined8 **)(param_1 + 0x90) = puVar2;
      *(uint *)(param_1 + 0x98) = uVar3 + 1;
      *(undefined4 *)(param_1 + 0x9c) = 0x10;
      *(undefined4 *)(puVar11 + (ulonglong)uVar3 * 3 + 1) = 0xffffffff;
      lVar16 = puVar11[(ulonglong)uVar3 * 3 + 2];
      if (lVar16 != 0) {
        lVar17 = *(longlong *)(lVar16 + -8);
        lVar15 = lVar16 + lVar17 * 0x28;
        for (; lVar17 != 0; lVar17 = lVar17 + -1) {
          thunk_FUN_180102fc0(*(undefined8 *)(lVar15 + -0x10));
          thunk_FUN_180102fc0(*(undefined8 *)(lVar15 + -0x20));
          lVar15 = lVar15 + -0x28;
        }
        thunk_FUN_180102fc0(lVar16 + -8,*(longlong *)(lVar16 + -8) * 0x28 + 8);
      }
      puVar11[(ulonglong)uVar3 * 3 + 2] = 0;
      puVar11[(ulonglong)uVar3 * 3 + 3] = 0;
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined8 **)(param_1 + 0x38) = param_2;
      iVar9 = (**(code **)*param_2)(param_2,0,0,0);
      if (iVar9 == 0) {
        lVar16 = thunk_FUN_180102f80(0x1000);
        *(longlong *)(param_1 + 0x30) = lVar16;
        if (lVar16 != 0) {
          lVar16 = thunk_FUN_180102f80(0x2000);
          *(longlong *)(param_1 + 0x58) = lVar16;
          if (lVar16 != 0) {
            lVar16 = thunk_FUN_180102f80(0x80);
            *(longlong *)(param_1 + 0x70) = lVar16;
            if (lVar16 != 0) {
              *(undefined8 *)(param_1 + 0x78) = 0x80;
              *(undefined4 *)(param_1 + 0x54) = 1;
              *(undefined1 *)(param_1 + 0x50) = 0;
              local_70[0] = 0;
              iVar9 = (**(code **)(**(longlong **)(param_1 + 0x38) + 8))
                                (*(longlong **)(param_1 + 0x38),0x1000,
                                 *(undefined8 *)(param_1 + 0x30),local_70);
              if (iVar9 == 0) {
                bVar8 = 1;
                *(bool *)(param_1 + 0x50) = local_70[0] == 0;
                lVar16 = 0;
                if (local_70[0] != 0) {
                  lVar16 = *(longlong *)(param_1 + 0x30);
                }
                *(longlong *)(param_1 + 0x40) = lVar16;
                *(ulonglong *)(param_1 + 0x48) =
                     *(longlong *)(param_1 + 0x30) + (ulonglong)local_70[0];
                do {
                  if (*(char *)(param_1 + 0x50) != '\0') break;
                  pcVar12 = *(char **)(param_1 + 0x40);
                  if (pcVar12 != (char *)0x0) {
                    cVar14 = '\0';
                    do {
                      cVar4 = *pcVar12;
                      if (cVar4 != '\r' && cVar4 != '\n') {
                        bVar8 = 1;
                        goto LAB_1800d77b4;
                      }
                      if (cVar14 == '\r' && cVar4 == '\n') {
                        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
                      }
                      cVar14 = *pcVar12;
                      pcVar12 = (char *)FUN_1800d7418(param_1);
                      *(char **)(param_1 + 0x40) = pcVar12;
                      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
                    } while (pcVar12 != (char *)0x0);
                  }
                  bVar8 = *(byte *)(param_1 + 0x50);
                  if (bVar8 != 0) {
LAB_1800d77b4:
                    bVar6 = false;
                    do {
                      if (*(char *)(param_1 + 0x50) != '\0' || bVar6) break;
                      bVar8 = FUN_1800d7b68(param_1);
                      if (bVar8 != 0) {
                        if (*(int *)(param_1 + 0x68) == 0) {
                          if (*(int *)(param_1 + 0x60) != 0) {
                            thunk_FUN_180001218(*(longlong *)(param_1 + 0x58) + 0x1000);
                            *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x60);
                            bVar8 = FUN_1800d7ef0(param_1);
                          }
                        }
                        else if (*(int *)(param_1 + 0x68) == 2) {
                          bVar7 = 1;
                          iVar9 = 0;
                          if (*(int *)(param_1 + 0x60) != 0) {
                            iVar10 = FUN_1800d8778(param_1,*(undefined8 *)(param_1 + 0x58));
                            bVar7 = iVar10 != -1;
                            if (iVar10 != -1) {
                              uVar19 = 1;
                              if (1 < *(uint *)(param_1 + 0x98)) {
                                do {
                                  iVar9 = func_0x000180222cb8(*(longlong *)(param_1 + 0x70) +
                                                              (ulonglong)
                                                              *(uint *)(*(longlong *)
                                                                         (param_1 + 0x90) +
                                                                       uVar19 * 0x18),
                                                              *(longlong *)(param_1 + 0x70) +
                                                              (longlong)iVar10);
                                  if (iVar9 == 0) {
                                    *(int *)(param_1 + 0x7c) =
                                         (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x60)) + -1;
                                    break;
                                  }
                                  uVar3 = (int)uVar19 + 1;
                                  uVar19 = (ulonglong)uVar3;
                                } while (uVar3 < *(uint *)(param_1 + 0x98));
                              }
                              iVar9 = (int)uVar19;
                              if (iVar9 == *(int *)(param_1 + 0x98)) {
                                local_60 = 0;
                                uStack_58 = 0;
                                local_68[0] = iVar10;
                                bVar7 = FUN_1800d8a80(param_1 + 0x90,local_68);
                                lVar16 = local_60;
                                if (local_60 != 0) {
                                  lVar17 = *(longlong *)(local_60 + -8);
                                  lVar15 = local_60 + lVar17 * 0x28;
                                  for (; lVar17 != 0; lVar17 = lVar17 + -1) {
                                    thunk_FUN_180102fc0(*(undefined8 *)(lVar15 + -0x10));
                                    thunk_FUN_180102fc0(*(undefined8 *)(lVar15 + -0x20));
                                    lVar15 = lVar15 + -0x28;
                                  }
                                  thunk_FUN_180102fc0(lVar16 + -8,
                                                      *(longlong *)(lVar16 + -8) * 0x28 + 8);
                                }
                              }
                            }
                          }
                          *(int *)(param_1 + 0x80) = iVar9;
                          bVar8 = bVar8 & bVar7;
                          bVar5 = **(char **)(param_1 + 0x40) == '\r' ||
                                  **(char **)(param_1 + 0x40) == '\n';
                          if (bVar8 != 0) {
                            do {
                              if ((*(char *)(param_1 + 0x50) != '\0' || bVar5) ||
                                 (bVar8 = FUN_1800d7b68(param_1), bVar8 == 0)) break;
                              iVar9 = *(int *)(param_1 + 0x68);
                              if (iVar9 == 2) {
                                bVar7 = FUN_1800d8170(param_1);
                                bVar8 = bVar7 & bVar8;
LAB_1800d7974:
                                if (bVar8 == 0) break;
                              }
                              else if (iVar9 != 3) {
                                if (iVar9 != 0) {
                                  bVar8 = 0;
                                  break;
                                }
                                if (*(int *)(param_1 + 0x60) != 0) {
                                  bVar8 = FUN_1800d7ef0(param_1);
                                  goto LAB_1800d7974;
                                }
                              }
                              if (*(char *)(param_1 + 0x50) == '\0') {
                                bVar5 = **(char **)(param_1 + 0x40) == '\r' ||
                                        **(char **)(param_1 + 0x40) == '\n';
                              }
                            } while( true );
                          }
                        }
                        if (*(char *)(param_1 + 0x50) == '\0') {
                          bVar6 = **(char **)(param_1 + 0x40) == '\r' ||
                                  **(char **)(param_1 + 0x40) == '\n';
                        }
                      }
                    } while (bVar8 != 0);
                  }
                } while (bVar8 != 0);
              }
            }
            thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x58));
            *(undefined8 *)(param_1 + 0x58) = 0;
          }
          thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x30));
          *(undefined8 *)(param_1 + 0x30) = 0;
        }
      }
    }
  }
  return bVar8;
}

