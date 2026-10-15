/*
 * FUN_18000a6d8 at 18000a6d8
 * undefined __fastcall FUN_18000a6d8(longlong param_1, longlong param_2)
 * Address ranges: 18000a6d8-18000a753
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000a6d8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x3308);
  (**(code **)(*plVar1 + 8))(plVar1,0,0);
  FUN_180009420((longlong)plVar1,plVar1 + 1,param_2);
  *(uint *)(plVar1[0x45] + 0x32c0) =
       *(uint *)(plVar1[0x45] + 0x32c0) & 0xffffc001 | *(uint *)(plVar1 + 0x2b);
  *(undefined1 *)(plVar1[0x45] + 0x32f0) = 1;
  *(undefined1 *)(param_1 + 0x32f0) = 1;
  return;
}

