/*
 * FUN_10039f50 at 10039f50
 * undefined FUN_10039f50(void)
 * Address ranges: 10039f50-10039f9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10039f50(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_40 [48];
  
  uVar1 = *param_1;
  puVar2 = (undefined8 *)param_1[1];
  FUN_1001f8f0(uVar1);
  puVar3 = (undefined8 *)FUN_1002e918(uVar1,auStack_40);
  uVar6 = *puVar3;
  uVar5 = puVar3[3];
  uVar4 = puVar3[2];
  puVar2[1] = puVar3[1];
  *puVar2 = uVar6;
  puVar2[3] = uVar5;
  puVar2[2] = uVar4;
  uVar4 = puVar3[4];
  puVar2[5] = puVar3[5];
  puVar2[4] = uVar4;
  return;
}

