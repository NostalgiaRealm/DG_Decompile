/*
 * FUN_100bb258 at 100bb258
 * undefined8 __fastcall FUN_100bb258(int param_1)
 * Address ranges: 100bb258-100bb281
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 __fastcall FUN_100bb258(int param_1)

{
  void *this;
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x910) == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100bb1bd(param_1);
    FUN_100bb1dc(this,(int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
  }
  return uVar1;
}

