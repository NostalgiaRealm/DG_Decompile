/*
 * FUN_1800b20a0 at 1800b20a0
 * undefined FUN_1800b20a0(void)
 * Address ranges: 1800b20a0-1800b2337
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b20a0(longlong param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  longlong lVar1;
  short *psVar2;
  uint uVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  
  uVar20 = (ulonglong)param_4;
  uVar10 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + 0x78)) && (param_2 + param_4 <= *(uint *)(param_1 + 0x78))) {
    if (param_4 != 0) {
      if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
        bVar9 = false;
        *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
      }
      else {
        bVar9 = true;
        iVar11 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
        if (iVar11 == 0) {
          FUN_180003398();
        }
      }
      if (param_2 < 0x10) {
        if (0x10 < param_2 + param_4) {
          uVar20 = (ulonglong)(0x10 - param_2);
        }
      }
      else {
        uVar20 = 0;
      }
      uVar15 = uVar20 >> 1;
      if (*(char *)(param_1 + -0x642c) == '\0') {
        lVar12 = FUN_1800c0a50(param_1 + 0x80,*(undefined8 *)(param_1 + 0x5c58));
        lVar1 = param_1 + (ulonglong)param_2 * 4;
        puVar13 = (undefined8 *)(lVar1 + 0x158);
        uVar14 = (uint)uVar15;
        puVar19 = param_3;
        if (uVar14 != 0) {
          uVar16 = uVar15 & 0xffffffff;
          puVar17 = puVar13;
          puVar18 = param_3;
          do {
            puVar19 = puVar18 + 1;
            uVar8 = (int)uVar16 - 1;
            uVar16 = (ulonglong)uVar8;
            puVar13 = puVar17 + 1;
            *puVar17 = *puVar18;
            puVar17 = puVar13;
            puVar18 = puVar19;
          } while (uVar8 != 0);
        }
        if ((uVar20 & 1) != 0) {
          *(undefined4 *)puVar13 = *(undefined4 *)puVar19;
        }
        puVar13 = (undefined8 *)(lVar1 + 0x4af8);
        puVar19 = puVar13;
        while (uVar14 != 0) {
          uVar14 = (int)uVar15 - 1;
          uVar15 = (ulonglong)uVar14;
          *puVar19 = *param_3;
          puVar19 = puVar19 + 1;
          param_3 = param_3 + 1;
        }
        if ((uVar20 & 1) != 0) {
          *(undefined4 *)puVar19 = *(undefined4 *)param_3;
        }
        uVar14 = param_2 + (int)uVar20;
        if (lVar12 != 0) {
          psVar2 = (short *)(lVar12 + 0x840);
          sVar4 = *psVar2;
          uVar20 = 0;
          while ((sVar4 != -1 && (uVar5 = psVar2[uVar20], uVar5 <= uVar14))) {
            uVar6 = psVar2[(int)uVar20 + 1];
            if (param_2 <= uVar6) {
              uVar8 = param_2;
              if (param_2 <= uVar5) {
                uVar8 = (uint)uVar5;
              }
              uVar3 = (uint)uVar6;
              if (uVar14 <= uVar6) {
                uVar3 = uVar14;
              }
              puVar19 = (undefined8 *)(*(longlong *)(lVar12 + 0x10) + (ulonglong)uVar8 * 4 + 0x49e8)
              ;
              puVar17 = (undefined8 *)(param_1 + (ulonglong)(uVar8 << 2) * 4 + 0x4af8);
              for (uVar7 = uVar3 - uVar8 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
                *puVar17 = *puVar19;
                puVar19 = puVar19 + 1;
                puVar17 = puVar17 + 1;
              }
              if ((uVar3 - uVar8 & 1) != 0) {
                *(undefined4 *)puVar17 = *(undefined4 *)puVar19;
              }
            }
            uVar20 = (ulonglong)((int)uVar20 + 2);
            sVar4 = psVar2[uVar20];
          }
        }
        if (*(char *)(param_1 + -0x6817) != '\0') {
          puVar13 = (undefined8 *)(lVar1 + 0x158);
        }
        (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x188))
                  (*(longlong **)(param_1 + -0x6810),param_2,uVar14,puVar13);
      }
      else {
        uVar14 = (uint)uVar15;
        puVar13 = (undefined8 *)
                  (*(longlong *)
                    (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8)
                   + (ulonglong)param_2 * 4 + 0x4ffc);
        while (uVar14 != 0) {
          uVar14 = (int)uVar15 - 1;
          uVar15 = (ulonglong)uVar14;
          *puVar13 = *param_3;
          puVar13 = puVar13 + 1;
          param_3 = param_3 + 1;
        }
        if ((uVar20 & 1) != 0) {
          *(undefined4 *)puVar13 = *(undefined4 *)param_3;
        }
        if ((int)uVar20 != 0) {
          func_0x000180222c50(param_1 + (ulonglong)param_2 + 600,1,uVar20);
        }
      }
      if (bVar9) {
        (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
      }
      else {
        *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
      }
    }
    uVar10 = 0;
  }
  return uVar10;
}

