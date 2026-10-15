/*
 * FUN_18009a470 at 18009a470
 * undefined __fastcall FUN_18009a470(longlong param_1, longlong * param_2)
 * Address ranges: 18009a470-18009a4ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009a470(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  if (iVar1 == 1) {
    FUN_1800f58f8((longlong *)(*(longlong *)(param_1 + 0xc) + 0x18b8),param_2);
  }
  return;
}

