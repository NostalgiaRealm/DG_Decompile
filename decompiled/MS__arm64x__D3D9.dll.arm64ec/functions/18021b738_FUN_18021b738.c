/*
 * FUN_18021b738 at 18021b738
 * undefined FUN_18021b738(void)
 * Address ranges: 18021b738-18021b783
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_18021b738(longlong param_1,undefined1 param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1b500);
  thunk_FUN_1802236f8(lVar2 + 0x28);
  uVar1 = *(undefined1 *)(lVar2 + 0x50);
  *(undefined1 *)(lVar2 + 0x50) = param_2;
  thunk_FUN_18022370c(lVar2 + 0x28);
  return uVar1;
}

