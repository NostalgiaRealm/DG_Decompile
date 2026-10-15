/*
 * FUN_1800b1b28 at 1800b1b28
 * undefined FUN_1800b1b28(void)
 * Address ranges: 1800b1b28-1800b1e27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b1b28(longlong param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  longlong lVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong extraout_x15;
  
  uVar10 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + 0x70)) && (param_2 + param_4 <= *(uint *)(param_1 + 0x70))) {
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
      uVar13 = *(uint *)(param_1 + -0x59bc);
      if (param_2 < uVar13) {
        if (uVar13 < param_2 + param_4) {
          param_4 = uVar13 - param_2;
        }
      }
      else {
        param_4 = 0;
      }
      uVar13 = param_4 & 0x3fffffff;
      uVar14 = (ulonglong)(uVar13 << 1);
      if (*(char *)(param_1 + -0x642c) == '\0') {
        lVar12 = FUN_1800c0a50(param_1 + 0x80,*(undefined8 *)(param_1 + 0x5c58));
        lVar1 = param_1 + (extraout_x15 & 0xffffffff) * 4;
        uVar13 = (uint)uVar14;
        if (uVar13 != 0) {
          uVar15 = uVar14 & 0xffffffff;
          puVar16 = (undefined8 *)(lVar1 + -0x5458);
          puVar17 = param_3;
          do {
            uVar8 = (int)uVar15 - 1;
            uVar15 = (ulonglong)uVar8;
            *puVar16 = *puVar17;
            puVar16 = puVar16 + 1;
            puVar17 = puVar17 + 1;
          } while (uVar8 != 0);
        }
        param_4 = param_2 + param_4;
        puVar16 = (undefined8 *)(lVar1 + 0x9a8);
        while (uVar13 != 0) {
          uVar13 = (int)uVar14 - 1;
          uVar14 = (ulonglong)uVar13;
          *puVar16 = *param_3;
          puVar16 = puVar16 + 1;
          param_3 = param_3 + 1;
        }
        if (lVar12 != 0) {
          psVar2 = (short *)(lVar12 + 0x18);
          sVar5 = *psVar2;
          uVar14 = 0;
          while ((sVar5 != -1 && (uVar6 = psVar2[uVar14], uVar6 <= param_4))) {
            uVar7 = psVar2[(int)uVar14 + 1];
            if (param_2 <= uVar7) {
              uVar13 = param_2;
              if (param_2 <= uVar6) {
                uVar13 = (uint)uVar6;
              }
              uVar8 = (uint)uVar7;
              if (param_4 <= uVar7) {
                uVar8 = param_4;
              }
              uVar3 = uVar8 - uVar13 & 0x3fffffff;
              uVar8 = uVar3 << 1;
              puVar16 = (undefined8 *)
                        (*(longlong *)(lVar12 + 0x10) + (ulonglong)(uVar13 << 2) * 4 + 0x850);
              puVar17 = (undefined8 *)(param_1 + (ulonglong)(uVar13 << 2) * 4 + 0x9a8);
              while (uVar3 != 0) {
                *puVar17 = *puVar16;
                uVar8 = uVar8 - 1;
                puVar16 = puVar16 + 1;
                puVar17 = puVar17 + 1;
                uVar3 = uVar8;
              }
            }
            uVar14 = (ulonglong)((int)uVar14 + 2);
            sVar5 = psVar2[uVar14];
          }
        }
        if ((*(char *)(param_1 + -0x6817) == '\0') ||
           ((lVar12 != 0 && (*(char *)(*(longlong *)(lVar12 + 0x10) + 0x44e) != '\0')))) {
          iVar11 = 1;
        }
        else {
          iVar11 = 0;
        }
        iVar4 = *(int *)(param_1 + -0x24);
        uVar8 = *(uint *)(param_1 + -0x2c);
        uVar3 = *(uint *)(param_1 + -0x28);
        uVar13 = param_2;
        if (iVar11 == iVar4) {
          if (uVar8 < uVar3) {
            if (uVar3 < param_2 || param_4 < uVar8) {
              (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x128))();
              *(int *)(param_1 + -0x24) = iVar4;
            }
            else {
              uVar13 = uVar8;
              if (param_2 <= uVar8) {
                uVar13 = param_2;
              }
              if (param_4 < uVar3) {
                param_4 = uVar3;
              }
            }
          }
        }
        else {
          if (uVar8 < uVar3) {
            (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x128))();
          }
          *(int *)(param_1 + -0x24) = iVar11;
        }
        *(uint *)(param_1 + -0x2c) = uVar13;
        *(uint *)(param_1 + -0x28) = param_4;
      }
      else {
        puVar16 = (undefined8 *)
                  (*(longlong *)
                    (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8)
                   + (ulonglong)(param_2 << 2) * 4 + 0x6190);
        while (uVar13 != 0) {
          uVar13 = (int)uVar14 - 1;
          uVar14 = (ulonglong)uVar13;
          *puVar16 = *param_3;
          puVar16 = puVar16 + 1;
          param_3 = param_3 + 1;
        }
        if (param_4 != 0) {
          func_0x000180222c50(param_1 + (ulonglong)param_2 + -0x658,1,param_4);
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

