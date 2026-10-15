/*
 * FUN_100102f1 at 100102f1
 * undefined __fastcall FUN_100102f1(int * param_1)
 * Address ranges: 100102f1-1001032a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100102f1(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_1001059c(param_1,*(int *)(param_1[1] + 0x29e0));
  if (uVar1 != 0xffffffff) {
    iVar2 = (**(code **)(*param_1 + 0x2c))(uVar1);
    if (((*(byte *)(iVar2 + 0x82) & 1) != 0) && (*(char *)(iVar2 + 0x7d) != '\0')) {
      (**(code **)(*param_1 + 0x28))(0,0);
    }
  }
  return;
}

