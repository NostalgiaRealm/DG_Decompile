/*
 * FUN_10022fff at 10022fff
 * undefined __cdecl FUN_10022fff(undefined4 * param_1)
 * Address ranges: 10022fff-10023040
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10022fff(undefined4 *param_1)

{
  void *this;
  
  this = (void *)*param_1;
  FUN_1001af0e(this,param_1[1],param_1[2],param_1[3]);
  if (param_1[4] != 0) {
    FUN_10046b90((void *)(*(int *)((int)this + 0x3188) + 0x14f0),param_1[5],param_1[4],param_1[6]);
  }
  return;
}

