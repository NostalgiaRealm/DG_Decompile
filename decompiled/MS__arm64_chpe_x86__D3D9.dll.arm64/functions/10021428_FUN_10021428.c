/*
 * FUN_10021428 at 10021428
 * undefined FUN_10021428(void)
 * Address ranges: 10021428-1002148b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10021428(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(uint *)(param_1 + 100) != 0) {
    do {
      uVar2 = 0;
      if (*(ushort *)(param_1 + 0x30) != 0) {
        do {
          iVar1 = uVar2 * 4;
          uVar2 = uVar2 + 1;
          *(undefined4 *)(*(int *)(*(int *)(param_2 + uVar3 * 0x40 + iVar1) + 4) + 0xb0) = 0;
        } while (uVar2 < *(ushort *)(param_1 + 0x30));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 100));
  }
  return;
}

