/*
 * FUN_10023ef4 at 10023ef4
 * undefined __cdecl FUN_10023ef4(undefined4 * param_1)
 * Address ranges: 10023ef4-10023f31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10023ef4(undefined4 *param_1)

{
  void *this;
  
  this = (void *)*param_1;
  FUN_1001b1a5(this,param_1[1],param_1[2]);
  if (param_1[3] != 0) {
    FUN_10046b90((void *)(*(int *)((int)this + 0x3188) + 0x14f0),param_1[5],param_1[3],param_1[4]);
  }
  return;
}

