/*
 * FUN_10005d93 at 10005d93
 * undefined __thiscall FUN_10005d93(void * this, uint param_1)
 * Address ranges: 10005d93-10005e0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10005d93(void *this,uint param_1)

{
  int *piVar1;
  char cVar2;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((param_1 != *(byte *)((int)*(int **)((int)this + 0xc) + 0x11a)) &&
       ((param_1 == 0 || (param_1 == 1)))) {
      (**(code **)(**(int **)((int)this + 0xc) + 0x44))(param_1);
      *(char *)(*(int *)((int)this + 0xc) + 0x11a) = (char)param_1;
      cVar2 = *(char *)((int)*(int **)((int)this + 0xc) + 0x102);
      if (cVar2 != '\0') {
        (**(code **)(**(int **)((int)this + 0xc) + 0xd4))((cVar2 == '\x01') + '\x01');
      }
      (**(code **)(**(int **)((int)this + 0xc) + 0xdc))((int)*(int **)((int)this + 0xc) + 0x10a);
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

