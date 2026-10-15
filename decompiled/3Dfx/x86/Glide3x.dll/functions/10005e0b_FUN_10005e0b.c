/*
 * FUN_10005e0b at 10005e0b
 * uint __fastcall FUN_10005e0b(int param_1)
 * Address ranges: 10005e0b-10005e2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10005e0b(int param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_1000522d(param_1);
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

