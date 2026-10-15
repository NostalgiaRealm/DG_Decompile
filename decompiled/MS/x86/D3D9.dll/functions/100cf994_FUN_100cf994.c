/*
 * FUN_100cf994 at 100cf994
 * undefined4 __thiscall FUN_100cf994(void * this, int param_1)
 * Address ranges: 100cf994-100cfa1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100cf994(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_100d12c0)[iVar1]) {
      iVar1 = 0;
      do {
        if (*(int *)(param_1 + iVar1 * 4) != (&DAT_100d12d0)[iVar1]) {
          iVar1 = 0;
          do {
            if (*(int *)(param_1 + iVar1 * 4) != (&DAT_100d12e0)[iVar1]) {
              iVar1 = 0;
              do {
                if (*(int *)(param_1 + iVar1 * 4) != (&DAT_100d12f0)[iVar1]) {
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

