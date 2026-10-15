/*
 * FUN_1006b680 at 1006b680
 * undefined FUN_1006b680(void)
 * Address ranges: 1006b680-1006b6c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006b680(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = 0x80070057;
  if ((param_2 != (int *)0x0) && (*param_2 == 0x30)) {
    iVar1 = *(int *)(param_1 + 4);
    uVar5 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)(param_2 + 6);
    uVar3 = *(undefined8 *)(param_2 + 4);
    uVar2 = 0;
    *(undefined8 *)(iVar1 + 100) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(iVar1 + 0x5c) = uVar5;
    *(undefined8 *)(iVar1 + 0x74) = uVar4;
    *(undefined8 *)(iVar1 + 0x6c) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(iVar1 + 0x84) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(iVar1 + 0x7c) = uVar3;
  }
  return uVar2;
}

