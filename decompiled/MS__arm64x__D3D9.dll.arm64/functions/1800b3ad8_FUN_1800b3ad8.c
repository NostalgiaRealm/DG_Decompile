/*
 * FUN_1800b3ad8 at 1800b3ad8
 * undefined FUN_1800b3ad8(void)
 * Address ranges: 1800b3ad8-1800b3be3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b3ad8(longlong param_1,longlong param_2,uint param_3,undefined8 *param_4,uint param_5)

{
  longlong lVar1;
  short *psVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  
  lVar1 = param_1 + (ulonglong)(param_3 << 2) * 4;
  uVar8 = param_5 & 0x3fffffff;
  uVar7 = uVar8 << 1;
  puVar10 = (undefined8 *)(lVar1 + 0x53e0);
  uVar6 = uVar7;
  puVar11 = param_4;
  uVar9 = uVar8;
  while (uVar9 != 0) {
    *puVar10 = *puVar11;
    uVar6 = uVar6 - 1;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
    uVar9 = uVar6;
  }
  if (*(char *)(param_1 + 0x21) == '\0') {
    puVar10 = (undefined8 *)(lVar1 + 0xb520);
    while (uVar8 != 0) {
      *puVar10 = *param_4;
      uVar7 = uVar7 - 1;
      puVar10 = puVar10 + 1;
      param_4 = param_4 + 1;
      uVar8 = uVar7;
    }
    uVar6 = param_3 + param_5;
    if (param_2 != 0) {
      psVar2 = (short *)(param_2 + 0x18);
      sVar3 = *psVar2;
      uVar12 = 0;
      while ((sVar3 != -1 && (uVar4 = psVar2[uVar12], uVar4 <= uVar6))) {
        uVar5 = psVar2[(int)uVar12 + 1];
        if (param_3 <= uVar5) {
          uVar7 = param_3;
          if (param_3 <= uVar4) {
            uVar7 = (uint)uVar4;
          }
          uVar8 = (uint)uVar5;
          if (uVar6 <= uVar5) {
            uVar8 = uVar6;
          }
          uVar9 = uVar8 - uVar7 & 0x3fffffff;
          uVar8 = uVar9 << 1;
          puVar10 = (undefined8 *)
                    (*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar7 << 2) * 4 + 0x414);
          puVar11 = (undefined8 *)(param_1 + (ulonglong)(uVar7 << 2) * 4 + 0xb520);
          while (uVar9 != 0) {
            *puVar11 = *puVar10;
            uVar8 = uVar8 - 1;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
            uVar9 = uVar8;
          }
        }
        uVar12 = (ulonglong)((int)uVar12 + 2);
        sVar3 = psVar2[uVar12];
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001800b3be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x130))
            (*(longlong **)(param_1 + 0x28),param_3,param_3 + param_5);
  return;
}

