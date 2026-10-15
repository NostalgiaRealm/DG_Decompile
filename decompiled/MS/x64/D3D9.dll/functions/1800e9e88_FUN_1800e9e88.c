/*
 * FUN_1800e9e88 at 1800e9e88
 * undefined __fastcall FUN_1800e9e88(longlong * param_1, longlong param_2, longlong param_3)
 * Address ranges: 1800e9e88-1800ea02e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e9e88(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  uint uVar15;
  ulonglong uVar16;
  LPVOID local_58;
  undefined8 local_50;
  
  uVar13 = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    do {
      lVar3 = *param_1;
      local_50._0_4_ = 0;
      uVar12 = 0;
      local_58 = (LPVOID)0x0;
      local_50 = 0;
      lVar9 = *(longlong *)(lVar3 + 0x10 + uVar13 * 0x18);
      if (*(int *)(lVar9 + 0x18) != 0) {
        do {
          lVar4 = *(longlong *)(lVar9 + 0x10);
          uVar16 = uVar12 * 0x30;
          puVar14 = (undefined4 *)((uVar16 | 8) + lVar4);
          if ((puVar14 != (undefined4 *)0x0) &&
             ((plVar10 = (longlong *)(lVar4 + 0x10 + uVar16), *plVar10 == param_2 ||
              (*(longlong *)(uVar16 + 0x18 + lVar4) == param_3)))) {
            FUN_1800e9d70(lVar9,plVar10,'\x01');
            FUN_180004454((longlong *)&local_58,puVar14);
          }
          lVar9 = *(longlong *)(lVar3 + 0x10 + uVar13 * 0x18);
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < *(uint *)(lVar9 + 0x18));
      }
      uVar12 = 0;
      if ((uint)local_50 != 0) {
        do {
          lVar9 = *(longlong *)(lVar3 + 0x10 + uVar13 * 0x18);
          uVar11 = *(uint *)(lVar9 + 0x18);
          if (uVar11 != 0) {
            uVar16 = (ulonglong)*(uint *)((longlong)local_58 + uVar12 * 4);
            uVar15 = 0;
            do {
              uVar7 = uVar11 + uVar15 >> 1;
              uVar8 = *(ulonglong *)(*(longlong *)(lVar9 + 0x10) + (ulonglong)uVar7 * 0x30);
              uVar6 = uVar7;
              if (uVar8 <= uVar16) {
                if (uVar16 <= uVar8) break;
                uVar7 = uVar7 + 1;
                uVar6 = uVar11;
                uVar15 = uVar7;
              }
              uVar11 = uVar6;
            } while (uVar11 != uVar15);
            if ((uVar7 != *(uint *)(lVar9 + 0x18)) &&
               (*(ulonglong *)(*(longlong *)(lVar9 + 0x10) + (ulonglong)uVar7 * 0x30) == uVar16)) {
              while( true ) {
                uVar11 = uVar7 + 1;
                uVar16 = (ulonglong)uVar11;
                if (*(uint *)(lVar9 + 0x18) <= uVar11) break;
                lVar4 = *(longlong *)(lVar9 + 0x10);
                uVar8 = (ulonglong)uVar7;
                puVar1 = (undefined8 *)(lVar4 + uVar16 * 0x30);
                uVar5 = puVar1[1];
                puVar2 = (undefined8 *)(lVar4 + uVar8 * 0x30);
                *puVar2 = *puVar1;
                puVar2[1] = uVar5;
                puVar1 = (undefined8 *)(lVar4 + 0x10 + uVar16 * 0x30);
                uVar5 = puVar1[1];
                puVar2 = (undefined8 *)(lVar4 + 0x10 + uVar8 * 0x30);
                *puVar2 = *puVar1;
                puVar2[1] = uVar5;
                puVar1 = (undefined8 *)(lVar4 + 0x20 + uVar16 * 0x30);
                uVar5 = puVar1[1];
                puVar2 = (undefined8 *)(lVar4 + 0x20 + uVar8 * 0x30);
                *puVar2 = *puVar1;
                puVar2[1] = uVar5;
                uVar7 = uVar11;
              }
              *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + -1;
            }
          }
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < (uint)local_50);
      }
      FUN_1800fbcf0(local_58);
      local_58 = (LPVOID)0x0;
      local_50 = 0;
      FUN_1800fbcf0((LPVOID)0x0);
      uVar11 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar11;
    } while (uVar11 < *(uint *)((longlong)param_1 + 0xc));
  }
  return;
}

