/*
 * FUN_140008f54 at 140008f54
 * undefined8 __fastcall FUN_140008f54(longlong param_1, int param_2)
 * Address ranges: 140008f54-140008f86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140008f54(longlong param_1,int param_2)

{
  undefined8 in_RAX;
  
  if (param_2 == 0x3f2) {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),1)
    ;
  }
  else if (param_2 == 0x3f4) {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),0)
    ;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}

