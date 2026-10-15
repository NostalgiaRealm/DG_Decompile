/*
 * FUN_1006fb7a at 1006fb7a
 * undefined __thiscall FUN_1006fb7a(void * this, undefined4 param_1, int param_2)
 * Address ranges: 1006fb7a-1006fba1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1006fb7a(void *this,undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 400) == 0) {
    uVar1 = (*(code *)**(undefined4 **)this)(param_1,param_2,3,0xf);
    *(undefined4 *)(param_2 + 400) = uVar1;
  }
  return;
}

