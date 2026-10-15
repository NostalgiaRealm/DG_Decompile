/*
 * FUN_10007305 at 10007305
 * undefined __thiscall FUN_10007305(void * this, int param_1)
 * Address ranges: 10007305-10007349
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10007305(void *this,int param_1)

{
  uint uVar1;
  
  if ((((param_1 == *(int *)((int)this + 0x18)) || (param_1 == *(int *)((int)this + 0x1c))) ||
      (param_1 == *(int *)((int)this + 0x20))) ||
     ((param_1 == *(int *)((int)this + 0x24) || (param_1 == *(int *)((int)this + 0x28))))) {
LAB_1000733e:
    (**(code **)(**(int **)((int)this + 0x14) + 0x14))();
  }
  else if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = 0;
    do {
      if (*(int *)(param_1 + 0x1c) == *(int *)((int)this + uVar1 * 4 + 0x1258)) goto LAB_1000733e;
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x10);
  }
  return;
}

