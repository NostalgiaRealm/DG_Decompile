/*
 * FUN_100298be at 100298be
 * undefined __stdcall FUN_100298be(int param_1)
 * Address ranges: 100298be-10029907
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100298be(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_100dea7c;
  uVar3 = 0;
  uVar1 = *(uint *)(DAT_100dea7c + 0xc);
  if (uVar1 != 0) {
    do {
      if (*(int *)(*(int *)(DAT_100dea7c + 8) + uVar3 * 4) == param_1) {
        if (uVar3 == 0xffffffff) {
          return;
        }
        uVar3 = uVar3 + 1;
        if (uVar3 < uVar1) {
          do {
            *(undefined4 *)(*(int *)(iVar2 + 8) + -4 + uVar3 * 4) =
                 *(undefined4 *)(*(int *)(iVar2 + 8) + uVar3 * 4);
            uVar3 = uVar3 + 1;
          } while (uVar3 < *(uint *)(iVar2 + 0xc));
        }
        *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + -1;
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return;
}

