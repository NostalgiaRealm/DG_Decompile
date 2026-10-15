/*
 * FUN_10048d9a at 10048d9a
 * undefined __cdecl FUN_10048d9a(undefined4 * param_1)
 * Address ranges: 10048d9a-10048de2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10048d9a(undefined4 *param_1)

{
  void *this;
  int iVar1;
  
  this = (void *)*param_1;
  iVar1 = param_1[1];
  FUN_10042220(this,0,0,0);
  param_1._0_1_ = false;
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0xf750) = 0;
  }
  else {
    *(int *)((int)this + 0xf750) = iVar1;
    param_1._0_1_ = *(int *)(iVar1 + 0x48) == 0x104;
  }
  FUN_100575e8(this,param_1._0_1_);
  return;
}

