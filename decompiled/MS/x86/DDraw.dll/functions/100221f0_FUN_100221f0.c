/*
 * FUN_100221f0 at 100221f0
 * undefined __thiscall FUN_100221f0(void * this, undefined4 * param_1)
 * Address ranges: 100221f0-10022218
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100221f0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_18 [5];
  
  puVar1 = FUN_10021db4(*(void **)((int)this + 0x1c),local_18);
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

