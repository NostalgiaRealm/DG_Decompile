/*
 * FUN_1004e1bb at 1004e1bb
 * undefined __thiscall FUN_1004e1bb(void * this, int param_1, void * param_2)
 * Address ranges: 1004e1bb-1004e246
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004e1bb(void *this,int param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    param_2 = (void *)(param_1 + 0x1d00 + (int)param_2 * 0x16c0);
    if (*(int *)((int)this + 8) == 0) {
      iVar2 = 0;
      goto LAB_1004e1f5;
    }
    do {
      iVar2 = *(int *)((int)this + 4) + 8 + uVar1 * 0x68;
LAB_1004e1f5:
      param_1 = *(int *)(iVar2 + 8);
      if (param_1 != 0) {
        FUN_100beb63(param_2,&param_1);
        (**(code **)(**(int **)(iVar2 + 8) + 8))(*(int **)(iVar2 + 8));
      }
      param_1 = *(int *)(iVar2 + 0x34);
      if (param_1 != 0) {
        FUN_100beb63(param_2,&param_1);
        (**(code **)(**(int **)(iVar2 + 0x34) + 8))(*(int **)(iVar2 + 0x34));
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)this + 8));
  }
  return;
}

