/*
 * FUN_1006e390 at 1006e390
 * undefined FUN_1006e390(void)
 * Address ranges: 1006e390-1006e44b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006e390(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = *param_1;
  if ((((param_1[1] != *(int *)(iVar1 + 0xe40)) || (param_1[2] != *(int *)(iVar1 + 0xe44))) ||
      (param_1[3] != *(int *)(iVar1 + 0xe48))) || (param_1[4] != *(int *)(iVar1 + 0xe4c))) {
    FUN_1005df78(iVar1,0,0,0);
    uVar3 = *(undefined8 *)(param_1 + 3);
    uVar2 = *(undefined8 *)(param_1 + 1);
    *(undefined1 *)(iVar1 + 0xf6a1) = 1;
    *(undefined8 *)(iVar1 + 0xe48) = uVar3;
    *(undefined8 *)(iVar1 + 0xe40) = uVar2;
  }
  return;
}

