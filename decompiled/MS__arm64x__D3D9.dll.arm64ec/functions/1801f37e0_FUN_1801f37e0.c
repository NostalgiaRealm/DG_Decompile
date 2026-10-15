/*
 * FUN_1801f37e0 at 1801f37e0
 * undefined FUN_1801f37e0(void)
 * Address ranges: 1801f37e0-1801f3d37;1801f3d4c-1801f3da3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1801f37e0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  code *extraout_x11;
  code *extraout_x11_00;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint local_70 [2];
  undefined8 local_68;
  undefined8 local_60;
  int local_58 [2];
  longlong local_50;
  undefined8 uStack_48;
  
  *(undefined4 *)(param_1 + 0xa0) = param_3;
  lVar15 = *(longlong *)(param_1 + 0x90);
  local_60 = param_2;
  if (lVar15 != 0) {
    lVar13 = *(longlong *)(lVar15 + -8);
    lVar16 = lVar15 + lVar13 * 0x18;
    while (lVar13 != 0) {
      lVar19 = *(longlong *)(lVar16 + -0x10);
      lVar13 = lVar13 + -1;
      lVar16 = lVar16 + -0x18;
      if (lVar19 != 0) {
        FUN_180105ef0(lVar19,0x28,*(undefined8 *)(lVar19 + -8),FUN_1801f4898);
        FUN_1802229d8(lVar19 + -8,*(longlong *)(lVar19 + -8) * 0x28 + 8);
      }
    }
    FUN_1802229d8(lVar15 + -8,*(longlong *)(lVar15 + -8) * 0x18 + 8);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  uVar12 = 0;
  puVar7 = (undefined8 *)FUN_1802229a8(0x188);
  if (puVar7 != (undefined8 *)0x0) {
    lVar15 = 0x10;
    puVar17 = puVar7 + 1;
    *puVar7 = 0x10;
    puVar10 = puVar17;
    do {
      puVar10[1] = 0;
      puVar10[2] = 0;
      lVar15 = lVar15 + -1;
      puVar10 = puVar10 + 3;
    } while (lVar15 != 0);
    if (puVar17 != (undefined8 *)0x0) {
      uVar14 = *(uint *)(param_1 + 0x9c);
      uVar20 = 0;
      lVar15 = *(longlong *)(param_1 + 0x90);
      if (uVar14 != 0) {
        do {
          FUN_1801f50a0(puVar17 + uVar20 * 3,lVar15 + uVar20 * 0x18);
          uVar18 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar18;
        } while (uVar18 < uVar14);
      }
      lVar15 = *(longlong *)(param_1 + 0x90);
      if (lVar15 != 0) {
        lVar13 = *(longlong *)(lVar15 + -8);
        lVar16 = lVar15 + lVar13 * 0x18;
        if (lVar13 != 0) {
          local_70[0] = 0;
          local_68 = puVar17;
          do {
            lVar19 = *(longlong *)(lVar16 + -0x10);
            lVar13 = lVar13 + -1;
            lVar16 = lVar16 + -0x18;
            if (lVar19 != 0) {
              FUN_180105ef0(lVar19,0x28,*(undefined8 *)(lVar19 + -8),FUN_1801f4898);
              FUN_1802229d8(lVar19 + -8,*(longlong *)(lVar19 + -8) * 0x28 + 8);
            }
            puVar17 = local_68;
            uVar12 = local_70[0];
          } while (lVar13 != 0);
        }
        FUN_1802229d8(lVar15 + -8,*(longlong *)(lVar15 + -8) * 0x18 + 8);
      }
      uVar14 = *(uint *)(param_1 + 0x98);
      *(undefined8 **)(param_1 + 0x90) = puVar17;
      *(uint *)(param_1 + 0x98) = uVar14 + 1;
      *(undefined4 *)(param_1 + 0x9c) = 0x10;
      *(undefined4 *)(puVar7 + (ulonglong)uVar14 * 3 + 1) = 0xffffffff;
      lVar15 = puVar7[(ulonglong)uVar14 * 3 + 2];
      if (lVar15 != 0) {
        lVar16 = *(longlong *)(lVar15 + -8);
        lVar13 = lVar15 + lVar16 * 0x28;
        for (; lVar16 != 0; lVar16 = lVar16 + -1) {
          FUN_1802229d8(*(undefined8 *)(lVar13 + -0x10));
          FUN_1802229d8(*(undefined8 *)(lVar13 + -0x20));
          lVar13 = lVar13 + -0x28;
        }
        FUN_1802229d8(lVar15 + -8,*(longlong *)(lVar15 + -8) * 0x28 + 8);
      }
      puVar7[(ulonglong)uVar14 * 3 + 2] = 0;
      puVar7[(ulonglong)uVar14 * 3 + 3] = 0;
      *(undefined4 *)(param_1 + 0x80) = 0;
      puVar2 = __hybrid_os_arm64x_dispatch_icall;
      *(undefined8 *)(param_1 + 0x38) = local_60;
      uVar8 = (*(code *)puVar2)(0x180224000);
      iVar4 = (*extraout_x11)(uVar8,0,0,0);
      if (iVar4 == 0) {
        lVar15 = FUN_1802229a8(0x1000);
        *(longlong *)(param_1 + 0x30) = lVar15;
        if (lVar15 != 0) {
          lVar15 = FUN_1802229a8(0x2000);
          *(longlong *)(param_1 + 0x58) = lVar15;
          if (lVar15 != 0) {
            lVar15 = FUN_1802229a8(0x80);
            *(longlong *)(param_1 + 0x70) = lVar15;
            if (lVar15 != 0) {
              *(undefined8 *)(param_1 + 0x78) = 0x80;
              *(undefined4 *)(param_1 + 0x54) = 1;
              *(undefined1 *)(param_1 + 0x50) = 0;
              local_70[0] = 0;
              uVar8 = (*(code *)puVar2)(0x180224000);
              iVar4 = (*extraout_x11_00)(uVar8,0x1000,*(undefined8 *)(param_1 + 0x30),local_70);
              if (iVar4 == 0) {
                uVar12 = 1;
                *(bool *)(param_1 + 0x50) = local_70[0] == 0;
                lVar15 = 0;
                if (local_70[0] != 0) {
                  lVar15 = *(longlong *)(param_1 + 0x30);
                }
                *(longlong *)(param_1 + 0x40) = lVar15;
                *(ulonglong *)(param_1 + 0x48) =
                     *(longlong *)(param_1 + 0x30) + (ulonglong)local_70[0];
                do {
                  if (*(char *)(param_1 + 0x50) != '\0') break;
                  pcVar9 = *(char **)(param_1 + 0x40);
                  if (pcVar9 != (char *)0x0) {
                    cVar11 = '\0';
                    do {
                      cVar1 = *pcVar9;
                      if (cVar1 != '\r' && cVar1 != '\n') {
                        uVar12 = 1;
                        goto LAB_1801f3b24;
                      }
                      if (cVar11 == '\r' && cVar1 == '\n') {
                        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
                      }
                      cVar11 = *pcVar9;
                      pcVar9 = (char *)FUN_1801f3740(param_1);
                      *(char **)(param_1 + 0x40) = pcVar9;
                      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
                    } while (pcVar9 != (char *)0x0);
                  }
                  uVar12 = (uint)*(byte *)(param_1 + 0x50);
                  if (uVar12 != 0) {
LAB_1801f3b24:
                    uVar14 = 0;
                    do {
                      if (*(char *)(param_1 + 0x50) != '\0' || (uVar14 & 0xff) != 0) break;
                      uVar12 = FUN_1801f3ee8(param_1);
                      uVar12 = uVar12 & 0xff;
                      if (uVar12 != 0) {
                        if (*(int *)(param_1 + 0x68) == 0) {
                          if (*(int *)(param_1 + 0x60) != 0) {
                    /* WARNING: Subroutine does not return */
                            thunk_FUN_180104c48(*(longlong *)(param_1 + 0x58) + 0x1000);
                          }
                        }
                        else if (*(int *)(param_1 + 0x68) == 2) {
                          uVar18 = 1;
                          iVar4 = 0;
                          if (*(int *)(param_1 + 0x60) != 0) {
                            iVar5 = FUN_1801f4b08(param_1,*(undefined8 *)(param_1 + 0x58));
                            uVar18 = (uint)(iVar5 != -1);
                            if (iVar5 != -1) {
                              uVar20 = 1;
                              if (1 < *(uint *)(param_1 + 0x98)) {
                                do {
                                  iVar4 = FUN_180222cb8(*(longlong *)(param_1 + 0x70) +
                                                        (ulonglong)
                                                        *(uint *)(*(longlong *)(param_1 + 0x90) +
                                                                 uVar20 * 0x18),
                                                        *(longlong *)(param_1 + 0x70) +
                                                        (longlong)iVar5);
                                  if (iVar4 == 0) {
                                    *(int *)(param_1 + 0x7c) =
                                         (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x60)) + -1;
                                    break;
                                  }
                                  uVar6 = (int)uVar20 + 1;
                                  uVar20 = (ulonglong)uVar6;
                                } while (uVar6 < *(uint *)(param_1 + 0x98));
                              }
                              iVar4 = (int)uVar20;
                              if (iVar4 == *(int *)(param_1 + 0x98)) {
                                local_50 = 0;
                                uStack_48 = 0;
                                local_58[0] = iVar5;
                                uVar6 = FUN_1801f4ee8(param_1 + 0x90,local_58);
                                lVar15 = local_50;
                                uVar18 = uVar6 & 0xff;
                                if (local_50 != 0) {
                                  lVar16 = *(longlong *)(local_50 + -8);
                                  if (lVar16 != 0) {
                                    local_68 = (undefined8 *)
                                               (CONCAT44(local_68._4_4_,uVar6) & 0xffffffff000000ff)
                                    ;
                                    lVar13 = local_50 + lVar16 * 0x28;
                                    local_70[0] = uVar14;
                                    do {
                                      lVar16 = lVar16 + -1;
                                      FUN_1802229d8(*(undefined8 *)(lVar13 + -0x10));
                                      FUN_1802229d8(*(undefined8 *)(lVar13 + -0x20));
                                      lVar13 = lVar13 + -0x28;
                                    } while (lVar16 != 0);
                                    uVar14 = local_70[0];
                                    uVar18 = (uint)local_68;
                                  }
                                  FUN_1802229d8(lVar15 + -8,*(longlong *)(lVar15 + -8) * 0x28 + 8);
                                }
                              }
                            }
                          }
                          *(int *)(param_1 + 0x80) = iVar4;
                          uVar12 = uVar12 & uVar18;
                          bVar3 = **(char **)(param_1 + 0x40) == '\r' ||
                                  **(char **)(param_1 + 0x40) == '\n';
                          if (uVar12 != 0) {
                            while (*(char *)(param_1 + 0x50) == '\0' && !bVar3) {
                              uVar12 = FUN_1801f3ee8(param_1);
                              uVar12 = uVar12 & 0xff;
                              if (uVar12 == 0) break;
                              iVar4 = *(int *)(param_1 + 0x68);
                              if (iVar4 == 2) {
                                uVar18 = FUN_1801f44f0(param_1);
                                uVar12 = uVar18 & 0xff & uVar12;
LAB_1801f3cf8:
                                if (uVar12 == 0) break;
                              }
                              else if (iVar4 != 3) {
                                if (iVar4 != 0) {
                                  uVar12 = 0;
                                  break;
                                }
                                if (*(int *)(param_1 + 0x60) != 0) {
                                  uVar12 = FUN_1801f4270(param_1);
                                  uVar12 = uVar12 & 0xff;
                                  goto LAB_1801f3cf8;
                                }
                              }
                              if (*(char *)(param_1 + 0x50) == '\0') {
                                bVar3 = **(char **)(param_1 + 0x40) == '\r' ||
                                        **(char **)(param_1 + 0x40) == '\n';
                              }
                            }
                          }
                        }
                        if (*(char *)(param_1 + 0x50) == '\0') {
                          uVar14 = (uint)(**(char **)(param_1 + 0x40) == '\r' ||
                                         **(char **)(param_1 + 0x40) == '\n');
                        }
                      }
                    } while (uVar12 != 0);
                  }
                } while (uVar12 != 0);
              }
            }
            FUN_1802229d8(*(undefined8 *)(param_1 + 0x58));
            *(undefined8 *)(param_1 + 0x58) = 0;
          }
          FUN_1802229d8(*(undefined8 *)(param_1 + 0x30));
          *(undefined8 *)(param_1 + 0x30) = 0;
        }
      }
    }
  }
  return uVar12;
}

