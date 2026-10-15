/*
 * FUN_1003f506 at 1003f506
 * undefined __stdcall FUN_1003f506(undefined4 * param_1)
 * Address ranges: 1003f506-1003f5b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003f506(undefined4 *param_1)

{
  void *this;
  
  this = (void *)*param_1;
  FUN_1003a026(this,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],param_1[7],
               *(char *)(param_1 + 8),*(byte *)(param_1 + 9),*(char *)(param_1 + 10));
  if (param_1[0xb] != 0) {
    FUN_100a012d((void *)(*(int *)((int)this + 0xd9b8) + 0x14f0),param_1[0xd],param_1[0xb],
                 param_1[0xc]);
  }
  return;
}

