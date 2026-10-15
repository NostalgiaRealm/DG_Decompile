/*
 * FUN_10097787 at 10097787
 * undefined4 __stdcall FUN_10097787(int param_1, int param_2, int param_3, uint * param_4)
 * Address ranges: 10097787-10097a94
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10097787(int param_1,int param_2,int param_3,uint *param_4)

{
  void *this;
  int iVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  void *this_00;
  undefined4 uVar7;
  byte bVar8;
  ushort in_FPUControlWord;
  undefined1 local_e4 [204];
  uint local_18;
  int *local_14;
  uint *local_10;
  undefined4 local_c;
  uint local_8;
  
  iVar3 = param_1;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  uVar7 = 0x8876086c;
  if (((5 < param_2 - 1U) || (*(uint **)(*(int *)(iVar3 + 0x50) + 0xb4) <= param_4)) ||
     (*(char *)(iVar3 + -0x6410) == '\0')) goto LAB_10097a85;
  uVar7 = 0;
  bVar8 = *(int *)(iVar3 + -0x6268) != 0;
  this = (void *)(iVar3 + -0x66b4);
  uVar5 = FUN_10096e29((int)this);
  uVar6 = FUN_10096e70(this_00,(byte)uVar5,bVar8);
  cVar4 = FUN_100926d4(this,uVar6);
  if (((cVar4 == '\0') || (bVar8 = FUN_10096ec2((uint)this), bVar8 == 0)) ||
     ((cVar4 = FUN_100971a9((int)this), cVar4 == '\0' ||
      (cVar4 = FUN_100929c0((int)this), cVar4 == '\0')))) goto LAB_10097a85;
  local_14 = (int *)(iVar3 + 0x5c24);
  uVar6 = *(uint *)(*local_14 + 0x10) & *(uint *)(iVar3 + -0x60);
  uVar7 = 0x8876086c;
  if ((((*(uint *)(iVar3 + -100) & uVar6) != uVar6) ||
      (local_c = 0, uVar7 = local_c, *(char *)(iVar3 + -0x17) != '\0')) ||
     (*(int *)(iVar3 + -0x669c) == 0)) goto LAB_10097a85;
  local_10 = &local_18;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_18 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_18 = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  if ((*(int *)(*(int *)(iVar3 + 0x5c24) + 4) == 0) && (*(int *)(iVar3 + -0x124) != 0)) {
    cVar4 = *(char *)(*(int *)(iVar3 + -0x124) + 100);
  }
  else {
    cVar4 = '\x01';
  }
  if ((cVar4 == '\0') || ((*(int *)(iVar3 + -0x6064) == 0 && (*(char *)(iVar3 + -0x15) != '\0')))) {
    local_8 = (uint)local_8._1_3_ << 8;
  }
  else {
    local_8 = CONCAT31(local_8._1_3_,1);
  }
  FUN_10017d65(this,(char)local_8,*(int *)(iVar3 + -0x6064) != 0,'\x01');
  iVar1 = *(int *)(iVar3 + 0x5bd0);
  FUN_10092b91(this);
  FUN_1000606d(this,iVar1 == 0);
  if (*(char *)(iVar3 + 0x5c38) == '\0') {
    local_c = FUN_10009225(this,local_14,param_2,param_3,(uint)param_4);
  }
  else {
    FUN_10096da5(this,*(int *)(iVar3 + 0x5c24),iVar3 + 0x5bdc,param_3,(int)local_e4);
    iVar1 = *(int *)(&DAT_100d1728 + param_2 * 4);
    (**(code **)(**(int **)(iVar3 + -0x66a0) + 0xa8))
              (iVar1,*(undefined4 *)(iVar3 + 0x5c28),*(undefined4 *)(iVar3 + 0x5c2c),local_e4,
               *(int *)(&DAT_100d16f0 + iVar1 * 8) * (int)param_4 +
               *(int *)(&DAT_100d16f4 + iVar1 * 8));
    if ((*(char *)(iVar3 + -0x5927) == '\0') &&
       (*(char *)(*(int *)(iVar3 + -0x66a8) + 0x75e) == '\0')) {
      bVar2 = false;
      if (*(char *)(iVar3 + -0x6413) != '\0') goto LAB_100979b4;
    }
    else {
      bVar2 = true;
LAB_100979b4:
      (**(code **)(**(int **)(iVar3 + -0x66a0) + 0x14))();
      (**(code **)(**(int **)(iVar3 + -0x669c) + 0x14))
                (*(undefined4 *)(iVar3 + -0x641c),*(undefined4 *)(iVar3 + -0x6418));
      if ((bVar2) &&
         ((**(code **)(**(int **)(iVar3 + -0x669c) + 0x14))
                    (*(undefined4 *)(iVar3 + -0x641c),*(undefined4 *)(iVar3 + -0x6418)),
         *(char *)(*(int *)(iVar3 + -0x66a8) + 0x75f) != '\0')) {
        DebugBreak();
      }
    }
    if (*(char *)(iVar3 + -0x6412) == '\0') {
      (**(code **)(**(int **)(iVar3 + -0x669c) + 0xc))();
      if (*(int **)(iVar3 + -0x668c) != (int *)0x0) {
        (**(code **)(**(int **)(iVar3 + -0x668c) + 0xc))();
      }
      *(undefined1 *)(iVar3 + -0x6412) = 1;
    }
    if (*(char *)(iVar3 + -0x6411) != '\0') {
      if (*(int *)(iVar3 + -0x621c) != 0) {
        (**(code **)(**(int **)(*(int *)(*(int *)(iVar3 + -0x669c) + 4) + 0x50) + 0x20))
                  (*(undefined4 *)(iVar3 + -0x641c),*(undefined4 *)(iVar3 + -0x6418),1);
      }
      *(undefined1 *)(iVar3 + -0x6411) = 0;
    }
  }
  param_4 = &local_18;
  uVar7 = local_c;
LAB_10097a85:
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar7;
}

