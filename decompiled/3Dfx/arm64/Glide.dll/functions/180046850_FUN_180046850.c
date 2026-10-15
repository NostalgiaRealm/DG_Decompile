/*
 * FUN_180046850 at 180046850
 * undefined __cdecl FUN_180046850(longlong * param_1, longlong param_2, longlong param_3)
 * Address ranges: 180046850-180046a33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180046850(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  LPVOID local_50;
  undefined8 local_48;
  
  uVar14 = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    do {
      local_50 = (LPVOID)0x0;
      local_48 = 0;
      uVar8 = 0;
      uVar15 = 0;
      lVar2 = *param_1 + uVar14 * 0x18;
      lVar9 = *(longlong *)(lVar2 + 0x10);
      if (*(int *)(lVar9 + 0x18) != 0) {
        do {
          if ((uint)uVar15 < *(uint *)(lVar9 + 0x18)) {
            puVar3 = (undefined4 *)((uVar15 * 0x30 | 8) + *(longlong *)(lVar9 + 0x10));
            if ((puVar3 != (undefined4 *)0x0) &&
               ((lVar9 = uVar15 * 0x30 + *(longlong *)(lVar9 + 0x10),
                *(longlong *)(lVar9 + 0x10) == param_2 || (*(longlong *)(lVar9 + 0x18) == param_3)))
               ) {
              FUN_180046608(uVar8,(longlong *)(lVar9 + 0x10),1);
              uVar8 = FUN_18000c780((longlong *)&local_50,puVar3);
            }
          }
          lVar9 = *(longlong *)(lVar2 + 0x10);
          uVar1 = (uint)uVar15 + 1;
          uVar15 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(lVar9 + 0x18));
      }
      uVar15 = 0;
      if ((uint)local_48 != 0) {
        do {
          lVar9 = *(longlong *)(lVar2 + 0x10);
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 != 0) {
            uVar6 = *(uint *)((longlong)local_50 + uVar15 * 4);
            uVar13 = 0;
            uVar11 = uVar1;
            do {
              uVar7 = uVar11 + uVar13 >> 1;
              uVar10 = (ulonglong)uVar7;
              uVar12 = *(ulonglong *)(*(longlong *)(lVar9 + 0x10) + uVar10 * 0x30);
              if (uVar12 <= uVar6) {
                if (uVar6 <= uVar12) break;
                uVar13 = uVar7 + 1;
                uVar10 = (ulonglong)(uVar7 + 1);
                uVar7 = uVar11;
              }
              uVar11 = uVar7;
            } while (uVar11 != uVar13);
            if (((uint)uVar10 != uVar1) &&
               (*(ulonglong *)(*(longlong *)(lVar9 + 0x10) + uVar10 * 0x30) == (ulonglong)uVar6)) {
              uVar13 = (uint)uVar10 + 1;
              if (uVar13 < uVar1) {
                do {
                  uVar10 = (ulonglong)uVar13;
                  puVar4 = (undefined8 *)
                           (*(longlong *)(lVar9 + 0x10) + (ulonglong)(uVar13 - 1) * 0x30);
                  uVar13 = uVar13 + 1;
                  puVar5 = (undefined8 *)(*(longlong *)(lVar9 + 0x10) + uVar10 * 0x30);
                  uVar17 = *puVar5;
                  uVar16 = puVar5[3];
                  uVar8 = puVar5[2];
                  puVar4[1] = puVar5[1];
                  *puVar4 = uVar17;
                  puVar4[3] = uVar16;
                  puVar4[2] = uVar8;
                  uVar8 = puVar5[4];
                  puVar4[5] = puVar5[5];
                  puVar4[4] = uVar8;
                } while (uVar13 < *(uint *)(lVar9 + 0x18));
              }
              *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + -1;
            }
          }
          uVar1 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar1;
        } while (uVar1 < (uint)local_48);
      }
      thunk_FUN_180060a18(local_50);
      local_50 = (LPVOID)0x0;
      local_48 = 0;
      thunk_FUN_180060a18((LPVOID)0x0);
      uVar1 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)((longlong)param_1 + 0xc));
  }
  return;
}

