/*
 * FUN_180065fa0 at 180065fa0
 * undefined __fastcall FUN_180065fa0(undefined8 param_1, longlong param_2, uint param_3, byte param_4)
 * Address ranges: 180065fa0-18006600a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180065fa0(undefined8 param_1,longlong param_2,uint param_3,byte param_4)

{
  if ((*(byte *)((ulonglong)param_4 * 0x80 + 0x100 + (ulonglong)param_3 * 0x10 + param_2) & 0xf0) !=
      0x20) {
    if (param_4 != 0) {
      *(ushort *)(param_2 + 0x548) = (ushort)param_3 & 0xff | 0x1a0;
      return;
    }
    *(ushort *)(param_2 + 0x540) = (ushort)(byte)((byte)param_3 | 0xa0);
    return;
  }
  if (param_4 != 0) {
    *(ushort *)(param_2 + 0x54a) = (ushort)param_3 & 0xff | 0x1a0;
    return;
  }
  *(ushort *)(param_2 + 0x542) = (ushort)(byte)((byte)param_3 | 0xa0);
  return;
}

