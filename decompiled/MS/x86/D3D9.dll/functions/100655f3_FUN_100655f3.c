/*
 * FUN_100655f3 at 100655f3
 * undefined __thiscall FUN_100655f3(void * this, int * param_1, int * param_2, uint param_3)
 * Address ranges: 100655f3-10065c1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100655f3(void *this,int *param_1,int *param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_18;
  uint local_c;
  uint local_8;
  
  uVar2 = *(uint *)(param_3 + 0x49c);
  piVar1 = (int *)(param_3 + 0x18);
  local_c = uVar2 & 0xff9fffff | 0x100000;
  local_8 = (uVar2 & 0xc0000) + 0x40000 | uVar2 & 0xff93ffff | 0x100000;
  uVar3 = FUN_100c2e34((int)piVar1,1,'\x01');
  puVar4 = (uint *)FUN_100c2e34((int)piVar1,1,'\x01');
  local_18 = 0;
  if (uVar2 == 0) {
    local_c = FUN_100c2e34((int)piVar1,1,'\x01');
    local_8 = FUN_100c2e34((int)piVar1,1,'\x01');
  }
  else {
    local_18 = FUN_100c2e34((int)piVar1,1,'\x01');
    FUN_100c3be1(piVar1,param_1,0x2a);
    FUN_100c3be1(piVar1,param_1,0x29);
  }
  FUN_100c3be1(piVar1,param_1,0x36);
  if ((*(uint *)(param_3 + 0x494) & 0x3f00) == 0) {
    uVar5 = FUN_100c2e34((int)piVar1,1,'\x01');
    *(uint *)(param_3 + 0x498) = uVar5;
    FUN_100c3be1(piVar1,param_1,0x56);
  }
  uVar5 = FUN_100c2e34((int)piVar1,1,'\x01');
  uVar6 = *(uint *)(param_3 + 0x494) & 0x3f00;
  if (uVar2 == 0) {
    if (uVar6 != 0) {
      FUN_100c3be1(piVar1,param_1,0x36);
      goto LAB_10065860;
    }
  }
  else if (uVar6 == 0) {
    FUN_100c3be1(piVar1,param_1,0x23);
    FUN_100c3be1(piVar1,param_1,0x23);
    goto LAB_10065860;
  }
  FUN_100c3be1(piVar1,param_1,0x23);
LAB_10065860:
  FUN_100c3be1(piVar1,param_1,0x36);
  FUN_100c3be1(piVar1,param_1,0x30);
  FUN_100c2e34((int)piVar1,1,'\0');
  FUN_100c3be1(piVar1,param_1,0x4f);
  FUN_100c3be1(piVar1,param_1,3);
  if (uVar2 == 0) {
    FUN_100c3be1(piVar1,param_1,0x36);
    FUN_100c3be1(piVar1,param_1,0x36);
  }
  uVar6 = FUN_100c2e34((int)piVar1,1,'\x01');
  FUN_100c3be1(piVar1,param_1,0x2a);
  uVar7 = FUN_100c2e34((int)piVar1,2,'\x01');
  FUN_100c3be1(piVar1,param_1,0x1e);
  FUN_100c3be1(piVar1,param_1,0x56);
  FUN_100c3be1(piVar1,param_1,0xe);
  FUN_100c3be1(piVar1,param_1,0x30);
  FUN_100c2e34((int)piVar1,1,'\0');
  FUN_100c3be1(piVar1,param_1,0x4f);
  FUN_100c3be1(piVar1,param_1,3);
  FUN_10065c1e(this,param_1,param_2,param_3,uVar7,uVar6,local_8,uVar3,puVar4);
  if (uVar2 != 0) {
    FUN_100c2e34((int)piVar1,1,'\0');
    FUN_100c3be1(piVar1,param_1,0x1e);
    FUN_100c3be1(piVar1,param_1,0x50);
    FUN_100c3be1(piVar1,param_1,0x37);
    FUN_100c3be1(piVar1,param_1,0x40003);
  }
  FUN_100c3be1(piVar1,param_1,0x1e);
  FUN_100c3be1(piVar1,param_1,0x16);
  FUN_100c3be1(piVar1,param_1,0x1e);
  FUN_100c3be1(piVar1,param_1,0x76);
  FUN_100c3be1(piVar1,param_1,0x1e);
  if (uVar2 != 0) {
    FUN_100c3be1(piVar1,param_1,0x36);
    FUN_100c3be1(piVar1,param_1,0x36);
  }
  FUN_100c3be1(piVar1,param_1,0x16);
  if (uVar2 == 0) {
    FUN_100c2ed2((int)piVar1,local_c);
    FUN_100c2ed2((int)piVar1,local_8);
  }
  if (local_18 != 0) {
    FUN_100c2ed2((int)piVar1,local_18);
  }
  FUN_100c2ed2((int)piVar1,uVar5);
  FUN_100c2ed2((int)piVar1,uVar6);
  FUN_100c2ed2((int)piVar1,uVar7);
  FUN_100c2ed2((int)piVar1,(uint)puVar4);
  FUN_100c2ed2((int)piVar1,uVar3);
  if ((*(uint *)(param_3 + 0x498) & 0x3f00) == 0) {
    FUN_100c2ed2((int)piVar1,*(uint *)(param_3 + 0x498));
  }
  return;
}

