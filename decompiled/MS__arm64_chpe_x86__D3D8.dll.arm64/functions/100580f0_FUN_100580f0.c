/*
 * FUN_100580f0 at 100580f0
 * undefined FUN_100580f0(void)
 * Address ranges: 100580f0-100581a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100580f0(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar4 = *param_1;
  iVar5 = param_1[1];
  uVar6 = param_1[2];
  puVar1 = (uint *)(iVar4 + 0xda10);
  for (uVar7 = *puVar1; uVar7 != 0; uVar7 = uVar7 - 1) {
    if ((*(ulonglong *)(*(int *)(iVar4 + 0xda08) + uVar7 * 0x18 + -0x18) & 0x7fffffff) ==
        ((ulonglong)uVar6 & 0x7fffffff)) {
      uVar9 = *puVar1;
      uVar8 = uVar7;
      if (uVar7 < uVar9) {
        do {
          uVar2 = uVar8 + 1;
          puVar3 = (undefined8 *)(*(int *)(iVar4 + 0xda08) + uVar8 * 0x18);
          puVar3[-2] = puVar3[1];
          puVar3[-3] = *puVar3;
          puVar3[-1] = puVar3[2];
          uVar9 = *puVar1;
          uVar8 = uVar2;
        } while (uVar2 < uVar9);
      }
      *puVar1 = uVar9 - 1;
    }
  }
  FUN_100fec90(iVar5,0xb0);
  return;
}

