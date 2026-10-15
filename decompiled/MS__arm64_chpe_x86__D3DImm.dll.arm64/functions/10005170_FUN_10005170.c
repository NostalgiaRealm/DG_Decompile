/*
 * FUN_10005170 at 10005170
 * undefined FUN_10005170(void)
 * Address ranges: 10005170-100051eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10005170(int param_1,int param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [72];
  
  FUN_10096840(auStack_70);
  puVar2 = (undefined8 *)FUN_10012450(*(int *)(param_1 + 0x9cc) + param_2 * 0x40,auStack_68,param_3)
  ;
  uVar5 = *puVar2;
  uVar4 = puVar2[3];
  uVar3 = puVar2[2];
  puVar1 = (undefined8 *)(*(int *)(param_1 + 0x9cc) + param_2 * 0x40);
  puVar1[1] = puVar2[1];
  *puVar1 = uVar5;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  uVar5 = puVar2[4];
  uVar4 = puVar2[7];
  uVar3 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar5;
  puVar1[7] = uVar4;
  puVar1[6] = uVar3;
  FUN_10004f00(param_1,param_2);
  FUN_10096790(auStack_70);
  return;
}

