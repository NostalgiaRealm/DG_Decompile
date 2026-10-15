/*
 * FUN_100a4f6c at 100a4f6c
 * bool __thiscall FUN_100a4f6c(void * this, undefined4 param_1, undefined4 param_2, undefined4 * param_3)
 * Address ranges: 100a4f6c-100a4fc4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_100a4f6c(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_100d083e(this,(byte *)"%d x %d %c");
  if (iVar1 == 2) {
    bVar2 = true;
  }
  else {
    *param_3 = 1;
    iVar1 = FUN_100d083e(this,(byte *)"%d x %d @ %d %c");
    bVar2 = iVar1 == 3;
  }
  return bVar2;
}

