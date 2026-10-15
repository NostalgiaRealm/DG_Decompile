/*
 * FUN_10097e4a at 10097e4a
 * undefined4 __stdcall FUN_10097e4a(int param_1, int param_2, int param_3, uint param_4, uint param_5, int param_6, uint * param_7, int param_8, undefined4 param_9)
 * Address ranges: 10097e4a-1009803f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10097e4a(int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,uint *param_7
            ,int param_8,undefined4 param_9)

{
  void *this;
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  void *this_00;
  undefined4 uVar6;
  byte bVar7;
  ushort in_FPUControlWord;
  uint auStackY_100 [46];
  uint local_18;
  int *local_14;
  bool local_10;
  undefined3 uStack_f;
  uint *local_c;
  uint local_8;
  
  iVar2 = param_1;
  uVar6 = 0x8876086c;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  if (((((param_2 - 1U < 6) && (param_8 != 0)) &&
       (param_5 < *(uint *)(*(int *)(iVar2 + 0x50) + 0xb4))) && (param_6 != 0)) &&
     (((param_7 == (uint *)0x65 || (param_7 == (uint *)0x66)) &&
      (*(char *)(iVar2 + -0x6410) != '\0')))) {
    uVar6 = 0;
    bVar7 = *(int *)(iVar2 + -0x6268) != 0;
    this = (void *)(iVar2 + -0x66b4);
    uVar4 = FUN_10096e29((int)this);
    uVar5 = FUN_10096e70(this_00,(byte)uVar4,bVar7);
    cVar3 = FUN_100926d4(this,uVar5);
    if (((cVar3 != '\0') && (bVar7 = FUN_10096ec2((uint)this), bVar7 != 0)) &&
       ((cVar3 = FUN_100971a9((int)this), cVar3 != '\0' &&
        (cVar3 = FUN_100929c0((int)this), cVar3 != '\0')))) {
      local_14 = (int *)(iVar2 + 0x5c24);
      uVar6 = 0x8876086c;
      if ((((*(uint *)(*local_14 + 0x10) & *(uint *)(iVar2 + -0x60)) == 1) &&
          (uVar6 = 0, *(char *)(iVar2 + -0x17) == '\0')) && (*(int *)(iVar2 + -0x669c) != 0)) {
        local_c = &local_18;
        local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
        local_18 = in_FPUControlWord | 0x80000000;
        if ((in_FPUControlWord & 0xf3f) != 0x23f) {
          local_18 = (uint)in_FPUControlWord;
          local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
        }
        iVar1 = *(int *)(iVar2 + -0x6064);
        if ((iVar1 != 0) || (local_c = auStackY_100, *(char *)(iVar2 + -0x15) == '\0')) {
          local_c = (uint *)CONCAT31(local_c._1_3_,1);
        }
        _local_10 = CONCAT31(uStack_f,iVar1 != 0);
        if ((*(int *)(iVar2 + -0x6268) != 0) ||
           (local_8 = local_8 & 0xffffff00, *(int *)(*local_14 + 4) != 0)) {
          local_8 = CONCAT31(local_8._1_3_,1);
        }
        FUN_10017d65(this,(char)local_c,iVar1 != 0,(char)local_8);
        iVar2 = *(int *)(iVar2 + 0x5bd0);
        FUN_10092b91(this);
        FUN_1000606d(this,iVar2 == 0);
        uVar6 = FUN_100090cd(this,local_14,param_2,param_3,param_4,param_5,param_6,(int)param_7,
                             param_8,param_9);
        param_7 = &local_18;
      }
    }
  }
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar6;
}

