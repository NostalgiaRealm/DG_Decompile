/*
 * FUN_10003d06 at 10003d06
 * undefined4 __thiscall FUN_10003d06(void * this, uint param_1, undefined4 * param_2)
 * Address ranges: 10003d06-10003d2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10003d06(void *this,uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if ((param_1 < *(uint *)((int)this + 0x4c)) && (param_2 != (undefined4 *)0x0)) {
    FUN_10003582(this,*(int *)(*(int *)((int)this + 0x48) + param_1 * 4),param_2);
    uVar1 = 0;
  }
  return uVar1;
}

