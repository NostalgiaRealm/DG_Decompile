/*
 * FUN_180093eb8 at 180093eb8
 * undefined __fastcall FUN_180093eb8(longlong param_1, int param_2, undefined8 * param_3)
 * Address ranges: 180093eb8-180093f06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180093eb8(longlong param_1,int param_2,undefined8 *param_3)

{
  FUN_1800e4e34(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1518),
                *(longlong **)(param_1 + 0x1cf20),
                (longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x16d0),param_2 * 0x1000,
                param_2 * 0x1000 + 0x1000,param_3,'\0','\0');
  return;
}

