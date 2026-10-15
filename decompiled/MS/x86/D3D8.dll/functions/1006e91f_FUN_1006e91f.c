/*
 * FUN_1006e91f at 1006e91f
 * undefined __cdecl FUN_1006e91f(undefined4 * param_1)
 * Address ranges: 1006e91f-1006e94b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1006e91f(undefined4 *param_1)

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
    FUN_1006d051(this,iVar3,iVar1,iVar2);
  }
  return;
}

