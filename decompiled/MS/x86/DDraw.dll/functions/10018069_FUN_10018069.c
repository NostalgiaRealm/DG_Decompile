/*
 * FUN_10018069 at 10018069
 * undefined __cdecl FUN_10018069(undefined4 * param_1)
 * Address ranges: 10018069-10018095
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10018069(undefined4 *param_1)

{
  int *this;
  int iVar1;
  int iVar2;
  int iVar3;
  
  this = (int *)*param_1;
  iVar1 = param_1[1];
  iVar2 = param_1[2];
  iVar3 = (**(code **)(*this + 0x60))(0);
  if (iVar3 != 0) {
    FUN_1001679b(this,iVar3,iVar1,iVar2);
  }
  return;
}

