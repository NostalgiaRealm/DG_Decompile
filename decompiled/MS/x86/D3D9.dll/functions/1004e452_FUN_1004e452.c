/*
 * FUN_1004e452 at 1004e452
 * undefined __fastcall FUN_1004e452(int param_1)
 * Address ranges: 1004e452-1004e4b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004e452(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar2 = 0;
      goto LAB_1004e46e;
    }
    do {
      iVar2 = uVar3 * 0x30 + *(int *)(param_1 + 0x10);
LAB_1004e46e:
      puVar1 = *(undefined4 **)(iVar2 + 0x28);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_1004e4ba(puVar1);
        FUN_100cfd6c(puVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x14));
  }
  thunk_FUN_100cfd6c(*(LPVOID *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

