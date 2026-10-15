/*
 * FUN_10036ab8 at 10036ab8
 * undefined8 __fastcall FUN_10036ab8(uint * param_1, uint * param_2, char param_3)
 * Address ranges: 10036ab8-10036b24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 __fastcall FUN_10036ab8(uint *param_1,uint *param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  uVar4 = param_2[1];
  uVar3 = (uVar2 * uVar5) / uVar1;
  if (uVar4 < uVar3) {
    if (param_3 == '\0') {
      uVar5 = (uVar4 * uVar1) / uVar2;
      uVar3 = uVar4;
      goto LAB_10036b1c;
    }
    uVar4 = uVar4 / uVar2;
  }
  else {
    if (param_3 == '\0') goto LAB_10036b1c;
    uVar4 = uVar5 / uVar1;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  uVar5 = uVar1 * uVar4;
  uVar3 = uVar2 * uVar4;
LAB_10036b1c:
  return CONCAT44(uVar3,uVar5);
}

