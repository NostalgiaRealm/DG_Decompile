/*
 * FUN_10003558 at 10003558
 * undefined4 __thiscall FUN_10003558(void * this, int param_1)
 * Address ranges: 10003558-10003581
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10003558(void *this,int param_1)

{
  if ((&DAT_100df4d2)[param_1 * 0x228] == '\0') {
    FUN_10002901(this,param_1);
  }
  return *(undefined4 *)(&DAT_100deed8 + param_1 * 0x20);
}

