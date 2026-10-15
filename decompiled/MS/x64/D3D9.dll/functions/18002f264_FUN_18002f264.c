/*
 * FUN_18002f264 at 18002f264
 * undefined __fastcall FUN_18002f264(void)
 * Address ranges: 18002f264-18002f601
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002f264(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char cVar8;
  undefined1 uVar9;
  BOOL BVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  tagMONITORINFO local_208;
  tagMONITORINFO local_1e0;
  tagMONITORINFO local_1b8;
  undefined8 local_188 [40];
  HMONITOR local_48;
  
  cVar8 = (**(code **)(*DAT_180111f18 + 0x10))();
  if (cVar8 != '\0') {
    lVar19 = 0;
    do {
      if ((HMONITOR)(&DAT_180112a48)[lVar19 * 0x4b] == (HMONITOR)0x0) {
LAB_18002f2e3:
        cVar8 = '\0';
      }
      else {
        local_208.cbSize = 0x28;
        local_208.rcMonitor.left = 0;
        local_208.rcMonitor.top = 0;
        local_208.rcMonitor.right = 0;
        local_208.rcMonitor.bottom = 0;
        local_208.dwFlags = 0;
        local_208.rcWork.left = 0;
        local_208.rcWork.top = 0;
        local_208.rcWork.right = 0;
        local_208.rcWork.bottom = 0;
        BVar10 = GetMonitorInfoW((HMONITOR)(&DAT_180112a48)[lVar19 * 0x4b],&local_208);
        if (BVar10 == 0) goto LAB_18002f2e3;
        cVar8 = '\x01';
      }
      (&DAT_180112aec)[lVar19 * 600] = cVar8;
      if (cVar8 == '\0' && (&DAT_1801128e0)[lVar19 * 0x4b] == 0) {
        FUN_1800fbea0((undefined1 *)(&DAT_1801128e0 + lVar19 * 0x4b),0,600);
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 != 0x20);
    uVar23 = 0;
    uVar22 = 0;
    uVar11 = (**(code **)(*DAT_180111f18 + 0x68))();
    uVar21 = 0;
    if (uVar11 != 0) {
      do {
        uVar12 = (**(code **)(*DAT_180111f18 + 0x80))(DAT_180111f18,uVar21);
        uVar18 = 0;
        if (uVar12 != 0) {
          do {
            if (((0x1f < uVar23) || ((*(uint *)(DAT_180111f20 + 0x9ef) >> (uVar23 & 0x1f) & 1) != 0)
                ) && ((*(int *)(DAT_180111f20 + 0x808) == 0 ||
                      (*(int *)(DAT_180111f20 + 0x808) - 1U == uVar18)))) {
              iVar13 = (**(code **)(*DAT_180111f18 + 0x70))(DAT_180111f18,uVar21);
              (**(code **)(*DAT_180111f18 + 0x88))(DAT_180111f18,local_188,uVar21,uVar18);
              uVar14 = 0;
              do {
                if (((iVar13 == (&DAT_1801128fc)[uVar14 * 0x96]) &&
                    (uVar18 == (&DAT_180112900)[uVar14 * 0x96])) &&
                   ((HMONITOR)(&DAT_180112a48)[uVar14 * 0x4b] != (HMONITOR)0x0)) {
                  local_1e0.cbSize = 0x28;
                  local_1e0.rcMonitor.left = 0;
                  local_1e0.rcMonitor.top = 0;
                  local_1e0.rcMonitor.right = 0;
                  local_1e0.rcMonitor.bottom = 0;
                  local_1e0.dwFlags = 0;
                  local_1e0.rcWork.left = 0;
                  local_1e0.rcWork.top = 0;
                  local_1e0.rcWork.right = 0;
                  local_1e0.rcWork.bottom = 0;
                  BVar10 = GetMonitorInfoW((HMONITOR)(&DAT_180112a48)[uVar14 * 0x4b],&local_1e0);
                  if (BVar10 != 0) break;
                }
                uVar20 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar20;
              } while (uVar20 < 0x20);
              if (((int)uVar14 == 0x20) && (local_48 != (HMONITOR)0x0)) {
                local_1b8.cbSize = 0x28;
                BVar10 = GetMonitorInfoW(local_48,&local_1b8);
                if ((BVar10 != 0) && (uVar22 < 0x20)) {
LAB_18002f46a:
                  uVar14 = (ulonglong)uVar22;
                  uVar22 = uVar22 + 1;
                  lVar19 = uVar14 * 600;
                  if ((&DAT_180112a48)[uVar14 * 0x4b] != 0) goto code_r0x00018002f485;
                  (**(code **)(*DAT_180111f18 + 0x18))(DAT_180111f18,&local_208,iVar13,uVar18);
                  lVar17 = 2;
                  (&DAT_1801128fc)[uVar14 * 0x96] = iVar13;
                  (&DAT_1801128e0)[uVar14 * 0x4b] = 0;
                  (&DAT_1801128e8)[uVar14 * 0x96] = 0;
                  (&DAT_180112900)[uVar14 * 0x96] = uVar18;
                  puVar6 = (undefined8 *)(&DAT_180112908 + lVar19);
                  puVar7 = local_188;
                  do {
                    puVar16 = puVar7;
                    puVar15 = puVar6;
                    uVar1 = puVar16[1];
                    uVar2 = puVar16[2];
                    uVar3 = puVar16[3];
                    *puVar15 = *puVar16;
                    puVar15[1] = uVar1;
                    uVar1 = puVar16[4];
                    uVar4 = puVar16[5];
                    puVar15[2] = uVar2;
                    puVar15[3] = uVar3;
                    uVar2 = puVar16[6];
                    uVar3 = puVar16[7];
                    puVar15[4] = uVar1;
                    puVar15[5] = uVar4;
                    uVar1 = puVar16[8];
                    uVar4 = puVar16[9];
                    puVar15[6] = uVar2;
                    puVar15[7] = uVar3;
                    uVar2 = puVar16[10];
                    uVar3 = puVar16[0xb];
                    puVar15[8] = uVar1;
                    puVar15[9] = uVar4;
                    uVar1 = puVar16[0xc];
                    uVar4 = puVar16[0xd];
                    puVar15[10] = uVar2;
                    puVar15[0xb] = uVar3;
                    uVar2 = puVar16[0xe];
                    uVar3 = puVar16[0xf];
                    puVar15[0xc] = uVar1;
                    puVar15[0xd] = uVar4;
                    puVar15[0xe] = uVar2;
                    puVar15[0xf] = uVar3;
                    lVar17 = lVar17 + -1;
                    puVar6 = puVar15 + 0x10;
                    puVar7 = puVar16 + 0x10;
                  } while (lVar17 != 0);
                  uVar1 = puVar16[0x10];
                  uVar2 = puVar16[0x11];
                  *(undefined4 *)(&DAT_180112ac4 + lVar19) = 0;
                  uVar3 = puVar16[0x12];
                  uVar4 = puVar16[0x13];
                  *(undefined8 *)(lVar19 + 0x180112ac8) = 0;
                  puVar15[0x10] = uVar1;
                  puVar15[0x11] = uVar2;
                  (&DAT_180112aec)[lVar19] = 1;
                  uVar1 = puVar16[0x14];
                  uVar2 = puVar16[0x15];
                  (&DAT_180112aee)[lVar19] = 0;
                  puVar15[0x12] = uVar3;
                  puVar15[0x13] = uVar4;
                  uVar3 = puVar16[0x16];
                  uVar4 = puVar16[0x17];
                  puVar15[0x14] = uVar1;
                  puVar15[0x15] = uVar2;
                  plVar5 = DAT_180111f18;
                  uVar1 = puVar16[0x18];
                  uVar2 = puVar16[0x19];
                  puVar15[0x16] = uVar3;
                  puVar15[0x17] = uVar4;
                  puVar15[0x18] = uVar1;
                  puVar15[0x19] = uVar2;
                  *(byte *)(lVar19 + 0x180112aed) = (byte)local_1b8.dwFlags & 1;
                  (&DAT_180112a58)[uVar14 * 0x4b] =
                       CONCAT44(local_208.rcMonitor.left,local_208.cbSize);
                  (&DAT_180112a60)[uVar14 * 0x4b] =
                       CONCAT44(local_208.rcMonitor.right,local_208.rcMonitor.top);
                  (&DAT_180112a68)[uVar14 * 0x4b] =
                       CONCAT44(local_208.rcWork.left,local_208.rcMonitor.bottom);
                  *(LONG *)(&DAT_180112ab4 + lVar19) = local_1b8.rcMonitor.left;
                  *(LONG *)(&DAT_180112ab8 + lVar19) = local_1b8.rcMonitor.top;
                  *(LONG *)(lVar19 + 0x180112abc) = local_1b8.rcMonitor.right;
                  *(LONG *)(lVar19 + 0x180112ac0) = local_1b8.rcMonitor.bottom;
                  uVar9 = (**(code **)(*plVar5 + 0x78))(plVar5,uVar21);
                  *(undefined1 *)(lVar19 + 0x180112aef) = uVar9;
                }
              }
            }
LAB_18002f5cc:
            uVar23 = uVar23 + 1;
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar12);
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < uVar11);
    }
  }
  return;
code_r0x00018002f485:
  if (0x1f < uVar22) goto LAB_18002f5cc;
  goto LAB_18002f46a;
}

