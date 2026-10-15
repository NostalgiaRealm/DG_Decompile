/*
 * FUN_1003dc7d at 1003dc7d
 * undefined __cdecl FUN_1003dc7d(undefined4 * param_1)
 * Address ranges: 1003dc7d-1003dce7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1003dc7d(undefined4 *param_1)

{
  void *this;
  
  this = (void *)*param_1;
  FUN_10039ccd(this,param_1[1],param_1[2],param_1[3],(undefined4 *)param_1[4],param_1[5],
               (undefined4 *)param_1[6],'\0');
  if (param_1[7] != 0) {
    FUN_100a012d((void *)(*(int *)((int)this + 0xd9b8) + 0x14f0),param_1[9],param_1[7],param_1[8]);
  }
  return;
}

