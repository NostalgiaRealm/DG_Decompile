/*
 * FUN_1001bc73 at 1001bc73
 * undefined __cdecl FUN_1001bc73(undefined4 * param_1)
 * Address ranges: 1001bc73-1001bca0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1001bc73(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *this;
  undefined4 uVar3;
  
  iVar1 = param_1[1];
  iVar2 = param_1[2];
  this = (void *)*param_1;
  uVar3 = param_1[4];
  *(undefined4 *)(iVar1 + 0xc38) = param_1[3];
  *(undefined4 *)(iVar1 + 0xc3c) = uVar3;
  FUN_1004939f(this,iVar2,0);
  return;
}

