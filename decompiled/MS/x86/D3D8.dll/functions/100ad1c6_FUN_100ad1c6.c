/*
 * FUN_100ad1c6 at 100ad1c6
 * int __thiscall FUN_100ad1c6(void * this, int param_1)
 * Address ranges: 100ad1c6-100ad24c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_100ad1c6(void *this,int param_1)

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
              return (int)this + 0x3c;
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 != 4);
          return (int)this + 0x30;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 4);
      return (int)this + 0x24;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  return (int)this + 0x18;
}

