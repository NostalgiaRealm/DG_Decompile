/*
 * FUN_1006c566 at 1006c566
 * undefined __thiscall FUN_1006c566(void * this, int * param_1, uint param_2)
 * Address ranges: 1006c566-1006cfb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1006c566(void *this,int *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  bool bVar12;
  byte bVar13;
  uint local_28;
  undefined4 local_24;
  uint local_18;
  
  uVar5 = param_2;
  bVar13 = (byte)(*(uint *)(*(int *)(param_2 + 0x1a0) + 0x44) >> 0x15) & 1;
  uVar6 = (*(code *)**(undefined4 **)this)(param_1,param_2,0,0xf);
  uVar7 = FUN_1006c0fa(this,param_1,param_2,uVar6,bVar13);
  if (uVar6 != uVar7) {
    (**(code **)(*(int *)this + 4))(param_2,uVar6);
  }
  uVar9 = *(uint *)(param_2 + 0x19c);
  local_18 = 0;
  if ((uVar9 & 0x8000) != 0) {
    iVar10 = 1;
    local_24 = 1;
    if ((uVar9 & 0x800) != 0) {
      iVar10 = 2;
      local_24 = 3;
    }
    if ((uVar9 & 0x1000) != 0) {
      iVar10 = iVar10 + 1;
      local_24 = 7;
    }
    if ((uVar9 & 0x2000) != 0) {
      iVar10 = iVar10 + 1;
      local_24 = 0xf;
    }
    local_18 = FUN_100c2e34((int)(param_2 + 0x18),iVar10,'\x01');
    uVar8 = (*(code *)**(undefined4 **)this)(param_1,param_2,2,local_24);
    FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x24);
    FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x25);
    FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x29);
    (**(code **)(*(int *)this + 4))(param_2,uVar8);
  }
  piVar11 = (int *)(param_2 + 0x18);
  uVar9 = FUN_100c2e34((int)piVar11,4,'\x01');
  if ((*(uint *)(param_2 + 0x19c) & 0xf800) == 0) {
    FUN_100c3be1(piVar11,param_1,0x11);
    FUN_100c3be1(piVar11,param_1,0x11);
    FUN_100c3be1(piVar11,param_1,0x11);
    FUN_100c3be1(piVar11,param_1,0x11);
  }
  else {
    FUN_100c3be1(piVar11,param_1,0x11);
    FUN_100c3be1(piVar11,param_1,0x11);
    FUN_100c3be1(piVar11,param_1,0x11);
    FUN_100c3be1(piVar11,param_1,0x11);
  }
  uVar2 = *(uint *)(param_2 + 0x19c);
  bVar12 = (uVar2 & 0x800) != 0;
  local_28 = 0;
  param_2 = 0;
  bVar3 = bVar12 | 2;
  if ((uVar2 & 0x1000) == 0) {
    bVar3 = bVar12;
  }
  bVar4 = bVar3 | 4;
  if ((uVar2 & 0x2000) == 0) {
    bVar4 = bVar3;
  }
  if (bVar4 == 0) {
    local_24 = 0;
  }
  else {
    local_24 = (*(code *)**(undefined4 **)this)(param_1,uVar5,1,bVar4);
  }
  piVar11 = (int *)(uVar5 + 0x18);
  if ((*(uint *)(uVar5 + 0x19c) & 0x800) != 0) {
    local_28 = FUN_100c2e34((int)piVar11,1,'\x01');
    param_2 = FUN_100c2e34((int)piVar11,4,'\x01');
    FUN_100c3be1(piVar11,param_1,0x38);
    FUN_100c3be1(piVar11,param_1,0);
    FUN_100c3be1(piVar11,param_1,0x11);
    FUN_100c3be1(piVar11,param_1,0x11);
    FUN_100c3be1(piVar11,param_1,0x11);
    FUN_100c3be1(piVar11,param_1,0x11);
    FUN_100c3be1(piVar11,param_1,0x32);
  }
  if ((*(uint *)(uVar5 + 0x19c) & 0x1000) != 0) {
    FUN_100c3be1(piVar11,param_1,0);
    FUN_100c3be1(piVar11,param_1,0x11);
    FUN_100c3be1(piVar11,param_1,0x11);
    FUN_100c3be1(piVar11,param_1,0x11);
    FUN_100c3be1(piVar11,param_1,0x11);
    FUN_100c3be1(piVar11,param_1,0x32);
  }
  if ((*(uint *)(uVar5 + 0x19c) & 0x2000) != 0) {
    FUN_100c3be1((int *)(uVar5 + 0x18),param_1,0);
    FUN_100c3be1((int *)(uVar5 + 0x18),param_1,0x11);
    FUN_100c3be1((int *)(uVar5 + 0x18),param_1,0x11);
    FUN_100c3be1((int *)(uVar5 + 0x18),param_1,0x11);
    FUN_100c3be1((int *)(uVar5 + 0x18),param_1,0x11);
    FUN_100c3be1((int *)(uVar5 + 0x18),param_1,0x32);
  }
  piVar11 = (int *)(uVar5 + 0x18);
  if (uVar6 == uVar7) {
    (**(code **)(*(int *)this + 4))(uVar5,uVar6);
  }
  else {
    FUN_100c2ed2((int)piVar11,uVar7);
  }
  *(uint *)(uVar5 + 0x14c) = uVar9;
  FUN_100c2ed2((int)piVar11,param_2);
  if ((*(char *)(uVar5 + 0x1aa) != '\0') || (*(char *)(uVar5 + 0x1ac) != '\0')) {
    if ((*(byte *)(uVar5 + 0x19c) & 4) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_1006fb7a(this,param_1,uVar5);
    }
    uVar7 = FUN_1006c1e2(this,param_1,uVar5,uVar6,bVar13);
    if (uVar7 != uVar6) {
      FUN_1006fbfe(this,uVar5,8);
    }
    cVar1 = *(char *)(uVar5 + 0x1ac);
    uVar9 = FUN_100c2e34((int)piVar11,(cVar1 != '\0') + 3,'\x01');
    FUN_1006c32d(param_1,uVar5,uVar9,uVar7);
    if ((*(uint *)(uVar5 + 0x19c) & 0x800) != 0) {
      param_2 = FUN_100c2e34((int)piVar11,3,'\x01');
      FUN_100c3be1(piVar11,param_1,0x38);
      FUN_1006c32d(param_1,uVar5,param_2,uVar7);
      FUN_100c3be1(piVar11,param_1,0x32);
    }
    if ((*(uint *)(uVar5 + 0x19c) & 0x1000) != 0) {
      FUN_1006c32d(param_1,uVar5,param_2,uVar7);
      FUN_100c3be1(piVar11,param_1,0x32);
    }
    if ((*(uint *)(uVar5 + 0x19c) & 0x2000) != 0) {
      FUN_1006c32d(param_1,uVar5,param_2,uVar7);
      FUN_100c3be1(piVar11,param_1,0x32);
    }
    if (uVar7 == uVar6) {
      FUN_1006fbfe(this,uVar5,8);
    }
    else {
      FUN_100c2ed2((int)piVar11,uVar7);
    }
    *(uint *)(uVar5 + 0x150) = uVar9;
    if (cVar1 != '\0') {
      FUN_100c3be1(piVar11,param_1,0x36);
    }
    FUN_100c2ed2((int)piVar11,param_2);
  }
  (**(code **)(*(int *)this + 4))(uVar5,local_24);
  FUN_100c2ed2((int)piVar11,local_18);
  FUN_100c2ed2((int)piVar11,local_28);
  if (((*(uint *)(*(int *)(uVar5 + 0x1a0) + 0x44) >> 0x17 & 1) != 0) &&
     (*(int *)(uVar5 + 0x150) != 0)) {
    FUN_1006c448(param_1,uVar5);
  }
  return;
}

