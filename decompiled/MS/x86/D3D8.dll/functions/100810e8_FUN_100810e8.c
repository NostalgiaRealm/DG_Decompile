/*
 * FUN_100810e8 at 100810e8
 * undefined4 __stdcall FUN_100810e8(int param_1, int param_2, undefined4 * param_3)
 * Address ranges: 100810e8-1008115b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100810e8(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  do {
    iVar3 = 0;
    while (*(int *)(param_2 + iVar3 * 4) == (&DAT_100bef18)[uVar2 * 4 + iVar3]) {
      iVar3 = iVar3 + 1;
      if (iVar3 == 4) {
        piVar1 = (int *)(param_1 + 4);
        LOCK();
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        *param_3 = *(undefined4 *)(param_1 + 0xc);
        piVar1 = *(int **)(param_1 + 0x14);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))(piVar1);
          return 0;
        }
        if (iVar3 != 0) {
          return 0;
        }
        LOCK();
        *(int *)(&DAT_000058e4 + *(int *)(param_1 + 0x10)) =
             *(int *)(&DAT_000058e4 + *(int *)(param_1 + 0x10)) + 1;
        UNLOCK();
        return 0;
      }
    }
    uVar2 = uVar2 + 1;
    if (1 < uVar2) {
      return 0x80004002;
    }
  } while( true );
}

