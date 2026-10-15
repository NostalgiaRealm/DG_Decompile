/*
 * FUN_100acd84 at 100acd84
 * uint __thiscall FUN_100acd84(void * this, int param_1, undefined4 param_2)
 * Address ranges: 100acd84-100ace39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100acd84(void *this,int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_100af2c0)[iVar2]) {
      iVar2 = 0;
      do {
        if (*(int *)(param_1 + iVar2 * 4) != (&DAT_100af2d0)[iVar2]) {
          iVar2 = 0;
          do {
            if (*(int *)(param_1 + iVar2 * 4) != (&DAT_100af2e0)[iVar2]) {
              iVar2 = 0;
              do {
                uVar1 = *(uint *)(param_1 + iVar2 * 4);
                if (uVar1 != (&DAT_100af2f0)[iVar2]) {
                  return uVar1 & 0xffffff00;
                }
                iVar2 = iVar2 + 1;
              } while (iVar2 != 4);
              uVar1 = FUN_10003787((void *)((int)this + 0x3c),&param_2);
              return uVar1;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 != 4);
          uVar1 = FUN_10003787((void *)((int)this + 0x30),&param_2);
          return uVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != 4);
      uVar1 = FUN_10003787((void *)((int)this + 0x24),&param_2);
      return uVar1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  uVar1 = FUN_10003787((void *)((int)this + 0x18),&param_2);
  return uVar1;
}

