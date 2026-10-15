/*
 * FUN_1000e4be at 1000e4be
 * undefined __thiscall FUN_1000e4be(void * this, int param_1, uint param_2)
 * Address ranges: 1000e4be-1000e535
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000e4be(void *this,int param_1,uint param_2)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    bVar2 = FUN_100051b3(this,4);
    if ((bVar2) && (param_1 < *(int *)(*(int *)((int)this + 0x1c) + 0x797))) {
      uVar3 = FUN_10009384(*(void **)((int)this + 0xc),param_2);
      if (uVar3 != *(uint *)(param_1 * 0x9d + 0x246 + (int)*(int **)((int)this + 0xc))) {
        (**(code **)(**(int **)((int)this + 0xc) + 0x17c))(param_1,uVar3);
        *(uint *)(param_1 * 0x9d + 0x246 + *(int *)((int)this + 0xc)) = uVar3;
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

