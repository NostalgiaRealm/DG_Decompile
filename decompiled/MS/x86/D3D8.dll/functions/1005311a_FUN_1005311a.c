/*
 * FUN_1005311a at 1005311a
 * undefined __thiscall FUN_1005311a(void * this, int * param_1, undefined4 param_2, uint param_3, undefined4 param_4, undefined4 param_5, uint param_6, undefined4 param_7, uint * param_8)
 * Address ranges: 1005311a-100536d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1005311a(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
            undefined4 param_5,uint param_6,undefined4 param_7,uint *param_8)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint local_18;
  
  piVar1 = (int *)(param_3 + 0x18);
  uVar3 = FUN_100a05ed((int)piVar1,1,'\x01');
  if (*(char *)(param_3 + 0x4a0) == '\0') {
    local_18 = local_18 & 0xffffff00;
    *(uint *)(param_3 + 0x21c) = uVar3;
    *(uint *)(param_3 + 0x220) = local_18;
  }
  else {
    *(uint *)(param_3 + 0xd4) = uVar3 | 0x10000000;
  }
  FUN_100a138c(piVar1,param_1,0x2a);
  FUN_100a138c(piVar1,param_1,0x26);
  uVar4 = FUN_100a05ed((int)piVar1,1,'\x01');
  FUN_100a05ed((int)piVar1,1,'\0');
  FUN_100a138c((int *)(param_3 + 0x18),param_1,1);
  FUN_100a138c(piVar1,param_1,1);
  FUN_100a138c(piVar1,param_1,0x57);
  FUN_100a138c(piVar1,param_1,0x3c);
  FUN_100a138c(piVar1,param_1,0x4001f);
  FUN_100a138c(piVar1,param_1,0x37);
  FUN_100a138c(piVar1,param_1,0x3c);
  FUN_100a138c(piVar1,param_1,0x29);
  uVar5 = FUN_100a05ed((int)piVar1,3,'\x01');
  FUN_100a138c(piVar1,param_1,0x1e);
  FUN_100a138c((int *)(param_3 + 0x18),param_1,0x2a);
  FUN_100a138c((int *)(param_3 + 0x18),param_1,0x56);
  FUN_100a138c((int *)(param_3 + 0x18),param_1,0xe);
  FUN_100a068b(param_3 + 0x18,uVar5);
  uVar5 = FUN_100a05ed(param_3 + 0x18,4,'\x01');
  param_8 = (uint *)0x0;
  *(uint *)(param_3 + 0x410) = uVar5;
  piVar1 = (int *)(param_3 + 0x18);
  FUN_100a138c(piVar1,param_1,0x37);
  FUN_100a138c(piVar1,param_1,0x37);
  FUN_100a068b((int)piVar1,uVar4);
  param_8 = (uint *)0x3f800000;
  param_6 = 0;
  param_7 = 0;
  FUN_100a138c(piVar1,param_1,0x32);
  FUN_100a138c(piVar1,param_1,0x38);
  FUN_100a138c(piVar1,param_1,0);
  if ((*(char *)(param_3 + 0x49e) != '\0') || (*(char *)(param_3 + 0x49f) != '\0')) {
    uVar4 = FUN_100a05ed((int)piVar1,3,'\x01');
    *(uint *)(param_3 + 0x414) = uVar4;
    FUN_100a138c(piVar1,param_1,0x38);
  }
  param_8 = (uint *)(param_3 + 0x418);
  if (*(char *)(param_3 + 0x49e) != '\0') {
    uVar4 = FUN_100a05ed((int)piVar1,3,'\x01');
    *(uint *)(param_3 + 0x418) = uVar4;
    FUN_100a138c(piVar1,param_1,0x38);
  }
  iVar2 = *(int *)(param_3 + 0x60);
  *(int *)(param_3 + 0x60) = iVar2 + 1;
  iVar6 = ((*(uint *)(param_3 + 0x480) >> 0xc & 0xf) + 1) * *(int *)(param_3 + 0x48c);
  *(int *)(param_3 + 0x50 + iVar2 * 4) = iVar6;
  if (*(char *)(param_3 + 0x4a0) == '\0') {
    FUN_1005515b(this,param_1,iVar6,param_3,iVar2);
  }
  else {
    *(int *)(param_3 + 0xd8) = iVar2;
    FUN_1005a329(this,param_1,param_3);
  }
  if (*param_8 != 0) {
    FUN_100a068b((int)piVar1,*param_8);
    *param_8 = 0;
  }
  if (*(uint *)(param_3 + 0x414) != 0) {
    FUN_100a068b((int)piVar1,*(uint *)(param_3 + 0x414));
    *(undefined4 *)(param_3 + 0x414) = 0;
  }
  FUN_100a068b((int)piVar1,*(uint *)(param_3 + 0x410));
  *(undefined4 *)(param_3 + 0x410) = 0;
  FUN_100a138c(piVar1,param_1,0x15);
  param_8 = (uint *)0x0;
  uVar4 = 0;
  param_6 = iVar2 << 0xe;
  do {
    FUN_100a138c(piVar1,param_1,0x36);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xd);
  param_8 = (uint *)((uint)param_8 & 0xffffff);
  param_6 = param_6 & 0xffffff;
  FUN_10055941(param_3,(undefined1 *)((int)&param_8 + 3),(undefined1 *)((int)&param_6 + 3));
  if (param_8._3_1_ != '\0') {
    FUN_100a138c(piVar1,param_1,0x36);
  }
  if (param_6._3_1_ != '\0') {
    FUN_100a138c(piVar1,param_1,0x36);
  }
  FUN_100a068b((int)piVar1,uVar3);
  FUN_100a138c(piVar1,param_1,0x75);
  return;
}

