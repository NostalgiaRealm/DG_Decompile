/*
 * FUN_100350d6 at 100350d6
 * undefined4 __thiscall FUN_100350d6(void * this, int param_1, int param_2, undefined4 * param_3, undefined4 * param_4)
 * Address ranges: 100350d6-100350f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_100350d6(void *this,int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if (param_2 != 0) {
    uVar1 = FUN_100262c0(*(void **)(param_1 + 4),this,param_3,param_4);
  }
  return uVar1;
}

