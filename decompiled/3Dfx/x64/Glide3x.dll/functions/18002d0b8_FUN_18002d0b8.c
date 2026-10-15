/*
 * FUN_18002d0b8 at 18002d0b8
 * undefined __fastcall FUN_18002d0b8(longlong param_1, ushort param_2, byte param_3)
 * Address ranges: 18002d0b8-18002d247
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002d0b8(longlong param_1,ushort param_2,byte param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = param_2 & 0xf0;
  if (uVar3 == 0x10) {
    uVar1 = *(uint *)(param_1 + 0x8c + (ulonglong)(param_2 & 0xf) * 4);
    uVar3 = uVar1 & 0xff;
    *(uint *)(param_1 + 0x140) =
         (uVar1 & 0x33f00 | -(uint)((uVar1 & 0x40000000) != 0) & 0x600000 |
         (uint)(byte)((('\x01' << ((byte)(uVar1 >> 0x14) & 7)) - 1U & param_3) <<
                     ((byte)(uVar1 >> 0x12) & 3))) << 4 | ~(uVar1 >> 0x1c) & 2;
  }
  else {
    if (uVar3 == 0x70) {
      *(uint *)(param_1 + 0x140) = (uint)param_3 << 4 | 0x102002;
      *(uint *)(param_1 + 0x144) = param_2 & 0xf;
      goto LAB_18002d237;
    }
    if (uVar3 == 0x80) {
      uVar3 = *(uint *)(param_1 + 0x98 + (ulonglong)(param_2 & 0xf) * 4);
      bVar2 = (byte)(uVar3 >> 0x14);
      if (param_3 == 8) {
        param_3 = '\x01' << ((bVar2 & 7) - 1 & 0x1f);
      }
      *(uint *)(param_1 + 0x140) =
           (uVar3 & 0x33f00 | -(uint)((uVar3 & 0x40000000) != 0) & 0x600000 |
           (uint)(byte)((('\x01' << (bVar2 & 7)) - 1U & param_3) << ((byte)(uVar3 >> 0x12) & 3))) <<
           4 | ~(uVar3 >> 0x1c) & 2;
      uVar3 = uVar3 & 0xff;
    }
    else {
      if (uVar3 != 0xf0) {
        return;
      }
      *(uint *)(param_1 + 0x140) = (uint)param_3 << 4 | 0x100002;
      uVar3 = (uint)*(byte *)(param_1 + 0xa8);
    }
  }
  *(uint *)(param_1 + 0x144) = uVar3;
LAB_18002d237:
  *(undefined4 *)(param_1 + 0x13c) = 2;
  return;
}

