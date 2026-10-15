/*
 * FUN_10001a12 at 10001a12
 * undefined __stdcall FUN_10001a12(int param_1)
 * Address ranges: 10001a12-10001a5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10001a12(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_1006c204;
  uVar3 = 0;
  uVar1 = *(uint *)(DAT_1006c204 + 0xc);
  if (uVar1 != 0) {
    do {
      if (*(int *)(*(int *)(DAT_1006c204 + 8) + uVar3 * 4) == param_1) {
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

