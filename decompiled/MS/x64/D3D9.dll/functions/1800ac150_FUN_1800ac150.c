/*
 * FUN_1800ac150 at 1800ac150
 * bool __fastcall FUN_1800ac150(longlong param_1, undefined4 param_2)
 * Address ranges: 1800ac150-1800ac17d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800ac150(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x20) + 0x48))
                     (*(longlong **)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2);
  }
  return plVar1 != (longlong *)0x0;
}

