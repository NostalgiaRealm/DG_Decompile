/*
 * FUN_1001164d at 1001164d
 * undefined __fastcall FUN_1001164d(int * param_1)
 * Address ranges: 1001164d-10011686
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001164d(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_100118f8(param_1,*(int *)(param_1[1] + 0x2b1c));
  if (uVar1 != 0xffffffff) {
    iVar2 = (**(code **)(*param_1 + 0x2c))(uVar1);
    if (((*(byte *)(iVar2 + 0x82) & 1) != 0) && (*(char *)(iVar2 + 0x7d) != '\0')) {
      (**(code **)(*param_1 + 0x28))(0,0);
    }
  }
  return;
}

