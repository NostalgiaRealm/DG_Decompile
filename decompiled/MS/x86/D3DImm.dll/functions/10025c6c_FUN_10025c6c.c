/*
 * FUN_10025c6c at 10025c6c
 * undefined __cdecl FUN_10025c6c(undefined4 * param_1)
 * Address ranges: 10025c6c-10025cca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10025c6c(undefined4 *param_1)

{
  int *piVar1;
  void *this;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar2 = param_1;
  this = (void *)*param_1;
  piVar1 = param_1 + 1;
  puVar3 = param_1 + 2;
  puVar4 = param_1 + 3;
  puVar5 = param_1 + 4;
  param_1 = (undefined4 *)CONCAT31(param_1._1_3_,*(undefined1 *)(param_1 + 5));
  FUN_10023190(this,*piVar1,(undefined4 *)*puVar3,(undefined4 *)*puVar4,(undefined4 *)*puVar5,
               param_1);
  if (puVar2[6] != 0) {
    FUN_10056974((void *)(*(int *)((int)this + 0x1d54) + 0x14f0),puVar2[8],puVar2[6],puVar2[7]);
  }
  return;
}

