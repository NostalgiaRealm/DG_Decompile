/*
 * FUN_1002338b at 1002338b
 * undefined __cdecl FUN_1002338b(undefined4 * param_1)
 * Address ranges: 1002338b-100233cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1002338b(undefined4 *param_1)

{
  void *this;
  
  this = (void *)*param_1;
  FUN_1001b299(this,param_1[1],param_1[2],param_1[3]);
  if (param_1[4] != 0) {
    FUN_10046f20((void *)(*(int *)((int)this + 0x3188) + 0x14f0),param_1[5],param_1[4],param_1[6]);
  }
  return;
}

