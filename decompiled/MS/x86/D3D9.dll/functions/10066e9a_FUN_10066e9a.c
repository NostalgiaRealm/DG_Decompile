/*
 * FUN_10066e9a at 10066e9a
 * undefined __stdcall FUN_10066e9a(int param_1)
 * Address ranges: 10066e9a-10066f42
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10066e9a(int param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(uint *)(param_1 + 0x148) != 0) {
    do {
      cVar1 = *(char *)(param_1 + 0x136 + uVar2);
      if (cVar1 == '\0') {
        *(uint *)(param_1 + 0x4ac) = uVar2 | 0x320100;
        *(uint *)(param_1 + 0x4b0) = uVar2 | 0x324100;
        *(uint *)(param_1 + 0x4b4) = uVar2 | 0x328100;
      }
      else if (cVar1 == '\x03') {
        *(uint *)(param_1 + 0x4b8) = uVar2 | 0x320100;
        *(uint *)(param_1 + 0x4bc) = uVar2 | 0x324100;
        *(uint *)(param_1 + 0x4c0) = uVar2 | 0x328100;
      }
      else if (cVar1 == '\x11') {
        *(uint *)(param_1 + 0x4c4) = uVar2 | 0x320100;
        *(uint *)(param_1 + 0x4c8) = uVar2 | 0x324100;
        *(uint *)(param_1 + 0x4cc) = uVar2 | 0x328100;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x148));
  }
  return;
}

