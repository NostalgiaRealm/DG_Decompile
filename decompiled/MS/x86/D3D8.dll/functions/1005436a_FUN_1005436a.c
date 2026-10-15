/*
 * FUN_1005436a at 1005436a
 * undefined __stdcall FUN_1005436a(int param_1)
 * Address ranges: 1005436a-10054412
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005436a(int param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(uint *)(param_1 + 0x148) != 0) {
    do {
      cVar1 = *(char *)(param_1 + 0x136 + uVar2);
      if (cVar1 == '\0') {
        *(uint *)(param_1 + 0x41c) = uVar2 | 0x320100;
        *(uint *)(param_1 + 0x420) = uVar2 | 0x324100;
        *(uint *)(param_1 + 0x424) = uVar2 | 0x328100;
      }
      else if (cVar1 == '\x03') {
        *(uint *)(param_1 + 0x428) = uVar2 | 0x320100;
        *(uint *)(param_1 + 0x42c) = uVar2 | 0x324100;
        *(uint *)(param_1 + 0x430) = uVar2 | 0x328100;
      }
      else if (cVar1 == '\x11') {
        *(uint *)(param_1 + 0x434) = uVar2 | 0x320100;
        *(uint *)(param_1 + 0x438) = uVar2 | 0x324100;
        *(uint *)(param_1 + 0x43c) = uVar2 | 0x328100;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x148));
  }
  return;
}

