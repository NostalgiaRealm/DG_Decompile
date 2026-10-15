/*
 * FUN_10006e50 at 10006e50
 * undefined FUN_10006e50(void)
 * Address ranges: 10006e50-10006efb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10006e50(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [64];
  
  if (*(char *)(param_1 + 0x906) == '\0') {
    piVar1 = (int *)(param_1 + 0x9cc);
    if (*(char *)(param_1 + 0x904) == '\0') {
      puVar3 = (undefined8 *)FUN_100123f0(*piVar1 + 0x280,auStack_60,*piVar1);
      iVar2 = *piVar1;
      uVar6 = *puVar3;
      uVar5 = puVar3[3];
      uVar4 = puVar3[2];
      *(undefined8 *)(iVar2 + 0x748) = puVar3[1];
      *(undefined8 *)(iVar2 + 0x740) = uVar6;
      *(undefined8 *)(iVar2 + 0x758) = uVar5;
      *(undefined8 *)(iVar2 + 0x750) = uVar4;
      uVar6 = puVar3[4];
      uVar5 = puVar3[7];
      uVar4 = puVar3[6];
      *(undefined8 *)(iVar2 + 0x768) = puVar3[5];
      *(undefined8 *)(iVar2 + 0x760) = uVar6;
      *(undefined8 *)(iVar2 + 0x778) = uVar5;
      *(undefined8 *)(iVar2 + 0x770) = uVar4;
      *(char *)(param_1 + 0x904) = '\x01';
    }
    puVar3 = (undefined8 *)FUN_100123f0(*piVar1 + 0x740,auStack_60,*piVar1 + 0x40);
    iVar2 = *piVar1;
    uVar6 = *puVar3;
    uVar5 = puVar3[3];
    uVar4 = puVar3[2];
    *(undefined8 *)(iVar2 + 0x7c8) = puVar3[1];
    *(undefined8 *)(iVar2 + 0x7c0) = uVar6;
    *(undefined8 *)(iVar2 + 0x7d8) = uVar5;
    *(undefined8 *)(iVar2 + 2000) = uVar4;
    uVar6 = puVar3[4];
    uVar5 = puVar3[7];
    uVar4 = puVar3[6];
    *(undefined8 *)(iVar2 + 0x7e8) = puVar3[5];
    *(undefined8 *)(iVar2 + 0x7e0) = uVar6;
    *(undefined8 *)(iVar2 + 0x7f8) = uVar5;
    *(undefined8 *)(iVar2 + 0x7f0) = uVar4;
    *(char *)(param_1 + 0x906) = '\x01';
  }
  return;
}

