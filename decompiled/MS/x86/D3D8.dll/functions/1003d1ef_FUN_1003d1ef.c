/*
 * FUN_1003d1ef at 1003d1ef
 * undefined __cdecl FUN_1003d1ef(undefined4 * param_1)
 * Address ranges: 1003d1ef-1003d237
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1003d1ef(undefined4 *param_1)

{
  void *this;
  int iVar1;
  
  this = (void *)*param_1;
  iVar1 = param_1[1];
  FUN_10036ae0(this,0,0,0);
  param_1._0_1_ = false;
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0xda50) = 0;
  }
  else {
    *(int *)((int)this + 0xda50) = iVar1;
    param_1._0_1_ = *(int *)(iVar1 + 0x48) == 0x104;
  }
  FUN_10048e14(this,param_1._0_1_);
  return;
}

