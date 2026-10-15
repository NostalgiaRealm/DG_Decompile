/*
 * FUN_180039c10 at 180039c10
 * undefined __fastcall FUN_180039c10(longlong * param_1, uint * param_2)
 * Address ranges: 180039c10-180039c46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180039c10(longlong *param_1,uint *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[0x1f36];
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)param_1[0x1f3a];
  }
  FUN_18005b0e0(param_1,(longlong)(param_1 + 0x16),(longlong)(param_1 + 0x1ed0),param_2,plVar1);
  return;
}

