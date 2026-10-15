/*
 * FUN_10064748 at 10064748
 * undefined __thiscall FUN_10064748(void * this, int * param_1, int * param_2, uint param_3)
 * Address ranges: 10064748-10064c3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10064748(void *this,int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  iVar1 = param_3 + 0x18;
  *(undefined4 *)(param_3 + 0x4b4) = 0;
  *(undefined4 *)(param_3 + 0x4b0) = 0;
  *(undefined4 *)(param_3 + 0x4ac) = 0;
  *(undefined4 *)(param_3 + 0x4c0) = 0;
  *(undefined4 *)(param_3 + 0x4bc) = 0;
  *(undefined4 *)(param_3 + 0x4b8) = 0;
  *(undefined4 *)(param_3 + 0x4cc) = 0;
  *(undefined4 *)(param_3 + 0x4c8) = 0;
  *(undefined4 *)(param_3 + 0x4c4) = 0;
  if (*(char *)(param_3 + 0x530) == '\0') {
    FUN_10067bfa(param_3);
  }
  else {
    FUN_10066e9a(param_3);
  }
  *(undefined4 *)(param_3 + 0x484) = 0x110803;
  *(undefined4 *)(param_3 + 0x480) = 0x410803;
  *(undefined4 *)(param_3 + 0x488) = 0x110400;
  *(undefined4 *)(param_3 + 0x48c) = 0x410400;
  *(undefined4 *)(param_3 + 0x490) = 0x20000d00;
  *(undefined4 *)(param_3 + 0x494) = 0x110400;
  *(undefined4 *)(param_3 + 0x498) = 0x110400;
  if ((*(char *)(param_3 + 0x52d) == '\0') || (*(int *)(param_3 + 0x4ac) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    uVar4 = FUN_100c2e34(iVar1,1,'\x01');
    *(uint *)(param_3 + 0x494) = uVar4;
    uVar4 = FUN_100c2e34(iVar1,3,'\x01');
    uVar5 = FUN_100c2e34(iVar1,3,'\x01');
    FUN_100c3be1((int *)(param_3 + 0x18),param_1,0x10);
    FUN_100c3be1((int *)(param_3 + 0x18),param_1,0x10);
    FUN_100c3be1((int *)(param_3 + 0x18),param_1,0x10);
    FUN_100c3be1((int *)(param_3 + 0x18),param_1,0x56);
    FUN_100c3be1((int *)(param_3 + 0x18),param_1,0xe);
    FUN_100c3be1((int *)(param_3 + 0x18),param_1,0x10);
    FUN_100c3be1((int *)(param_3 + 0x18),param_1,0x1d);
    FUN_100c3be1((int *)(param_3 + 0x18),param_1,0x37);
    FUN_100c3be1((int *)(param_3 + 0x18),param_1,0x33);
    FUN_100c3be1((int *)(param_3 + 0x18),param_1,0x34);
    FUN_100c3be1((int *)(param_3 + 0x18),param_1,0x1c);
    FUN_100c2ed2(param_3 + 0x18,uVar5);
    FUN_100c2ed2(param_3 + 0x18,uVar4);
  }
  piVar6 = (int *)(param_3 + 0x18);
  if (1 < *(uint *)(param_3 + 0x528)) {
    uVar4 = FUN_100c2e34((int)piVar6,3,'\x01');
    *(uint *)(param_3 + 0x49c) = uVar4;
    if (bVar2) {
      FUN_100c3be1(piVar6,param_1,0x23);
      FUN_100c3be1(piVar6,param_1,0x1e);
      FUN_100c3be1(piVar6,param_1,0x27);
      FUN_100c3be1(piVar6,param_1,0x4001f);
    }
    else {
      FUN_100c3be1(piVar6,param_1,0x36);
    }
    FUN_100c3be1(piVar6,param_1,0x36);
  }
  if ((((*(uint *)(param_3 + 0x510) & 0x200) == 0) || (*(int *)(param_3 + 0x4ac) == 0)) ||
     (*(int *)(param_3 + 0x4c4) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_3 + 0x52e) = uVar3;
  if (((*(uint *)(param_3 + 0x510) & 0x400) == 0) || (*(int *)(param_3 + 0x4b8) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_3 + 0x52f) = uVar3;
  FUN_10064c40(param_3);
  FUN_10064ebe(param_1,param_3);
  FUN_100653a0(param_1,param_3);
  FUN_100655f3(this,param_1,param_2,param_3);
  FUN_10064d64(param_3);
  FUN_100c2ed2((int)piVar6,*(uint *)(param_3 + 0x49c));
  *(undefined4 *)(param_3 + 0x49c) = 0;
  if ((*(uint *)(param_3 + 0x494) & 0x3f00) == 0) {
    FUN_100c2ed2((int)piVar6,*(uint *)(param_3 + 0x494));
    *(undefined4 *)(param_3 + 0x494) = 0;
  }
  if ((bVar2) && (1 < *(uint *)(param_3 + 0x528))) {
    FUN_100c3be1(piVar6,param_1,0x15);
  }
  return;
}

