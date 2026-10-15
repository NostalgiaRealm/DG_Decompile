/*
 * FUN_1005aa27 at 1005aa27
 * undefined __thiscall FUN_1005aa27(void * this, int param_1)
 * Address ranges: 1005aa27-1005aab0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1005aa27(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = *(int *)(param_1 + 8);
  do {
    uVar2 = *(uint *)(param_1 + 0xd8c + uVar3 * 4);
    if (uVar2 != 0) {
      FUN_1005b39a((void *)((int)this + iVar1 * 0x16c0 + 0x1c40),uVar2);
      *(undefined4 *)(param_1 + 0xd8c + uVar3 * 4) = 0;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  if (*(uint *)(param_1 + 0xd94) != 0xffffffff) {
    FUN_10051a23(*(void **)(*(int *)(param_1 + 8) * 0x16c0 + 0x1c98 + (int)this),
                 *(uint *)(param_1 + 0xd94),2,(int *)0x0,0,0);
    *(undefined4 *)(param_1 + 0xd94) = 0xffffffff;
  }
  return;
}

