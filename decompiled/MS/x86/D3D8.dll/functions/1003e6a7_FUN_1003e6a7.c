/*
 * FUN_1003e6a7 at 1003e6a7
 * undefined __cdecl FUN_1003e6a7(undefined4 * param_1)
 * Address ranges: 1003e6a7-1003e703
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1003e6a7(undefined4 *param_1)

{
  void *this;
  
  this = (void *)*param_1;
  FUN_10039ccd(this,param_1[1],param_1[2],param_1[3],(undefined4 *)param_1[4],0,
               (undefined4 *)param_1[5],'\x01');
  if (param_1[6] != 0) {
    FUN_100a012d((void *)(*(int *)((int)this + 0xd9b8) + 0x14f0),param_1[8],param_1[6],param_1[7]);
  }
  return;
}

