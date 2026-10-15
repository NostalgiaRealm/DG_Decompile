/*
 * FUN_1003a1e7 at 1003a1e7
 * uint __stdcall FUN_1003a1e7(uint * param_1, uint * param_2)
 * Address ranges: 1003a1e7-1003a257
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1003a1e7(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  if ((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) {
    iVar2 = 0;
    do {
      uVar1 = param_1[iVar2 + 2];
      if (uVar1 != param_2[iVar2 + 2]) goto LAB_1003a251;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 10);
    iVar2 = 0;
    do {
      uVar1 = param_1[iVar2 + 0xc];
      if (uVar1 != param_2[iVar2 + 0xc]) goto LAB_1003a251;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 10);
    iVar2 = 0;
    do {
      uVar1 = param_1[iVar2 + 0x16];
      if (uVar1 != param_2[iVar2 + 0x16]) goto LAB_1003a251;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 10);
    iVar2 = 0;
    do {
      uVar1 = param_1[iVar2 + 0x20];
      if (uVar1 != param_2[iVar2 + 0x20]) goto LAB_1003a251;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 10);
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
LAB_1003a251:
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1;
}

