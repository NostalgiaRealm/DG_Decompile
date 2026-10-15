/*
 * FUN_1007e184 at 1007e184
 * uint __thiscall FUN_1007e184(void * this, uint param_1, uint param_2, int param_3, uint param_4, int param_5, undefined4 * param_6, undefined4 param_7, undefined4 * param_8)
 * Address ranges: 1007e184-1007e2cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_1007e184(void *this,uint param_1,uint param_2,int param_3,uint param_4,int param_5,
            undefined4 *param_6,undefined4 param_7,undefined4 *param_8)

{
  uint uVar1;
  void *this_00;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *this_01;
  undefined4 uVar5;
  int iVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  byte bVar9;
  undefined4 uVar10;
  byte bVar11;
  int local_2c [2];
  undefined4 *local_24;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  uint local_8;
  
  local_8 = 0;
  local_c = this;
  uVar3 = FUN_100041e2(this,param_1,param_2,param_3,param_4,this,param_5,(uint)param_6,(char)param_7
                       ,this,&local_8);
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  local_24 = param_6;
  uVar7 = param_3 == 0x14;
  local_20 = param_5;
  local_18 = param_4;
  bVar11 = 0;
  local_14 = param_1;
  uVar10 = 0;
  uVar5 = *(undefined4 *)((int)this + 0xb24);
  local_10 = param_2;
  bVar9 = 0;
  local_1c = 0;
  local_2c[0] = param_3;
  local_2c[1] = 1;
  uVar8 = param_7;
  uVar4 = FUN_10002220(param_3);
  this_01 = FUN_10079657((int)this,0,0,0,local_2c,0,0,uVar4,(byte)uVar8,bVar9,uVar7,uVar5,uVar10,
                         bVar11);
  if (this_01 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  uVar3 = 0x8007000e;
  cVar2 = FUN_1000e66f(this_01,(int *)0x0);
  this_00 = local_c;
  if (cVar2 != '\0') {
    param_6 = this_01;
    uVar5 = FUN_10003787((void *)((int)local_c + 0xb60),&param_6);
    uVar3 = 0x8007000e;
    if ((char)uVar5 != '\0') {
      uVar3 = FUN_100810e8((int)(this_01 + 0x17),0x100af390,param_8);
      if (-1 < (int)uVar3) {
        iVar6 = *(int *)((int)this_00 + 0xb2c) * 0x228;
        uVar1 = *(uint *)(&DAT_100ba918 + iVar6);
        *(uint *)(&DAT_100ba918 + iVar6) = uVar1 - local_8;
        *(uint *)(&DAT_100ba91c + iVar6) = *(int *)(&DAT_100ba91c + iVar6) - (uint)(uVar1 < local_8)
        ;
        goto LAB_1007e2ae;
      }
      FUN_100066bc(this_00,(int)this_01);
    }
    FUN_1000e69c((int)this_01);
  }
LAB_1007e2ae:
  if ((int)uVar3 < 0) {
    FUN_1008108b(this_01);
    FUN_100ad48c(this_01);
  }
  return uVar3;
}

