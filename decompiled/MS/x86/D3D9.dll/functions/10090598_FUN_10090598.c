/*
 * FUN_10090598 at 10090598
 * undefined __thiscall FUN_10090598(void * this, int param_1, int param_2)
 * Address ranges: 10090598-100905dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10090598(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(int *)(param_2 + 4) = param_1;
  *(undefined4 *)(param_2 + 0xe0) = *(undefined4 *)(*(int *)((int)this + 0x54) + param_1 * 0x10);
  if (*(int *)(*(int *)((int)this + 0x54) + 4 + param_1 * 0x10) == 0) {
    uVar1 = *(undefined4 *)(*(int *)((int)this + 0x54) + 8 + param_1 * 0x10);
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)(param_2 + 0xe8) = uVar1;
  *(undefined4 *)(param_2 + 0xe4) = *(undefined4 *)(*(int *)((int)this + 0x54) + 4 + param_1 * 0x10)
  ;
  return;
}

