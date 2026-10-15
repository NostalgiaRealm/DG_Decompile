/*
 * FUN_10051c44 at 10051c44
 * undefined __thiscall FUN_10051c44(void * this, int * param_1, undefined4 param_2, uint param_3)
 * Address ranges: 10051c44-1005213b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10051c44(void *this,int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  iVar1 = param_3 + 0x18;
  *(undefined4 *)(param_3 + 0x424) = 0;
  *(undefined4 *)(param_3 + 0x420) = 0;
  *(undefined4 *)(param_3 + 0x41c) = 0;
  *(undefined4 *)(param_3 + 0x430) = 0;
  *(undefined4 *)(param_3 + 0x42c) = 0;
  *(undefined4 *)(param_3 + 0x428) = 0;
  *(undefined4 *)(param_3 + 0x43c) = 0;
  *(undefined4 *)(param_3 + 0x438) = 0;
  *(undefined4 *)(param_3 + 0x434) = 0;
  if (*(char *)(param_3 + 0x4a0) == '\0') {
    FUN_100550a1(param_3);
  }
  else {
    FUN_1005436a(param_3);
  }
  *(undefined4 *)(param_3 + 0x3f4) = 0x110803;
  *(undefined4 *)(param_3 + 0x3f0) = 0x410803;
  *(undefined4 *)(param_3 + 0x3f8) = 0x110400;
  *(undefined4 *)(param_3 + 0x3fc) = 0x410400;
  *(undefined4 *)(param_3 + 0x400) = 0x20000d00;
  *(undefined4 *)(param_3 + 0x404) = 0x110400;
  *(undefined4 *)(param_3 + 0x408) = 0x110400;
  if ((*(char *)(param_3 + 0x49d) == '\0') || (*(int *)(param_3 + 0x41c) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    uVar4 = FUN_100a05ed(iVar1,1,'\x01');
    *(uint *)(param_3 + 0x404) = uVar4;
    uVar4 = FUN_100a05ed(iVar1,3,'\x01');
    uVar5 = FUN_100a05ed(iVar1,3,'\x01');
    FUN_100a138c((int *)(param_3 + 0x18),param_1,0x10);
    FUN_100a138c((int *)(param_3 + 0x18),param_1,0x10);
    FUN_100a138c((int *)(param_3 + 0x18),param_1,0x10);
    FUN_100a138c((int *)(param_3 + 0x18),param_1,0x56);
    FUN_100a138c((int *)(param_3 + 0x18),param_1,0xe);
    FUN_100a138c((int *)(param_3 + 0x18),param_1,0x10);
    FUN_100a138c((int *)(param_3 + 0x18),param_1,0x1d);
    FUN_100a138c((int *)(param_3 + 0x18),param_1,0x37);
    FUN_100a138c((int *)(param_3 + 0x18),param_1,0x33);
    FUN_100a138c((int *)(param_3 + 0x18),param_1,0x34);
    FUN_100a138c((int *)(param_3 + 0x18),param_1,0x1c);
    FUN_100a068b(param_3 + 0x18,uVar5);
    FUN_100a068b(param_3 + 0x18,uVar4);
  }
  piVar6 = (int *)(param_3 + 0x18);
  if (1 < *(uint *)(param_3 + 0x498)) {
    uVar4 = FUN_100a05ed((int)piVar6,3,'\x01');
    *(uint *)(param_3 + 0x40c) = uVar4;
    if (bVar2) {
      FUN_100a138c(piVar6,param_1,0x23);
      FUN_100a138c(piVar6,param_1,0x1e);
      FUN_100a138c(piVar6,param_1,0x27);
      FUN_100a138c(piVar6,param_1,0x4001f);
    }
    else {
      FUN_100a138c(piVar6,param_1,0x36);
    }
    FUN_100a138c(piVar6,param_1,0x36);
  }
  if ((((*(uint *)(param_3 + 0x480) & 0x200) == 0) || (*(int *)(param_3 + 0x41c) == 0)) ||
     (*(int *)(param_3 + 0x434) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_3 + 0x49e) = uVar3;
  if (((*(uint *)(param_3 + 0x480) & 0x400) == 0) || (*(int *)(param_3 + 0x428) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_3 + 0x49f) = uVar3;
  FUN_1005213c(param_3);
  FUN_100523ba(param_1,param_3);
  FUN_1005289c(param_1,param_3);
  FUN_10052aef(this,param_1,param_2,param_3);
  FUN_10052260(param_3);
  FUN_100a068b((int)piVar6,*(uint *)(param_3 + 0x40c));
  *(undefined4 *)(param_3 + 0x40c) = 0;
  if ((*(uint *)(param_3 + 0x404) & 0x3f00) == 0) {
    FUN_100a068b((int)piVar6,*(uint *)(param_3 + 0x404));
    *(undefined4 *)(param_3 + 0x404) = 0;
  }
  if ((bVar2) && (1 < *(uint *)(param_3 + 0x498))) {
    FUN_100a138c(piVar6,param_1,0x15);
  }
  return;
}

