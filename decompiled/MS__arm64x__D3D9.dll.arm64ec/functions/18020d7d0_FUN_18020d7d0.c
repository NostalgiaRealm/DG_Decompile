/*
 * FUN_18020d7d0 at 18020d7d0
 * undefined FUN_18020d7d0(void)
 * Address ranges: 18020d7d0-18020d9b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18020d7d0(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong local_50;
  undefined8 local_48;
  
  uVar14 = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    do {
      local_50 = 0;
      local_48 = 0;
      uVar8 = 0;
      uVar15 = 0;
      lVar2 = *param_1 + uVar14 * 0x18;
      lVar10 = *(longlong *)(lVar2 + 0x10);
      if (*(int *)(lVar10 + 0x18) != 0) {
        do {
          if ((uint)uVar15 < *(uint *)(lVar10 + 0x18)) {
            lVar3 = (uVar15 * 0x30 | 8) + *(longlong *)(lVar10 + 0x10);
            if ((lVar3 != 0) &&
               ((lVar10 = uVar15 * 0x30 + *(longlong *)(lVar10 + 0x10),
                *(longlong *)(lVar10 + 0x10) == param_2 || (*(longlong *)(lVar10 + 0x18) == param_3)
                ))) {
              FUN_18020d710(uVar8,lVar10 + 0x10,1);
              uVar8 = FUN_180108518(&local_50,lVar3);
            }
          }
          lVar10 = *(longlong *)(lVar2 + 0x10);
          uVar1 = (uint)uVar15 + 1;
          uVar15 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(lVar10 + 0x18));
      }
      uVar15 = 0;
      if ((uint)local_48 != 0) {
        do {
          lVar10 = *(longlong *)(lVar2 + 0x10);
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 != 0) {
            uVar6 = *(uint *)(local_50 + uVar15 * 4);
            uVar9 = 0;
            uVar12 = uVar1;
            do {
              uVar7 = uVar12 + uVar9 >> 1;
              uVar11 = (ulonglong)uVar7;
              uVar13 = *(ulonglong *)(*(longlong *)(lVar10 + 0x10) + uVar11 * 0x30);
              if (uVar13 <= uVar6) {
                if (uVar6 <= uVar13) break;
                uVar9 = uVar7 + 1;
                uVar11 = (ulonglong)(uVar7 + 1);
                uVar7 = uVar12;
              }
              uVar12 = uVar7;
            } while (uVar12 != uVar9);
            if (((uint)uVar11 != uVar1) &&
               (*(ulonglong *)(*(longlong *)(lVar10 + 0x10) + uVar11 * 0x30) == (ulonglong)uVar6)) {
              uVar9 = (uint)uVar11 + 1;
              if (uVar9 < uVar1) {
                do {
                  uVar11 = (ulonglong)uVar9;
                  puVar4 = (undefined8 *)
                           (*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar9 - 1) * 0x30);
                  uVar9 = uVar9 + 1;
                  puVar5 = (undefined8 *)(*(longlong *)(lVar10 + 0x10) + uVar11 * 0x30);
                  uVar8 = *puVar5;
                  uVar17 = puVar5[3];
                  uVar16 = puVar5[2];
                  puVar4[1] = puVar5[1];
                  *puVar4 = uVar8;
                  puVar4[3] = uVar17;
                  puVar4[2] = uVar16;
                  uVar8 = puVar5[4];
                  puVar4[5] = puVar5[5];
                  puVar4[4] = uVar8;
                } while (uVar9 < *(uint *)(lVar10 + 0x18));
              }
              *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + -1;
            }
          }
          uVar1 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar1;
        } while (uVar1 < (uint)local_48);
      }
      FUN_1802229d8();
      local_50 = 0;
      local_48 = 0;
      FUN_1802229d8(0);
      uVar1 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)((longlong)param_1 + 0xc));
  }
  return;
}

