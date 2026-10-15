/*
 * FUN_1004c26f at 1004c26f
 * undefined __thiscall FUN_1004c26f(void * this, int param_1)
 * Address ranges: 1004c26f-1004c2c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004c26f(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(uint *)((int)this + 0x9c);
  if (uVar3 != 0) {
    iVar1 = *(int *)((int)this + 0x98);
    do {
      if ((*(char *)(iVar1 + 5 + uVar2 * 8) != '\0') &&
         (uVar3 = *(uint *)((int)this + 0x9c),
         *(int *)(*(int *)((int)this + 0x8c) + 4 + *(int *)(iVar1 + uVar2 * 8) * 8) == param_1)) {
        *(undefined1 *)(iVar1 + 4 + uVar2 * 8) = 1;
        *(undefined1 *)((int)this + 0xd3) = 1;
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return;
}

