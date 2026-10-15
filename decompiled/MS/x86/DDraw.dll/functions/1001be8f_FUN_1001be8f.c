/*
 * FUN_1001be8f at 1001be8f
 * undefined __fastcall FUN_1001be8f(int * param_1, int param_2)
 * Address ranges: 1001be8f-1001bf5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001be8f(int *param_1,int param_2)

{
  if ((*(uint *)(param_2 + 0x18) & 1 << (*(byte *)(param_2 + 0x61) & 0x1f)) != 0) {
    FUN_100570f2((uint *)(param_2 + 0xc),param_1);
  }
  if ((*(uint *)(param_2 + 0x18) & 1 << (*(byte *)(param_2 + 0x62) & 0x1f)) != 0) {
    FUN_100570f2((uint *)(param_2 + 0xc),param_1);
  }
  if ((*(uint *)(param_2 + 0x18) & 1 << (*(byte *)(param_2 + 0x5c) & 0x1f)) != 0) {
    FUN_10057140((uint *)(param_2 + 0xc),param_1);
  }
  if ((*(uint *)(param_2 + 0x18) & 1 << (*(byte *)(param_2 + 0x5d) & 0x1f)) != 0) {
    FUN_10057140((uint *)(param_2 + 0xc),param_1);
  }
  if ((*(uint *)(param_2 + 0x18) & 1 << (*(byte *)(param_2 + 0x5e) & 0x1f)) != 0) {
    FUN_10057140((uint *)(param_2 + 0xc),param_1);
  }
  if ((*(uint *)(param_2 + 0x18) & 1 << (*(byte *)(param_2 + 0x5f) & 0x1f)) != 0) {
    FUN_10057140((uint *)(param_2 + 0xc),param_1);
  }
  return;
}

