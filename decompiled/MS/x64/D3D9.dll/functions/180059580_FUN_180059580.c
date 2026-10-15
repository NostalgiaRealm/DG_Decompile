/*
 * FUN_180059580 at 180059580
 * longlong __fastcall FUN_180059580(longlong param_1)
 * Address ranges: 180059580-180059655
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180059580(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  do {
    uVar3 = (uint)uVar4;
    uVar1 = uVar3 + 1;
    (&DAT_180111f70)[uVar4] = (&DAT_180102600)[uVar4 >> 4] << 0xc | (&DAT_180102600)[uVar3 & 0xf];
    uVar2 = uVar3 + 2;
    (&DAT_180111f70)[uVar1] = (&DAT_180102600)[uVar1 >> 4] << 0xc | (&DAT_180102600)[uVar1 & 0xf];
    uVar1 = uVar3 + 3;
    (&DAT_180111f70)[uVar2] = (&DAT_180102600)[uVar2 >> 4] << 0xc | (&DAT_180102600)[uVar2 & 0xf];
    uVar4 = (ulonglong)(uVar3 + 4);
    (&DAT_180111f70)[uVar1] = (&DAT_180102600)[uVar1 >> 4] << 0xc | (&DAT_180102600)[uVar1 & 0xf];
  } while (uVar3 + 4 < 0x100);
  *(undefined8 *)(param_1 + 0xf30) = 0;
  return param_1;
}

