/*
 * FUN_10031a59 at 10031a59
 * undefined4 __fastcall FUN_10031a59(uint * param_1, uint * param_2, byte param_3)
 * Address ranges: 10031a59-10031ade
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10031a59(uint *param_1,uint *param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  
  bVar3 = false;
  uVar2 = *param_1;
  if ((uVar2 != *param_2) || (uVar1 = param_1[1], uVar1 != param_2[1])) goto LAB_10031ad9;
  if ((uVar1 & 4) != 0) {
    uVar2 = param_1[2];
    bVar3 = uVar2 == param_2[2];
    goto LAB_10031ad9;
  }
  uVar2 = param_1[3];
  if (uVar2 != param_2[3]) goto LAB_10031ad9;
  uVar2 = (uint)param_3 | uVar1 & 0x20;
  bVar3 = true;
  if ((char)uVar2 != '\0') goto LAB_10031ad9;
  uVar2 = param_2[4];
  if ((uVar1 & 1) == 0) {
    if ((param_1[4] == uVar2) && (uVar2 = param_1[5], uVar2 == param_2[5])) {
      uVar2 = param_1[6];
      bVar4 = uVar2 == param_2[6];
      goto LAB_10031ad4;
    }
  }
  else if (((param_1[4] == uVar2) && (uVar2 = param_1[5], uVar2 == param_2[5])) &&
          (uVar2 = param_1[6], uVar2 == param_2[6])) {
    uVar2 = param_1[7];
    bVar4 = uVar2 == param_2[7];
LAB_10031ad4:
    if (bVar4) goto LAB_10031ad9;
  }
  bVar3 = false;
LAB_10031ad9:
  return CONCAT31((int3)(uVar2 >> 8),bVar3);
}

