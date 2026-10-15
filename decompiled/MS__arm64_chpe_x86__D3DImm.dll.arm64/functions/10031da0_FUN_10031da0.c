/*
 * FUN_10031da0 at 10031da0
 * undefined FUN_10031da0(void)
 * Address ranges: 10031da0-10031e5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10031da0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  do {
    uVar3 = (uint)uVar4;
    (&DAT_100a4830)[uVar3] =
         (&DAT_1009e0f0)[uVar3 & 0xf] | (&DAT_1009e0f0)[(int)(uVar4 >> 4)] << 0xc;
    iVar1 = (&DAT_1009e0f0)[uVar3 + 2 >> 4];
    uVar4 = (ulonglong)(uVar3 + 4);
    uVar2 = (&DAT_1009e0f0)[uVar3 + 2 & 0xf];
    (&DAT_100a4834)[uVar3] =
         (&DAT_1009e0f0)[uVar3 + 1 & 0xf] | (&DAT_1009e0f0)[uVar3 + 1 >> 4] << 0xc;
    (&DAT_100a4838)[uVar3] = uVar2 | iVar1 << 0xc;
    (&DAT_100a483c)[uVar3] =
         (&DAT_1009e0f0)[uVar3 + 3 & 0xf] | (&DAT_1009e0f0)[uVar3 + 3 >> 4] << 0xc;
  } while (uVar3 + 4 < 0x100);
  *(undefined8 *)(param_1 + 0x428) = 0;
  return param_1;
}

