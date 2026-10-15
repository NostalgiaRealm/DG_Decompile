/*
 * FUN_1800057dc at 1800057dc
 * ulonglong __fastcall FUN_1800057dc(longlong param_1, uint param_2, undefined8 param_3, uint param_4)
 * Address ranges: 1800057dc-180005bef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800057dc(longlong param_1,uint param_2,undefined8 param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  byte *pbVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong *plVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  int local_res18;
  ulonglong local_50;
  uint local_48;
  
  uVar7 = FUN_18001c3f4(param_1,param_2,param_3,param_4);
  if ((int)uVar7 < 0) {
LAB_180005bd5:
    return uVar7 & 0xffffffff;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + (ulonglong)(param_2 - 1) * 8);
  local_48 = 0;
  local_50 = *(ulonglong *)(lVar3 + 0xacf0);
  while( true ) {
    uVar11 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
      }
    }
    if (local_50 != 0) break;
    local_48 = local_48 + 0x40;
    if (0xf < local_48) goto LAB_1800058da;
    local_50 = *(ulonglong *)(lVar3 + 0xacf0 + (ulonglong)(local_48 >> 6) * 8);
  }
  pbVar5 = (byte *)((longlong)&local_50 + ((longlong)(uVar11 & 0xffffffff) >> 3));
  *pbVar5 = *pbVar5 & ~('\x01' << (uVar11 & 7));
  uVar10 = (int)uVar11 + local_48;
  uVar12 = local_48;
  while (local_48 = uVar12, uVar10 != 0xffffffff) {
    lVar14 = (longlong)(int)uVar10;
    FUN_180007228(param_1,uVar10,*(longlong **)(lVar3 + 0xab60 + lVar14 * 8),
                  *(int *)(lVar3 + 44000 + lVar14 * 4),*(int *)(lVar3 + 0xac20 + lVar14 * 4));
    uVar11 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
      }
    }
    if (local_50 == 0) {
      do {
        uVar12 = uVar12 + 0x40;
        local_48 = uVar12;
        if (0xf < uVar12) goto LAB_1800058da;
        local_50 = ((ulonglong *)(lVar3 + 0xacf0))[uVar12 >> 6];
        uVar11 = 0;
        if (local_50 != 0) {
          for (; (local_50 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
          }
        }
      } while (local_50 == 0);
    }
    pbVar5 = (byte *)((longlong)&local_50 + ((longlong)(uVar11 & 0xffffffff) >> 3));
    *pbVar5 = *pbVar5 & ~('\x01' << (uVar11 & 7));
    uVar12 = local_48;
    uVar10 = (int)uVar11 + local_48;
  }
LAB_1800058da:
  if (*(char *)(lVar3 + 0xacfa) != '\0') {
    FUN_1800073d0(param_1,*(longlong **)(lVar3 + 0xab58));
  }
  local_48 = 0;
  local_50 = *(ulonglong *)(lVar3 + 0xacd8);
  while( true ) {
    uVar11 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
      }
    }
    if (local_50 != 0) break;
    local_48 = local_48 + 0x40;
    if (0xf < local_48) {
      iVar17 = -1;
      uVar10 = local_48;
joined_r0x000180005948:
      do {
        if (iVar17 == -1) {
LAB_180005ba4:
          if ((*(char *)(lVar3 + 0xacfb) != '\0') &&
             (*(int *)(lVar3 + 0xac60) != *(int *)(param_1 + 0x67f0))) {
            *(int *)(param_1 + 0x67f0) = *(int *)(lVar3 + 0xac60);
            *(undefined4 *)(param_1 + 0x67f8) = 0xffff;
            *(undefined4 *)(param_1 + 0x6804) = 0x1f;
          }
          goto LAB_180005bd5;
        }
        lVar18 = (longlong)iVar17;
        iVar16 = 0;
        local_res18 = 0;
        lVar14 = *(longlong *)(lVar3 + 0x5310 + lVar18 * 8);
        local_48 = uVar10;
        if (lVar14 == 0) {
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0xd8))
                    (*(longlong **)(param_1 + 0x28),iVar17,0,0,0,0,0,0);
          iVar16 = local_res18;
        }
        else if (lVar14 != *(longlong *)(param_1 + 0x1338 + lVar18 * 8)) {
          iVar2 = *(int *)(lVar14 + 0x20);
          if (iVar2 == 3) {
LAB_18000598b:
            (**(code **)(**(longlong **)(param_1 + 0x28) + 0xd8))
                      (*(longlong **)(param_1 + 0x28),iVar17,0,*(undefined8 *)(lVar14 + 0x58),0,0,0,
                       0);
            iVar16 = *(int *)(lVar14 + 0x74);
          }
          else if (iVar2 == 4) {
            (**(code **)(**(longlong **)(param_1 + 0x28) + 0xd8))
                      (*(longlong **)(param_1 + 0x28),iVar17,0,*(undefined8 *)(lVar14 + 0xe0),0,0,0,
                       0);
            iVar16 = *(int *)(lVar14 + 0xf8);
          }
          else if (iVar2 == 5) goto LAB_18000598b;
        }
        plVar4 = *(longlong **)(lVar3 + 0x5310 + lVar18 * 8);
        plVar8 = *(longlong **)(param_1 + 0x1338 + lVar18 * 8);
        bVar9 = (byte)iVar17;
        if (plVar4 != plVar8) {
          uVar12 = 1 << (bVar9 & 0x1f);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 8))(plVar4);
            puVar1 = (uint *)(*(longlong *)(lVar3 + 0x5310 + lVar18 * 8) + 0x38);
            *puVar1 = *puVar1 | uVar12;
          }
          lVar14 = *(longlong *)(param_1 + 0x1338 + lVar18 * 8);
          if (lVar14 != 0) {
            puVar1 = (uint *)(lVar14 + 0x38);
            *puVar1 = *puVar1 & ~uVar12;
            (**(code **)(**(longlong **)(param_1 + 0x1338 + lVar18 * 8) + 0x10))();
          }
          plVar8 = *(longlong **)(lVar3 + 0x5310 + lVar18 * 8);
          *(longlong **)(param_1 + 0x1338 + lVar18 * 8) = plVar8;
        }
        *(uint *)(param_1 + 0xd14) =
             *(uint *)(param_1 + 0xd14) |
             (uint)((plVar8 != (longlong *)0x0) != (bool)*(char *)(param_1 + 0xcc0 + lVar18)) <<
             (bVar9 & 0x1f);
        *(bool *)(param_1 + 0xcc0 + lVar18) = plVar8 != (longlong *)0x0;
        if ((*(longlong *)(param_1 + 0x1338 + lVar18 * 8) == 0) ||
           (bVar6 = true, 1 < iVar16 - 0x28U)) {
          bVar6 = false;
        }
        uVar13 = 1 << (bVar9 & 0x1f);
        uVar15 = ~uVar13;
        uVar12 = *(uint *)(param_1 + 0x67f4) | uVar13;
        if (!bVar6) {
          uVar12 = *(uint *)(param_1 + 0x67f4) & uVar15;
        }
        *(uint *)(param_1 + 0x67f4) = uVar12;
        uVar12 = uVar13 | *(uint *)(param_1 + 0x67f8);
        if (!bVar6) {
          uVar12 = *(uint *)(param_1 + 0x67f8) & uVar15;
        }
        *(uint *)(param_1 + 0x67f8) = uVar12;
        lVar14 = *(longlong *)(param_1 + 0x1338 + (longlong)iVar17 * 8);
        if ((lVar14 == 0) || (iVar17 = 1, *(char *)(lVar14 + 0x3e) == '\0')) {
          iVar17 = 0;
        }
        uVar11 = 0;
        if (local_50 != 0) {
          for (; (local_50 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
          }
        }
        *(uint *)(param_1 + 0xd18) = iVar17 << (bVar9 & 0x1f) | uVar15 & *(uint *)(param_1 + 0xd18);
        if (local_50 == 0) {
          do {
            uVar10 = uVar10 + 0x40;
            local_48 = uVar10;
            if (0xf < uVar10) goto LAB_180005ba4;
            local_50 = ((ulonglong *)(lVar3 + 0xacd8))[uVar10 >> 6];
            uVar11 = 0;
            if (local_50 != 0) {
              for (; (local_50 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
              }
            }
          } while (local_50 == 0);
        }
        pbVar5 = (byte *)((longlong)&local_50 + ((longlong)(uVar11 & 0xffffffff) >> 3));
        *pbVar5 = *pbVar5 & ~('\x01' << (uVar11 & 7));
        iVar17 = local_48 + (int)uVar11;
        uVar10 = local_48;
      } while( true );
    }
    local_50 = *(ulonglong *)(lVar3 + 0xacd8 + (ulonglong)(local_48 >> 6) * 8);
  }
  pbVar5 = (byte *)((longlong)&local_50 + ((longlong)(uVar11 & 0xffffffff) >> 3));
  *pbVar5 = *pbVar5 & ~('\x01' << (uVar11 & 7));
  iVar17 = local_48 + (int)uVar11;
  uVar10 = local_48;
  goto joined_r0x000180005948;
}

