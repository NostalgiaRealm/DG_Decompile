/*
 * FUN_10028446 at 10028446
 * undefined __fastcall FUN_10028446(int param_1)
 * Address ranges: 10028446-100284ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10028446(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar2 = 0;
      goto LAB_10028462;
    }
    do {
      iVar2 = uVar3 * 0x28 + *(int *)(param_1 + 0x10);
LAB_10028462:
      puVar1 = *(undefined4 **)(iVar2 + 0x20);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_100284ae(puVar1);
        FUN_1005c76c(puVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x14));
  }
  thunk_FUN_1005c76c(*(LPVOID *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

