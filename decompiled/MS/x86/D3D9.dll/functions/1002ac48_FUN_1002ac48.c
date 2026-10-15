/*
 * FUN_1002ac48 at 1002ac48
 * undefined __stdcall FUN_1002ac48(void)
 * Address ranges: 1002ac48-1002ae74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002ac48(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 local_1b4 [80];
  HMONITOR local_74;
  tagMONITORINFO local_60;
  undefined4 local_38 [6];
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  cVar2 = (**(code **)(*DAT_100dea70 + 8))();
  if (cVar2 != '\0') {
    uVar8 = 0;
    do {
      bVar3 = FUN_1002a86a((HMONITOR)(&DAT_100df440)[uVar8 * 0x8a],(LPMONITORINFO)0x0);
      (&DAT_100df4d0)[uVar8 * 0x228] = bVar3;
      if (!bVar3 && (&DAT_100df2e8)[uVar8 * 0x8a] == 0) {
        FUN_100cfed0(&DAT_100df2e8 + uVar8 * 0x8a,0,0x228);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 0x20);
    local_8 = 0;
    local_10 = 0;
    local_20 = (**(code **)(*DAT_100dea70 + 0x34))();
    local_18 = 0;
    if (local_20 != 0) {
      do {
        uVar8 = local_18;
        local_1c = (**(code **)(*DAT_100dea70 + 0x40))(local_18);
        uVar6 = 0;
        if (local_1c != 0) {
          do {
            if (((0x1f < local_10) ||
                ((*(uint *)(DAT_100dea74 + 0x953) & 1 << ((byte)local_10 & 0x1f)) != 0)) &&
               ((*(int *)(DAT_100dea74 + 0x76c) == 0 ||
                (*(int *)(DAT_100dea74 + 0x76c) - 1U == uVar6)))) {
              local_c = (**(code **)(*DAT_100dea70 + 0x38))(uVar8);
              (**(code **)(*DAT_100dea70 + 0x44))(local_1b4,uVar8,uVar6);
              uVar9 = 0;
              iVar5 = local_c;
              do {
                if (((iVar5 == (&DAT_100df2f8)[uVar9 * 0x8a]) &&
                    (uVar6 == (&DAT_100df2fc)[uVar9 * 0x8a])) &&
                   (bVar3 = FUN_1002a86a((HMONITOR)(&DAT_100df440)[uVar9 * 0x8a],(LPMONITORINFO)0x0)
                   , iVar5 = local_c, bVar3)) break;
                uVar9 = uVar9 + 1;
              } while (uVar9 < 0x20);
              if ((uVar9 == 0x20) &&
                 (bVar3 = FUN_1002a86a(local_74,&local_60), iVar5 = local_c, bVar3)) {
LAB_1002adab:
                if (local_8 < 0x20) {
                  local_14 = local_8 * 0x228;
                  if ((&DAT_100df440)[local_8 * 0x8a] != 0) goto code_r0x1002ada7;
                  (**(code **)(*DAT_100dea70 + 0xc))(local_38,local_c,uVar6);
                  uVar8 = local_18;
                  *(int *)((int)&DAT_100df2f8 + local_14) = iVar5;
                  *(undefined4 *)((int)&DAT_100df2e8 + local_14) = 0;
                  puVar7 = local_1b4;
                  puVar10 = (undefined4 *)(&DAT_100df300 + local_14);
                  for (iVar5 = 0x53; iVar5 != 0; iVar5 = iVar5 + -1) {
                    *puVar10 = *puVar7;
                    puVar7 = puVar7 + 1;
                    puVar10 = puVar10 + 1;
                  }
                  *(undefined4 *)((int)&DAT_100df2ec + local_14) = 0;
                  *(undefined4 *)(&DAT_100df4b8 + local_14) = 0;
                  puVar7 = local_38;
                  puVar10 = (undefined4 *)(&DAT_100df44c + local_14);
                  for (iVar5 = 6; piVar1 = DAT_100dea70, iVar5 != 0; iVar5 = iVar5 + -1) {
                    *puVar10 = *puVar7;
                    puVar7 = puVar7 + 1;
                    puVar10 = puVar10 + 1;
                  }
                  *(undefined4 *)(&DAT_100df4bc + local_14) = 0;
                  *(LONG *)(&DAT_100df4a8 + local_14) = local_60.rcMonitor.left;
                  *(uint *)((int)&DAT_100df2fc + local_14) = uVar6;
                  (&DAT_100df4d0)[local_14] = 1;
                  (&DAT_100df4d1)[local_14] = (byte)local_60.dwFlags & 1;
                  *(LONG *)(&DAT_100df4ac + local_14) = local_60.rcMonitor.top;
                  (&DAT_100df4d2)[local_14] = 0;
                  *(LONG *)(&DAT_100df4b0 + local_14) = local_60.rcMonitor.right;
                  *(LONG *)(&DAT_100df4b4 + local_14) = local_60.rcMonitor.bottom;
                  uVar4 = (**(code **)(*piVar1 + 0x3c))(local_18);
                  local_8 = local_8 + 1;
                  (&DAT_100df4d3)[local_14] = uVar4;
                }
              }
            }
            local_10 = local_10 + 1;
            uVar6 = uVar6 + 1;
          } while (uVar6 < local_1c);
        }
        local_18 = uVar8 + 1;
      } while (local_18 < local_20);
    }
  }
  return;
code_r0x1002ada7:
  local_8 = local_8 + 1;
  goto LAB_1002adab;
}

