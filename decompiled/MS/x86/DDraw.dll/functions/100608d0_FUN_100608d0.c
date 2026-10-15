/*
 * FUN_100608d0 at 100608d0
 * undefined4 __thiscall FUN_100608d0(void * this, int param_1, int param_2)
 * Address ranges: 100608d0-1006095a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100608d0(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_10062310)[iVar1]) {
      iVar1 = 0;
      goto LAB_100608fc;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  iVar1 = *(int *)((int)this + 0x18);
  goto LAB_1006094f;
  while (iVar1 = iVar1 + 1, iVar1 != 4) {
LAB_100608fc:
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_10062320)[iVar1]) {
      iVar1 = 0;
      goto LAB_10060919;
    }
  }
  iVar1 = *(int *)((int)this + 0x24);
  goto LAB_1006094f;
  while (iVar1 = iVar1 + 1, iVar1 != 4) {
LAB_10060919:
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_10062330)[iVar1]) {
      iVar1 = 0;
      do {
        if (*(int *)(param_1 + iVar1 * 4) != (&DAT_10062340)[iVar1]) {
          return 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 4);
      iVar1 = *(int *)((int)this + 0x3c);
      goto LAB_1006094f;
    }
  }
  iVar1 = *(int *)((int)this + 0x30);
LAB_1006094f:
  return *(undefined4 *)(iVar1 + param_2 * 4);
}

