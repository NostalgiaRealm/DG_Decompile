/*
 * FUN_180047100 at 180047100
 * undefined __fastcall FUN_180047100(longlong param_1, char param_2)
 * Address ranges: 180047100-180047a48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180047100(longlong param_1,char param_2)

{
  longlong *plVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  int iVar13;
  byte *pbVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  uint *puVar17;
  uint uVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  uint local_res8;
  uint local_res18;
  int iVar25;
  
  if ((*(char *)(param_1 + 0x1018b) != '\0') || (param_2 != '\0')) {
    if ((*(int *)(param_1 + 0x7b0) == 0) || (local_res8 = 0x10, *(int *)(param_1 + 0x7b4) == 0)) {
      local_res8 = 0x20;
    }
    lVar9 = 0xb8c;
    if (*(char *)(param_1 + 0x766a) == '\0') {
      lVar9 = 0x7bc;
    }
    uVar7 = *(uint *)(param_1 + 0xfa10);
    iVar13 = 0x20;
    if (*(int *)(param_1 + lVar9) != 0) {
      iVar13 = 0x10;
    }
    if (uVar7 != 0) {
      uVar16 = 0;
      plVar1 = (longlong *)(param_1 + 0xf7d0);
      local_res18 = 0;
      do {
        *(undefined4 *)(param_1 + 0xf7d8) = 0;
        if ((uint)uVar16 < uVar7) {
          lVar9 = *(longlong *)(param_1 + 0xfa08);
          puVar15 = (ulonglong *)(lVar9 + 8 + uVar16 * 0x18);
          pcVar21 = (char *)(lVar9 + 0x17 + uVar16 * 0x18);
          pcVar19 = (char *)(lVar9 + 0x10 + uVar16 * 0x18);
          pcVar20 = (char *)(lVar9 + 0x11 + uVar16 * 0x18);
          puVar17 = (uint *)(lVar9 + 0x16 + uVar16 * 0x18);
          pbVar14 = (byte *)(lVar9 + 0x12 + uVar16 * 0x18);
          pbVar24 = (byte *)(lVar9 + 0x13 + uVar16 * 0x18);
          pbVar22 = (byte *)(lVar9 + 0x14 + uVar16 * 0x18);
          pbVar23 = (byte *)(lVar9 + 0x15 + uVar16 * 0x18);
          uVar16 = (ulonglong)local_res18;
        }
        else {
          puVar15 = (ulonglong *)0x0;
          pcVar21 = &DAT_0000000f;
          pbVar14 = &DAT_0000000a;
          pcVar19 = &DAT_00000008;
          pcVar20 = &DAT_00000009;
          puVar17 = (uint *)&DAT_0000000e;
          pbVar24 = &DAT_0000000b;
          pbVar22 = &DAT_0000000c;
          pbVar23 = &DAT_0000000d;
        }
        if ((*pcVar21 != '\0') || (uVar18 = (uint)uVar16, param_2 != '\0')) {
          uVar18 = -(uint)(*pcVar19 != '\0') & 0x80;
          uVar7 = uVar18 | -(uint)(*pcVar20 != '\0') & 0x40;
          if ((uVar7 == 0) ||
             ((*(char *)(param_1 + 0x7662) != '\0' && (*puVar15 != *(ulonglong *)(param_1 + 0xfe90))
              ))) {
            bVar2 = *pbVar14;
            if ((char)*puVar17 == '\0') {
              if (bVar2 != 0) {
                lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
                if ((((*(longlong *)(lVar9 + 0xb10) != 0) && (uVar16 = *puVar15, uVar16 != 0)) &&
                    (iVar8 = FUN_1800ea5c8(*(longlong **)(lVar9 + 0xb18),uVar16,
                                           (ulonglong)(bVar2 - 1),0,*(longlong *)(lVar9 + 0xb10),
                                           lVar9,4,*(longlong *)(lVar9 + 0xb78)),
                    *(int *)(*(longlong *)(lVar9 + 0xb10) + 0x30) != 3)) && (iVar8 != 4)) {
                  FUN_1800e23ec(lVar9,uVar16,bVar2 - 1,iVar8,4);
                }
              }
              bVar2 = *pbVar24;
              if (bVar2 != 0) {
                lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
                if ((*(longlong *)(lVar9 + 0xb10) != 0) && (uVar16 = *puVar15, uVar16 != 0)) {
                  iVar8 = FUN_1800ea5c8(*(longlong **)(lVar9 + 0xb18),uVar16,(ulonglong)(bVar2 - 1),
                                        0,*(longlong *)(lVar9 + 0xb10),lVar9,4,
                                        *(longlong *)(lVar9 + 0xb78));
                  if ((*(int *)(*(longlong *)(lVar9 + 0xb10) + 0x30) != 3) && (iVar8 != 4)) {
                    FUN_1800e23ec(lVar9,uVar16,bVar2 - 1,iVar8,4);
                  }
                }
              }
              bVar2 = *pbVar22;
              if (bVar2 != 0) {
                lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
                if ((*(longlong *)(lVar9 + 0xb10) != 0) && (uVar16 = *puVar15, uVar16 != 0)) {
                  iVar8 = FUN_1800ea5c8(*(longlong **)(lVar9 + 0xb18),uVar16,(ulonglong)(bVar2 - 1),
                                        0,*(longlong *)(lVar9 + 0xb10),lVar9,4,
                                        *(longlong *)(lVar9 + 0xb78));
                  if ((*(int *)(*(longlong *)(lVar9 + 0xb10) + 0x30) != 3) && (iVar8 != 4)) {
                    FUN_1800e23ec(lVar9,uVar16,bVar2 - 1,iVar8,4);
                  }
                }
              }
              if (*pbVar23 != 0) {
                lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
                if ((*(longlong *)(lVar9 + 0xb10) != 0) && (uVar16 = *puVar15, uVar16 != 0)) {
                  uVar7 = (uint)*pbVar23;
                  iVar8 = FUN_1800ea5c8(*(longlong **)(lVar9 + 0xb18),uVar16,(ulonglong)(uVar7 - 1),
                                        0,*(longlong *)(lVar9 + 0xb10),lVar9,4,
                                        *(longlong *)(lVar9 + 0xb78));
                  if ((*(int *)(*(longlong *)(lVar9 + 0xb10) + 0x30) != 3) && (iVar8 != 4)) {
                    iVar25 = 4;
                    goto LAB_1800479ca;
                  }
                }
              }
            }
            else {
              if (bVar2 != 0) {
                lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
                if ((((*(longlong *)(lVar9 + 0xb10) != 0) && (uVar16 = *puVar15, uVar16 != 0)) &&
                    (uVar7 = FUN_1800ea5c8(*(longlong **)(lVar9 + 0xb18),uVar16,
                                           (ulonglong)(bVar2 - 1),0,*(longlong *)(lVar9 + 0xb10),
                                           lVar9,local_res8,*(longlong *)(lVar9 + 0xb78)),
                    *(int *)(*(longlong *)(lVar9 + 0xb10) + 0x30) != 3)) && (uVar7 != local_res8)) {
                  if (uVar7 == 0) {
                    uVar18 = local_res8;
                    if ((local_res8 & 0xcc0) == local_res8) {
                      uVar18 = 0;
                    }
                    if (uVar18 == 0) goto LAB_1800476fa;
                  }
                  FUN_1800e23ec(lVar9,uVar16,bVar2 - 1,uVar7,local_res8);
                }
              }
LAB_1800476fa:
              if (*pbVar24 != 0) {
                lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
                if ((*(longlong *)(lVar9 + 0xb10) != 0) && (uVar16 = *puVar15, uVar16 != 0)) {
                  uVar7 = (uint)*pbVar24;
                  iVar8 = FUN_1800ea5c8(*(longlong **)(lVar9 + 0xb18),uVar16,(ulonglong)(uVar7 - 1),
                                        0,*(longlong *)(lVar9 + 0xb10),lVar9,iVar13,
                                        *(longlong *)(lVar9 + 0xb78));
                  if ((*(int *)(*(longlong *)(lVar9 + 0xb10) + 0x30) != 3) &&
                     (iVar25 = iVar13, iVar8 != iVar13)) {
LAB_1800479ca:
                    FUN_1800e23ec(lVar9,uVar16,uVar7 - 1,iVar8,iVar25);
                  }
                }
              }
            }
          }
          else {
            if ((char)*puVar17 == '\0') {
              bVar2 = *pbVar14;
              if (bVar2 != 0) {
                if (*(int *)(param_1 + 0xf7dc) == 0) {
                  puVar10 = (undefined8 *)thunk_FUN_1800fbccc(0x80);
                  if (puVar10 == (undefined8 *)0x0) goto LAB_18004744c;
                  puVar17 = (uint *)((ulonglong)*(uint *)(param_1 + 0xf7dc) << 3);
                  FUN_1800fbec0(puVar10,(undefined8 *)*plVar1,(ulonglong)puVar17);
                  FUN_1800fbcf0((LPVOID)*plVar1);
                  *plVar1 = (longlong)puVar10;
                  *(undefined4 *)(param_1 + 0xf7dc) = 0x10;
                }
                uVar18 = *(uint *)(param_1 + 0xf7d8);
                lVar9 = *plVar1;
                *(undefined4 *)(lVar9 + (ulonglong)uVar18 * 8) = 4;
                *(uint *)(lVar9 + 4 + (ulonglong)uVar18 * 8) = bVar2 - 1;
                *(int *)(param_1 + 0xf7d8) = *(int *)(param_1 + 0xf7d8) + 1;
              }
LAB_18004744c:
              bVar2 = *pbVar24;
              if (bVar2 != 0) {
                iVar8 = *(int *)(param_1 + 0xf7dc);
                if (*(int *)(param_1 + 0xf7d8) == iVar8) {
                  uVar16 = 0x10;
                  if (iVar8 != 0) {
                    uVar16 = (ulonglong)(uint)(iVar8 * 2);
                  }
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = uVar16;
                  uVar11 = SUB168(ZEXT816(8) * auVar4,0);
                  if (SUB168(ZEXT816(8) * auVar4,8) != 0) {
                    uVar11 = 0xffffffffffffffff;
                  }
                  puVar10 = (undefined8 *)thunk_FUN_1800fbccc(uVar11);
                  if (puVar10 == (undefined8 *)0x0) goto LAB_1800474dc;
                  puVar17 = (uint *)((ulonglong)*(uint *)(param_1 + 0xf7dc) << 3);
                  FUN_1800fbec0(puVar10,(undefined8 *)*plVar1,(ulonglong)puVar17);
                  FUN_1800fbcf0((LPVOID)*plVar1);
                  *plVar1 = (longlong)puVar10;
                  *(int *)(param_1 + 0xf7dc) = (int)uVar16;
                }
                uVar18 = *(uint *)(param_1 + 0xf7d8);
                lVar9 = *plVar1;
                *(undefined4 *)(lVar9 + (ulonglong)uVar18 * 8) = 4;
                *(uint *)(lVar9 + 4 + (ulonglong)uVar18 * 8) = bVar2 - 1;
                *(int *)(param_1 + 0xf7d8) = *(int *)(param_1 + 0xf7d8) + 1;
              }
LAB_1800474dc:
              bVar2 = *pbVar22;
              if (bVar2 != 0) {
                iVar8 = *(int *)(param_1 + 0xf7dc);
                if (*(int *)(param_1 + 0xf7d8) == iVar8) {
                  uVar16 = 0x10;
                  if (iVar8 != 0) {
                    uVar16 = (ulonglong)(uint)(iVar8 * 2);
                  }
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = uVar16;
                  uVar11 = SUB168(ZEXT816(8) * auVar5,0);
                  if (SUB168(ZEXT816(8) * auVar5,8) != 0) {
                    uVar11 = 0xffffffffffffffff;
                  }
                  puVar10 = (undefined8 *)thunk_FUN_1800fbccc(uVar11);
                  if (puVar10 == (undefined8 *)0x0) goto LAB_18004756d;
                  puVar17 = (uint *)((ulonglong)*(uint *)(param_1 + 0xf7dc) << 3);
                  FUN_1800fbec0(puVar10,(undefined8 *)*plVar1,(ulonglong)puVar17);
                  FUN_1800fbcf0((LPVOID)*plVar1);
                  *plVar1 = (longlong)puVar10;
                  *(int *)(param_1 + 0xf7dc) = (int)uVar16;
                }
                uVar18 = *(uint *)(param_1 + 0xf7d8);
                lVar9 = *plVar1;
                *(undefined4 *)(lVar9 + (ulonglong)uVar18 * 8) = 4;
                *(uint *)(lVar9 + 4 + (ulonglong)uVar18 * 8) = bVar2 - 1;
                *(int *)(param_1 + 0xf7d8) = *(int *)(param_1 + 0xf7d8) + 1;
              }
LAB_18004756d:
              bVar2 = *pbVar23;
              if (bVar2 != 0) {
                iVar8 = *(int *)(param_1 + 0xf7dc);
                if (*(int *)(param_1 + 0xf7d8) == iVar8) {
                  uVar16 = 0x10;
                  if (iVar8 != 0) {
                    uVar16 = (ulonglong)(uint)(iVar8 * 2);
                  }
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = uVar16;
                  uVar11 = SUB168(ZEXT816(8) * auVar6,0);
                  if (SUB168(ZEXT816(8) * auVar6,8) != 0) {
                    uVar11 = 0xffffffffffffffff;
                  }
                  puVar10 = (undefined8 *)thunk_FUN_1800fbccc(uVar11);
                  if (puVar10 == (undefined8 *)0x0) goto LAB_180047601;
                  FUN_1800fbec0(puVar10,(undefined8 *)*plVar1,
                                (ulonglong)*(uint *)(param_1 + 0xf7dc) << 3);
                  FUN_1800fbcf0((LPVOID)*plVar1);
                  *plVar1 = (longlong)puVar10;
                  *(int *)(param_1 + 0xf7dc) = (int)uVar16;
                }
                puVar17 = (uint *)(ulonglong)*(uint *)(param_1 + 0xf7d8);
                lVar9 = *plVar1;
                *(undefined4 *)(lVar9 + (longlong)puVar17 * 8) = 4;
                *(uint *)(lVar9 + 4 + (longlong)puVar17 * 8) = bVar2 - 1;
                goto LAB_1800475fb;
              }
            }
            else {
              if (local_res8 == 0x20) {
                local_res8 = 0x20;
                if (*pcVar20 != '\0') {
                  local_res8 = 0x60;
                }
                local_res8 = uVar18 | local_res8;
              }
              bVar2 = *pbVar14;
              if (bVar2 != 0) {
                if (*(int *)(param_1 + 0xf7dc) == 0) {
                  puVar10 = (undefined8 *)thunk_FUN_1800fbccc(0x80);
                  if (puVar10 == (undefined8 *)0x0) goto LAB_18004734b;
                  puVar17 = (uint *)((ulonglong)*(uint *)(param_1 + 0xf7dc) << 3);
                  FUN_1800fbec0(puVar10,(undefined8 *)*plVar1,(ulonglong)puVar17);
                  FUN_1800fbcf0((LPVOID)*plVar1);
                  *plVar1 = (longlong)puVar10;
                  *(undefined4 *)(param_1 + 0xf7dc) = 0x10;
                }
                uVar18 = *(uint *)(param_1 + 0xf7d8);
                lVar9 = *plVar1;
                *(uint *)(lVar9 + (ulonglong)uVar18 * 8) = local_res8;
                *(uint *)(lVar9 + 4 + (ulonglong)uVar18 * 8) = bVar2 - 1;
                *(int *)(param_1 + 0xf7d8) = *(int *)(param_1 + 0xf7d8) + 1;
              }
LAB_18004734b:
              bVar2 = *pbVar24;
              if (bVar2 != 0) {
                iVar8 = *(int *)(param_1 + 0xf7dc);
                if (*(int *)(param_1 + 0xf7d8) == iVar8) {
                  uVar16 = 0x10;
                  if (iVar8 != 0) {
                    uVar16 = (ulonglong)(uint)(iVar8 * 2);
                  }
                  auVar3._8_8_ = 0;
                  auVar3._0_8_ = uVar16;
                  uVar11 = SUB168(ZEXT816(8) * auVar3,0);
                  if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
                    uVar11 = 0xffffffffffffffff;
                  }
                  puVar10 = (undefined8 *)thunk_FUN_1800fbccc(uVar11);
                  if (puVar10 == (undefined8 *)0x0) goto LAB_180047601;
                  puVar17 = (uint *)((ulonglong)*(uint *)(param_1 + 0xf7dc) << 3);
                  FUN_1800fbec0(puVar10,(undefined8 *)*plVar1,(ulonglong)puVar17);
                  FUN_1800fbcf0((LPVOID)*plVar1);
                  *plVar1 = (longlong)puVar10;
                  *(int *)(param_1 + 0xf7dc) = (int)uVar16;
                }
                uVar18 = *(uint *)(param_1 + 0xf7d8);
                lVar9 = *plVar1;
                *(int *)(lVar9 + (ulonglong)uVar18 * 8) = iVar13;
                *(uint *)(lVar9 + 4 + (ulonglong)uVar18 * 8) = bVar2 - 1;
LAB_1800475fb:
                *(int *)(param_1 + 0xf7d8) = *(int *)(param_1 + 0xf7d8) + 1;
              }
            }
LAB_180047601:
            plVar12 = (longlong *)0x0;
            if (*(int *)(param_1 + 0xf7d8) != 0) {
              plVar12 = plVar1;
            }
            FUN_1800e2dc4(*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508),*puVar15,puVar17,
                          uVar7,plVar12);
          }
          *pcVar21 = '\0';
          uVar18 = local_res18;
        }
        uVar7 = *(uint *)(param_1 + 0xfa10);
        local_res18 = uVar18 + 1;
        uVar16 = (ulonglong)local_res18;
      } while (local_res18 < uVar7);
    }
    *(undefined1 *)(param_1 + 0x1018b) = 0;
  }
  return;
}

