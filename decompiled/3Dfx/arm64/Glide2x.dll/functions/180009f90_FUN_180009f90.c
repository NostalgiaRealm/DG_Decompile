/*
 * FUN_180009f90 at 180009f90
 * uint __cdecl FUN_180009f90(longlong param_1, undefined8 * param_2, undefined4 param_3)
 * Address ranges: 180009f90-18000a523
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180009f90(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  char cVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  uint local_90 [2];
  undefined4 local_88 [2];
  longlong local_80;
  undefined8 uStack_78;
  int local_70 [2];
  longlong local_68;
  undefined8 uStack_60;
  
  *(undefined4 *)(param_1 + 0xa0) = param_3;
  lVar18 = *(longlong *)(param_1 + 0x90);
  if (lVar18 != 0) {
    lVar15 = *(longlong *)(lVar18 + -8);
    lVar19 = lVar18 + lVar15 * 0x18;
    while (lVar15 != 0) {
      lVar20 = *(longlong *)(lVar19 + -0x10);
      lVar15 = lVar15 + -1;
      lVar19 = lVar19 + -0x18;
      if (lVar20 != 0) {
        FUN_18000bbd8(lVar20,0x28,*(longlong *)(lVar20 + -8),FUN_18000b008);
        thunk_FUN_18005fbc8((LPVOID)(lVar20 + -8));
      }
    }
    thunk_FUN_18005fbc8((LPVOID)(lVar18 + -8));
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  local_88[0] = 0xffffffff;
  local_80 = 0;
  uStack_78 = 0;
  uVar17 = 0;
  puVar10 = (undefined8 *)thunk_FUN_18005fb88(0x188);
  lVar18 = 0;
  if (puVar10 != (undefined8 *)0x0) {
    puVar2 = puVar10 + 1;
    *puVar10 = 0x10;
    lVar19 = 0x10;
    puVar13 = puVar2;
    do {
      puVar13[1] = 0;
      puVar13[2] = 0;
      lVar19 = lVar19 + -1;
      puVar13 = puVar13 + 3;
    } while (lVar19 != 0);
    if (puVar2 != (undefined8 *)0x0) {
      uVar9 = *(uint *)(param_1 + 0x9c);
      uVar16 = 0;
      lVar18 = *(longlong *)(param_1 + 0x90);
      if (uVar9 != 0) {
        do {
          FUN_18000b920((undefined4 *)(puVar2 + uVar16 * 3),(undefined4 *)(lVar18 + uVar16 * 0x18));
          uVar1 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar1;
        } while (uVar1 < uVar9);
      }
      lVar18 = *(longlong *)(param_1 + 0x90);
      if (lVar18 != 0) {
        lVar15 = *(longlong *)(lVar18 + -8);
        lVar19 = lVar18 + lVar15 * 0x18;
        while (lVar15 != 0) {
          lVar20 = *(longlong *)(lVar19 + -0x10);
          lVar15 = lVar15 + -1;
          lVar19 = lVar19 + -0x18;
          if (lVar20 != 0) {
            FUN_18000bbd8(lVar20,0x28,*(longlong *)(lVar20 + -8),FUN_18000b008);
            thunk_FUN_18005fbc8((LPVOID)(lVar20 + -8));
          }
        }
        thunk_FUN_18005fbc8((LPVOID)(lVar18 + -8));
      }
      uVar9 = *(uint *)(param_1 + 0x98);
      *(undefined8 **)(param_1 + 0x90) = puVar2;
      *(uint *)(param_1 + 0x98) = uVar9 + 1;
      *(undefined4 *)(param_1 + 0x9c) = 0x10;
      FUN_18000b920((undefined4 *)(puVar10 + (ulonglong)uVar9 * 3 + 1),local_88);
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined8 **)(param_1 + 0x38) = param_2;
      iVar7 = (**(code **)*param_2)(param_2,0,0,0);
      lVar18 = local_80;
      if (iVar7 == 0) {
        lVar19 = thunk_FUN_18005fb88(0x1000);
        *(longlong *)(param_1 + 0x30) = lVar19;
        lVar18 = local_80;
        if (lVar19 != 0) {
          lVar18 = thunk_FUN_18005fb88(0x2000);
          *(longlong *)(param_1 + 0x58) = lVar18;
          if (lVar18 != 0) {
            lVar18 = thunk_FUN_18005fb88(0x80);
            *(longlong *)(param_1 + 0x70) = lVar18;
            if (lVar18 != 0) {
              *(undefined8 *)(param_1 + 0x78) = 0x80;
              *(undefined4 *)(param_1 + 0x54) = 1;
              *(undefined1 *)(param_1 + 0x50) = 0;
              local_90[0] = 0;
              iVar7 = (**(code **)(**(longlong **)(param_1 + 0x38) + 8))
                                (*(longlong **)(param_1 + 0x38),0x1000,
                                 *(undefined8 *)(param_1 + 0x30),local_90);
              if (iVar7 == 0) {
                uVar17 = 1;
                *(bool *)(param_1 + 0x50) = local_90[0] == 0;
                lVar18 = 0;
                if (local_90[0] != 0) {
                  lVar18 = *(longlong *)(param_1 + 0x30);
                }
                *(longlong *)(param_1 + 0x40) = lVar18;
                *(ulonglong *)(param_1 + 0x48) =
                     *(longlong *)(param_1 + 0x30) + (ulonglong)local_90[0];
                do {
                  if (*(char *)(param_1 + 0x50) != '\0') break;
                  pcVar11 = *(char **)(param_1 + 0x40);
                  if (pcVar11 != (char *)0x0) {
                    cVar14 = '\0';
                    do {
                      cVar3 = *pcVar11;
                      if (cVar3 != '\r' && cVar3 != '\n') {
                        uVar17 = 1;
                        goto LAB_18000a264;
                      }
                      if (cVar14 == '\r' && cVar3 == '\n') {
                        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
                      }
                      cVar14 = *pcVar11;
                      pcVar11 = (char *)FUN_180009f08(param_1);
                      *(char **)(param_1 + 0x40) = pcVar11;
                      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
                    } while (pcVar11 != (char *)0x0);
                  }
                  uVar17 = (uint)*(byte *)(param_1 + 0x50);
                  if (*(byte *)(param_1 + 0x50) != 0) {
LAB_18000a264:
                    bVar5 = false;
                    do {
                      if (*(char *)(param_1 + 0x50) != '\0' || bVar5) break;
                      bVar6 = FUN_18000a668(param_1);
                      uVar17 = (uint)bVar6;
                      if (bVar6 != 0) {
                        if (*(int *)(param_1 + 0x68) == 0) {
                          if (*(uint *)(param_1 + 0x60) != 0) {
                            thunk_FUN_180001218(*(undefined8 **)(param_1 + 0x58) + 0x200,
                                                *(undefined8 **)(param_1 + 0x58),
                                                (ulonglong)*(uint *)(param_1 + 0x60));
                            *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x60);
                            uVar17 = FUN_18000a9f0(param_1);
                            uVar17 = uVar17 & 0xff;
                          }
                        }
                        else if (*(int *)(param_1 + 0x68) == 2) {
                          uVar17 = 1;
                          iVar7 = 0;
                          if (*(uint *)(param_1 + 0x60) != 0) {
                            iVar8 = FUN_18000b278(param_1,*(undefined8 **)(param_1 + 0x58),
                                                  *(uint *)(param_1 + 0x60));
                            uVar17 = (uint)(iVar8 != -1);
                            if (iVar8 != -1) {
                              uVar16 = 1;
                              if (1 < *(uint *)(param_1 + 0x98)) {
                                do {
                                  uVar9 = FUN_18005fc90((byte *)(*(longlong *)(param_1 + 0x70) +
                                                                (ulonglong)
                                                                *(uint *)(*(longlong *)
                                                                           (param_1 + 0x90) +
                                                                         uVar16 * 0x18)),
                                                        (byte *)(*(longlong *)(param_1 + 0x70) +
                                                                (longlong)iVar8));
                                  if (uVar9 == 0) {
                                    *(int *)(param_1 + 0x7c) =
                                         (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x60)) + -1;
                                    break;
                                  }
                                  uVar9 = (int)uVar16 + 1;
                                  uVar16 = (ulonglong)uVar9;
                                } while (uVar9 < *(uint *)(param_1 + 0x98));
                              }
                              iVar7 = (int)uVar16;
                              if (iVar7 == *(int *)(param_1 + 0x98)) {
                                local_68 = 0;
                                uStack_60 = 0;
                                local_70[0] = iVar8;
                                uVar12 = FUN_18000b6c0((longlong *)(param_1 + 0x90),local_70);
                                lVar18 = local_68;
                                uVar17 = (uint)(byte)uVar12;
                                if (local_68 != 0) {
                                  lVar19 = *(longlong *)(local_68 + -8);
                                  lVar15 = local_68 + lVar19 * 0x28;
                                  for (; lVar19 != 0; lVar19 = lVar19 + -1) {
                                    thunk_FUN_18005fbc8(*(LPVOID *)(lVar15 + -0x10));
                                    thunk_FUN_18005fbc8(*(LPVOID *)(lVar15 + -0x20));
                                    lVar15 = lVar15 + -0x28;
                                  }
                                  thunk_FUN_18005fbc8((LPVOID)(lVar18 + -8));
                                }
                              }
                            }
                          }
                          *(int *)(param_1 + 0x80) = iVar7;
                          uVar17 = bVar6 & uVar17;
                          bVar4 = **(char **)(param_1 + 0x40) == '\r' ||
                                  **(char **)(param_1 + 0x40) == '\n';
                          if (uVar17 != 0) {
                            while (*(char *)(param_1 + 0x50) == '\0' && !bVar4) {
                              bVar6 = FUN_18000a668(param_1);
                              uVar17 = (uint)bVar6;
                              if (uVar17 == 0) break;
                              iVar7 = *(int *)(param_1 + 0x68);
                              if (iVar7 == 2) {
                                uVar16 = FUN_18000ac70(param_1);
                                uVar17 = (uint)uVar16 & 0xff & uVar17;
LAB_18000a424:
                                if (uVar17 == 0) break;
                              }
                              else if (iVar7 != 3) {
                                if (iVar7 != 0) {
                                  uVar17 = 0;
                                  break;
                                }
                                if (*(int *)(param_1 + 0x60) != 0) {
                                  uVar17 = FUN_18000a9f0(param_1);
                                  uVar17 = uVar17 & 0xff;
                                  goto LAB_18000a424;
                                }
                              }
                              if (*(char *)(param_1 + 0x50) == '\0') {
                                bVar4 = **(char **)(param_1 + 0x40) == '\r' ||
                                        **(char **)(param_1 + 0x40) == '\n';
                              }
                            }
                          }
                        }
                        if (*(char *)(param_1 + 0x50) == '\0') {
                          bVar5 = **(char **)(param_1 + 0x40) == '\r' ||
                                  **(char **)(param_1 + 0x40) == '\n';
                        }
                      }
                    } while (uVar17 != 0);
                  }
                } while (uVar17 != 0);
              }
            }
            thunk_FUN_18005fbc8(*(LPVOID *)(param_1 + 0x58));
            *(undefined8 *)(param_1 + 0x58) = 0;
          }
          thunk_FUN_18005fbc8(*(LPVOID *)(param_1 + 0x30));
          *(undefined8 *)(param_1 + 0x30) = 0;
          lVar18 = local_80;
        }
      }
    }
  }
  if (lVar18 != 0) {
    lVar19 = *(longlong *)(lVar18 + -8);
    lVar15 = lVar18 + lVar19 * 0x28;
    for (; lVar19 != 0; lVar19 = lVar19 + -1) {
      thunk_FUN_18005fbc8(*(LPVOID *)(lVar15 + -0x10));
      thunk_FUN_18005fbc8(*(LPVOID *)(lVar15 + -0x20));
      lVar15 = lVar15 + -0x28;
    }
    thunk_FUN_18005fbc8((LPVOID)(lVar18 + -8));
  }
  return uVar17;
}

