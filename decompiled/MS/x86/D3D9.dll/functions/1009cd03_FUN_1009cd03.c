/*
 * FUN_1009cd03 at 1009cd03
 * undefined4 __stdcall FUN_1009cd03(int param_1, int param_2, undefined4 * param_3)
 * Address ranges: 1009cd03-1009cd51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009cd03(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  do {
    iVar2 = 0;
    while (*(int *)(param_2 + iVar2 * 4) == (&DAT_100de7b8)[uVar1 * 4 + iVar2]) {
      iVar2 = iVar2 + 1;
      if (iVar2 == 4) {
        LOCK();
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        UNLOCK();
        *param_3 = *(undefined4 *)(param_1 + 0xc);
        return 0;
      }
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  return 0x80004002;
}

