/*
 * FUN_1001396f at 1001396f
 * undefined __thiscall FUN_1001396f(void * this, int param_1)
 * Address ranges: 1001396f-100139b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001396f(void *this,int param_1)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != *(int *)((int)*(int **)((int)this + 0xc) + 0x129)) {
      (**(code **)(**(int **)((int)this + 0xc) + 0x94))(param_1 != 0);
      *(int *)(*(int *)((int)this + 0xc) + 0x129) = param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

