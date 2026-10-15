/*
 * FUN_10097a95 at 10097a95
 * undefined4 __stdcall FUN_10097a95(int param_1, int param_2, int param_3, int param_4, uint param_5, int param_6, uint * param_7)
 * Address ranges: 10097a95-10097c79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10097a95(int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,uint *param_7)

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
  uint local_10;
  uint *local_c;
  uint local_8;
  
  iVar2 = param_1;
  uVar6 = 0x8876086c;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  if ((((param_2 - 1U < 6) && (param_7 < *(uint **)(*(int *)(iVar2 + 0x50) + 0xb4))) &&
      (*(char *)(iVar2 + -0x6410) != '\0')) && (*(int *)(iVar2 + -0x128) != 0)) {
    uVar6 = 0;
    bVar7 = *(int *)(iVar2 + -0x6268) != 0;
    this = (void *)(iVar2 + -0x66b4);
    uVar4 = FUN_10096e29((int)this);
    uVar5 = FUN_10096e70(this_00,(byte)uVar4,bVar7);
    cVar3 = FUN_100926d4(this,uVar5);
    if (((((cVar3 != '\0') && (bVar7 = FUN_10096ec2((uint)this), bVar7 != 0)) &&
         ((cVar3 = FUN_100971a9((int)this), cVar3 != '\0' &&
          ((cVar3 = FUN_100929c0((int)this), cVar3 != '\0' &&
           (uVar6 = 0x8876086c,
           uVar5 = *(uint *)(*(int *)(iVar2 + 0x5c24) + 0x10) & *(uint *)(iVar2 + -0x60),
           (*(uint *)(iVar2 + -100) & uVar5) == uVar5)))))) &&
        (uVar6 = 0, *(char *)(iVar2 + -0x17) == '\0')) && (*(int *)(iVar2 + -0x669c) != 0)) {
      local_c = &local_10;
      local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
      local_10 = in_FPUControlWord | 0x80000000;
      if ((in_FPUControlWord & 0xf3f) != 0x23f) {
        local_10 = (uint)in_FPUControlWord;
        local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
      }
      if ((*(int *)(*(int *)(iVar2 + 0x5c24) + 4) == 0) && (*(int *)(iVar2 + -0x124) != 0)) {
        cVar3 = *(char *)(*(int *)(iVar2 + -0x124) + 100);
      }
      else {
        cVar3 = '\x01';
      }
      if ((cVar3 == '\0') ||
         ((*(int *)(iVar2 + -0x6064) == 0 && (*(char *)(iVar2 + -0x15) != '\0')))) {
        local_8 = (uint)local_8._1_3_ << 8;
      }
      else {
        local_8 = CONCAT31(local_8._1_3_,1);
      }
      FUN_10017d65(this,(char)local_8,*(int *)(iVar2 + -0x6064) != 0,'\x01');
      iVar1 = *(int *)(iVar2 + 0x5bd0);
      FUN_10092b91(this);
      FUN_1000606d(this,iVar1 == 0);
      uVar6 = FUN_10009659(this,(int *)(iVar2 + 0x5c24),param_3,param_2,param_4,param_5,param_6,
                           (uint)param_7);
      param_7 = &local_10;
    }
  }
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar6;
}

