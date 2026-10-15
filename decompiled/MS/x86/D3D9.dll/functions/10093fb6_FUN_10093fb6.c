/*
 * FUN_10093fb6 at 10093fb6
 * uint __stdcall FUN_10093fb6(int param_1, int param_2, int param_3)
 * Address ranges: 10093fb6-10094131
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10093fb6(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int *extraout_EDX;
  int *piVar5;
  uint uVar6;
  char local_25;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  int local_18 [3];
  int local_c;
  
  if (param_2 == 0) {
    return 0x8876086c;
  }
  if (param_3 == 0) {
    return 0x8876086c;
  }
  FUN_10003e40(&local_25,(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  local_1c = param_2 + -0x5c;
  piVar5 = (int *)(param_2 + -0x34);
  local_24 = (undefined4 *)(param_3 + -0x5c);
  if ((((*(byte *)(param_2 + -0x2c) & 3) != 0) &&
      (*(int *)(param_2 + -0x1c) == *(int *)(param_3 + -0x1c))) &&
     (*(int *)(param_2 + -0x18) == *(int *)(param_3 + -0x18))) {
    uVar4 = FUN_10091d53((int)piVar5);
    uVar4 = -(uint)((uVar4 & 0xff) != 0) & 0x8876086c;
    if ((-1 < (int)uVar4) && (*extraout_EDX != *(int *)(param_3 + -0x34))) {
      uVar4 = 0x8876086c;
    }
    piVar5 = extraout_EDX;
    if (((int)uVar4 < 0) ||
       (((extraout_EDX[3] == 0 && (*(int *)(param_3 + -0x28) == 2)) &&
        (((*(uint *)(*(int *)(param_2 + -0x58) + 0xb8) >> 0xb & 1) == 0 &&
         ((*(uint *)(*(int *)(param_3 + -0x58) + 0xb8) >> 0xb & 1) == 0)))))) goto LAB_1009406a;
  }
  uVar4 = 0x8876086c;
LAB_1009406a:
  local_20 = *(int *)(param_3 + 0x2c);
  if (*(int *)(param_2 + 0x2c) == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_2 + 0x2c) + 0x88);
    if (((*(uint *)(iVar1 + 0x30) >> 10 & 1) == 0) || (iVar1 == param_2 + -0x5c)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  if (local_20 == 0) {
    bVar3 = false;
  }
  else if ((((uint)(*(undefined4 **)(local_20 + 0x88))[0xc] >> 10 & 1) == 0) ||
          (*(undefined4 **)(local_20 + 0x88) == local_24)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  uVar6 = 0x8876086c;
  if ((((!bVar2) && (!bVar3)) && (uVar6 = uVar4, -1 < (int)uVar4)) &&
     (uVar6 = 0x88760868, *(char *)(param_1 + -0x17) == '\0')) {
    local_18[2] = piVar5[6];
    local_c = piVar5[7];
    local_18[0] = 0;
    local_18[1] = 0;
    uVar6 = FUN_10092a0f((void *)(param_1 + -0x66b4),local_1c,local_24,local_18,local_18,0);
  }
  FUN_10003e89(&local_25);
  return uVar6;
}

