/*
 * FUN_100c44e9 at 100c44e9
 * undefined __fastcall FUN_100c44e9(int param_1, uint param_2, char param_3)
 * Address ranges: 100c44e9-100c4520
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100c44e9(int param_1,uint param_2,char param_3)

{
  if (param_3 == '\x01') {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 1 << (param_2 & 0x1f);
  }
  else {
    if (param_3 == '\x02') {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1 << (param_2 & 0x1f);
      return;
    }
    if (param_3 == '\x04') {
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1 << (param_2 & 0x1f);
      return;
    }
  }
  return;
}

