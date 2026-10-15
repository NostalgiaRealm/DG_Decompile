/*
 * FUN_18000a660 at 18000a660
 * undefined __fastcall FUN_18000a660(longlong param_1, uint param_2, undefined4 param_3, int param_4)
 * Address ranges: 18000a660-18000a6d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000a660(longlong param_1,uint param_2,undefined4 param_3,int param_4)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x3308);
  (**(code **)(*plVar1 + 8))(plVar1,0,0);
  FUN_180009388((longlong)plVar1,(longlong)(plVar1 + 1),param_2,param_3,param_4 != 0);
  *(uint *)(plVar1[0x45] + 0x32c0) =
       *(uint *)(plVar1[0x45] + 0x32c0) & 0xffffc001 | *(uint *)(plVar1 + 0x2b);
  *(undefined1 *)(param_1 + 0x32f0) = 1;
  return;
}

