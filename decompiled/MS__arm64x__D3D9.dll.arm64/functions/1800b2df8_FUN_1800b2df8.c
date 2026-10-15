/*
 * FUN_1800b2df8 at 1800b2df8
 * undefined FUN_1800b2df8(void)
 * Address ranges: 1800b2df8-1800b3057
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b2df8(longlong param_1,uint param_2,undefined8 *param_3,uint param_4)

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
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  
  uVar10 = 0x8876086c;
  if ((param_2 < 0x10) && (uVar3 = param_2 + param_4, uVar3 < 0x11)) {
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
      uVar13 = param_4 >> 1;
      uVar14 = (ulonglong)uVar13;
      if (*(char *)(param_1 + -0x642c) == '\0') {
        lVar12 = FUN_1800c0ac0(param_1 + 0xd8,*(undefined8 *)(param_1 + 0x5c50));
        lVar1 = param_1 + (ulonglong)param_2 * 4;
        puVar15 = (undefined8 *)(lVar1 + 0x1d8);
        uVar13 = (uint)uVar14;
        puVar19 = param_3;
        if (uVar13 != 0) {
          uVar16 = uVar14 & 0xffffffff;
          puVar17 = puVar15;
          puVar18 = param_3;
          do {
            puVar19 = puVar18 + 1;
            uVar8 = (int)uVar16 - 1;
            uVar16 = (ulonglong)uVar8;
            puVar15 = puVar17 + 1;
            *puVar17 = *puVar18;
            puVar17 = puVar15;
            puVar18 = puVar19;
          } while (uVar8 != 0);
        }
        if ((param_4 & 1) != 0) {
          *(undefined4 *)puVar15 = *(undefined4 *)puVar19;
        }
        if (*(char *)(param_1 + -0x6817) == '\0') {
          puVar15 = (undefined8 *)(lVar1 + 0x5be8);
          puVar19 = puVar15;
          while (uVar13 != 0) {
            uVar13 = (int)uVar14 - 1;
            uVar14 = (ulonglong)uVar13;
            *puVar19 = *param_3;
            puVar19 = puVar19 + 1;
            param_3 = param_3 + 1;
          }
          if ((param_4 & 1) != 0) {
            *(undefined4 *)puVar19 = *(undefined4 *)param_3;
          }
          if (lVar12 != 0) {
            psVar2 = (short *)(lVar12 + 0x200);
            sVar4 = *psVar2;
            uVar14 = 0;
            while ((sVar4 != -1 && (uVar5 = psVar2[uVar14], uVar5 <= uVar3))) {
              uVar6 = psVar2[(int)uVar14 + 1];
              if (param_2 <= uVar6) {
                uVar13 = param_2;
                if (param_2 <= uVar5) {
                  uVar13 = (uint)uVar5;
                }
                uVar8 = (uint)uVar6;
                if (uVar3 <= uVar6) {
                  uVar8 = uVar3;
                }
                puVar19 = (undefined8 *)
                          (*(longlong *)(lVar12 + 0x10) + (ulonglong)uVar13 * 4 + 0x2b0);
                puVar17 = (undefined8 *)(param_1 + (ulonglong)uVar13 * 4 + 0x5be8);
                for (uVar7 = uVar8 - uVar13 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *puVar17 = *puVar19;
                  puVar19 = puVar19 + 1;
                  puVar17 = puVar17 + 1;
                }
                if ((uVar8 - uVar13 & 1) != 0) {
                  *(undefined4 *)puVar17 = *(undefined4 *)puVar19;
                }
              }
              uVar14 = (ulonglong)((int)uVar14 + 2);
              sVar4 = psVar2[uVar14];
            }
          }
        }
        else {
          puVar15 = (undefined8 *)(lVar1 + 0x1d8);
        }
        (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x198))
                  (*(longlong **)(param_1 + -0x6810),param_2,uVar3,puVar15);
      }
      else {
        puVar15 = (undefined8 *)
                  (*(longlong *)
                    (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8)
                   + (ulonglong)param_2 * 4 + 0x513c);
        while (uVar13 != 0) {
          uVar13 = (int)uVar14 - 1;
          uVar14 = (ulonglong)uVar13;
          *puVar15 = *param_3;
          puVar15 = puVar15 + 1;
          param_3 = param_3 + 1;
        }
        if ((param_4 & 1) != 0) {
          *(undefined4 *)puVar15 = *(undefined4 *)param_3;
        }
        func_0x000180222c50(param_1 + (ulonglong)param_2 + 0x278,1,param_4);
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

