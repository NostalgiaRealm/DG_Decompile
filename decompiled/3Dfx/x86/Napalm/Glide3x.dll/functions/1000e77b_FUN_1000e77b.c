/*
 * FUN_1000e77b at 1000e77b
 * undefined __thiscall FUN_1000e77b(void * this, uint param_1, uint param_2, uint param_3)
 * Address ranges: 1000e77b-1000e812
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000e77b(void *this,uint param_1,uint param_2,uint param_3)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
    UNLOCK();
    bVar2 = FUN_100051b3(this,4);
    if (bVar2) {
      uVar3 = ~-(uint)(7 < param_1) & param_1;
      uVar5 = ~-(uint)(7 < param_2) & param_2;
      piVar1 = *(int **)((int)this + 0xc);
      uVar4 = ~-(uint)(7 < param_3) & param_3;
      if (((uVar3 != piVar1[0x3e]) || (uVar5 != piVar1[0x3f])) || (uVar4 != piVar1[0x40])) {
        (**(code **)(*piVar1 + 400))(uVar3,uVar5,uVar4);
        *(uint *)(*(int *)((int)this + 0xc) + 0xf8) = uVar3;
        *(uint *)(*(int *)((int)this + 0xc) + 0xfc) = uVar5;
        *(uint *)(*(int *)((int)this + 0xc) + 0x100) = uVar4;
      }
    }
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + -1;
    UNLOCK();
  }
  return;
}

