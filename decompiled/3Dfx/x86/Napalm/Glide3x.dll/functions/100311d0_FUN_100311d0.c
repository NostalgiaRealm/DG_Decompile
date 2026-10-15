/*
 * FUN_100311d0 at 100311d0
 * bool __thiscall FUN_100311d0(void * this, undefined4 param_1, undefined4 param_2, undefined4 * param_3)
 * Address ranges: 100311d0-10031228
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_100311d0(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_10056251(this,(byte *)"%d x %d %c");
  if (iVar1 == 2) {
    bVar2 = true;
  }
  else {
    *param_3 = 1;
    iVar1 = FUN_10056251(this,(byte *)"%d x %d @ %d %c");
    bVar2 = iVar1 == 3;
  }
  return bVar2;
}

