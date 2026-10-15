/*
 * FUN_1800b39a0 at 1800b39a0
 * undefined FUN_1800b39a0(void)
 * Address ranges: 1800b39a0-1800b3ad7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b39a0(longlong param_1,longlong param_2,uint param_3,undefined8 *param_4,
                  ulonglong param_5)

{
  longlong lVar1;
  short *psVar2;
  undefined8 *puVar3;
  uint uVar4;
  short sVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  lVar1 = param_1 + (ulonglong)param_3 * 4;
  puVar3 = (undefined8 *)(lVar1 + 0x6990);
  uVar14 = param_5 >> 1 & 0x7fffffff;
  uVar13 = (uint)uVar14;
  puVar12 = puVar3;
  uVar15 = uVar14;
  puVar10 = param_4;
  uVar9 = uVar13;
  while (uVar9 != 0) {
    uVar9 = (int)uVar15 - 1;
    uVar15 = (ulonglong)uVar9;
    *puVar12 = *puVar10;
    puVar12 = puVar12 + 1;
    puVar10 = puVar10 + 1;
  }
  if ((param_5 & 1) != 0) {
    *(undefined4 *)puVar12 = *(undefined4 *)puVar10;
  }
  puVar12 = (undefined8 *)(lVar1 + 0xb330);
  puVar10 = puVar12;
  while (uVar13 != 0) {
    uVar13 = (int)uVar14 - 1;
    uVar14 = (ulonglong)uVar13;
    *puVar10 = *param_4;
    puVar10 = puVar10 + 1;
    param_4 = param_4 + 1;
  }
  if ((param_5 & 1) != 0) {
    *(undefined4 *)puVar10 = *(undefined4 *)param_4;
  }
  uVar9 = param_3 + (int)param_5;
  if (param_2 != 0) {
    psVar2 = (short *)(param_2 + 0x840);
    sVar5 = *psVar2;
    uVar14 = 0;
    while ((sVar5 != -1 && (uVar6 = psVar2[uVar14], uVar6 <= uVar9))) {
      uVar7 = psVar2[(int)uVar14 + 1];
      if (param_3 <= uVar7) {
        uVar13 = param_3;
        if (param_3 <= uVar6) {
          uVar13 = (uint)uVar6;
        }
        uVar4 = (uint)uVar7;
        if (uVar9 <= uVar7) {
          uVar4 = uVar9;
        }
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar13 * 4 + 0x49e8);
        puVar11 = (undefined8 *)(param_1 + (ulonglong)(uVar13 << 2) * 4 + 0xb330);
        for (uVar8 = uVar4 - uVar13 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        if ((uVar4 - uVar13 & 1) != 0) {
          *(undefined4 *)puVar11 = *(undefined4 *)puVar10;
        }
      }
      uVar14 = (ulonglong)((int)uVar14 + 2);
      sVar5 = psVar2[uVar14];
    }
  }
  if (*(char *)(param_1 + 0x21) != '\0') {
    puVar12 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001800b3ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x188))
            (*(longlong **)(param_1 + 0x28),(ulonglong)param_3,uVar9,puVar12);
  return;
}

