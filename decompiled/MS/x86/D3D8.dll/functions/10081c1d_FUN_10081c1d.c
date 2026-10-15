/*
 * FUN_10081c1d at 10081c1d
 * undefined4 __stdcall FUN_10081c1d(int param_1, int param_2, undefined4 * param_3)
 * Address ranges: 10081c1d-10081c88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10081c1d(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = 0;
  do {
    iVar3 = 0;
    while (*(int *)(param_2 + iVar3 * 4) == (&DAT_100bef98)[uVar1 * 4 + iVar3]) {
      iVar3 = iVar3 + 1;
      if (iVar3 == 4) {
        piVar2 = (int *)(param_1 + 4);
        LOCK();
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + 1;
        UNLOCK();
        *param_3 = *(undefined4 *)(param_1 + 0xc);
        if (iVar3 != 0) {
          return 0;
        }
        piVar2 = (int *)(*(int *)(param_1 + -0x3c) + 4);
        if (*(int *)(param_1 + -0x3c) == 0) {
          piVar2 = (int *)&DAT_000058e4;
        }
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
        return 0;
      }
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  return 0x80004002;
}

