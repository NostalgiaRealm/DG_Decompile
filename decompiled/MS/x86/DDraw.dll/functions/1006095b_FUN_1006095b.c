/*
 * FUN_1006095b at 1006095b
 * int __thiscall FUN_1006095b(void * this, int param_1)
 * Address ranges: 1006095b-100609e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1006095b(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_10062310)[iVar1]) {
      iVar1 = 0;
      do {
        if (*(int *)(param_1 + iVar1 * 4) != (&DAT_10062320)[iVar1]) {
          iVar1 = 0;
          do {
            if (*(int *)(param_1 + iVar1 * 4) != (&DAT_10062330)[iVar1]) {
              iVar1 = 0;
              do {
                if (*(int *)(param_1 + iVar1 * 4) != (&DAT_10062340)[iVar1]) {
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

