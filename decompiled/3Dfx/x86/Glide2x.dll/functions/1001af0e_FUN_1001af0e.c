/*
 * FUN_1001af0e at 1001af0e
 * undefined __thiscall FUN_1001af0e(void * this, uint param_1, int param_2, int param_3)
 * Address ranges: 1001af0e-1001aff7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001af0e(void *this,uint param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_1;
  (**(code **)(**(int **)((int)this + 0x315c) + 0x28))(0,2);
  if (*(int *)(*(int *)((int)this + 0x3160) + 0x30) != 4) {
    (**(code **)(*(int *)this + 0x150))();
    *(undefined4 *)(*(int *)((int)this + 0x3160) + 0x30) = 4;
  }
  FUN_1002c7c8(*(void **)((int)this + 0x3160),param_1,param_1 * 3 - 6);
  iVar3 = 0;
  param_1 = 1;
  if (0 < (int)uVar2) {
    do {
      FUN_1001a14d(*(void **)((int)this + 0x3160),
                   (undefined4 *)(*(int *)(param_2 + iVar3 * 4) * 0x3c + param_3),1,0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar2);
  }
  if (1 < (int)(uVar2 - 1)) {
    do {
      **(int **)(*(int *)((int)this + 0x3160) + 0x28) =
           *(int *)(*(int *)((int)this + 0x3160) + 0x2c) - uVar2;
      *(uint *)(*(int *)(*(int *)((int)this + 0x3160) + 0x28) + 4) =
           (*(int *)(*(int *)((int)this + 0x3160) + 0x2c) - uVar2) + param_1;
      *(uint *)(*(int *)(*(int *)((int)this + 0x3160) + 0x28) + 8) =
           param_1 + 1 + (*(int *)(*(int *)((int)this + 0x3160) + 0x2c) - uVar2);
      piVar1 = (int *)(*(int *)((int)this + 0x3160) + 0x28);
      *piVar1 = *piVar1 + 0xc;
      param_1 = param_1 + 1;
    } while ((int)param_1 < (int)(uVar2 - 1));
  }
  FUN_1001dc1c(this);
  (**(code **)(**(int **)((int)this + 0x315c) + 0x48))();
  return;
}

