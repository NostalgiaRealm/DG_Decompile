/*
 * FUN_10098635 at 10098635
 * uint __thiscall FUN_10098635(void * this, uint param_1, uint param_2, int param_3, uint param_4, uint param_5, int param_6, undefined4 * param_7, undefined4 param_8, undefined4 * param_9)
 * Address ranges: 10098635-10098786
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_10098635(void *this,uint param_1,uint param_2,int param_3,uint param_4,uint param_5,int param_6,
            undefined4 *param_7,undefined4 param_8,undefined4 *param_9)

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
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  uint local_8;
  
  local_8 = 0;
  local_c = this;
  uVar3 = FUN_10004906(this,param_1,param_2,param_3,param_4,param_5,param_6,(uint)param_7,
                       (char)param_8,this,&local_8);
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  local_24 = param_7;
  uVar7 = param_3 == 0x14;
  local_20 = param_6;
  local_1c = param_4;
  local_18 = param_5;
  bVar11 = 0;
  local_14 = param_1;
  uVar10 = 0;
  uVar5 = *(undefined4 *)((int)this + 0xde8);
  local_10 = param_2;
  bVar9 = 0;
  local_2c[0] = param_3;
  local_2c[1] = 1;
  uVar8 = param_8;
  uVar4 = FUN_100020ae(param_3);
  this_01 = FUN_1008fa89((int)this,0,0,0,local_2c,0,0,uVar4,(byte)uVar8,bVar9,uVar7,uVar5,uVar10,
                         bVar11);
  if (this_01 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  uVar3 = 0x8007000e;
  cVar2 = FUN_100123f8(this_01,(int *)0x0);
  this_00 = local_c;
  if (cVar2 != '\0') {
    param_7 = this_01;
    uVar5 = FUN_10003d8f((void *)((int)local_c + 0xe24),&param_7);
    uVar3 = 0x8007000e;
    if ((char)uVar5 != '\0') {
      uVar3 = FUN_1009d053((int)(this_01 + 0x17),0x100d1370,param_9);
      if (-1 < (int)uVar3) {
        iVar6 = *(int *)((int)this_00 + 0xdf0) * 0x228;
        uVar1 = *(uint *)(&DAT_100df4e0 + iVar6);
        *(uint *)(&DAT_100df4e0 + iVar6) = uVar1 - local_8;
        *(uint *)(&DAT_100df4e4 + iVar6) = *(int *)(&DAT_100df4e4 + iVar6) - (uint)(uVar1 < local_8)
        ;
        goto LAB_10098764;
      }
      FUN_10006fc5(this_00,(int)this_01);
    }
    FUN_10012425((int)this_01);
  }
LAB_10098764:
  if ((int)uVar3 < 0) {
    FUN_1009cfe8(this_01);
    FUN_100cfd6c(this_01);
  }
  return uVar3;
}

