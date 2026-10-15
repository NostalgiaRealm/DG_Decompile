/*
 * FUN_10049048 at 10049048
 * undefined __fastcall FUN_10049048(int param_1)
 * Address ranges: 10049048-100490ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10049048(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 local_8;
  
  local_8 = 0;
  do {
    uVar1 = 0;
    iVar2 = local_8 * 0xc;
    if (*(int *)(param_1 + 0x14 + iVar2) != 0) {
      do {
        thunk_FUN_1004f9b6(*(LPVOID *)(*(int *)(param_1 + 0x10 + iVar2) + uVar1 * 4));
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x14 + iVar2));
    }
    thunk_FUN_1004f9b6(*(LPVOID *)(param_1 + 0x10 + iVar2));
    *(undefined4 *)(param_1 + 0x10 + iVar2) = 0;
    *(undefined4 *)(param_1 + 0x14 + iVar2) = 0;
    *(undefined4 *)(param_1 + 0x18 + iVar2) = 0;
    thunk_FUN_1004f9b6(*(LPVOID *)(param_1 + 0xd0 + iVar2));
    *(undefined4 *)(param_1 + 0xd0 + iVar2) = 0;
    *(undefined4 *)(param_1 + 0xd4 + iVar2) = 0;
    *(undefined4 *)(param_1 + 0xd8 + iVar2) = 0;
    thunk_FUN_1004f9b6(*(LPVOID *)(param_1 + 400 + iVar2));
    local_8 = local_8 + 1;
    *(undefined4 *)(param_1 + 400 + iVar2) = 0;
    *(undefined4 *)(param_1 + 0x194 + iVar2) = 0;
    *(undefined4 *)(param_1 + 0x198 + iVar2) = 0;
  } while (local_8 < 0x10);
  return;
}

