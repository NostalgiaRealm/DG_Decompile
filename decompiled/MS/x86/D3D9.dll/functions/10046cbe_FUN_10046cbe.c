/*
 * FUN_10046cbe at 10046cbe
 * undefined __stdcall FUN_10046cbe(undefined4 * param_1)
 * Address ranges: 10046cbe-10046d64
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10046cbe(undefined4 *param_1)

{
  void *this;
  undefined4 local_8;
  
  this = (void *)*param_1;
  local_8 = CONCAT31(local_8._1_3_,*(undefined1 *)(param_1 + 10));
  FUN_10043af0(this,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],(uint *)param_1[6],
               param_1[7],param_1[8],*(char *)(param_1 + 9),local_8);
  if (param_1[0xb] != 0) {
    FUN_100c257a((void *)(*(int *)((int)this + 0xf6b8) + 0x14f0),param_1[0xd],param_1[0xb],
                 param_1[0xc]);
  }
  return;
}

