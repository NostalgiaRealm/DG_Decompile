/*
 * FUN_180042270 at 180042270
 * undefined8 __fastcall FUN_180042270(uint * param_1, uint * param_2, char param_3)
 * Address ranges: 180042270-1800422e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180042270(uint *param_1,uint *param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 local_res8;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  uVar3 = (uVar1 * *param_2) / uVar2;
  if (param_2[1] < uVar3) {
    if (param_3 == '\0') {
      local_res8 = CONCAT44((int)((ulonglong)*(undefined8 *)param_2 >> 0x20),
                            (uVar2 * param_2[1]) / uVar1);
      return local_res8;
    }
    uVar3 = param_2[1] / uVar1;
  }
  else {
    if (param_3 == '\0') {
      local_res8 = CONCAT44(uVar3,(int)*(undefined8 *)param_2);
      return local_res8;
    }
    uVar3 = *param_2 / uVar2;
  }
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  local_res8 = CONCAT44(uVar1 * uVar3,uVar2 * uVar3);
  return local_res8;
}

