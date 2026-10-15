/*
 * FUN_140002414 at 140002414
 * undefined1 __fastcall FUN_140002414(longlong param_1, int param_2)
 * Address ranges: 140002414-14000243e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_140002414(longlong param_1,int param_2)

{
  undefined4 in_register_00000014;
  longlong lVar1;
  
  lVar1 = CONCAT44(in_register_00000014,param_2);
  if (param_2 == 0x413) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    *(byte *)(lVar1 + 0x20b) = *(byte *)(lVar1 + 0x20b) ^ 1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))
            (*(longlong **)(param_1 + 0x18),CONCAT71((int7)((ulonglong)lVar1 >> 8),1));
  return 1;
}

