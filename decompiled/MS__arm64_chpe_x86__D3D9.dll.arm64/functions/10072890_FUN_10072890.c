/*
 * FUN_10072890 at 10072890
 * undefined FUN_10072890(void)
 * Address ranges: 10072890-100728ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10072890(int *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = *param_1;
  *(int *)(iVar3 + 0xc) = param_1[1];
  *(int *)(iVar3 + 0x80) = param_1[2];
  *(int *)(iVar3 + 0x84) = param_1[3];
  piVar2 = param_1 + 5;
  *(int *)(iVar3 + 0x38) = param_1[4];
  puVar1 = (undefined8 *)(iVar3 + 0x3c);
  iVar3 = 8;
  do {
    uVar4 = *(undefined8 *)piVar2;
    iVar3 = iVar3 + -1;
    piVar2 = piVar2 + 2;
    *puVar1 = uVar4;
    puVar1 = puVar1 + 1;
  } while (iVar3 != 0);
  return;
}

