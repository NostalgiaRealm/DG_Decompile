/*
 * FUN_10024280 at 10024280
 * undefined __cdecl FUN_10024280(undefined4 * param_1)
 * Address ranges: 10024280-100242bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10024280(undefined4 *param_1)

{
  void *this;
  
  this = (void *)*param_1;
  FUN_1001b530(this,param_1[1],param_1[2]);
  if (param_1[3] != 0) {
    FUN_10046f20((void *)(*(int *)((int)this + 0x3188) + 0x14f0),param_1[5],param_1[3],param_1[4]);
  }
  return;
}

