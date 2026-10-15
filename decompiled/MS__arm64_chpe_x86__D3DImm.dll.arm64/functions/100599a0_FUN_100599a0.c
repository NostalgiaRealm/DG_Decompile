/*
 * FUN_100599a0 at 100599a0
 * undefined FUN_100599a0(void)
 * Address ranges: 100599a0-10059b03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100599a0(int *param_1,uint param_2,undefined8 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  
  puVar1 = (uint *)(param_1 + 3);
  puVar2 = (uint *)(param_1 + 2);
  uVar7 = *puVar1;
  if (uVar7 == *puVar2) {
    uVar5 = 0x10;
    if (uVar7 != 0) {
      uVar5 = uVar7 << 1;
    }
    iVar6 = FUN_10081da0(uVar5 << 4);
    if (iVar6 != 0) {
      uVar7 = 0;
      if (*puVar2 != 0) {
        do {
          puVar3 = (undefined8 *)(param_1[1] + uVar7 * 0x10);
          puVar4 = (undefined8 *)(iVar6 + uVar7 * 0x10);
          uVar7 = uVar7 + 1;
          uVar8 = *puVar3;
          puVar4[1] = puVar3[1];
          *puVar4 = uVar8;
        } while (uVar7 < *puVar2);
      }
      FUN_10081dc0(*param_1);
      *param_1 = iVar6;
      param_1[1] = iVar6;
      *puVar1 = uVar5;
    }
  }
  uVar7 = *puVar2;
  if (*puVar1 != uVar7) {
    param_1 = param_1 + 1;
    for (; param_2 < uVar7; uVar7 = uVar7 - 1) {
      puVar3 = (undefined8 *)(*param_1 + uVar7 * 0x10);
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

