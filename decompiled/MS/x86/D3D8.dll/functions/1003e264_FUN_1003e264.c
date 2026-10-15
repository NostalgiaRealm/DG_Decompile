/*
 * FUN_1003e264 at 1003e264
 * undefined __stdcall FUN_1003e264(undefined4 * param_1)
 * Address ranges: 1003e264-1003e305
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e264(undefined4 *param_1)

{
  void *this;
  
  this = (void *)*param_1;
  FUN_10039d1b(this,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
               (uint *)param_1[7],param_1[8],param_1[9],*(char *)(param_1 + 10),'\0');
  if (param_1[0xb] != 0) {
    FUN_100a012d((void *)(*(int *)((int)this + 0xd9b8) + 0x14f0),param_1[0xd],param_1[0xb],
                 param_1[0xc]);
  }
  return;
}

