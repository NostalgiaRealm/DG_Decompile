/*
 * FUN_10072270 at 10072270
 * undefined __stdcall FUN_10072270(undefined4 * param_1)
 * Address ranges: 10072270-10072321
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10072270(undefined4 *param_1)

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
  FUN_10096631(this,iVar2,0);
  if (param_1[0xc] != 0) {
    FUN_100a012d(this + *(int *)(iVar1 + 8) * 0x5b0 + 0x6ec,param_1[0xe],param_1[0xc],param_1[0xd]);
  }
  return;
}

