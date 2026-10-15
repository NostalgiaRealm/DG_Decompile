/*
 * FUN_1007aa85 at 1007aa85
 * undefined4 __stdcall FUN_1007aa85(int param_1, int param_2, undefined4 * param_3)
 * Address ranges: 1007aa85-1007aaf0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007aa85(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = 0;
  do {
    iVar3 = 0;
    while (*(int *)(param_2 + iVar3 * 4) == (&DAT_100bee98)[uVar1 * 4 + iVar3]) {
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
        piVar2 = (int *)(*(int *)(param_1 + -100) + 4);
        if (*(int *)(param_1 + -100) == 0) {
          piVar2 = (int *)&DAT_000058e4;
        }
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
        return 0;
      }
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return 0x80004002;
}

