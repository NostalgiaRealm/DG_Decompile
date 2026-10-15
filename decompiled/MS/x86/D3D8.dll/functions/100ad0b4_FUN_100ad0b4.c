/*
 * FUN_100ad0b4 at 100ad0b4
 * undefined4 __thiscall FUN_100ad0b4(void * this, int param_1)
 * Address ranges: 100ad0b4-100ad13a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100ad0b4(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_100af2c0)[iVar1]) {
      iVar1 = 0;
      do {
        if (*(int *)(param_1 + iVar1 * 4) != (&DAT_100af2d0)[iVar1]) {
          iVar1 = 0;
          do {
            if (*(int *)(param_1 + iVar1 * 4) != (&DAT_100af2e0)[iVar1]) {
              iVar1 = 0;
              do {
                if (*(int *)(param_1 + iVar1 * 4) != (&DAT_100af2f0)[iVar1]) {
                  return 0;
                }
                iVar1 = iVar1 + 1;
              } while (iVar1 != 4);
              return *(undefined4 *)((int)this + 0x40);
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 != 4);
          return *(undefined4 *)((int)this + 0x34);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 4);
      return *(undefined4 *)((int)this + 0x28);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  return *(undefined4 *)((int)this + 0x1c);
}

