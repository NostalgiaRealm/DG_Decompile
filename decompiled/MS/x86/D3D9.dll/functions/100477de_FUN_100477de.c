/*
 * FUN_100477de at 100477de
 * undefined __stdcall FUN_100477de(undefined4 * param_1)
 * Address ranges: 100477de-1004787a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100477de(undefined4 *param_1)

{
  void *this;
  undefined4 local_8;
  
  this = (void *)*param_1;
  local_8 = CONCAT31(local_8._1_3_,*(undefined1 *)(param_1 + 9));
  FUN_10043b60(this,param_1[1],param_1[2],param_1[3],param_1[4],(uint *)param_1[5],param_1[6],
               param_1[7],*(char *)(param_1 + 8),local_8);
  if (param_1[10] != 0) {
    FUN_100c257a((void *)(*(int *)((int)this + 0xf6b8) + 0x14f0),param_1[0xc],param_1[10],
                 param_1[0xb]);
  }
  return;
}

