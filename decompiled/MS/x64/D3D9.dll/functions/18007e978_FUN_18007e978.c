/*
 * FUN_18007e978 at 18007e978
 * undefined __fastcall FUN_18007e978(undefined8 param_1, longlong * param_2, longlong param_3, ulonglong param_4, int param_5)
 * Address ranges: 18007e978-18007eb85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18007e978(undefined8 param_1,longlong *param_2,longlong param_3,ulonglong param_4,
                  int param_5)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_3 + 0x20);
  if (param_5 == 0) {
    FUN_1800edbe0(puVar1,param_2,0x36,param_4);
    FUN_1800edbe0(puVar1,param_2,0x36,param_4 & 0xffffffff);
    FUN_1800edbe0(puVar1,param_2,0x36,param_4 & 0xffffffff);
  }
  else {
    FUN_1800edbe0(puVar1,param_2,0x11,param_4);
    FUN_1800edbe0(puVar1,param_2,0x11,param_4 & 0xffffffff);
    FUN_1800edbe0(puVar1,param_2,0x11,param_4 & 0xffffffff);
  }
  return;
}

