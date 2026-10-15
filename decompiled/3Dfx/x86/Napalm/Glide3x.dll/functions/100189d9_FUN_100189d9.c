/*
 * FUN_100189d9 at 100189d9
 * undefined __thiscall FUN_100189d9(void * this, int param_1)
 * Address ranges: 100189d9-10018a21
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100189d9(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = 0;
  puVar3 = (undefined4 *)(**(int **)this + param_1);
  if (**(int **)((int)this + 4) != 0) {
    do {
      *(undefined4 **)(param_1 + uVar2 * 4) = puVar3;
      iVar1 = FUN_100181bd((void *)(*(int *)((int)this + 8) + 0x42e8),
                           *(int *)(**(int **)((int)this + 0xc) + uVar2 * 4),puVar3);
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + iVar1;
    } while (uVar2 < **(uint **)((int)this + 4));
  }
  return;
}

