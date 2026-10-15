/*
 * FUN_1004050a at 1004050a
 * undefined __fastcall FUN_1004050a(int param_1)
 * Address ranges: 1004050a-10040571
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004050a(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar2 = 0;
      goto LAB_10040526;
    }
    do {
      iVar2 = uVar3 * 0x28 + *(int *)(param_1 + 0x10);
LAB_10040526:
      puVar1 = *(undefined4 **)(iVar2 + 0x20);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_10040572(puVar1);
        FUN_100ad48c(puVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x14));
  }
  thunk_FUN_100ad48c(*(LPVOID *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

