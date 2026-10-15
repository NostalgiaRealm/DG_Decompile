/*
 * FUN_1002cae4 at 1002cae4
 * undefined __fastcall FUN_1002cae4(int param_1)
 * Address ranges: 1002cae4-1002cb51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002cae4(int param_1)

{
  int iVar1;
  int iVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  
  iVar1 = FUN_1001c7a6(*(int *)(*(int *)(param_1 + 4) + 0x2964));
  iVar2 = FUN_1001c7a6(*(int *)(extraout_EDX + 0x2968));
  if (iVar1 != -1) {
    iVar1 = (**(code **)(**(int **)(extraout_EDX_00 + 0x315c) + 0x2c))(iVar1);
    FUN_10021e9a(iVar1);
  }
  if (iVar2 != -1) {
    iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x315c) + 0x2c))(iVar2);
    if ((*(char *)(*(int *)(param_1 + 4) + 0x2abc) != '\0') && (*(char *)(iVar1 + 0x48) != '\0')) {
      FUN_10021e9a(iVar1);
      return;
    }
  }
  return;
}

