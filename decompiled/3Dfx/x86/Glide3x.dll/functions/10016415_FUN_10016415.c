/*
 * FUN_10016415 at 10016415
 * undefined __thiscall FUN_10016415(void * this, int param_1)
 * Address ranges: 10016415-1001645d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10016415(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = 0;
  puVar3 = (undefined4 *)(**(int **)this + param_1);
  if (**(int **)((int)this + 4) != 0) {
    do {
      *(undefined4 **)(param_1 + uVar2 * 4) = puVar3;
      iVar1 = FUN_10015bf9((void *)(*(int *)((int)this + 8) + 0x3f50),
                           *(int *)(**(int **)((int)this + 0xc) + uVar2 * 4),puVar3);
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + iVar1;
    } while (uVar2 < **(uint **)((int)this + 4));
  }
  return;
}

