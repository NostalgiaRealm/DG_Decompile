/*
 * FUN_100061fc at 100061fc
 * uint __fastcall FUN_100061fc(int param_1)
 * Address ranges: 100061fc-1000621e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_100061fc(int param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_1000560f(param_1);
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

