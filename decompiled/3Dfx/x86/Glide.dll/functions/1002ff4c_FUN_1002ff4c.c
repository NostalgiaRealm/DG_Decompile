/*
 * FUN_1002ff4c at 1002ff4c
 * undefined __fastcall FUN_1002ff4c(int param_1, ushort param_2, byte param_3)
 * Address ranges: 1002ff4c-1002fffb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002ff4c(int param_1,ushort param_2,byte param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (uint)param_2;
  uVar1 = uVar3 & 0xf0;
  if (uVar1 == 0x70) {
    *(uint *)(param_1 + 0x138) = (uint)param_3 << 4 | 0x102002;
    *(uint *)(param_1 + 0x13c) = uVar3 & 0xf;
  }
  else {
    if (uVar1 == 0x80) {
      uVar1 = *(uint *)(param_1 + 0x90 + (uVar3 & 0xf) * 4);
      if (param_3 == 8) {
        param_3 = '\x01' << (((byte)(uVar1 >> 0x14) & 7) - 1 & 0x1f);
      }
      *(undefined4 *)(param_1 + 0x134) = 2;
      uVar2 = FUN_1004859c(uVar1,param_3);
      *(undefined4 *)(param_1 + 0x138) = uVar2;
      *(uint *)(param_1 + 0x13c) = uVar1 & 0xff;
      return;
    }
    if (uVar1 != 0xf0) {
      return;
    }
    *(uint *)(param_1 + 0x138) = (uint)param_3 << 4 | 0x100002;
    *(uint *)(param_1 + 0x13c) = (uint)*(byte *)(param_1 + 0xa0);
  }
  *(undefined4 *)(param_1 + 0x134) = 2;
  return;
}

