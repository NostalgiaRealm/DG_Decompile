/*
 * FUN_10046686 at 10046686
 * undefined __thiscall FUN_10046686(void * this, undefined4 * param_1)
 * Address ranges: 10046686-100466f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10046686(void *this,undefined4 *param_1)

{
  void *this_00;
  undefined4 local_8;
  
  this_00 = (void *)*param_1;
  local_8 = CONCAT31((int3)((uint)this >> 8),*(undefined1 *)(param_1 + 6));
  FUN_10043ab0(this_00,(undefined4 *)param_1[1],param_1[2],(undefined4 *)param_1[3],param_1[4],
               param_1[5],local_8);
  if (param_1[7] != 0) {
    FUN_100c257a((void *)(*(int *)((int)this_00 + 0xf6b8) + 0x14f0),param_1[9],param_1[7],param_1[8]
                );
  }
  return;
}

