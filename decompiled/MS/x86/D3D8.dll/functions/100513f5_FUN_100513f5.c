/*
 * FUN_100513f5 at 100513f5
 * undefined __thiscall FUN_100513f5(void * this, undefined4 param_1, undefined4 param_2, int param_3, int param_4)
 * Address ranges: 100513f5-1005150f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100513f5(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 4);
  FUN_100a183b(*(byte *)(piVar1 + 0x99),0xa4);
  FUN_100a14a8(piVar1,*(int **)((int)this + 8),0x10);
  if (param_3 != -1) {
    FUN_100a14a8(*(int **)((int)this + 4),*(int **)((int)this + 8),0x10);
  }
  if (param_4 != -1) {
    FUN_100a14a8(*(int **)((int)this + 4),*(int **)((int)this + 8),0x10);
  }
  return;
}

