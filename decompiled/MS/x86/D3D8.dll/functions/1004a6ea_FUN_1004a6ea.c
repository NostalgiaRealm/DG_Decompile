/*
 * FUN_1004a6ea at 1004a6ea
 * undefined __stdcall FUN_1004a6ea(int param_1, int param_2, byte param_3)
 * Address ranges: 1004a6ea-1004a75c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004a6ea(int param_1,int param_2,byte param_3)

{
  if ((*(byte *)(param_1 + 0xe4 + (param_2 + (uint)param_3 * 8) * 0x10) & 0xf0) == 0x20) {
    if (param_3 == 0) {
      *(ushort *)(param_1 + 0x2d2) = (ushort)(byte)((byte)param_2 | 0xa0);
    }
    else {
      *(ushort *)(param_1 + 0x2da) = (ushort)param_2 & 0xff | 0x1a0;
    }
  }
  else if (param_3 == 0) {
    *(ushort *)(param_1 + 0x2d0) = (ushort)(byte)((byte)param_2 | 0xa0);
  }
  else {
    *(ushort *)(param_1 + 0x2d8) = (ushort)param_2 & 0xff | 0x1a0;
  }
  return;
}

