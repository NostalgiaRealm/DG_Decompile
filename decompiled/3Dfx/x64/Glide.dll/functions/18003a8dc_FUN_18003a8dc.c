/*
 * FUN_18003a8dc at 18003a8dc
 * undefined __fastcall FUN_18003a8dc(longlong param_1, ushort param_2, byte param_3)
 * Address ranges: 18003a8dc-18003a9fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003a8dc(longlong param_1,ushort param_2,byte param_3)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = param_2 & 0xf0;
  if (uVar2 == 0x70) {
    *(uint *)(param_1 + 0x140) = (uint)param_3 << 4 | 0x102002;
    *(uint *)(param_1 + 0x144) = param_2 & 0xf;
  }
  else {
    if (uVar2 == 0x80) {
      uVar2 = *(uint *)(param_1 + 0x98 + (ulonglong)(param_2 & 0xf) * 4);
      bVar1 = (byte)(uVar2 >> 0x14);
      if (param_3 == 8) {
        param_3 = '\x01' << ((bVar1 & 7) - 1 & 0x1f);
      }
      *(undefined4 *)(param_1 + 0x13c) = 2;
      *(uint *)(param_1 + 0x140) =
           (uVar2 & 0x33f00 | -(uint)((uVar2 & 0x40000000) != 0) & 0x600000 |
           (uint)(byte)((('\x01' << (bVar1 & 7)) - 1U & param_3) << ((byte)(uVar2 >> 0x12) & 3))) <<
           4 | ~(uVar2 >> 0x1c) & 2;
      *(uint *)(param_1 + 0x144) = uVar2 & 0xff;
      return;
    }
    if (uVar2 != 0xf0) {
      return;
    }
    *(uint *)(param_1 + 0x140) = (uint)param_3 << 4 | 0x100002;
    *(uint *)(param_1 + 0x144) = (uint)*(byte *)(param_1 + 0xa8);
  }
  *(undefined4 *)(param_1 + 0x13c) = 2;
  return;
}

