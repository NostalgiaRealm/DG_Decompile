/*
 * FUN_1009245a at 1009245a
 * undefined __thiscall FUN_1009245a(void * this, uint param_1, int param_2, int * param_3, int * param_4)
 * Address ranges: 1009245a-100925c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FUN_1009245a(void *this,uint param_1,int param_2,int *param_3,int *param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 != *(int *)((int)this + param_1 * 4 + 0x1298)) {
    param_2 = 0;
    iVar3 = 0;
    if (param_3 == (int *)0x0) {
      param_3 = (int *)0x0;
      if (param_4 != (int *)0x0) {
        param_2 = param_4[0x25];
        iVar3 = param_4[0x2a];
        param_3 = param_4;
      }
    }
    else {
      param_2 = param_3[0x11];
      iVar3 = param_3[0x16];
    }
    bVar1 = false;
    if (param_3 == (int *)0x0) {
      param_2 = 0;
    }
    else {
      if ((iVar3 == 0x28) || (bVar1 = false, iVar3 == 0x29)) {
        bVar1 = true;
      }
      (**(code **)(*param_3 + 4))();
      param_3[0xb] = param_3[0xb] | 1 << (param_1 + 0x10 & 0x1f);
    }
    (**(code **)(**(int **)((int)this + 0x14) + 0xd4))(param_1,0,param_2,0);
    iVar3 = *(int *)((int)this + param_1 * 4 + 0x1298);
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x2c) = *(uint *)(iVar3 + 0x2c) & ~(1 << (param_1 + 0x10 & 0x1f));
      (**(code **)(**(int **)((int)this + param_1 * 4 + 0x1298) + 8))();
    }
    *(int **)((int)this + param_1 * 4 + 0x1298) = param_3;
    if ((param_3 == (int *)0x0) || (*(char *)((int)param_3 + 0x32) == '\0')) {
      iVar3 = 0;
    }
    else {
      iVar3 = 1;
    }
    *(uint *)((int)this + 0x6680) =
         iVar3 << ((byte)param_1 & 0x1f) | *(uint *)((int)this + 0x6680) & ~(1 << (param_1 & 0x1f));
    if (bVar1) {
      uVar2 = *(uint *)((int)this + 0x6688) | 1 << (param_1 & 0x1f);
      uVar4 = *(uint *)((int)this + 0x6684) | 1 << (param_1 & 0x1f);
    }
    else {
      uVar2 = *(uint *)((int)this + 0x6688) & ~(1 << (param_1 & 0x1f));
      uVar4 = *(uint *)((int)this + 0x6684) & ~(1 << (param_1 & 0x1f));
    }
    *(uint *)((int)this + 0x6688) = uVar2;
    *(uint *)((int)this + 0x6684) = uVar4;
  }
  return;
}

