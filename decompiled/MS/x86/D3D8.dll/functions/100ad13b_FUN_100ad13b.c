/*
 * FUN_100ad13b at 100ad13b
 * undefined4 __thiscall FUN_100ad13b(void * this, int param_1, int param_2)
 * Address ranges: 100ad13b-100ad1c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100ad13b(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_100af2c0)[iVar1]) {
      iVar1 = 0;
      goto LAB_100ad167;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  iVar1 = *(int *)((int)this + 0x18);
  goto LAB_100ad1ba;
  while (iVar1 = iVar1 + 1, iVar1 != 4) {
LAB_100ad167:
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_100af2d0)[iVar1]) {
      iVar1 = 0;
      goto LAB_100ad184;
    }
  }
  iVar1 = *(int *)((int)this + 0x24);
  goto LAB_100ad1ba;
  while (iVar1 = iVar1 + 1, iVar1 != 4) {
LAB_100ad184:
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_100af2e0)[iVar1]) {
      iVar1 = 0;
      do {
        if (*(int *)(param_1 + iVar1 * 4) != (&DAT_100af2f0)[iVar1]) {
          return 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 4);
      iVar1 = *(int *)((int)this + 0x3c);
      goto LAB_100ad1ba;
    }
  }
  iVar1 = *(int *)((int)this + 0x30);
LAB_100ad1ba:
  return *(undefined4 *)(iVar1 + param_2 * 4);
}

