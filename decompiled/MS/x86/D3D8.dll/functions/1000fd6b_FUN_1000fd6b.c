/*
 * FUN_1000fd6b at 1000fd6b
 * undefined __thiscall FUN_1000fd6b(void * this, int param_1, undefined4 param_2)
 * Address ranges: 1000fd6b-1000fdcc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000fd6b(void *this,int param_1,undefined4 param_2)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  if (param_1 == 0) {
    uStack_c = 0;
    local_10 = 0;
  }
  else {
    local_10 = *(int *)(param_1 + 0x400);
    uStack_c = *(int *)(param_1 + 0x404);
  }
  if (((param_1 != *(int *)((int)this + 0x28)) || (local_10 != *(int *)((int)this + 0x20))) ||
     (uStack_c != *(int *)((int)this + 0x24))) {
    (*(code *)**(undefined4 **)this)(param_2);
    *(int *)((int)this + 0x20) = local_10;
    *(int *)((int)this + 0x28) = param_1;
    *(int *)((int)this + 0x24) = uStack_c;
  }
  return;
}

