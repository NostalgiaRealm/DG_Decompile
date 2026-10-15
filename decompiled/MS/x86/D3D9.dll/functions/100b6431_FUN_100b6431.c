/*
 * FUN_100b6431 at 100b6431
 * uint __stdcall FUN_100b6431(uint * param_1, uint * param_2)
 * Address ranges: 100b6431-100b649b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100b6431(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  if ((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) {
    iVar2 = 0;
    do {
      uVar1 = param_1[iVar2 + 2];
      if (uVar1 != param_2[iVar2 + 2]) goto LAB_100b6495;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 8);
    iVar2 = 0;
    do {
      uVar1 = param_1[iVar2 + 10];
      if (uVar1 != param_2[iVar2 + 10]) goto LAB_100b6495;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 8);
    iVar2 = 0;
    do {
      uVar1 = param_1[iVar2 + 0x12];
      if (uVar1 != param_2[iVar2 + 0x12]) goto LAB_100b6495;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 8);
    iVar2 = 0;
    do {
      uVar1 = param_1[iVar2 + 0x1a];
      if (uVar1 != param_2[iVar2 + 0x1a]) goto LAB_100b6495;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 8);
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
LAB_100b6495:
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1;
}

