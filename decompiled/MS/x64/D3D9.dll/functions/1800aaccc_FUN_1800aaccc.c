/*
 * FUN_1800aaccc at 1800aaccc
 * undefined8 * __fastcall FUN_1800aaccc(longlong param_1, longlong param_2)
 * Address ranges: 1800aaccc-1800aad06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800aaccc(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (*(uint *)(param_1 + 0x100b8) != 0) {
    uVar3 = 0;
    do {
      puVar1 = (undefined8 *)(uVar3 * 0x30 + *(longlong *)(param_1 + 0x100b0));
      if (param_2 == *(longlong *)*puVar1) {
        return puVar1;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x100b8));
  }
  return (undefined8 *)0x0;
}

