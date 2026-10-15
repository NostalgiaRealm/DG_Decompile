/*
 * FUN_10025158 at 10025158
 * undefined __thiscall FUN_10025158(void * this, undefined4 * param_1)
 * Address ranges: 10025158-100251c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10025158(void *this,undefined4 *param_1)

{
  void *this_00;
  undefined4 local_8;
  
  this_00 = (void *)*param_1;
  local_8 = CONCAT31((int3)((uint)this >> 8),*(undefined1 *)(param_1 + 6));
  FUN_100230a0(this_00,param_1[1],(undefined4 *)param_1[2],(undefined4 *)param_1[3],
               (undefined4 *)param_1[4],(undefined4 *)param_1[5],local_8);
  if (param_1[7] != 0) {
    FUN_10056974((void *)(*(int *)((int)this_00 + 0x1d54) + 0x14f0),param_1[9],param_1[7],param_1[8]
                );
  }
  return;
}

