/*
 * FUN_100227be at 100227be
 * undefined __thiscall FUN_100227be(void * this, HWND param_1, undefined4 * param_2)
 * Address ranges: 100227be-100227e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100227be(void *this,HWND param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((int)this + -0x28);
  if (this == (void *)0x38) {
    piVar1 = (int *)0x0;
  }
  FUN_10002a11(*(int *)((int)this + 0xe4),param_1,piVar1,param_2);
  return;
}

