/*
 * FUN_1006d454 at 1006d454
 * undefined __thiscall FUN_1006d454(void * this, int * param_1, int param_2, uint param_3)
 * Address ranges: 1006d454-1006d887
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1006d454(void *this,int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint local_c;
  
  uVar2 = *(uint *)(*(int *)(param_2 + 0x1a0) + 0x44);
  if ((uVar2 >> 0x1a & 1) == 0) {
    if ((*(byte *)(param_2 + 0x19c) & 2) == 0) {
      if (*(char *)(param_2 + 0x1b0) == '\0') {
        FUN_1006bfc5(this,param_2,param_1,0x36,3,8,*(uint *)(param_2 + 0xa8));
      }
    }
    else {
      uVar2 = FUN_1006fbd0(this,param_1,param_2);
      FUN_1006bfc5(this,param_2,param_1,0x36,4,1,uVar2);
      uVar2 = FUN_1006fbd0(this,param_1,param_2);
      FUN_1006bfc5(this,param_2,param_1,0x36,3,8,uVar2);
      *(byte *)(param_2 + 0x1af) = *(byte *)(param_2 + 0x1af) | 1;
    }
    goto LAB_1006d876;
  }
  local_c = *(uint *)(param_2 + 0x154);
  uVar3 = 0;
  uVar2 = uVar2 >> 0x18 & 3;
  if (((uVar2 == 1) || (uVar2 == 2)) || (uVar2 == 3)) {
    piVar1 = (int *)(param_2 + 0x18);
    uVar3 = param_3;
    if (param_3 == 0) {
      uVar3 = FUN_100c2e34((int)piVar1,1,'\x01');
    }
    uVar2 = *(uint *)(*(int *)(param_2 + 0x1a0) + 0x44);
    if ((uVar2 >> 0x1b & 1) == 0) {
      if ((uVar2 >> 0x1c & 1) != 0) {
        FUN_100c3be1(piVar1,param_1,0x10);
        FUN_100c3be1(piVar1,param_1,0x4b);
        local_c = uVar3;
      }
    }
    else {
      local_c = param_3;
    }
  }
  uVar2 = *(uint *)(*(int *)(param_2 + 0x1a0) + 0x44) >> 0x18 & 3;
  if (uVar2 == 0) {
LAB_1006d69b:
    if ((*(byte *)(param_2 + 0x19c) & 2) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_1006fbd0(this,param_1,param_2);
    }
  }
  else if ((uVar2 == 1) || (uVar2 == 2)) {
    piVar1 = (int *)(param_2 + 0x18);
    FUN_100c3be1(piVar1,param_1,0x38);
    if ((*(uint *)(*(int *)(param_2 + 0x1a0) + 0x44) & 0x3000000) == 0x2000000) {
      FUN_100c3be1(piVar1,param_1,0x38);
    }
    FUN_100c3be1(piVar1,param_1,0x38);
    FUN_100c3be1(piVar1,param_1,0x19);
    if (*piVar1 == 0x10040) {
      FUN_100c3be1(piVar1,param_1,0xe);
    }
    else {
      FUN_100c3be1(piVar1,param_1,0x81);
    }
  }
  else {
    if (uVar2 != 3) goto LAB_1006d69b;
    FUN_100c3be1((int *)(param_2 + 0x18),param_1,0);
    FUN_100c3be1((int *)(param_2 + 0x18),param_1,0xe);
  }
  if (uVar3 == 0) {
    FUN_1006bfc5(this,param_2,param_1,0x36,3,8,*(uint *)(param_2 + 0xa8));
LAB_1006d7b8:
    if (uVar3 != *(uint *)(param_2 + 0x198)) {
      FUN_100c2ed2(param_2 + 0x18,uVar3);
    }
  }
  else {
    if (*(char *)(param_2 + 100) == '\0') {
      FUN_1006bfc5(this,param_2,param_1,0x2036,4,1,uVar3);
      FUN_1006bfc5(this,param_2,param_1,0x2036,3,8,uVar3);
    }
    else {
      uVar2 = FUN_100c2e34(param_2 + 0x18,1,'\x01');
      FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x2036);
      FUN_1006bfc5(this,param_2,param_1,0x36,4,1,uVar2);
      FUN_1006bfc5(this,param_2,param_1,0x36,3,8,uVar2);
      FUN_100c2ed2(param_2 + 0x18,uVar2);
    }
    *(byte *)(param_2 + 0x1af) = *(byte *)(param_2 + 0x1af) | 1;
    if ((uVar3 & 0x3f00) == 0) goto LAB_1006d7b8;
  }
  if (local_c != *(uint *)(param_2 + 0x154)) {
    FUN_100c2ed2(param_2 + 0x18,local_c);
  }
LAB_1006d876:
  FUN_100c2ed2(param_2 + 0x18,param_3);
  return;
}

