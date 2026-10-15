/*
 * FUN_1002369f at 1002369f
 * undefined __cdecl FUN_1002369f(undefined4 * param_1)
 * Address ranges: 1002369f-100236e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1002369f(undefined4 *param_1)

{
  void *this;
  
  this = (void *)*param_1;
  FUN_1001b383(this,param_1[1],(undefined4 *)param_1[2],*(byte *)(param_1 + 3));
  if (param_1[4] != 0) {
    FUN_10046f20((void *)(*(int *)((int)this + 0x3188) + 0x14f0),param_1[5],param_1[4],param_1[6]);
  }
  return;
}

