/*
 * FUN_100030bf at 100030bf
 * uint __stdcall FUN_100030bf(int param_1, uint * param_2)
 * Address ranges: 100030bf-1000310b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100030bf(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x228;
  uVar1 = *param_2;
  if ((((uVar1 == *(uint *)(&DAT_1006c42c + iVar2)) &&
       (uVar1 = param_2[1], uVar1 == *(uint *)(&DAT_1006c430 + iVar2))) &&
      (uVar1 = *(uint *)(&DAT_1006c440 + iVar2), uVar1 == param_2[5])) &&
     ((uVar1 = *(uint *)(&DAT_1006c444 + iVar2), param_2[6] == uVar1 || (uVar1 == 0x1c)))) {
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}

