/*
 * FUN_18002e3d4 at 18002e3d4
 * bool __fastcall FUN_18002e3d4(uint * param_1, ulonglong param_2)
 * Address ranges: 18002e3d4-18002ebb8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18002e3d4(uint *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  longlong *plVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  longlong *plVar23;
  uint *puVar24;
  uint *local_res8;
  uint local_res10;
  uint *local_res18;
  uint local_res20 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  int local_60;
  int local_5c;
  
  uVar10 = param_2 & 0xffffffff;
  plVar23 = &DAT_180112b08 + uVar10 * 0x4b;
  local_res8 = param_1;
  FUN_1800fbcf0((LPVOID)*plVar23);
  uVar18 = 0;
  *plVar23 = 0;
  (&DAT_180112b10)[uVar10 * 0x4b] = 0;
  FUN_1800fbcf0((LPVOID)(&DAT_180112b18)[uVar10 * 0x4b]);
  plVar17 = DAT_180111f18;
  (&DAT_180112b18)[uVar10 * 0x4b] = 0;
  (&DAT_180112b20)[uVar10 * 0x4b] = 0;
  uVar8 = (**(code **)(*plVar17 + 0xa0))(plVar17,(&DAT_1801128fc)[uVar10 * 0x96]);
  if (uVar8 != 0) {
    iVar22 = *(int *)(DAT_180111f20 + 0x9df);
    if (iVar22 != 0) {
      if (uVar8 != 0) {
        do {
          (**(code **)(*DAT_180111f18 + 0xa8))
                    (DAT_180111f18,&local_60,(&DAT_1801128fc)[uVar10 * 0x96],
                     (&DAT_180112900)[uVar10 * 0x96],*(undefined4 *)(DAT_180111f20 + 0x818),uVar18);
          if (((local_60 != 0) && (local_5c != 0)) &&
             (uVar11 = FUN_18002fa8c(plVar23,(undefined8 *)&local_60), (char)uVar11 == '\0')) {
            FUN_1800fbcf0((LPVOID)*plVar23);
            *plVar23 = 0;
            (&DAT_180112b10)[uVar10 * 0x4b] = 0;
            break;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar8);
      }
      uVar12 = 0;
      if (*(int *)(&DAT_180112b10 + uVar10 * 0x4b) != 0) {
        if (iVar22 == 1) {
          FUN_1800fbcf0((LPVOID)*plVar23);
          *plVar23 = 0;
          (&DAT_180112b10)[uVar10 * 0x4b] = 0;
          do {
            uStack_70 = 0x10000003c;
            local_68 = 0x3c;
            local_78 = (ulonglong)
                       CONCAT24(*(undefined2 *)(&DAT_18010156a + uVar12 * 4),
                                (uint)*(ushort *)(&DAT_180101568 + uVar12 * 4));
            FUN_18002fa8c(plVar23,&local_78);
            uVar12 = (ulonglong)((int)uVar12 + 1);
          } while (*(short *)(&DAT_180101568 + uVar12 * 4) != 0);
        }
        else {
          puVar24 = (uint *)(&DAT_180112b10 + uVar10 * 0x4b);
          uVar13 = uVar12;
          do {
            uVar8 = 0;
            if (*puVar24 != 0) {
              uVar14 = uVar12;
              do {
                if ((*(uint *)((&DAT_180112b08)[uVar10 * 0x4b] + uVar14 * 0x18) ==
                     (uint)*(ushort *)(&DAT_180101568 + uVar13 * 4)) &&
                   (*(uint *)((&DAT_180112b08)[uVar10 * 0x4b] + 4 + uVar14 * 0x18) ==
                    (uint)*(ushort *)(&DAT_18010156a + uVar13 * 4))) goto LAB_18002e677;
                uVar8 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar8;
              } while (uVar8 < *puVar24);
            }
            if ((uVar8 == *puVar24) && (*puVar24 != 0)) {
              uVar3 = *(ushort *)(&DAT_180101568 + uVar13 * 4);
              uVar14 = uVar12;
              do {
                uVar8 = *(uint *)((&DAT_180112b08)[uVar10 * 0x4b] + uVar14 * 0x18);
                if ((uVar3 < uVar8) ||
                   ((uVar8 == uVar3 &&
                    ((uint)*(ushort *)(&DAT_18010156a + uVar13 * 4) <
                     *(uint *)((&DAT_180112b08)[uVar10 * 0x4b] + 4 + uVar14 * 0x18))))) {
                  local_78 = (ulonglong)
                             CONCAT24(*(undefined2 *)(&DAT_18010156a + uVar13 * 4),(uint)uVar3);
                  uStack_70 = 0x10000003c;
                  local_68 = 0x3c;
                  FUN_18002fb50(plVar23,(uint)uVar14,&local_78);
                  break;
                }
                uVar8 = (uint)uVar14 + 1;
                uVar14 = (ulonglong)uVar8;
              } while (uVar8 < *puVar24);
            }
LAB_18002e677:
            uVar13 = (ulonglong)((int)uVar13 + 1);
          } while (*(short *)(&DAT_180101568 + uVar13 * 4) != 0);
        }
      }
    }
    lVar19 = 0;
    uVar8 = *(uint *)(&DAT_180112a58 + uVar10 * 0x4b);
    uVar18 = *(uint *)((longlong)&DAT_180112a58 + uVar10 * 600 + 4);
    local_res8 = (uint *)(&DAT_180112a58)[uVar10 * 0x4b];
    do {
      lVar6 = DAT_180111f20;
      uVar9 = *(uint *)(DAT_180111f20 + 0x90b + lVar19 * 0xc);
      if ((uVar9 != 0) && (uVar20 = *(uint *)(DAT_180111f20 + 0x90f + lVar19 * 0xc), uVar20 != 0)) {
        uVar16 = uVar20;
        uVar15 = uVar9;
        if ((uVar9 == 0xffffffff) && (uVar16 = uVar18, uVar15 = uVar8, uVar20 != 0xffffffff)) {
          if (uVar20 == 0x100) {
            local_res18 = (uint *)0x300000004;
            uVar12 = FUN_1800f8194((uint *)&local_res18,(uint *)&local_res8,'\0');
            uVar16 = (uint)(uVar12 >> 0x20);
          }
          else {
            uVar16 = uVar20;
            uVar15 = uVar9;
            if (uVar20 != 0x101) goto LAB_18002e750;
            local_res20[0] = 0x10;
            local_res20[1] = 9;
            uVar13 = FUN_1800f8194(local_res20,(uint *)&local_res8,'\0');
            uVar12 = uVar13 & 0xffffffff;
            uVar16 = (uint)(uVar13 >> 0x20);
          }
          uVar15 = (uint)uVar12;
        }
LAB_18002e750:
        uVar12 = 0;
        uVar9 = *(uint *)(&DAT_180112b10 + uVar10 * 0x4b);
        if (uVar9 != 0) {
          lVar5 = (&DAT_180112b08)[uVar10 * 0x4b];
          do {
            if (((*(uint *)(lVar5 + uVar12 * 0x18) == uVar15) &&
                (*(uint *)(lVar5 + 4 + uVar12 * 0x18) == uVar16)) &&
               ((iVar22 = *(int *)(lVar6 + 0x913 + lVar19 * 0xc), iVar22 == 0 ||
                (iVar22 == *(int *)(lVar5 + 0x10 + uVar12 * 0x18))))) break;
            uVar20 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar20;
          } while (uVar20 < uVar9);
        }
        uVar13 = 0;
        if ((uint)uVar12 == uVar9) {
          uVar20 = 0;
          do {
            if (uVar20 == uVar9) {
LAB_18002e860:
              uVar9 = *(uint *)(lVar6 + 0x913 + lVar19 * 0xc);
              local_78 = CONCAT44(uVar16,uVar15);
              if (uVar9 == 0) {
                uVar9 = 0x3c;
                local_68 = 0x3c;
              }
              else {
                local_68 = (ulonglong)uVar9;
              }
              uStack_70 = CONCAT44(1,uVar9);
              FUN_18002fb50(plVar23,(uint)uVar13,&local_78);
              break;
            }
            uVar20 = *(uint *)((&DAT_180112b08)[uVar10 * 0x4b] + uVar13 * 0x18);
            if ((uVar15 < uVar20) ||
               ((uVar20 == uVar15 &&
                (uVar16 < *(uint *)((&DAT_180112b08)[uVar10 * 0x4b] + 4 + uVar13 * 0x18)))))
            goto LAB_18002e860;
            uVar20 = (uint)uVar13 + 1;
            uVar13 = (ulonglong)uVar20;
          } while (uVar20 <= uVar9);
        }
      }
      uVar12 = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 != 0x10);
    if (*(int *)(&DAT_180112b10 + uVar10 * 0x4b) != 0) {
      local_res10 = 0;
      puVar24 = (uint *)(&DAT_180112b10 + uVar10 * 0x4b);
      local_res18 = puVar24;
      do {
        uVar18 = (uint)uVar12;
        uVar8 = *puVar24;
        if (uVar8 != 0) {
          lVar19 = (&DAT_180112b08)[uVar10 * 0x4b];
          uVar13 = 0xffffffff;
          bVar7 = false;
          iVar22 = *(int *)(lVar19 + (ulonglong)(uVar8 - 1) * 0x18);
          iVar21 = *(int *)(lVar19 + 4 + (ulonglong)(uVar8 - 1) * 0x18);
          do {
            uVar14 = (ulonglong)(uVar8 - 1);
            local_res8 = (uint *)CONCAT44(local_res8._4_4_,uVar8 - 1);
            if ((iVar22 != *(int *)(lVar19 + uVar14 * 0x18)) ||
               (iVar21 != *(int *)(lVar19 + 4 + uVar14 * 0x18))) {
              if ((!bVar7) && (uVar18 = (uint)uVar13, uVar18 != 0xffffffff)) {
                puVar1 = (undefined8 *)(lVar19 + (ulonglong)(uVar18 - 1) * 0x18);
                local_78 = *puVar1;
                uStack_70 = puVar1[1];
                local_68._4_4_ =
                     (undefined4)
                     ((ulonglong)*(undefined8 *)(lVar19 + 0x10 + (ulonglong)(uVar18 - 1) * 0x18) >>
                     0x20);
                local_68 = CONCAT44(local_68._4_4_,(&DAT_180101528)[uVar12]);
                FUN_18002fb50(plVar23,uVar18,&local_78);
              }
              uVar13 = 0xffffffff;
              lVar19 = (&DAT_180112b08)[uVar10 * 0x4b];
              bVar7 = false;
              iVar22 = *(int *)(lVar19 + uVar14 * 0x18);
              iVar21 = *(int *)(lVar19 + 4 + uVar14 * 0x18);
            }
            puVar24 = local_res18;
            uVar18 = local_res10;
            iVar4 = (&DAT_180101528)[uVar12];
            if (*(int *)(lVar19 + 0x10 + uVar14 * 0x18) == iVar4 + -1) {
              uVar13 = (ulonglong)uVar8;
            }
            else if (*(int *)(lVar19 + 0x10 + uVar14 * 0x18) == iVar4) {
              bVar7 = true;
            }
            uVar8 = (uint)local_res8;
          } while ((uint)local_res8 != 0);
          if ((!bVar7) && ((uint)uVar13 != 0xffffffff)) {
            puVar1 = (undefined8 *)(lVar19 + uVar13 * 0x18);
            local_78 = *puVar1;
            uStack_70 = puVar1[1];
            local_68._4_4_ =
                 (undefined4)((ulonglong)*(undefined8 *)(lVar19 + 0x10 + uVar13 * 0x18) >> 0x20);
            local_68 = CONCAT44(local_68._4_4_,iVar4);
            FUN_18002fb50(plVar23,(uint)uVar13,&local_78);
          }
        }
        local_res10 = uVar18 + 1;
        uVar12 = (ulonglong)local_res10;
      } while ((&DAT_180101528)[uVar12] != 0);
    }
    uVar12 = 0;
    local_res8 = (uint *)(&DAT_180112b10 + uVar10 * 0x4b);
    while( true ) {
      uVar13 = 0;
      if (*local_res8 <= (uint)uVar12) break;
      uVar8 = 0;
      if (*(uint *)(&DAT_180112b20 + uVar10 * 0x4b) != 0) {
        lVar19 = (&DAT_180112b18)[uVar10 * 0x4b];
        lVar6 = (&DAT_180112b08)[uVar10 * 0x4b];
        do {
          uVar8 = (uint)uVar13;
          if ((*(int *)(lVar19 + uVar13 * 0x18) == *(int *)(lVar6 + uVar12 * 0x18)) &&
             (*(int *)(lVar19 + 4 + uVar13 * 0x18) == *(int *)(lVar6 + 4 + uVar12 * 0x18))) {
            uVar18 = *(uint *)(lVar6 + 0x10 + uVar12 * 0x18);
            if ((uVar18 != 0) &&
               (((*(char *)(DAT_180111f20 + 0x822) == '\0' || (*(int *)(DAT_180111f20 + 0x870) == 0)
                 ) || (*(int *)(DAT_180111f20 + 0x874) == 0)))) {
              uVar9 = *(uint *)(&DAT_180112a68 + uVar10 * 0x4b);
              uVar20 = *(uint *)(lVar19 + 0x10 + uVar13 * 0x18);
              uVar16 = uVar20 - uVar9;
              if (uVar20 <= uVar9) {
                uVar16 = uVar9 - uVar20;
              }
              uVar20 = uVar18 - uVar9;
              if (uVar18 <= uVar9) {
                uVar20 = uVar9 - uVar18;
              }
              if (uVar20 < uVar16) {
                puVar1 = (undefined8 *)(lVar6 + uVar12 * 0x18);
                uVar11 = puVar1[1];
                puVar2 = (undefined8 *)(lVar19 + uVar13 * 0x18);
                *puVar2 = *puVar1;
                puVar2[1] = uVar11;
                *(undefined8 *)(lVar19 + 0x10 + uVar13 * 0x18) =
                     *(undefined8 *)(lVar6 + 0x10 + uVar12 * 0x18);
              }
            }
            break;
          }
          uVar8 = uVar8 + 1;
          uVar13 = (ulonglong)uVar8;
        } while (uVar8 < *(uint *)(&DAT_180112b20 + uVar10 * 0x4b));
      }
      if (uVar8 == *(uint *)(&DAT_180112b20 + uVar10 * 0x4b)) {
        lVar19 = (&DAT_180112b08)[uVar10 * 0x4b];
        local_78 = CONCAT44(*(undefined4 *)(lVar19 + 4 + uVar12 * 0x18),
                            *(undefined4 *)(lVar19 + uVar12 * 0x18));
        if (((*(char *)(DAT_180111f20 + 0x822) == '\0') ||
            (uVar8 = *(uint *)(DAT_180111f20 + 0x870), uVar8 == 0)) ||
           (uVar18 = *(uint *)(DAT_180111f20 + 0x874), uVar18 == 0)) {
          uStack_70 = CONCAT44(*(undefined4 *)(lVar19 + 0xc + uVar12 * 0x18),
                               *(undefined4 *)(lVar19 + 8 + uVar12 * 0x18));
          uVar8 = *(uint *)(lVar19 + 0x10 + uVar12 * 0x18);
        }
        else {
          uStack_70 = CONCAT44(uVar18,uVar8);
          uVar8 = uVar8 / uVar18;
        }
        local_68 = (ulonglong)uVar8;
        plVar17 = &DAT_180112b18 + uVar10 * 0x4b;
        uVar11 = FUN_18002fa8c(plVar17,&local_78);
        if ((char)uVar11 == '\0') {
          FUN_1800fbcf0((LPVOID)*plVar23);
          *plVar23 = 0;
          (&DAT_180112b10)[uVar10 * 0x4b] = 0;
          FUN_1800fbcf0((LPVOID)*plVar17);
          *plVar17 = 0;
          (&DAT_180112b20)[uVar10 * 0x4b] = 0;
          break;
        }
      }
      uVar12 = (ulonglong)((uint)uVar12 + 1);
    }
  }
  return *(int *)(&DAT_180112b10 + uVar10 * 0x4b) != 0;
}

