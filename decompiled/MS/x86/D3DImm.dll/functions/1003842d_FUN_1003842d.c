/*
 * FUN_1003842d at 1003842d
 * undefined __thiscall FUN_1003842d(void * this, int * param_1, uint param_2)
 * Address ranges: 1003842d-10038c1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003842d(void *this,int *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  uint local_18;
  undefined4 local_14;
  int local_10;
  
  uVar5 = param_2;
  uVar6 = (*(code *)**(undefined4 **)this)(param_1,param_2,0,0xf);
  piVar8 = (int *)(param_2 + 0x10);
  uVar7 = FUN_10056ee5((int)piVar8,4,'\x01');
  if ((*(uint *)(param_2 + 0x17c) & 0x7800) == 0) {
    FUN_10057c8a(piVar8,param_1,0x11);
    FUN_10057c8a(piVar8,param_1,0x11);
    FUN_10057c8a(piVar8,param_1,0x11);
    FUN_10057c8a(piVar8,param_1,0x11);
  }
  else {
    FUN_10057c8a(piVar8,param_1,0x11);
    FUN_10057c8a(piVar8,param_1,0x11);
    FUN_10057c8a(piVar8,param_1,0x11);
    FUN_10057c8a(piVar8,param_1,0x11);
  }
  uVar2 = *(uint *)(param_2 + 0x17c);
  bVar9 = (uVar2 & 0x800) != 0;
  local_18 = 0;
  param_2 = 0;
  bVar3 = bVar9 | 2;
  if ((uVar2 & 0x1000) == 0) {
    bVar3 = bVar9;
  }
  bVar4 = bVar3 | 4;
  if ((uVar2 & 0x2000) == 0) {
    bVar4 = bVar3;
  }
  if (bVar4 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = (*(code *)**(undefined4 **)this)(param_1,uVar5,1,bVar4);
  }
  piVar8 = (int *)(uVar5 + 0x10);
  if ((*(uint *)(uVar5 + 0x17c) & 0x800) != 0) {
    local_18 = FUN_10056ee5((int)piVar8,1,'\x01');
    param_2 = FUN_10056ee5((int)piVar8,4,'\x01');
    FUN_10057c8a(piVar8,param_1,0x38);
    FUN_10057c8a(piVar8,param_1,0);
    FUN_10057c8a(piVar8,param_1,0x11);
    FUN_10057c8a(piVar8,param_1,0x11);
    FUN_10057c8a(piVar8,param_1,0x11);
    FUN_10057c8a(piVar8,param_1,0x11);
    FUN_10057c8a(piVar8,param_1,0x32);
  }
  if ((*(uint *)(uVar5 + 0x17c) & 0x1000) != 0) {
    FUN_10057c8a(piVar8,param_1,0);
    FUN_10057c8a(piVar8,param_1,0x11);
    FUN_10057c8a(piVar8,param_1,0x11);
    FUN_10057c8a(piVar8,param_1,0x11);
    FUN_10057c8a(piVar8,param_1,0x11);
    FUN_10057c8a(piVar8,param_1,0x32);
  }
  if ((*(uint *)(uVar5 + 0x17c) & 0x2000) != 0) {
    FUN_10057c8a((int *)(uVar5 + 0x10),param_1,0);
    FUN_10057c8a((int *)(uVar5 + 0x10),param_1,0x11);
    FUN_10057c8a((int *)(uVar5 + 0x10),param_1,0x11);
    FUN_10057c8a((int *)(uVar5 + 0x10),param_1,0x11);
    FUN_10057c8a((int *)(uVar5 + 0x10),param_1,0x11);
    FUN_10057c8a((int *)(uVar5 + 0x10),param_1,0x32);
  }
  piVar8 = (int *)(uVar5 + 0x10);
  (**(code **)(*(int *)this + 4))(uVar5,uVar6);
  *(uint *)(uVar5 + 0x130) = uVar7;
  FUN_10056fd9((int)piVar8,param_2);
  if ((*(char *)(uVar5 + 0x18a) != '\0') || (*(char *)(uVar5 + 0x18c) != '\0')) {
    if ((*(byte *)(uVar5 + 0x17c) & 4) == 0) {
      local_10 = 0;
    }
    else {
      local_10 = FUN_1003bc04(this,param_1,uVar5);
    }
    cVar1 = *(char *)(uVar5 + 0x18c);
    uVar7 = FUN_10056ee5((int)piVar8,(cVar1 != '\0') + 3,'\x01');
    FUN_1003821b(param_1,uVar5,uVar7,local_10);
    if ((*(uint *)(uVar5 + 0x17c) & 0x800) != 0) {
      param_2 = FUN_10056ee5((int)piVar8,3,'\x01');
      FUN_10057c8a(piVar8,param_1,0x38);
      FUN_1003821b(param_1,uVar5,param_2,local_10);
      FUN_10057c8a(piVar8,param_1,0x32);
    }
    if ((*(uint *)(uVar5 + 0x17c) & 0x1000) != 0) {
      FUN_1003821b(param_1,uVar5,param_2,local_10);
      FUN_10057c8a(piVar8,param_1,0x32);
    }
    if ((*(uint *)(uVar5 + 0x17c) & 0x2000) != 0) {
      FUN_1003821b(param_1,uVar5,param_2,local_10);
      FUN_10057c8a(piVar8,param_1,0x32);
    }
    FUN_1003bc88(this,uVar5,8);
    *(uint *)(uVar5 + 0x134) = uVar7;
    if (cVar1 != '\0') {
      FUN_10057c8a(piVar8,param_1,0x36);
    }
    FUN_10056fd9((int)piVar8,param_2);
  }
  (**(code **)(*(int *)this + 4))(uVar5,local_14);
  FUN_10056fd9((int)piVar8,local_18);
  if (((*(uint *)(*(int *)(uVar5 + 0x180) + 0x44) >> 0x17 & 1) != 0) &&
     (*(int *)(uVar5 + 0x134) != 0)) {
    FUN_1003830f(param_1,uVar5);
  }
  return;
}

