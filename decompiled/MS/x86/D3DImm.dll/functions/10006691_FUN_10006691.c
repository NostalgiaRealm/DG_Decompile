/*
 * FUN_10006691 at 10006691
 * undefined __thiscall FUN_10006691(void * this, uint param_1)
 * Address ranges: 10006691-100066f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006691(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (*(int *)(*(int *)((int)this + 0x178) + uVar2 * 4) == -1) {
      *(uint *)(*(int *)((int)this + 0x178) + uVar2 * 4) = param_1;
      iVar1 = FUN_10008271((void *)((int)this + 0x14c),&param_1);
      if (iVar1 != 0) {
        (**(code **)(**(int **)((int)this + 0x14) + 0x68))(uVar2,iVar1);
      }
      (**(code **)(**(int **)((int)this + 0x14) + 0x6c))(uVar2,1);
      return;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 8);
  if (uVar2 == 8) {
    FUN_10008155((void *)((int)this + 0x178),&param_1);
  }
  return;
}

