/*
 * FUN_1002b35b at 1002b35b
 * undefined __fastcall FUN_1002b35b(int * param_1)
 * Address ranges: 1002b35b-1002b37f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002b35b(int *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1[1] != 0) {
    do {
      if ((*(byte *)(*param_1 + 0x18 + uVar1 * 0x20) & 2) != 0) {
        *(undefined1 *)(*param_1 + 0x1c + uVar1 * 0x20) = 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_1[1]);
  }
  return;
}

