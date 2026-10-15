/*
 * FUN_180082758 at 180082758
 * undefined FUN_180082758(void)
 * Address ranges: 180082758-180082857
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180082758(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar3 != 0) {
    uVar8 = 0;
    uVar5 = (ulonglong)
            (param_2[4] |
            (param_2[5] |
            (param_2[7] | (param_2[8] | (param_2[10] << 2 | param_2[9] >> 0x10) << 8) << 2) << 4) <<
            7) | ((ulonglong)param_2[1] | (ulonglong)*param_2 << 0x10) << 0x20;
    uVar7 = uVar3;
    do {
      uVar4 = uVar7 + uVar8 >> 1;
      uVar6 = (ulonglong)uVar4;
      uVar9 = *(ulonglong *)(*param_1 + uVar6 * 0x48);
      if (uVar9 <= uVar5) {
        if (uVar5 <= uVar9) break;
        uVar8 = uVar4 + 1;
        uVar6 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar7;
      }
      uVar7 = uVar4;
    } while (uVar7 != uVar8);
    if (((uint)uVar6 != uVar3) && (*(ulonglong *)(*param_1 + uVar6 * 0x48) == uVar5)) {
      uVar8 = (uint)uVar6 + 1;
      if (uVar8 < uVar3) {
        do {
          uVar5 = (ulonglong)uVar8;
          puVar1 = (undefined8 *)(*param_1 + (ulonglong)(uVar8 - 1) * 0x48);
          uVar8 = uVar8 + 1;
          puVar2 = (undefined8 *)(*param_1 + uVar5 * 0x48);
          uVar12 = *puVar2;
          uVar11 = puVar2[3];
          uVar10 = puVar2[2];
          puVar1[1] = puVar2[1];
          *puVar1 = uVar12;
          puVar1[3] = uVar11;
          puVar1[2] = uVar10;
          uVar12 = puVar2[4];
          uVar11 = puVar2[7];
          uVar10 = puVar2[6];
          puVar1[5] = puVar2[5];
          puVar1[4] = uVar12;
          puVar1[7] = uVar11;
          puVar1[6] = uVar10;
          puVar1[8] = puVar2[8];
        } while (uVar8 < *(uint *)((longlong)param_1 + 0xc));
      }
      *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + -1;
      return 1;
    }
  }
  return 0;
}

