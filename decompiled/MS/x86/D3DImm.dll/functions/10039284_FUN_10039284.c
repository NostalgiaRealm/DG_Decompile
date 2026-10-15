/*
 * FUN_10039284 at 10039284
 * undefined __thiscall FUN_10039284(void * this, int * param_1, int param_2, uint param_3)
 * Address ranges: 10039284-10039698
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10039284(void *this,int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_c;
  
  uVar2 = *(uint *)(*(int *)(param_2 + 0x180) + 0x44);
  if ((uVar2 >> 0x1a & 1) == 0) {
    if ((*(byte *)(param_2 + 0x17c) & 2) == 0) {
      if (*(char *)(param_2 + 400) == '\0') {
        FUN_100380e6(this,param_2,param_1,0x36,3,8,*(uint *)(param_2 + 0xa0));
      }
    }
    else {
      uVar2 = FUN_1003bc5a(this,param_1,param_2);
      FUN_100380e6(this,param_2,param_1,0x36,4,0xf,uVar2);
      uVar2 = FUN_1003bc5a(this,param_1,param_2);
      FUN_100380e6(this,param_2,param_1,0x36,3,8,uVar2);
      *(byte *)(param_2 + 399) = *(byte *)(param_2 + 399) | 0xf;
    }
    goto LAB_10039687;
  }
  local_c = *(uint *)(param_2 + 0x138);
  uVar3 = 0;
  uVar2 = uVar2 >> 0x18 & 3;
  if (((uVar2 == 1) || (uVar2 == 2)) || (uVar2 == 3)) {
    piVar1 = (int *)(param_2 + 0x10);
    uVar3 = param_3;
    if (param_3 == 0) {
      uVar3 = FUN_10056ee5((int)piVar1,1,'\x01');
    }
    uVar2 = *(uint *)(*(int *)(param_2 + 0x180) + 0x44);
    if ((uVar2 >> 0x1b & 1) == 0) {
      if ((uVar2 >> 0x1c & 1) != 0) {
        FUN_10057c8a(piVar1,param_1,0x10);
        FUN_10057c8a(piVar1,param_1,0x4b);
        local_c = uVar3;
      }
    }
    else {
      local_c = param_3;
    }
  }
  uVar2 = *(uint *)(*(int *)(param_2 + 0x180) + 0x44) >> 0x18 & 3;
  if (uVar2 == 0) {
LAB_100394ae:
    if ((*(byte *)(param_2 + 0x17c) & 2) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_1003bc5a(this,param_1,param_2);
    }
  }
  else if ((uVar2 == 1) || (uVar2 == 2)) {
    piVar1 = (int *)(param_2 + 0x10);
    FUN_10057c8a(piVar1,param_1,0x38);
    if ((*(uint *)(*(int *)(param_2 + 0x180) + 0x44) & 0x3000000) == 0x2000000) {
      FUN_10057c8a(piVar1,param_1,0x38);
    }
    FUN_10057c8a(piVar1,param_1,0x38);
    FUN_10057c8a(piVar1,param_1,0x19);
    if (*piVar1 == 0x10040) {
      FUN_10057c8a(piVar1,param_1,0xe);
    }
    else {
      FUN_10057c8a(piVar1,param_1,0x81);
    }
  }
  else {
    if (uVar2 != 3) goto LAB_100394ae;
    FUN_10057c8a((int *)(param_2 + 0x10),param_1,0);
    FUN_10057c8a((int *)(param_2 + 0x10),param_1,0xe);
  }
  if (uVar3 == 0) {
    FUN_100380e6(this,param_2,param_1,0x36,3,8,*(uint *)(param_2 + 0xa0));
LAB_100395cb:
    if (uVar3 != *(uint *)(param_2 + 0x178)) {
      FUN_10056fd9(param_2 + 0x10,uVar3);
    }
  }
  else {
    if (*(char *)(param_2 + 0x5c) == '\0') {
      FUN_100380e6(this,param_2,param_1,0x2036,4,1,uVar3);
      FUN_100380e6(this,param_2,param_1,0x2036,3,8,uVar3);
    }
    else {
      uVar2 = FUN_10056ee5(param_2 + 0x10,1,'\x01');
      FUN_10057c8a((int *)(param_2 + 0x10),param_1,0x2036);
      FUN_100380e6(this,param_2,param_1,0x36,4,1,uVar2);
      FUN_100380e6(this,param_2,param_1,0x36,3,8,uVar2);
      FUN_10056fd9(param_2 + 0x10,uVar2);
    }
    *(byte *)(param_2 + 399) = *(byte *)(param_2 + 399) | 1;
    if ((uVar3 & 0x3f00) == 0) goto LAB_100395cb;
  }
  if (local_c != *(uint *)(param_2 + 0x138)) {
    FUN_10056fd9(param_2 + 0x10,local_c);
  }
LAB_10039687:
  FUN_10056fd9(param_2 + 0x10,param_3);
  return;
}

