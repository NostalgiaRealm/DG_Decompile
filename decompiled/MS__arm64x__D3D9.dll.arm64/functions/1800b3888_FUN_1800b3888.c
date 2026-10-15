/*
 * FUN_1800b3888 at 1800b3888
 * undefined FUN_1800b3888(void)
 * Address ranges: 1800b3888-1800b399b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b3888(longlong param_1,longlong param_2,uint param_3,undefined8 *param_4,uint param_5)

{
  longlong lVar1;
  short *psVar2;
  undefined8 *puVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  
  lVar1 = param_1 + (ulonglong)(param_3 << 2) * 4;
  puVar3 = (undefined8 *)(lVar1 + 0x69d0);
  uVar9 = param_5 & 0x3fffffff;
  uVar8 = uVar9 << 1;
  puVar13 = puVar3;
  uVar7 = uVar8;
  puVar10 = param_4;
  uVar12 = uVar9;
  while (uVar12 != 0) {
    *puVar13 = *puVar10;
    uVar7 = uVar7 - 1;
    puVar13 = puVar13 + 1;
    puVar10 = puVar10 + 1;
    uVar12 = uVar7;
  }
  puVar13 = (undefined8 *)(lVar1 + 0xb230);
  puVar10 = puVar13;
  while (uVar9 != 0) {
    *puVar10 = *param_4;
    uVar8 = uVar8 - 1;
    puVar10 = puVar10 + 1;
    param_4 = param_4 + 1;
    uVar9 = uVar8;
  }
  param_5 = param_3 + param_5;
  if (param_2 != 0) {
    psVar2 = (short *)(param_2 + 0x81c);
    sVar4 = *psVar2;
    uVar14 = 0;
    while ((sVar4 != -1 && (uVar5 = psVar2[uVar14], uVar5 <= param_5))) {
      uVar6 = psVar2[(int)uVar14 + 1];
      if (param_3 <= uVar6) {
        uVar7 = param_3;
        if (param_3 <= uVar5) {
          uVar7 = (uint)uVar5;
        }
        uVar8 = (uint)uVar6;
        if (param_5 <= uVar6) {
          uVar8 = param_5;
        }
        uVar9 = uVar8 - uVar7 & 0x3fffffff;
        uVar8 = uVar9 << 1;
        puVar10 = (undefined8 *)
                  (*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar7 << 2) * 4 + 0x48d8);
        puVar11 = (undefined8 *)(param_1 + (ulonglong)(uVar7 << 2) * 4 + 0xb230);
        while (uVar9 != 0) {
          *puVar11 = *puVar10;
          uVar8 = uVar8 - 1;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
          uVar9 = uVar8;
        }
      }
      uVar14 = (ulonglong)((int)uVar14 + 2);
      sVar4 = psVar2[uVar14];
    }
  }
  if (*(char *)(param_1 + 0x21) != '\0') {
    puVar13 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001800b3998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x180))
            (*(longlong **)(param_1 + 0x28),param_3,param_5,puVar13);
  return;
}

