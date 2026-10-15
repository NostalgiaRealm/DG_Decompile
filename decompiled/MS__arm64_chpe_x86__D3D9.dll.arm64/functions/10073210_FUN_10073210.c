/*
 * FUN_10073210 at 10073210
 * undefined FUN_10073210(void)
 * Address ranges: 10073210-100732cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10073210(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  do {
    uVar3 = (uint)uVar4;
    (&DAT_10170b40)[uVar3] =
         (&DAT_10162050)[uVar3 & 0xf] | (&DAT_10162050)[(int)(uVar4 >> 4)] << 0xc;
    iVar1 = (&DAT_10162050)[uVar3 + 2 >> 4];
    uVar4 = (ulonglong)(uVar3 + 4);
    uVar2 = (&DAT_10162050)[uVar3 + 2 & 0xf];
    (&DAT_10170b44)[uVar3] =
         (&DAT_10162050)[uVar3 + 1 & 0xf] | (&DAT_10162050)[uVar3 + 1 >> 4] << 0xc;
    (&DAT_10170b48)[uVar3] = uVar2 | iVar1 << 0xc;
    (&DAT_10170b4c)[uVar3] =
         (&DAT_10162050)[uVar3 + 3 & 0xf] | (&DAT_10162050)[uVar3 + 3 >> 4] << 0xc;
  } while (uVar3 + 4 < 0x100);
  *(undefined8 *)(param_1 + 0xf30) = 0;
  return param_1;
}

