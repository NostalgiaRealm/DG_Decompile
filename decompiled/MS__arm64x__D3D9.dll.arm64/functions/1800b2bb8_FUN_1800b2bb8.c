/*
 * FUN_1800b2bb8 at 1800b2bb8
 * undefined FUN_1800b2bb8(void)
 * Address ranges: 1800b2bb8-1800b2deb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b2bb8(longlong param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  longlong lVar1;
  short *psVar2;
  uint uVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  ulonglong extraout_x15;
  
  uVar11 = 0x8876086c;
  if ((param_2 < 0x10) && (uVar3 = param_2 + param_4, uVar3 < 0x11)) {
    if (param_4 != 0) {
      if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
        bVar8 = false;
        *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
      }
      else {
        bVar8 = true;
        iVar12 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
        if (iVar12 == 0) {
          FUN_180003398();
        }
      }
      uVar14 = param_4 & 0x3fffffff;
      uVar15 = (ulonglong)(uVar14 << 1);
      if (*(char *)(param_1 + -0x642c) == '\0') {
        lVar13 = FUN_1800c0ac0(param_1 + 0xd8,*(undefined8 *)(param_1 + 0x5c50));
        lVar1 = param_1 + (extraout_x15 & 0xffffffff) * 4;
        uVar14 = (uint)uVar15;
        if (uVar14 != 0) {
          uVar17 = uVar15 & 0xffffffff;
          puVar16 = (undefined8 *)(lVar1 + 0x218);
          puVar18 = param_3;
          do {
            uVar7 = (int)uVar17 - 1;
            uVar17 = (ulonglong)uVar7;
            *puVar16 = *puVar18;
            puVar16 = puVar16 + 1;
            puVar18 = puVar18 + 1;
          } while (uVar7 != 0);
        }
        if (*(char *)(param_1 + -0x6817) == '\0') {
          puVar16 = (undefined8 *)(lVar1 + 0x5ae8);
          puVar18 = puVar16;
          while (uVar14 != 0) {
            uVar14 = (int)uVar15 - 1;
            uVar15 = (ulonglong)uVar14;
            *puVar18 = *param_3;
            puVar18 = puVar18 + 1;
            param_3 = param_3 + 1;
          }
          if (lVar13 != 0) {
            psVar2 = (short *)(lVar13 + 0x1dc);
            sVar4 = *psVar2;
            uVar15 = 0;
            while ((sVar4 != -1 && (uVar5 = psVar2[uVar15], uVar5 <= uVar3))) {
              uVar6 = psVar2[(int)uVar15 + 1];
              if (param_2 <= uVar6) {
                uVar14 = param_2;
                if (param_2 <= uVar5) {
                  uVar14 = (uint)uVar5;
                }
                uVar7 = (uint)uVar6;
                if (uVar3 <= uVar6) {
                  uVar7 = uVar3;
                }
                uVar9 = uVar7 - uVar14 & 0x3fffffff;
                uVar7 = uVar9 << 1;
                puVar18 = (undefined8 *)
                          (*(longlong *)(lVar13 + 0x10) + (ulonglong)(uVar14 << 2) * 4 + 0x1a0);
                puVar10 = (undefined8 *)(param_1 + (ulonglong)(uVar14 << 2) * 4 + 0x5ae8);
                while (uVar9 != 0) {
                  *puVar10 = *puVar18;
                  uVar7 = uVar7 - 1;
                  puVar18 = puVar18 + 1;
                  puVar10 = puVar10 + 1;
                  uVar9 = uVar7;
                }
              }
              uVar15 = (ulonglong)((int)uVar15 + 2);
              sVar4 = psVar2[uVar15];
            }
          }
        }
        else {
          puVar16 = (undefined8 *)(lVar1 + 0x218);
        }
        (**(code **)(**(longlong **)(param_1 + -0x6810) + 400))
                  (*(longlong **)(param_1 + -0x6810),param_2,uVar3,puVar16);
      }
      else {
        puVar16 = (undefined8 *)
                  (*(longlong *)
                    (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8)
                   + (ulonglong)(param_2 << 2) * 4 + 0x517c);
        while (uVar14 != 0) {
          uVar14 = (int)uVar15 - 1;
          uVar15 = (ulonglong)uVar14;
          *puVar16 = *param_3;
          puVar16 = puVar16 + 1;
          param_3 = param_3 + 1;
        }
        func_0x000180222c50(param_1 + (ulonglong)param_2 + 0x288,1,param_4);
      }
      if (bVar8) {
        (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
      }
      else {
        *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
      }
    }
    uVar11 = 0;
  }
  return uVar11;
}

