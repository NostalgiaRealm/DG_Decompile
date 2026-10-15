/*
 * FUN_10031990 at 10031990
 * undefined4 * __thiscall FUN_10031990(void * this, byte param_1)
 * Address ranges: 10031990-10031a6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10031990(void *this,byte param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uint local_c;
  
  *(undefined ***)this = &PTR_FUN_100b5264;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_100b52a0;
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
    FUN_1009e3fc(*(void **)((int)this + 0x40),*(int *)((int)this + 0x28),*(int *)((int)this + 0x68),
                 *(undefined4 *)((int)this + 0x6c),*(uint *)((int)this + 0x70),
                 *(uint *)((int)this + 0x74),*(int **)((int)this + 0x10),*(uint *)((int)this + 0x18)
                 ,*(undefined4 *)((int)this + 0x1c));
  }
  *(undefined ***)this = &PTR__scalar_deleting_destructor__100b526c;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_100b5288;
  thunk_FUN_100ad48c(*(LPVOID *)((int)this + 0x48));
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_100b5288;
  *(undefined ***)this = &PTR_FUN_100b52e8;
  if ((param_1 & 1) != 0) {
    FUN_100ad48c(this);
  }
  return this;
}

