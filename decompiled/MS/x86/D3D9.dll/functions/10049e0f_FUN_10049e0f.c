/*
 * FUN_10049e0f at 10049e0f
 * undefined __stdcall FUN_10049e0f(undefined4 * param_1)
 * Address ranges: 10049e0f-10049eb0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10049e0f(undefined4 *param_1)

{
  void *this;
  
  this = (void *)*param_1;
  FUN_10045494(this,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
               (uint *)param_1[7],param_1[8],param_1[9],*(char *)(param_1 + 10),'\0');
  if (param_1[0xb] != 0) {
    FUN_100c257a((void *)(*(int *)((int)this + 0xf6b8) + 0x14f0),param_1[0xd],param_1[0xb],
                 param_1[0xc]);
  }
  return;
}

