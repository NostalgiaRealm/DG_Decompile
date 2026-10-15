/*
 * FUN_10013805 at 10013805
 * uint __fastcall FUN_10013805(int param_1)
 * Address ranges: 10013805-10013827
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10013805(int param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_10012c78(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(*(int *)(param_1 + 0x1c) + 0x78b);
    if (5 < uVar2) {
      return 4;
    }
  }
  return uVar2;
}

