/*
 * FUN_1800b2958 at 1800b2958
 * undefined FUN_1800b2958(void)
 * Address ranges: 1800b2958-1800b2bab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b2958(longlong param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  longlong lVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  
  uVar13 = 0x8876086c;
  uVar4 = *(uint *)(*(longlong *)(param_1 + 0x60) + 200);
  if ((param_2 < uVar4) && (uVar3 = param_2 + param_4, uVar3 <= uVar4)) {
    if (param_4 != 0) {
      if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
        bVar9 = false;
        *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
      }
      else {
        bVar9 = true;
        iVar14 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
        if (iVar14 == 0) {
          FUN_180003398();
        }
      }
      if (*(char *)(param_1 + -0x642c) == '\0') {
        lVar16 = -0x6817;
        if (*(char *)(param_1 + -0x6817) == '\0') {
          lVar15 = FUN_1800c0ac0(param_1 + 0xd8,*(undefined8 *)(param_1 + 0x5c50));
        }
        else {
          lVar15 = 0;
        }
        lVar1 = param_1 + (ulonglong)(param_2 << 2) * 4;
        param_4 = param_4 & 0x3fffffff;
        uVar8 = param_4 << 1;
        puVar11 = (undefined8 *)(lVar1 + -0x1458);
        uVar4 = uVar8;
        puVar12 = param_3;
        uVar10 = param_4;
        while (uVar10 != 0) {
          *puVar11 = *puVar12;
          uVar4 = uVar4 - 1;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
          uVar10 = uVar4;
        }
        if (*(char *)(param_1 + lVar16) == '\0') {
          puVar11 = (undefined8 *)(lVar1 + 0x4ce8);
          while (param_4 != 0) {
            *puVar11 = *param_3;
            uVar8 = uVar8 - 1;
            puVar11 = puVar11 + 1;
            param_3 = param_3 + 1;
            param_4 = uVar8;
          }
          if (lVar15 != 0) {
            psVar2 = (short *)(lVar15 + 0x18);
            sVar5 = *psVar2;
            uVar17 = 0;
            while ((sVar5 != -1 && (uVar6 = psVar2[uVar17], uVar6 <= uVar3))) {
              uVar7 = psVar2[(int)uVar17 + 1];
              if (param_2 <= uVar7) {
                uVar4 = param_2;
                if (param_2 <= uVar6) {
                  uVar4 = (uint)uVar6;
                }
                uVar8 = (uint)uVar7;
                if (uVar3 <= uVar7) {
                  uVar8 = uVar3;
                }
                uVar10 = uVar8 - uVar4 & 0x3fffffff;
                uVar8 = uVar10 << 1;
                puVar11 = (undefined8 *)
                          (*(longlong *)(lVar15 + 0x10) + (ulonglong)(uVar4 << 2) * 4 + 0x414);
                puVar12 = (undefined8 *)(param_1 + (ulonglong)(uVar4 << 2) * 4 + 0x4ce8);
                while (uVar10 != 0) {
                  *puVar12 = *puVar11;
                  uVar8 = uVar8 - 1;
                  puVar11 = puVar11 + 1;
                  puVar12 = puVar12 + 1;
                  uVar10 = uVar8;
                }
              }
              uVar17 = (ulonglong)((int)uVar17 + 2);
              sVar5 = psVar2[uVar17];
            }
          }
        }
        (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x130))
                  (*(longlong **)(param_1 + -0x6810),param_2,uVar3);
      }
      else {
        uVar4 = (param_4 & 0x3fffffff) << 1;
        puVar11 = (undefined8 *)
                  (*(longlong *)
                    (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8)
                   + (ulonglong)(param_2 << 2) * 4 + 0x5390);
        uVar3 = param_4 & 0x3fffffff;
        while (uVar3 != 0) {
          *puVar11 = *param_3;
          uVar4 = uVar4 - 1;
          puVar11 = puVar11 + 1;
          param_3 = param_3 + 1;
          uVar3 = uVar4;
        }
        func_0x000180222c50(param_1 + (ulonglong)param_2 + -600,1,param_4);
      }
      if (bVar9) {
        (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
      }
      else {
        *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
      }
    }
    uVar13 = 0;
  }
  return uVar13;
}

