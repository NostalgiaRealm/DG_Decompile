/*
 * FUN_18000e278 at 18000e278
 * undefined FUN_18000e278(void)
 * Address ranges: 18000e278-18000e35b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18000e278(longlong param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (((*(int *)(DAT_18024de60 + 0x87c) - 2U < 2) && ((*(uint *)(param_1 + 0x70) & 0x202) == 0)) &&
     (*(short *)(param_1 + 0x3c) == 1)) {
    uVar2 = 6;
    uVar1 = 4;
  }
  else {
    uVar2 = 2;
    uVar1 = 0;
  }
  iVar4 = *(int *)(param_1 + 0x7c);
  if ((iVar4 == 0) || (uVar1 = uVar2, iVar4 == 1)) {
    if (uVar1 >> 2 != 0) {
      iVar4 = 0;
      uVar2 = *(uint *)(param_1 + 0x68);
      if (*(uint *)(param_1 + 0x68) < *(uint *)(param_1 + 0x6c)) {
        uVar2 = *(uint *)(param_1 + 0x6c);
      }
      if (uVar2 == 0) {
        uVar2 = 1;
      }
      for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
        iVar4 = iVar4 + 1;
      }
      *param_2 = iVar4;
    }
  }
  else {
    uVar1 = 0;
    if (iVar4 == 2) {
      uVar1 = 1;
    }
  }
  iVar4 = *(int *)(param_1 + 0x74);
  uVar2 = *(uint *)(param_1 + 0x70) & 0x400;
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = 4;
  }
  if (((iVar4 == 0x36314644 || iVar4 == 0x34324644) || iVar4 == 0x5a544e49) &&
     (uVar3 = 8, uVar2 != 0)) {
    uVar3 = 0xc;
  }
  return uVar3 | uVar1;
}

