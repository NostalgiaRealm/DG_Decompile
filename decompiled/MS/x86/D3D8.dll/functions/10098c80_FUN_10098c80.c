/*
 * FUN_10098c80 at 10098c80
 * undefined8 __fastcall FUN_10098c80(int param_1)
 * Address ranges: 10098c80-10098ca9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 __fastcall FUN_10098c80(int param_1)

{
  void *this;
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x910) == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10098be5(param_1);
    FUN_10098c04(this,(int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
  }
  return uVar1;
}

