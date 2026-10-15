/*
 * FUN_10006184 at 10006184
 * undefined __thiscall FUN_10006184(void * this, uint param_1)
 * Address ranges: 10006184-100061fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006184(void *this,uint param_1)

{
  int *piVar1;
  char cVar2;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((param_1 != *(byte *)((int)*(int **)((int)this + 0xc) + 0x13d)) &&
       ((param_1 == 0 || (param_1 == 1)))) {
      (**(code **)(**(int **)((int)this + 0xc) + 0x40))(param_1);
      *(char *)(*(int *)((int)this + 0xc) + 0x13d) = (char)param_1;
      cVar2 = *(char *)((int)*(int **)((int)this + 0xc) + 0x125);
      if (cVar2 != '\0') {
        (**(code **)(**(int **)((int)this + 0xc) + 200))((cVar2 == '\x01') + '\x01');
      }
      (**(code **)(**(int **)((int)this + 0xc) + 0xd0))((int)*(int **)((int)this + 0xc) + 0x12d);
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

