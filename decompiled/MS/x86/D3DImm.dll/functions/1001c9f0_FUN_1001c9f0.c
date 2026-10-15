/*
 * FUN_1001c9f0 at 1001c9f0
 * undefined4 * __thiscall FUN_1001c9f0(void * this, byte param_1)
 * Address ranges: 1001c9f0-1001cacf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1001c9f0(void *this,byte param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uint local_c;
  
  *(undefined ***)this = &PTR_FUN_1005fe9c;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_1005fed8;
  if (*(void **)((int)this + 0x40) == (void *)0x0) {
    local_c = 0;
    if (*(int *)((int)this + 0x4c) != 0) {
      do {
        iVar2 = *(int *)((int)this + 0x48);
        iVar4 = local_c * 0x20;
        if (*(int *)(iVar2 + 0x14 + iVar4) != 0) {
          while( true ) {
            iVar2 = iVar4 + iVar2;
            uVar5 = (**(code **)(**(int **)(iVar2 + 0x14) + 0x20))(*(int **)(iVar2 + 0x14));
            uVar3 = (uint)((ulonglong)uVar5 >> 0x20);
            if (*(uint *)(iVar2 + 0x1c) < uVar3) break;
            if (((*(uint *)(iVar2 + 0x1c) <= uVar3) && (*(uint *)(iVar2 + 0x18) <= (uint)uVar5)) ||
               (iVar2 = *(int *)((int)this + 0x48), *(int *)(iVar4 + 0x14 + iVar2) == 0)) break;
          }
        }
        piVar1 = *(int **)(*(int *)((int)this + 0x48) + 0xc + iVar4);
        (**(code **)(*piVar1 + 8))(piVar1);
        local_c = local_c + 1;
      } while (local_c < *(uint *)((int)this + 0x4c));
    }
  }
  else if (*(int *)((int)this + 100) != 0) {
    FUN_10058fe6(*(void **)((int)this + 0x40),*(int *)((int)this + 0x28),*(int *)((int)this + 0x68),
                 *(undefined4 *)((int)this + 0x6c),*(uint *)((int)this + 0x70),
                 *(uint *)((int)this + 0x74),*(int **)((int)this + 0x10),*(uint *)((int)this + 0x18)
                 ,*(undefined4 *)((int)this + 0x1c));
  }
  *(undefined ***)this = &PTR__scalar_deleting_destructor__1005fea4;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_1005fec0;
  thunk_FUN_1005c76c(*(LPVOID *)((int)this + 0x48));
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_1005fec0;
  *(undefined ***)this = &PTR_FUN_1005fef8;
  if ((param_1 & 1) != 0) {
    FUN_1005c76c(this);
  }
  return this;
}

