/*
 * FUN_10060519 at 10060519
 * uint __thiscall FUN_10060519(void * this, int param_1, undefined4 param_2)
 * Address ranges: 10060519-100605ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10060519(void *this,int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_10062310)[iVar2]) {
      iVar2 = 0;
      do {
        if (*(int *)(param_1 + iVar2 * 4) != (&DAT_10062320)[iVar2]) {
          iVar2 = 0;
          do {
            if (*(int *)(param_1 + iVar2 * 4) != (&DAT_10062330)[iVar2]) {
              iVar2 = 0;
              do {
                uVar1 = *(uint *)(param_1 + iVar2 * 4);
                if (uVar1 != (&DAT_10062340)[iVar2]) {
                  return uVar1 & 0xffffff00;
                }
                iVar2 = iVar2 + 1;
              } while (iVar2 != 4);
              uVar1 = FUN_1000138a((void *)((int)this + 0x3c),&param_2);
              return uVar1;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 != 4);
          uVar1 = FUN_1000138a((void *)((int)this + 0x30),&param_2);
          return uVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != 4);
      uVar1 = FUN_1000138a((void *)((int)this + 0x24),&param_2);
      return uVar1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  uVar1 = FUN_1000138a((void *)((int)this + 0x18),&param_2);
  return uVar1;
}

