/*
 * FUN_10072f31 at 10072f31
 * undefined __fastcall FUN_10072f31(int * param_1, int param_2)
 * Address ranges: 10072f31-10072ffe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10072f31(int *param_1,int param_2)

{
  if ((*(uint *)(param_2 + 0x18) & 1 << (*(byte *)(param_2 + 0x61) & 0x1f)) != 0) {
    FUN_100a0d20((uint *)(param_2 + 0xc),param_1);
  }
  if ((*(uint *)(param_2 + 0x18) & 1 << (*(byte *)(param_2 + 0x62) & 0x1f)) != 0) {
    FUN_100a0d20((uint *)(param_2 + 0xc),param_1);
  }
  if ((*(uint *)(param_2 + 0x18) & 1 << (*(byte *)(param_2 + 0x5c) & 0x1f)) != 0) {
    FUN_100a0d70((uint *)(param_2 + 0xc),param_1);
  }
  if ((*(uint *)(param_2 + 0x18) & 1 << (*(byte *)(param_2 + 0x5d) & 0x1f)) != 0) {
    FUN_100a0d70((uint *)(param_2 + 0xc),param_1);
  }
  if ((*(uint *)(param_2 + 0x18) & 1 << (*(byte *)(param_2 + 0x5e) & 0x1f)) != 0) {
    FUN_100a0d70((uint *)(param_2 + 0xc),param_1);
  }
  if ((*(uint *)(param_2 + 0x18) & 1 << (*(byte *)(param_2 + 0x5f) & 0x1f)) != 0) {
    FUN_100a0d70((uint *)(param_2 + 0xc),param_1);
  }
  return;
}

