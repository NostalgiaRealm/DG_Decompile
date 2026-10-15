/*
 * FUN_10082d0d at 10082d0d
 * bool __thiscall FUN_10082d0d(void * this, undefined4 param_1, undefined4 param_2, undefined4 * param_3)
 * Address ranges: 10082d0d-10082d65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_10082d0d(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_100adf60(this,(byte *)"%d x %d %c");
  if (iVar1 == 2) {
    bVar2 = true;
  }
  else {
    *param_3 = 1;
    iVar1 = FUN_100adf60(this,(byte *)"%d x %d @ %d %c");
    bVar2 = iVar1 == 3;
  }
  return bVar2;
}

