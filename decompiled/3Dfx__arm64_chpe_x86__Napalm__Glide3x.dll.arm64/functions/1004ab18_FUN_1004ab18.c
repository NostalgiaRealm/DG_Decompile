/*
 * FUN_1004ab18 at 1004ab18
 * undefined FUN_1004ab18(void)
 * Address ranges: 1004ab18-1004ab77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004ab18(byte *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  
  bVar3 = *param_1;
  iVar4 = 0;
  *param_2 = 0;
  if (0x2f < bVar3) {
    iVar2 = 0;
    do {
      if (0x39 < bVar3) {
        return iVar4;
      }
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar4 = iVar4 + 1;
      bVar3 = *param_1;
      iVar2 = (uint)bVar1 + iVar2 * 10 + -0x30;
      *param_2 = iVar2;
    } while (0x2f < bVar3);
  }
  return iVar4;
}

