/*
 * FUN_100a9816 at 100a9816
 * undefined __fastcall FUN_100a9816(int param_1)
 * Address ranges: 100a9816-100a98be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100a9816(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_8;
  
  local_8 = 0;
  piVar1 = (int *)(param_1 + 4);
  if (*(int *)(param_1 + 8) != 0) {
    do {
      (**(code **)(*piVar1 + 8 + local_8 * 0xc))();
      FreeLibrary(*(HMODULE *)(*piVar1 + local_8 * 0xc));
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)(param_1 + 8));
  }
  thunk_FUN_100ad48c((LPVOID)*piVar1);
  uVar3 = 0;
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar2 = DAT_100b7048;
  if (*(int *)(param_1 + 0xe0) != 0) {
    do {
      uVar4 = uVar3 + 1;
      *(undefined4 *)(uVar3 * DAT_100b7044 + *(int *)(param_1 + 0xbc) + iVar2) =
           *(undefined4 *)(*(int *)(param_1 + 0xdc) + 4 + uVar3 * 0x10);
      uVar3 = uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0xe0));
  }
  FUN_10097342(param_1 + 0x48);
  VirtualFree(*(LPVOID *)(param_1 + 0x78),0,0x8000);
  return;
}

