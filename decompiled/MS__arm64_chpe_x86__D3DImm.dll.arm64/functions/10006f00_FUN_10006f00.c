/*
 * FUN_10006f00 at 10006f00
 * undefined FUN_10006f00(void)
 * Address ranges: 10006f00-10006f73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10006f00(int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [64];
  
  if (*(char *)(param_1 + 0x907) == '\0') {
    FUN_10006e50(param_1);
    puVar2 = (undefined8 *)
             FUN_100123f0(*(int *)(param_1 + 0x9cc) + 0x7c0,auStack_60,param_1 + 0x964);
    iVar1 = *(int *)(param_1 + 0x9cc);
    uVar5 = *puVar2;
    uVar4 = puVar2[3];
    uVar3 = puVar2[2];
    *(undefined8 *)(iVar1 + 0x808) = puVar2[1];
    *(undefined8 *)(iVar1 + 0x800) = uVar5;
    *(undefined8 *)(iVar1 + 0x818) = uVar4;
    *(undefined8 *)(iVar1 + 0x810) = uVar3;
    uVar5 = puVar2[4];
    uVar4 = puVar2[7];
    uVar3 = puVar2[6];
    *(undefined8 *)(iVar1 + 0x828) = puVar2[5];
    *(undefined8 *)(iVar1 + 0x820) = uVar5;
    *(undefined8 *)(iVar1 + 0x838) = uVar4;
    *(undefined8 *)(iVar1 + 0x830) = uVar3;
    *(char *)(param_1 + 0x907) = '\x01';
  }
  return;
}

