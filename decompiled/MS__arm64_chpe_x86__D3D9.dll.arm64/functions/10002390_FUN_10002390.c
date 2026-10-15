/*
 * FUN_10002390 at 10002390
 * undefined FUN_10002390(void)
 * Address ranges: 10002390-1000246f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10002390(int *param_1,undefined8 *param_2,uint param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  
  piVar1 = param_1 + 1;
  if ((uint)param_1[2] < (param_3 - *param_1) + *piVar1) {
    FUN_10002308(param_1,param_3);
  }
  puVar5 = (undefined8 *)*piVar1;
  uVar7 = 0;
  puVar6 = param_2;
  if (param_3 >> 3 != 0) {
    do {
      uVar8 = *puVar6;
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 1;
      *puVar5 = uVar8;
      puVar5 = puVar5 + 1;
    } while (uVar7 < param_3 >> 3);
  }
  if ((param_3 >> 2 & 1) != 0) {
    *(undefined4 *)puVar5 = *(undefined4 *)puVar6;
  }
  puVar2 = (undefined1 *)((param_3 & 0xfffffffc) + (int)param_2);
  puVar3 = (undefined1 *)(*piVar1 + (param_3 & 0xfffffffc));
  uVar7 = 0;
  if ((param_3 & 3) != 0) {
    do {
      uVar4 = *puVar2;
      uVar7 = uVar7 + 1;
      puVar2 = puVar2 + 1;
      *puVar3 = uVar4;
      puVar3 = puVar3 + 1;
    } while (uVar7 < (param_3 & 3));
  }
  *piVar1 = *piVar1 + param_3;
  return;
}

