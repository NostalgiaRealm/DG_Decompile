/*
 * FUN_1004ddfc at 1004ddfc
 * undefined __cdecl FUN_1004ddfc(int * param_1)
 * Address ranges: 1004ddfc-1004de32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1004ddfc(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = *param_1;
  *(int *)(iVar1 + 0xc) = param_1[1];
  *(int *)(iVar1 + 0x80) = param_1[2];
  *(int *)(iVar1 + 0x84) = param_1[3];
  *(int *)(iVar1 + 0x38) = param_1[4];
  piVar3 = param_1 + 5;
  piVar4 = (int *)(iVar1 + 0x3c);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  return;
}

