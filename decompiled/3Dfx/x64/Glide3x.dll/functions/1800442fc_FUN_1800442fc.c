/*
 * FUN_1800442fc at 1800442fc
 * undefined8 __fastcall FUN_1800442fc(longlong * param_1, ulonglong * param_2)
 * Address ranges: 1800442fc-1800443c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800442fc(longlong *param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong in_RAX;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar11 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar11 != 0) {
    uVar2 = *param_2;
    lVar3 = *param_1;
    uVar10 = 0;
    uVar9 = uVar11;
    do {
      uVar8 = uVar9 + uVar10 >> 1;
      in_RAX = (ulonglong)uVar8 * 3;
      uVar4 = *(ulonglong *)(lVar3 + (ulonglong)uVar8 * 0x18);
      uVar7 = uVar8;
      if (uVar4 <= uVar2) {
        if (uVar2 <= uVar4) break;
        uVar10 = uVar8 + 1;
        uVar7 = uVar9;
        uVar8 = uVar10;
      }
      uVar9 = uVar7;
    } while (uVar9 != uVar10);
    if ((uVar8 != uVar11) &&
       (in_RAX = (ulonglong)uVar8, *(ulonglong *)(lVar3 + in_RAX * 0x18) == uVar2)) {
      puVar5 = *(undefined8 **)(lVar3 + 0x10 + in_RAX * 0x18);
      if (puVar5 != (undefined8 *)0x0) {
        FUN_180060ac0((LPVOID)*puVar5);
        in_RAX = FUN_180060ac0(puVar5);
      }
      while( true ) {
        uVar11 = uVar8 + 1;
        if (*(uint *)((longlong)param_1 + 0xc) <= uVar11) break;
        lVar3 = *param_1;
        in_RAX = (ulonglong)uVar8;
        puVar5 = (undefined8 *)(lVar3 + (ulonglong)uVar11 * 0x18);
        uVar6 = puVar5[1];
        puVar1 = (undefined8 *)(lVar3 + in_RAX * 0x18);
        *puVar1 = *puVar5;
        puVar1[1] = uVar6;
        *(undefined8 *)(lVar3 + 0x10 + in_RAX * 0x18) =
             *(undefined8 *)(lVar3 + 0x10 + (ulonglong)uVar11 * 0x18);
        uVar8 = uVar11;
      }
      *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) - 1;
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

