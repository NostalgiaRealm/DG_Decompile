/*
 * FUN_10004208 at 10004208
 * undefined FUN_10004208(void)
 * Address ranges: 10004208-10004353
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10004208(int *param_1,uint param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  puVar1 = (uint *)(param_1 + 2);
  puVar2 = (uint *)(param_1 + 1);
  uVar6 = *puVar1;
  if (*puVar2 == uVar6) {
    uVar4 = uVar6 << 1;
    if (uVar6 == 0) {
      uVar4 = 0x10;
    }
    uVar7 = (undefined4)((ulonglong)uVar4 * 0x18);
    if ((ulonglong)uVar4 * 0x18 >> 0x20 != 0) {
      uVar7 = 0xffffffff;
    }
    puVar5 = (undefined8 *)FUN_100914b0(uVar7);
    uVar6 = uVar4;
    puVar3 = puVar5;
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3 = puVar3 + 3;
    }
    FUN_100917a0(puVar5,*param_1,((ulonglong)(*puVar1 * 3) & 0x1fffffff) << 3);
    FUN_100914d0(*param_1);
    *param_1 = (int)puVar5;
    *puVar1 = uVar4;
  }
  for (uVar6 = *puVar2; param_2 < uVar6; uVar6 = uVar6 - 1) {
    puVar3 = (undefined8 *)(*param_1 + uVar6 * 0x18);
    puVar3[1] = puVar3[-2];
    *puVar3 = puVar3[-3];
    puVar3[2] = puVar3[-1];
  }
  uVar8 = *param_3;
  puVar3 = (undefined8 *)(*param_1 + param_2 * 0x18);
  puVar3[1] = param_3[1];
  *puVar3 = uVar8;
  puVar3[2] = param_3[2];
  *puVar2 = *puVar2 + 1;
  return 1;
}

