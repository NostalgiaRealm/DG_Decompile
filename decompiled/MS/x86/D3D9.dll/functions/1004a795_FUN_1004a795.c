/*
 * FUN_1004a795 at 1004a795
 * undefined __stdcall FUN_1004a795(undefined4 * param_1)
 * Address ranges: 1004a795-1004a82e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004a795(undefined4 *param_1)

{
  void *this;
  
  this = (void *)*param_1;
  FUN_10045494(this,param_1[1],param_1[2],param_1[3],param_1[4],0,param_1[5],(uint *)param_1[6],
               param_1[7],param_1[8],*(char *)(param_1 + 9),'\x01');
  if (param_1[10] != 0) {
    FUN_100c257a((void *)(*(int *)((int)this + 0xf6b8) + 0x14f0),param_1[0xc],param_1[10],
                 param_1[0xb]);
  }
  return;
}

