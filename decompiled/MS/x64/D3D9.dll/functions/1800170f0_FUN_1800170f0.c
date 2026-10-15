/*
 * FUN_1800170f0 at 1800170f0
 * uint __fastcall FUN_1800170f0(longlong param_1, int * param_2)
 * Address ranges: 1800170f0-1800171ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800170f0(longlong param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 2;
  if (((*(int *)(DAT_180111f20 + 0x87c) - 2U < 2) && ((*(uint *)(param_1 + 0x70) & 0x202) == 0)) &&
     (*(short *)(param_1 + 0x3c) == 1)) {
    uVar2 = 6;
    uVar3 = 4;
  }
  else {
    uVar3 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x7c);
  if ((iVar1 == 0) || (uVar3 = uVar2, iVar1 == 1)) {
    if ((uVar3 & 4) != 0) {
      iVar1 = 0;
      uVar2 = *(uint *)(param_1 + 0x6c);
      if (*(uint *)(param_1 + 0x6c) <= *(uint *)(param_1 + 0x68)) {
        uVar2 = *(uint *)(param_1 + 0x68);
      }
      if (uVar2 == 0) {
        uVar2 = 0;
      }
      do {
        iVar1 = iVar1 + 1;
        uVar2 = uVar2 >> 1;
      } while (uVar2 != 0);
      *param_2 = iVar1;
    }
  }
  else {
    uVar3 = 0;
    if (iVar1 == 2) {
      uVar3 = 1;
    }
  }
  uVar2 = uVar3 | 4;
  if ((*(uint *)(param_1 + 0x70) & 0x400) == 0) {
    uVar2 = uVar3;
  }
  if (((*(int *)(param_1 + 0x74) == 0x36314644) || (*(int *)(param_1 + 0x74) == 0x34324644)) ||
     (*(int *)(param_1 + 0x74) == 0x5a544e49)) {
    uVar2 = uVar2 | 8;
  }
  return uVar2;
}

