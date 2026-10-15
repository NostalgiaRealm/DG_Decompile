/*
 * FUN_1400119d8 at 1400119d8
 * undefined8 __cdecl FUN_1400119d8(longlong param_1, uint param_2, ulonglong param_3, uint param_4)
 * Address ranges: 1400119d8-140011b4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1400119d8(longlong param_1,uint param_2,ulonglong param_3,uint param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  SIZE_T SVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint local_30;
  undefined4 uStack_2c;
  uint local_28;
  
  uStack_2c = (undefined4)param_3;
  uVar4 = *(uint *)(param_1 + 0x84);
  uVar1 = ((param_3 & 0xffff) << 0x10 | (ulonglong)param_2 << 0x20) + (ulonglong)param_4;
  uVar13 = 0;
  if (uVar4 != 0) {
    uVar9 = 0;
    uVar8 = uVar4;
    do {
      uVar5 = uVar8 + uVar9 >> 1;
      uVar13 = (ulonglong)uVar5;
      uVar12 = *(ulonglong *)(*(longlong *)(param_1 + 0x78) + uVar13 * 0x20);
      if (uVar12 <= uVar1) {
        if (uVar1 <= uVar12) break;
        uVar9 = uVar5 + 1;
        uVar13 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar8;
      }
      uVar8 = uVar5;
    } while (uVar8 != uVar9);
    if (((uint)uVar13 != uVar4) &&
       (*(ulonglong *)(*(longlong *)(param_1 + 0x78) + uVar13 * 0x20) == uVar1)) goto LAB_140011b30;
  }
  local_30 = param_2;
  local_28 = param_4;
  if (uVar4 == *(uint *)(param_1 + 0x80)) {
    uVar12 = (ulonglong)*(uint *)(param_1 + 0x80) & 0x7fffffff;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar12 << 1;
    SVar10 = uVar12 << 6;
    if (SUB168(auVar6 * ZEXT816(0x20),8) != 0) {
      SVar10 = 0xffffffffffffffff;
    }
    lVar7 = thunk_FUN_1400247f0(SVar10);
    if (lVar7 != 0) {
      uVar12 = 0;
      if (*(int *)(param_1 + 0x80) != 0) {
        do {
          uVar4 = (int)uVar12 + 1;
          puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + uVar12 * 0x20);
          puVar3 = (undefined8 *)(lVar7 + uVar12 * 0x20);
          uVar16 = *puVar2;
          uVar15 = puVar2[3];
          uVar14 = puVar2[2];
          puVar3[1] = puVar2[1];
          *puVar3 = uVar16;
          puVar3[3] = uVar15;
          puVar3[2] = uVar14;
          uVar12 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(param_1 + 0x80));
      }
      thunk_FUN_140024830(*(LPVOID *)(param_1 + 0x78));
      *(longlong *)(param_1 + 0x78) = lVar7;
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) << 1;
    }
  }
  uVar12 = (ulonglong)*(uint *)(param_1 + 0x84);
  while ((uint)uVar13 < (uint)uVar12) {
    uVar11 = (ulonglong)((uint)uVar12 - 1);
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + uVar12 * 0x20);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + uVar11 * 0x20);
    uVar16 = *puVar3;
    uVar15 = puVar3[3];
    uVar14 = puVar3[2];
    puVar2[1] = puVar3[1];
    *puVar2 = uVar16;
    puVar2[3] = uVar15;
    puVar2[2] = uVar14;
    uVar12 = uVar11;
  }
  FUN_140011b50((longlong *)(param_1 + 0x78),uVar13,uVar1,(undefined8 *)&local_30);
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
LAB_140011b30:
  return *(undefined8 *)(*(longlong *)(param_1 + 0x78) + uVar13 * 0x20 + 0x18);
}

