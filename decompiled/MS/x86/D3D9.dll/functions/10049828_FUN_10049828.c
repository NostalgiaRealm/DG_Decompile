/*
 * FUN_10049828 at 10049828
 * undefined __cdecl FUN_10049828(undefined4 * param_1)
 * Address ranges: 10049828-10049892
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10049828(undefined4 *param_1)

{
  void *this;
  
  this = (void *)*param_1;
  FUN_10045446(this,(undefined4 *)param_1[1],param_1[2],param_1[3],(undefined4 *)param_1[4],
               param_1[5],param_1[6],'\0');
  if (param_1[7] != 0) {
    FUN_100c257a((void *)(*(int *)((int)this + 0xf6b8) + 0x14f0),param_1[9],param_1[7],param_1[8]);
  }
  return;
}

