/*
 * FUN_18005327c at 18005327c
 * undefined __fastcall FUN_18005327c(longlong param_1, int param_2, int param_3, ulonglong param_4)
 * Address ranges: 18005327c-180053456
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005327c(longlong param_1,int param_2,int param_3,ulonglong param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  
  uVar12 = *(uint *)(param_1 + 0x48);
  if (uVar12 != 0) {
    uVar9 = 0;
    uVar13 = uVar12;
    do {
      uVar7 = uVar13 + uVar9 >> 1;
      uVar11 = *(ulonglong *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar7 * 0x40);
      uVar6 = uVar7;
      if (uVar11 <= param_4) {
        if (param_4 <= uVar11) break;
        uVar9 = uVar7 + 1;
        uVar6 = uVar13;
        uVar7 = uVar9;
      }
      uVar13 = uVar6;
    } while (uVar13 != uVar9);
    if (uVar7 != uVar12) {
      lVar3 = *(longlong *)(param_1 + 0x40);
      uVar11 = (ulonglong)uVar7 * 0x40;
      if ((*(ulonglong *)(uVar11 + lVar3) == param_4) &&
         (puVar14 = (undefined8 *)((uVar11 | 0x10) + lVar3), puVar14 != (undefined8 *)0x0)) {
        uVar12 = *(uint *)(param_1 + 0x28);
        uVar9 = param_2 + -1 + uVar12 & -uVar12;
        if (uVar9 != 0) {
          uVar13 = param_3 - (int)param_4;
          uVar4 = (ulonglong)(uVar13 + uVar9) / (ulonglong)uVar12;
          FUN_18005aa94(uVar4,*(longlong *)((uVar11 | 0x20) + lVar3),
                        *(longlong *)((uVar11 | 0x28) + lVar3),uVar13 / uVar12,(uint)uVar4);
          piVar1 = (int *)((uVar11 | 0x38) + lVar3);
          *piVar1 = *piVar1 - uVar9 / *(uint *)(param_1 + 0x28);
        }
        if (((*(int *)((uVar11 | 0x38) + lVar3) == 0) &&
            ((ulonglong)*(uint *)(param_1 + 0x2c) < *(ulonglong *)((uVar11 | 0x18) + lVar3))) &&
           (*(int *)(param_1 + 0x30) == 0)) {
          FUN_18005d720((LPVOID)*puVar14);
          FUN_18005d720(*(LPVOID *)((uVar11 | 0x20) + lVar3));
          FUN_18005d720(*(LPVOID *)((uVar11 | 0x28) + lVar3));
          uVar12 = *(uint *)(param_1 + 0x48);
          if (uVar12 != 0) {
            uVar9 = 0;
            do {
              uVar13 = uVar12 + uVar9 >> 1;
              uVar11 = *(ulonglong *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar13 * 0x40);
              uVar6 = uVar13;
              if (uVar11 <= param_4) {
                if (param_4 <= uVar11) break;
                uVar9 = uVar13 + 1;
                uVar6 = uVar12;
                uVar13 = uVar9;
              }
              uVar12 = uVar6;
            } while (uVar12 != uVar9);
            if ((uVar13 != *(uint *)(param_1 + 0x48)) &&
               (*(ulonglong *)((ulonglong)uVar13 * 0x40 + *(longlong *)(param_1 + 0x40)) == param_4)
               ) {
              while( true ) {
                uVar12 = uVar13 + 1;
                if (*(uint *)(param_1 + 0x48) <= uVar12) break;
                lVar3 = *(longlong *)(param_1 + 0x40);
                lVar10 = (ulonglong)uVar13 * 0x40;
                lVar8 = (ulonglong)uVar12 * 0x40;
                uVar5 = ((undefined8 *)(lVar3 + lVar8))[1];
                *(undefined8 *)(lVar3 + lVar10) = *(undefined8 *)(lVar3 + lVar8);
                ((undefined8 *)(lVar3 + lVar10))[1] = uVar5;
                puVar14 = (undefined8 *)(lVar3 + 0x10 + lVar8);
                uVar5 = puVar14[1];
                puVar2 = (undefined8 *)(lVar3 + 0x10 + lVar10);
                *puVar2 = *puVar14;
                puVar2[1] = uVar5;
                puVar14 = (undefined8 *)(lVar3 + 0x20 + lVar8);
                uVar5 = puVar14[1];
                puVar2 = (undefined8 *)(lVar3 + 0x20 + lVar10);
                *puVar2 = *puVar14;
                puVar2[1] = uVar5;
                puVar14 = (undefined8 *)(lVar3 + 0x30 + lVar8);
                uVar5 = puVar14[1];
                puVar2 = (undefined8 *)(lVar3 + 0x30 + lVar10);
                *puVar2 = *puVar14;
                puVar2[1] = uVar5;
                uVar13 = uVar12;
              }
              *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
            }
          }
        }
      }
    }
  }
  return;
}

