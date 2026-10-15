/*
 * FUN_1003bc38 at 1003bc38
 * undefined FUN_1003bc38(void)
 * Address ranges: 1003bc38-1003bd3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1003bc38(int *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  puVar1 = (uint *)(param_1 + 2);
  puVar2 = (uint *)(param_1 + 1);
  uVar4 = *puVar1;
  if (*puVar2 == uVar4) {
    uVar5 = uVar4 << 1;
    if (uVar4 == 0) {
      uVar5 = 0x10;
    }
    uVar7 = (undefined4)((ulonglong)uVar5 * 0x18);
    if ((ulonglong)uVar5 * 0x18 >> 0x20 != 0) {
      uVar7 = 0xffffffff;
    }
    puVar6 = (undefined8 *)FUN_101322b0(uVar7);
    uVar4 = uVar5;
    puVar3 = puVar6;
    if (puVar6 == (undefined8 *)0x0) {
      return 0;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3 = puVar3 + 3;
    }
    FUN_101325a0(puVar6,*param_1,((ulonglong)(*puVar1 * 3) & 0x1fffffff) << 3);
    FUN_101322d0(*param_1);
    *param_1 = (int)puVar6;
    *puVar1 = uVar5;
  }
  uVar8 = *param_2;
  puVar3 = (undefined8 *)(*param_1 + *puVar2 * 0x18);
  puVar3[1] = param_2[1];
  *puVar3 = uVar8;
  puVar3[2] = param_2[2];
  *puVar2 = *puVar2 + 1;
  return 1;
}

