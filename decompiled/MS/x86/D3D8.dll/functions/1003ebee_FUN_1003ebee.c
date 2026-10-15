/*
 * FUN_1003ebee at 1003ebee
 * undefined __stdcall FUN_1003ebee(undefined4 * param_1)
 * Address ranges: 1003ebee-1003ec87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003ebee(undefined4 *param_1)

{
  void *this;
  
  this = (void *)*param_1;
  FUN_10039d1b(this,param_1[1],param_1[2],param_1[3],param_1[4],0,param_1[5],(uint *)param_1[6],
               param_1[7],param_1[8],*(char *)(param_1 + 9),'\x01');
  if (param_1[10] != 0) {
    FUN_100a012d((void *)(*(int *)((int)this + 0xd9b8) + 0x14f0),param_1[0xc],param_1[10],
                 param_1[0xb]);
  }
  return;
}

