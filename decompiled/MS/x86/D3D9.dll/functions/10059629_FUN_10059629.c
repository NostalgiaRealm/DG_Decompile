/*
 * FUN_10059629 at 10059629
 * undefined __stdcall FUN_10059629(int param_1, int param_2, byte param_3)
 * Address ranges: 10059629-1005969b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10059629(int param_1,int param_2,byte param_3)

{
  if ((*(byte *)(param_1 + 0xf4 + (param_2 + (uint)param_3 * 8) * 0x10) & 0xf0) == 0x20) {
    if (param_3 == 0) {
      *(ushort *)(param_1 + 0x532) = (ushort)(byte)((byte)param_2 | 0xa0);
    }
    else {
      *(ushort *)(param_1 + 0x53a) = (ushort)param_2 & 0xff | 0x1a0;
    }
  }
  else if (param_3 == 0) {
    *(ushort *)(param_1 + 0x530) = (ushort)(byte)((byte)param_2 | 0xa0);
  }
  else {
    *(ushort *)(param_1 + 0x538) = (ushort)param_2 & 0xff | 0x1a0;
  }
  return;
}

