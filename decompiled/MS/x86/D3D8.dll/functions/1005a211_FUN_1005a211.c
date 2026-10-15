/*
 * FUN_1005a211 at 1005a211
 * undefined __thiscall FUN_1005a211(void * this, undefined4 param_1, int param_2)
 * Address ranges: 1005a211-1005a238
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1005a211(void *this,undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x18c) == 0) {
    uVar1 = (*(code *)**(undefined4 **)this)(param_1,param_2,3,0xf);
    *(undefined4 *)(param_2 + 0x18c) = uVar1;
  }
  return;
}

