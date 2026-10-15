/*
 * FUN_10088343 at 10088343
 * undefined __stdcall FUN_10088343(undefined4 * param_1)
 * Address ranges: 10088343-100883f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10088343(undefined4 *param_1)

{
  int *this;
  int iVar1;
  int iVar2;
  
  this = (int *)*param_1;
  iVar1 = param_1[1];
  iVar2 = param_1[2];
  (**(code **)(*this + 0x1c))
            (iVar1,param_1[3],param_1[4],param_1[5],param_1[6],param_1[7],param_1[8],param_1[9],
             param_1[10],param_1[0xb]);
  FUN_100b8c84(this,iVar2,0);
  if (param_1[0xc] != 0) {
    FUN_100c257a(this + *(int *)(iVar1 + 8) * 0x5b0 + 0x6ec,param_1[0xe],param_1[0xc],param_1[0xd]);
  }
  return;
}

