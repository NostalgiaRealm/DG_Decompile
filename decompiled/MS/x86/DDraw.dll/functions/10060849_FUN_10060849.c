/*
 * FUN_10060849 at 10060849
 * undefined4 __thiscall FUN_10060849(void * this, int param_1)
 * Address ranges: 10060849-100608cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10060849(void *this,int param_1)

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

