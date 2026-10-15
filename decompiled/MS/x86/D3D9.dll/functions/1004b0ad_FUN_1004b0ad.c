/*
 * FUN_1004b0ad at 1004b0ad
 * undefined __stdcall FUN_1004b0ad(undefined4 * param_1)
 * Address ranges: 1004b0ad-1004b15a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004b0ad(undefined4 *param_1)

{
  void *this;
  
  this = (void *)*param_1;
  FUN_1004579f(this,param_1[1],(undefined *)param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
               param_1[7],*(char *)(param_1 + 8),*(byte *)(param_1 + 9),*(char *)(param_1 + 10));
  if (param_1[0xb] != 0) {
    FUN_100c257a((void *)(*(int *)((int)this + 0xf6b8) + 0x14f0),param_1[0xd],param_1[0xb],
                 param_1[0xc]);
  }
  return;
}

