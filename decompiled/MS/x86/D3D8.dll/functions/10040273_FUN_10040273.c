/*
 * FUN_10040273 at 10040273
 * undefined __thiscall FUN_10040273(void * this, int param_1, void * param_2)
 * Address ranges: 10040273-100402fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10040273(void *this,int param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    param_2 = (void *)(param_1 + 0x1d00 + (int)param_2 * 0x16c0);
    if (*(int *)((int)this + 8) == 0) {
      iVar2 = 0;
      goto LAB_100402ad;
    }
    do {
      iVar2 = *(int *)((int)this + 4) + 8 + uVar1 * 0x68;
LAB_100402ad:
      param_1 = *(int *)(iVar2 + 8);
      if (param_1 != 0) {
        FUN_1009c58b(param_2,&param_1);
        (**(code **)(**(int **)(iVar2 + 8) + 8))(*(int **)(iVar2 + 8));
      }
      param_1 = *(int *)(iVar2 + 0x34);
      if (param_1 != 0) {
        FUN_1009c58b(param_2,&param_1);
        (**(code **)(**(int **)(iVar2 + 0x34) + 8))(*(int **)(iVar2 + 0x34));
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)this + 8));
  }
  return;
}

