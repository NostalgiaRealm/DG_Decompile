/*
 * FUN_100890ee at 100890ee
 * undefined __fastcall FUN_100890ee(int * param_1, int param_2)
 * Address ranges: 100890ee-100891bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100890ee(int *param_1,int param_2)

{
  if ((*(uint *)(param_2 + 0x18) & 1 << (*(byte *)(param_2 + 0x61) & 0x1f)) != 0) {
    FUN_100c3567((uint *)(param_2 + 0xc),param_1);
  }
  if ((*(uint *)(param_2 + 0x18) & 1 << (*(byte *)(param_2 + 0x62) & 0x1f)) != 0) {
    FUN_100c3567((uint *)(param_2 + 0xc),param_1);
  }
  if ((*(uint *)(param_2 + 0x18) & 1 << (*(byte *)(param_2 + 0x5c) & 0x1f)) != 0) {
    FUN_100c35b7((uint *)(param_2 + 0xc),param_1);
  }
  if ((*(uint *)(param_2 + 0x18) & 1 << (*(byte *)(param_2 + 0x5d) & 0x1f)) != 0) {
    FUN_100c35b7((uint *)(param_2 + 0xc),param_1);
  }
  if ((*(uint *)(param_2 + 0x18) & 1 << (*(byte *)(param_2 + 0x5e) & 0x1f)) != 0) {
    FUN_100c35b7((uint *)(param_2 + 0xc),param_1);
  }
  if ((*(uint *)(param_2 + 0x18) & 1 << (*(byte *)(param_2 + 0x5f) & 0x1f)) != 0) {
    FUN_100c35b7((uint *)(param_2 + 0xc),param_1);
  }
  return;
}

