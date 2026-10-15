/*
 * FUN_100cf664 at 100cf664
 * uint __thiscall FUN_100cf664(void * this, int param_1, undefined4 param_2)
 * Address ranges: 100cf664-100cf719
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100cf664(void *this,int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_100d12c0)[iVar2]) {
      iVar2 = 0;
      do {
        if (*(int *)(param_1 + iVar2 * 4) != (&DAT_100d12d0)[iVar2]) {
          iVar2 = 0;
          do {
            if (*(int *)(param_1 + iVar2 * 4) != (&DAT_100d12e0)[iVar2]) {
              iVar2 = 0;
              do {
                uVar1 = *(uint *)(param_1 + iVar2 * 4);
                if (uVar1 != (&DAT_100d12f0)[iVar2]) {
                  return uVar1 & 0xffffff00;
                }
                iVar2 = iVar2 + 1;
              } while (iVar2 != 4);
              uVar1 = FUN_10003d8f((void *)((int)this + 0x3c),&param_2);
              return uVar1;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 != 4);
          uVar1 = FUN_10003d8f((void *)((int)this + 0x30),&param_2);
          return uVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != 4);
      uVar1 = FUN_10003d8f((void *)((int)this + 0x24),&param_2);
      return uVar1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  uVar1 = FUN_10003d8f((void *)((int)this + 0x18),&param_2);
  return uVar1;
}

