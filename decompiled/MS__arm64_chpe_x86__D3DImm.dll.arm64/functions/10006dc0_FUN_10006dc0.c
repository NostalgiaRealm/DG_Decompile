/*
 * FUN_10006dc0 at 10006dc0
 * undefined FUN_10006dc0(void)
 * Address ranges: 10006dc0-10006e3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10006dc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [64];
  
  if (*(char *)(param_1 + 0x905) == '\0') {
    iVar1 = *(int *)(param_1 + 0x9cc);
    uVar2 = FUN_100123f0(iVar1,auStack_a0,iVar1 + 0x40);
    puVar3 = (undefined8 *)FUN_100123f0(uVar2,auStack_60,param_1 + 0x964);
    iVar1 = *(int *)(param_1 + 0x9cc);
    uVar6 = *puVar3;
    uVar5 = puVar3[3];
    uVar4 = puVar3[2];
    *(undefined8 *)(iVar1 + 0x788) = puVar3[1];
    *(undefined8 *)(iVar1 + 0x780) = uVar6;
    *(undefined8 *)(iVar1 + 0x798) = uVar5;
    *(undefined8 *)(iVar1 + 0x790) = uVar4;
    uVar6 = puVar3[4];
    uVar5 = puVar3[7];
    uVar4 = puVar3[6];
    *(undefined8 *)(iVar1 + 0x7a8) = puVar3[5];
    *(undefined8 *)(iVar1 + 0x7a0) = uVar6;
    *(undefined8 *)(iVar1 + 0x7b8) = uVar5;
    *(undefined8 *)(iVar1 + 0x7b0) = uVar4;
    *(char *)(param_1 + 0x905) = '\x01';
  }
  return;
}

