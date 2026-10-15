/*
 * FUN_180037af0 at 180037af0
 * int __cdecl FUN_180037af0(byte * param_1, int * param_2)
 * Address ranges: 180037af0-180037b3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180037af0(byte *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  bVar2 = *param_1;
  iVar4 = 0;
  *param_2 = 0;
  if (0x2f < bVar2) {
    iVar3 = 0;
    do {
      bVar2 = *param_1;
      if (0x39 < bVar2) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 1;
      bVar1 = *param_1;
      iVar3 = (uint)bVar2 + iVar3 * 10 + -0x30;
      *param_2 = iVar3;
    } while (0x2f < bVar1);
  }
  return iVar4;
}

