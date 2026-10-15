/*
 * FUN_180205d40 at 180205d40
 * undefined FUN_180205d40(void)
 * Address ranges: 180205d40-180205e43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180205d40(longlong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar3 != 0) {
    uVar6 = *param_2;
    uVar8 = 0;
    uVar5 = uVar3;
    do {
      uVar4 = uVar5 + uVar8 >> 1;
      uVar9 = (ulonglong)uVar4;
      uVar7 = *(ulonglong *)(*param_1 + uVar9 * 0x18);
      if (uVar7 <= uVar6) {
        if (uVar6 <= uVar7) break;
        uVar8 = uVar4 + 1;
        uVar9 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar5;
      }
      uVar5 = uVar4;
    } while (uVar5 != uVar8);
    uVar8 = (uint)uVar9;
    if ((uVar8 != uVar3) && (puVar1 = (ulonglong *)(*param_1 + uVar9 * 0x18), *puVar1 == uVar6)) {
      puVar10 = (undefined8 *)puVar1[2];
      if (puVar10 != (undefined8 *)0x0) {
        FUN_1802229d8(*puVar10);
        FUN_1802229d8(puVar10,0x10);
      }
      while( true ) {
        uVar3 = uVar8 + 1;
        if (*(uint *)((longlong)param_1 + 0xc) <= uVar3) break;
        puVar10 = (undefined8 *)(*param_1 + (ulonglong)uVar8 * 0x18);
        puVar2 = (undefined8 *)(*param_1 + (ulonglong)uVar3 * 0x18);
        uVar11 = *puVar2;
        puVar10[1] = puVar2[1];
        *puVar10 = uVar11;
        puVar10[2] = puVar2[2];
        uVar8 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) - 1;
      return 1;
    }
  }
  return 0;
}

