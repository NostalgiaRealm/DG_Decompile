/*
 * FUN_1005e800 at 1005e800
 * undefined FUN_1005e800(void)
 * Address ranges: 1005e800-1005e8bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1005e800(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  do {
    uVar3 = (uint)uVar4;
    (&DAT_10138380)[uVar3] =
         (&DAT_1012c6a0)[uVar3 & 0xf] | (&DAT_1012c6a0)[(int)(uVar4 >> 4)] << 0xc;
    iVar1 = (&DAT_1012c6a0)[uVar3 + 2 >> 4];
    uVar4 = (ulonglong)(uVar3 + 4);
    uVar2 = (&DAT_1012c6a0)[uVar3 + 2 & 0xf];
    (&DAT_10138384)[uVar3] =
         (&DAT_1012c6a0)[uVar3 + 1 & 0xf] | (&DAT_1012c6a0)[uVar3 + 1 >> 4] << 0xc;
    (&DAT_10138388)[uVar3] = uVar2 | iVar1 << 0xc;
    (&DAT_1013838c)[uVar3] =
         (&DAT_1012c6a0)[uVar3 + 3 & 0xf] | (&DAT_1012c6a0)[uVar3 + 3 >> 4] << 0xc;
  } while (uVar3 + 4 < 0x100);
  *(undefined8 *)(param_1 + 0x610) = 0;
  return param_1;
}

