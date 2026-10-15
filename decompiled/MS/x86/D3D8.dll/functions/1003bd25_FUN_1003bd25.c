/*
 * FUN_1003bd25 at 1003bd25
 * undefined __stdcall FUN_1003bd25(undefined4 * param_1)
 * Address ranges: 1003bd25-1003bdc1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003bd25(undefined4 *param_1)

{
  void *this;
  undefined4 local_8;
  
  this = (void *)*param_1;
  local_8 = CONCAT31(local_8._1_3_,*(undefined1 *)(param_1 + 9));
  FUN_100382a0(this,param_1[1],param_1[2],param_1[3],param_1[4],(uint *)param_1[5],param_1[6],
               param_1[7],*(char *)(param_1 + 8),local_8);
  if (param_1[10] != 0) {
    FUN_100a012d((void *)(*(int *)((int)this + 0xd9b8) + 0x14f0),param_1[0xc],param_1[10],
                 param_1[0xb]);
  }
  return;
}

