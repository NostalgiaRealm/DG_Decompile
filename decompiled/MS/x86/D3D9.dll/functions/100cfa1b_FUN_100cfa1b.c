/*
 * FUN_100cfa1b at 100cfa1b
 * undefined4 __thiscall FUN_100cfa1b(void * this, int param_1, int param_2)
 * Address ranges: 100cfa1b-100cfaa5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100cfa1b(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_100d12c0)[iVar1]) {
      iVar1 = 0;
      goto LAB_100cfa47;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  iVar1 = *(int *)((int)this + 0x18);
  goto LAB_100cfa9a;
  while (iVar1 = iVar1 + 1, iVar1 != 4) {
LAB_100cfa47:
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_100d12d0)[iVar1]) {
      iVar1 = 0;
      goto LAB_100cfa64;
    }
  }
  iVar1 = *(int *)((int)this + 0x24);
  goto LAB_100cfa9a;
  while (iVar1 = iVar1 + 1, iVar1 != 4) {
LAB_100cfa64:
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_100d12e0)[iVar1]) {
      iVar1 = 0;
      do {
        if (*(int *)(param_1 + iVar1 * 4) != (&DAT_100d12f0)[iVar1]) {
          return 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 4);
      iVar1 = *(int *)((int)this + 0x3c);
      goto LAB_100cfa9a;
    }
  }
  iVar1 = *(int *)((int)this + 0x30);
LAB_100cfa9a:
  return *(undefined4 *)(iVar1 + param_2 * 4);
}

