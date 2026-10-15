/*
 * FUN_1001c951 at 1001c951
 * undefined __thiscall FUN_1001c951(void * this, undefined4 param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4)
 * Address ranges: 1001c951-1001c970
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1001c951(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  *(undefined4 *)((int)this + 0x3df8) = param_1;
  FUN_1000818c(this,param_2,param_3,param_4,'\0');
  return;
}

