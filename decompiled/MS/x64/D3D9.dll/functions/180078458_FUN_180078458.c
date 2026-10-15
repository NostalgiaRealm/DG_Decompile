/*
 * FUN_180078458 at 180078458
 * undefined __fastcall FUN_180078458(undefined8 param_1, longlong param_2)
 * Address ranges: 180078458-180078507
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180078458(undefined8 param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(uint *)(param_2 + 0x158) != 0) {
    do {
      cVar1 = *(char *)(param_2 + 0x146 + uVar3);
      uVar2 = (uint)uVar3;
      if (cVar1 == '\0') {
        *(uint *)(param_2 + 0x4bc) = uVar2 | 0x320100;
        *(uint *)(param_2 + 0x4c0) = uVar2 | 0x324100;
        *(uint *)(param_2 + 0x4c4) = uVar2 | 0x328100;
      }
      else if (cVar1 == '\x03') {
        *(uint *)(param_2 + 0x4c8) = uVar2 | 0x320100;
        *(uint *)(param_2 + 0x4cc) = uVar2 | 0x324100;
        *(uint *)(param_2 + 0x4d0) = uVar2 | 0x328100;
      }
      else if (cVar1 == '\x11') {
        *(uint *)(param_2 + 0x4d4) = uVar2 | 0x320100;
        *(uint *)(param_2 + 0x4d8) = uVar2 | 0x324100;
        *(uint *)(param_2 + 0x4dc) = uVar2 | 0x328100;
      }
      uVar3 = (ulonglong)(uVar2 + 1);
    } while (uVar2 + 1 < *(uint *)(param_2 + 0x158));
  }
  return;
}

