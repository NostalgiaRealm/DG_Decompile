/*
 * FUN_100183af at 100183af
 * undefined __thiscall FUN_100183af(void * this, uint param_1)
 * Address ranges: 100183af-10018412
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100183af(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (*(int *)(*(int *)((int)this + 0x318) + uVar2 * 4) == -1) {
      *(uint *)(*(int *)((int)this + 0x318) + uVar2 * 4) = param_1;
      iVar1 = FUN_10009dee((void *)((int)this + 0x2ec),&param_1);
      if (iVar1 != 0) {
        (**(code **)(**(int **)((int)this + 0x14) + 0x60))(uVar2,iVar1);
      }
      (**(code **)(**(int **)((int)this + 0x14) + 100))(uVar2,1);
      return;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 8);
  if (uVar2 == 8) {
    FUN_10003d8f((void *)((int)this + 0x318),&param_1);
  }
  return;
}

