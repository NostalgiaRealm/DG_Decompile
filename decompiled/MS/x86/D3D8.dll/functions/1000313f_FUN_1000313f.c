/*
 * FUN_1000313f at 1000313f
 * undefined4 __thiscall FUN_1000313f(void * this, int param_1)
 * Address ranges: 1000313f-10003166
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1000313f(void *this,int param_1)

{
  if ((&DAT_100ba90a)[param_1 * 0x228] == '\0') {
    FUN_10002795(this,param_1);
  }
  return *(undefined4 *)(&DAT_100ba1a0 + param_1 * 8);
}

