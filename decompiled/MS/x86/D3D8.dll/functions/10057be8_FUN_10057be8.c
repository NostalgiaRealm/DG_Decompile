/*
 * FUN_10057be8 at 10057be8
 * undefined __thiscall FUN_10057be8(void * this, int * param_1, int param_2, uint param_3)
 * Address ranges: 10057be8-1005801b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10057be8(void *this,int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint local_c;
  
  uVar2 = *(uint *)(*(int *)(param_2 + 0x19c) + 0x44);
  if ((uVar2 >> 0x1a & 1) == 0) {
    if ((*(byte *)(param_2 + 0x198) & 2) == 0) {
      if (*(char *)(param_2 + 0x1ac) == '\0') {
        FUN_100567c1(this,param_2,param_1,0x36,3,8,*(uint *)(param_2 + 0xa8));
      }
    }
    else {
      uVar2 = FUN_1005a267(this,param_1,param_2);
      FUN_100567c1(this,param_2,param_1,0x36,4,1,uVar2);
      uVar2 = FUN_1005a267(this,param_1,param_2);
      FUN_100567c1(this,param_2,param_1,0x36,3,8,uVar2);
      *(byte *)(param_2 + 0x1ab) = *(byte *)(param_2 + 0x1ab) | 1;
    }
    goto LAB_1005800a;
  }
  local_c = *(uint *)(param_2 + 0x154);
  uVar3 = 0;
  uVar2 = uVar2 >> 0x18 & 3;
  if (((uVar2 == 1) || (uVar2 == 2)) || (uVar2 == 3)) {
    piVar1 = (int *)(param_2 + 0x18);
    uVar3 = param_3;
    if (param_3 == 0) {
      uVar3 = FUN_100a05ed((int)piVar1,1,'\x01');
    }
    uVar2 = *(uint *)(*(int *)(param_2 + 0x19c) + 0x44);
    if ((uVar2 >> 0x1b & 1) == 0) {
      if ((uVar2 >> 0x1c & 1) != 0) {
        FUN_100a138c(piVar1,param_1,0x10);
        FUN_100a138c(piVar1,param_1,0x4b);
        local_c = uVar3;
      }
    }
    else {
      local_c = param_3;
    }
  }
  uVar2 = *(uint *)(*(int *)(param_2 + 0x19c) + 0x44) >> 0x18 & 3;
  if (uVar2 == 0) {
LAB_10057e2f:
    if ((*(byte *)(param_2 + 0x198) & 2) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_1005a267(this,param_1,param_2);
    }
  }
  else if ((uVar2 == 1) || (uVar2 == 2)) {
    piVar1 = (int *)(param_2 + 0x18);
    FUN_100a138c(piVar1,param_1,0x38);
    if ((*(uint *)(*(int *)(param_2 + 0x19c) + 0x44) & 0x3000000) == 0x2000000) {
      FUN_100a138c(piVar1,param_1,0x38);
    }
    FUN_100a138c(piVar1,param_1,0x38);
    FUN_100a138c(piVar1,param_1,0x19);
    if (*piVar1 == 0x10040) {
      FUN_100a138c(piVar1,param_1,0xe);
    }
    else {
      FUN_100a138c(piVar1,param_1,0x81);
    }
  }
  else {
    if (uVar2 != 3) goto LAB_10057e2f;
    FUN_100a138c((int *)(param_2 + 0x18),param_1,0);
    FUN_100a138c((int *)(param_2 + 0x18),param_1,0xe);
  }
  if (uVar3 == 0) {
    FUN_100567c1(this,param_2,param_1,0x36,3,8,*(uint *)(param_2 + 0xa8));
LAB_10057f4c:
    if (uVar3 != *(uint *)(param_2 + 0x194)) {
      FUN_100a068b(param_2 + 0x18,uVar3);
    }
  }
  else {
    if (*(char *)(param_2 + 100) == '\0') {
      FUN_100567c1(this,param_2,param_1,0x2036,4,1,uVar3);
      FUN_100567c1(this,param_2,param_1,0x2036,3,8,uVar3);
    }
    else {
      uVar2 = FUN_100a05ed(param_2 + 0x18,1,'\x01');
      FUN_100a138c((int *)(param_2 + 0x18),param_1,0x2036);
      FUN_100567c1(this,param_2,param_1,0x36,4,1,uVar2);
      FUN_100567c1(this,param_2,param_1,0x36,3,8,uVar2);
      FUN_100a068b(param_2 + 0x18,uVar2);
    }
    *(byte *)(param_2 + 0x1ab) = *(byte *)(param_2 + 0x1ab) | 1;
    if ((uVar3 & 0x3f00) == 0) goto LAB_10057f4c;
  }
  if (local_c != *(uint *)(param_2 + 0x154)) {
    FUN_100a068b(param_2 + 0x18,local_c);
  }
LAB_1005800a:
  FUN_100a068b(param_2 + 0x18,param_3);
  return;
}

