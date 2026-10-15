/*
 * FUN_100101c1 at 100101c1
 * undefined __thiscall FUN_100101c1(void * this, int param_1)
 * Address ranges: 100101c1-10010222
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100101c1(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 1;
  if (1 < *(ushort *)((int)this + 0x30)) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 * 0x40 + uVar3 * 4 + *(int *)((int)this + 0x38)) + 4);
      if (*(int *)(iVar2 + 0x20) != 0) {
        puVar1 = (uint *)(iVar2 + 0x34);
        *puVar1 = *puVar1 | 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)((int)this + 0x30));
  }
  iVar2 = *(int *)(param_1 * 0x40 + *(int *)((int)this + 0x38));
  if (*(int *)(*(int *)(iVar2 + 4) + 0x20) != 0) {
    puVar1 = (uint *)(*(int *)(iVar2 + 4) + 0x34);
    *puVar1 = *puVar1 | 1;
    FUN_10006893(*(void **)(iVar2 + 0x18),iVar2);
  }
  return;
}

