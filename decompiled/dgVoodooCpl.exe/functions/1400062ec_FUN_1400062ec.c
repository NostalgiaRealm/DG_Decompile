/*
 * FUN_1400062ec at 1400062ec
 * undefined8 __fastcall FUN_1400062ec(longlong param_1, int param_2)
 * Address ranges: 1400062ec-14000634a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1400062ec(longlong param_1,int param_2)

{
  char cVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  
  if ((((param_2 != 0x3f2) && (param_2 != 0x3f3)) && (param_2 != 0x3f5)) &&
     ((param_2 != 0x3f7 && (param_2 != 0x3f8)))) {
    if ((param_2 != 0x3fb) && (param_2 != 0x40b)) {
      return in_RAX & 0xffffffffffffff00;
    }
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
  if (cVar1 == '\0') {
    FUN_1400072c0(param_1 - 0x78);
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),1);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}

