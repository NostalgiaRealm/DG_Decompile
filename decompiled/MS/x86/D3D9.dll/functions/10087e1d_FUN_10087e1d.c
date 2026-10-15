/*
 * FUN_10087e1d at 10087e1d
 * undefined __fastcall FUN_10087e1d(int param_1)
 * Address ranges: 10087e1d-10087ebb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10087e1d(int param_1)

{
  int iVar1;
  int *extraout_ECX;
  undefined1 local_50 [76];
  
  iVar1 = *(int *)(param_1 + 200);
  FUN_1007b86d(local_50,*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xec),
               *(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xd8),
               *(undefined4 *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0xf4),
               *(undefined4 *)(param_1 + 0xf8),
               *(undefined4 *)(&DAT_100d403c + *(int *)(iVar1 + 0x1c) * 4),param_1,
               *(undefined4 *)(param_1 + 0xfc),
               *(undefined4 *)(&DAT_100d4028 + *(int *)(iVar1 + 0xce) * 4),
               *(undefined4 *)(param_1 + 0x100),*(undefined1 *)(iVar1 + 0x26),
               *(int *)(iVar1 + 0x18) == 1,param_1,*(undefined4 *)(iVar1 + 0xda),
               *(undefined4 *)(iVar1 + 0xde));
  FUN_100b869b(*(void **)(param_1 + 0x40),extraout_ECX);
  return;
}

