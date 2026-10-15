/*
 * FUN_1800b1e30 at 1800b1e30
 * undefined FUN_1800b1e30(void)
 * Address ranges: 1800b1e30-1800b2097
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b1e30(longlong param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  longlong lVar1;
  short *psVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong extraout_x15;
  
  uVar10 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + 0x74)) && (param_2 + param_4 <= *(uint *)(param_1 + 0x74))) {
    if (param_4 != 0) {
      if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
        bVar7 = false;
        *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
      }
      else {
        bVar7 = true;
        iVar11 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
        if (iVar11 == 0) {
          FUN_180003398();
        }
      }
      if (param_2 < 0x10) {
        if (0x10 < param_2 + param_4) {
          param_4 = 0x10 - param_2;
        }
      }
      else {
        param_4 = 0;
      }
      uVar13 = param_4 & 0x3fffffff;
      uVar14 = (ulonglong)((param_4 & 0x3fffffff) << 1);
      if (*(char *)(param_1 + -0x642c) == '\0') {
        lVar12 = FUN_1800c0a50(param_1 + 0x80,*(undefined8 *)(param_1 + 0x5c58));
        lVar1 = param_1 + (extraout_x15 & 0xffffffff) * 4;
        uVar13 = (uint)uVar14;
        if (uVar13 != 0) {
          uVar16 = uVar14 & 0xffffffff;
          puVar15 = (undefined8 *)(lVar1 + 0x198);
          puVar17 = param_3;
          do {
            uVar6 = (int)uVar16 - 1;
            uVar16 = (ulonglong)uVar6;
            *puVar15 = *puVar17;
            puVar15 = puVar15 + 1;
            puVar17 = puVar17 + 1;
          } while (uVar6 != 0);
        }
        puVar15 = (undefined8 *)(lVar1 + 0x49f8);
        puVar17 = puVar15;
        while (uVar13 != 0) {
          uVar13 = (int)uVar14 - 1;
          uVar14 = (ulonglong)uVar13;
          *puVar17 = *param_3;
          puVar17 = puVar17 + 1;
          param_3 = param_3 + 1;
        }
        param_4 = param_2 + param_4;
        if (lVar12 != 0) {
          psVar2 = (short *)(lVar12 + 0x81c);
          sVar3 = *psVar2;
          uVar14 = 0;
          while ((sVar3 != -1 && (uVar4 = psVar2[uVar14], uVar4 <= param_4))) {
            uVar5 = psVar2[(int)uVar14 + 1];
            if (param_2 <= uVar5) {
              uVar13 = param_2;
              if (param_2 <= uVar4) {
                uVar13 = (uint)uVar4;
              }
              uVar6 = (uint)uVar5;
              if (param_4 <= uVar5) {
                uVar6 = param_4;
              }
              uVar8 = uVar6 - uVar13 & 0x3fffffff;
              uVar6 = uVar8 << 1;
              puVar17 = (undefined8 *)
                        (*(longlong *)(lVar12 + 0x10) + (ulonglong)(uVar13 << 2) * 4 + 0x48d8);
              puVar9 = (undefined8 *)(param_1 + (ulonglong)(uVar13 << 2) * 4 + 0x49f8);
              while (uVar8 != 0) {
                *puVar9 = *puVar17;
                uVar6 = uVar6 - 1;
                puVar17 = puVar17 + 1;
                puVar9 = puVar9 + 1;
                uVar8 = uVar6;
              }
            }
            uVar14 = (ulonglong)((int)uVar14 + 2);
            sVar3 = psVar2[uVar14];
          }
        }
        if (*(char *)(param_1 + -0x6817) != '\0') {
          puVar15 = (undefined8 *)(lVar1 + 0x198);
        }
        (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x180))
                  (*(longlong **)(param_1 + -0x6810),param_2,param_4,puVar15);
      }
      else {
        puVar15 = (undefined8 *)
                  (*(longlong *)
                    (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8)
                   + (ulonglong)(param_2 << 2) * 4 + 0x503c);
        while (uVar13 != 0) {
          uVar13 = (int)uVar14 - 1;
          uVar14 = (ulonglong)uVar13;
          *puVar15 = *param_3;
          puVar15 = puVar15 + 1;
          param_3 = param_3 + 1;
        }
        if (param_4 != 0) {
          func_0x000180222c50(param_1 + (ulonglong)param_2 + 0x268,1,param_4);
        }
      }
      if (bVar7) {
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

