/*
 * FUN_140001fa4 at 140001fa4
 * undefined4 __fastcall FUN_140001fa4(longlong param_1, int param_2, int param_3)
 * Address ranges: 140001fa4-140001fd0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_140001fa4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_14000ed90(param_1 + -0x70,param_2,param_3,0);
  if (*(longlong **)(param_1 + -8) != (longlong *)0x0) {
    iVar1 = FUN_14000f1e0(*(longlong **)(param_1 + -8),iVar1);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

