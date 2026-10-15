/*
 * FUN_10092113 at 10092113
 * undefined __fastcall FUN_10092113(int param_1)
 * Address ranges: 10092113-1009214f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10092113(int param_1)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = true;
  if ((*(int *)(param_1 + 0xdc8) == 3) || ((*(byte *)(param_1 + 0xdd0) & 0x20) != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    if ((*(byte *)(param_1 + 0xdd0) & 0x80) == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(int *)(param_1 + 0xc2d4) != 0;
    }
  }
  *(bool *)(param_1 + 0x669f) = bVar2;
  return;
}

