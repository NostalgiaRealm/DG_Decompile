/*
 * FUN_1000ed00 at 1000ed00
 * undefined FUN_1000ed00(void)
 * Address ranges: 1000ed00-1000ee73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000ed00(int *param_1,uint param_2,undefined8 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  
  puVar1 = (uint *)(param_1 + 3);
  puVar2 = (uint *)(param_1 + 2);
  uVar8 = *puVar1;
  if (uVar8 == *puVar2) {
    uVar6 = 0x10;
    if (uVar8 != 0) {
      uVar6 = uVar8 << 1;
    }
    iVar7 = FUN_100fece0(uVar6 * 0x10 + 3);
    if (iVar7 != 0) {
      uVar5 = iVar7 + 3U & 0xfffffffc;
      uVar8 = 0;
      if (*puVar2 != 0) {
        do {
          puVar3 = (undefined8 *)(param_1[1] + uVar8 * 0x10);
          puVar4 = (undefined8 *)(uVar5 + uVar8 * 0x10);
          uVar8 = uVar8 + 1;
          uVar9 = *puVar3;
          puVar4[1] = puVar3[1];
          *puVar4 = uVar9;
        } while (uVar8 < *puVar2);
      }
      FUN_100fed00(*param_1);
      *param_1 = iVar7;
      param_1[1] = uVar5;
      *puVar1 = uVar6;
    }
  }
  uVar8 = *puVar2;
  if (*puVar1 != uVar8) {
    param_1 = param_1 + 1;
    for (; param_2 < uVar8; uVar8 = uVar8 - 1) {
      puVar3 = (undefined8 *)(*param_1 + uVar8 * 0x10);
      puVar3[1] = puVar3[-1];
      *puVar3 = puVar3[-2];
    }
    *puVar2 = *puVar2 + 1;
    *(undefined4 *)(*param_1 + param_2 * 0x10 + 8) = *param_4;
    *(undefined4 *)(*param_1 + param_2 * 0x10 + 0xc) = *param_5;
    *(undefined8 *)(*param_1 + param_2 * 0x10) = param_3;
  }
  return;
}

