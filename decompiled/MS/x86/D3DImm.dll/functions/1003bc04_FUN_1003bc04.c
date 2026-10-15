/*
 * FUN_1003bc04 at 1003bc04
 * undefined __thiscall FUN_1003bc04(void * this, undefined4 param_1, int param_2)
 * Address ranges: 1003bc04-1003bc2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003bc04(void *this,undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x170) == 0) {
    uVar1 = (*(code *)**(undefined4 **)this)(param_1,param_2,3,0xf);
    *(undefined4 *)(param_2 + 0x170) = uVar1;
  }
  return;
}

