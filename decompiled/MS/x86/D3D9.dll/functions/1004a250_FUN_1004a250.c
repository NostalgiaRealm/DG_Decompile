/*
 * FUN_1004a250 at 1004a250
 * undefined __cdecl FUN_1004a250(undefined4 * param_1)
 * Address ranges: 1004a250-1004a2ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1004a250(undefined4 *param_1)

{
  void *this;
  
  this = (void *)*param_1;
  FUN_10045446(this,(undefined4 *)param_1[1],param_1[2],param_1[3],(undefined4 *)param_1[4],0,
               param_1[5],'\x01');
  if (param_1[6] != 0) {
    FUN_100c257a((void *)(*(int *)((int)this + 0xf6b8) + 0x14f0),param_1[8],param_1[6],param_1[7]);
  }
  return;
}

