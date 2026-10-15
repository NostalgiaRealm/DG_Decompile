/*
 * FUN_10071d4a at 10071d4a
 * undefined __fastcall FUN_10071d4a(int param_1)
 * Address ranges: 10071d4a-10071de8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10071d4a(int param_1)

{
  int iVar1;
  int *extraout_ECX;
  undefined1 local_50 [76];
  
  iVar1 = *(int *)(param_1 + 200);
  FUN_100659f5(local_50,*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xec),
               *(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xd8),
               *(undefined4 *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0xf4),
               *(undefined4 *)(param_1 + 0xf8),
               *(undefined4 *)(&DAT_100b0c88 + *(int *)(iVar1 + 0x1c) * 4),param_1,
               *(undefined4 *)(param_1 + 0xfc),
               *(undefined4 *)(&DAT_100b0c74 + *(int *)(iVar1 + 0xce) * 4),
               *(undefined4 *)(param_1 + 0x100),*(undefined1 *)(iVar1 + 0x26),
               *(int *)(iVar1 + 0x18) == 1,param_1,*(undefined4 *)(iVar1 + 0xda),
               *(undefined4 *)(iVar1 + 0xde));
  FUN_10096048(*(void **)(param_1 + 0x40),extraout_ECX);
  return;
}

