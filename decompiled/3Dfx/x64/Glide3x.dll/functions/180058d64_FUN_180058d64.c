/*
 * FUN_180058d64 at 180058d64
 * undefined __fastcall FUN_180058d64(longlong param_1, int param_2, int param_3, ulonglong param_4)
 * Address ranges: 180058d64-180058f13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180058d64(longlong param_1,int param_2,int param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar12 = *(uint *)(param_1 + 0x68);
  if (uVar12 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x60);
    uVar11 = 0;
    uVar13 = uVar12;
    do {
      uVar8 = uVar13 + uVar11 >> 1;
      uVar9 = *(ulonglong *)(lVar5 + (ulonglong)uVar8 * 0x48);
      uVar7 = uVar8;
      if (uVar9 <= param_4) {
        if (param_4 <= uVar9) break;
        uVar11 = uVar8 + 1;
        uVar7 = uVar13;
        uVar8 = uVar11;
      }
      uVar13 = uVar7;
    } while (uVar13 != uVar11);
    if (((uVar8 != uVar12) &&
        (uVar9 = (ulonglong)uVar8, *(ulonglong *)(lVar5 + uVar9 * 0x48) == param_4)) &&
       (puVar1 = (ulonglong *)(lVar5 + 0x10 + uVar9 * 0x48), puVar1 != (ulonglong *)0x0)) {
      uVar12 = *(uint *)(param_1 + 0x40);
      uVar11 = param_2 + -1 + uVar12 & -uVar12;
      uVar13 = param_3 - (int)param_4;
      uVar10 = (ulonglong)(uVar13 + uVar11) / (ulonglong)uVar12;
      FUN_18005d0a0(uVar10,*(longlong *)(lVar5 + 0x28 + uVar9 * 0x48),
                    *(longlong *)(lVar5 + 0x30 + uVar9 * 0x48),uVar13 / uVar12,(uint)uVar10);
      piVar4 = (int *)(lVar5 + 0x40 + uVar9 * 0x48);
      *piVar4 = *piVar4 - uVar11 / *(uint *)(param_1 + 0x40);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - uVar11;
      if (((*(int *)(lVar5 + 0x40 + uVar9 * 0x48) == 0) &&
          ((ulonglong)*(uint *)(param_1 + 0x44) < *(ulonglong *)(lVar5 + 0x20 + uVar9 * 0x48))) &&
         (*(int *)(param_1 + 0x48) == 0)) {
        FUN_180058cc0(param_1,puVar1);
        uVar12 = *(uint *)(param_1 + 0x68);
        if (uVar12 != 0) {
          uVar11 = 0;
          do {
            uVar13 = uVar12 + uVar11 >> 1;
            uVar9 = *(ulonglong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)uVar13 * 0x48);
            uVar7 = uVar13;
            if (uVar9 <= param_4) {
              if (param_4 <= uVar9) break;
              uVar11 = uVar13 + 1;
              uVar7 = uVar12;
              uVar13 = uVar11;
            }
            uVar12 = uVar7;
          } while (uVar12 != uVar11);
          if ((uVar13 != *(uint *)(param_1 + 0x68)) &&
             (*(ulonglong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)uVar13 * 0x48) == param_4))
          {
            while( true ) {
              uVar12 = uVar13 + 1;
              uVar9 = (ulonglong)uVar12;
              if (*(uint *)(param_1 + 0x68) <= uVar12) break;
              lVar5 = *(longlong *)(param_1 + 0x60);
              uVar10 = (ulonglong)uVar13;
              puVar2 = (undefined8 *)(lVar5 + uVar9 * 0x48);
              uVar6 = puVar2[1];
              puVar3 = (undefined8 *)(lVar5 + uVar10 * 0x48);
              *puVar3 = *puVar2;
              puVar3[1] = uVar6;
              puVar2 = (undefined8 *)(lVar5 + 0x10 + uVar9 * 0x48);
              uVar6 = puVar2[1];
              puVar3 = (undefined8 *)(lVar5 + 0x10 + uVar10 * 0x48);
              *puVar3 = *puVar2;
              puVar3[1] = uVar6;
              puVar2 = (undefined8 *)(lVar5 + 0x20 + uVar9 * 0x48);
              uVar6 = puVar2[1];
              puVar3 = (undefined8 *)(lVar5 + 0x20 + uVar10 * 0x48);
              *puVar3 = *puVar2;
              puVar3[1] = uVar6;
              puVar2 = (undefined8 *)(lVar5 + 0x30 + uVar9 * 0x48);
              uVar6 = puVar2[1];
              puVar3 = (undefined8 *)(lVar5 + 0x30 + uVar10 * 0x48);
              *puVar3 = *puVar2;
              puVar3[1] = uVar6;
              *(undefined8 *)(lVar5 + 0x40 + uVar10 * 0x48) =
                   *(undefined8 *)(lVar5 + 0x40 + uVar9 * 0x48);
              uVar13 = uVar12;
            }
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
          }
        }
      }
    }
  }
  return;
}

