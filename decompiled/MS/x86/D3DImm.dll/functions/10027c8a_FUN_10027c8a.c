/*
 * FUN_10027c8a at 10027c8a
 * undefined __stdcall FUN_10027c8a(undefined4 * param_1)
 * Address ranges: 10027c8a-10027d0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10027c8a(undefined4 *param_1)

{
  void *this;
  
  this = (void *)*param_1;
  FUN_100245aa(this,param_1[1],(void *)param_1[2],param_1[3],(ushort *)param_1[4],param_1[5],
               param_1[6],*(byte *)(param_1 + 7));
  if (param_1[8] != 0) {
    FUN_10056974((void *)(*(int *)((int)this + 0x1d54) + 0x14f0),param_1[10],param_1[8],param_1[9]);
  }
  return;
}

