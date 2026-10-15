/*
 * FUN_1004aa70 at 1004aa70
 * undefined FUN_1004aa70(void)
 * Address ranges: 1004aa70-1004ad83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1004aa70(int param_1,int param_2,uint param_3,int *param_4,uint *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong extraout_x11;
  uint uVar5;
  uint uVar6;
  int local_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  iVar2 = FUN_1004c3a8(param_1 + 0x150);
  iVar3 = FUN_1004c408(extraout_x11 & 0xffffffff);
  if ((((((*(uint *)(param_2 + 0x19c) >> 2 & 1) == 0) ||
        (*(int *)(param_2 + 0x1a0) != *(int *)(param_1 + 0x1a0))) ||
       (uVar4 = FUN_1004d5d0(param_4,iVar2,iVar3), (uVar4 & 1) == 0)) ||
      (((iVar2 - 1U & *param_5) != 0 || ((iVar3 - 1U & param_5[1]) != 0)))) &&
     ((*(uint *)(param_1 + 0x19c) >> 2 & 1) != 0)) {
    cVar1 = '\0';
    uVar4 = FUN_1004d420(param_1);
    if (((uVar4 & 1) != 0) &&
       ((uVar4 = FUN_100473d0(param_2), (uVar4 & 1) == 0 ||
        (uVar4 = FUN_10047360(param_1), (uVar4 & 1) == 0)))) {
      cVar1 = '\x01';
      uVar6 = 0;
      uVar5 = 0;
      if (param_3 != 0) {
        do {
          if (cVar1 == '\0') {
            return '\0';
          }
          iVar2 = param_4[3] >> (uVar5 & 0x1f);
          if ((param_4[3] & uVar6) != 0) {
            iVar2 = iVar2 + 1;
          }
          iVar3 = param_4[2] >> (uVar5 & 0x1f);
          if ((param_4[2] & uVar6) != 0) {
            iVar3 = iVar3 + 1;
          }
          (*(code *)PTR_FUN_100ba2b8)
                    (&local_88,*param_4 >> (uVar5 & 0x1f),param_4[1] >> (uVar5 & 0x1f),iVar3,iVar2);
          iVar2 = (int)param_5[3] >> (uVar5 & 0x1f);
          if ((param_5[3] & uVar6) != 0) {
            iVar2 = iVar2 + 1;
          }
          iVar3 = (int)param_5[2] >> (uVar5 & 0x1f);
          if ((param_5[2] & uVar6) != 0) {
            iVar3 = iVar3 + 1;
          }
          (*(code *)PTR_FUN_100ba2b8)
                    (auStack_78,(int)*param_5 >> (uVar5 & 0x1f),(int)param_5[1] >> (uVar5 & 0x1f),
                     iVar3,iVar2);
          iVar2 = (*(code *)PTR_FUN_100ba248)(&local_88);
          if ((iVar2 == 0) && (iVar2 = (*(code *)PTR_FUN_100ba248)(param_5), iVar2 == 0)) {
            uStack_58 = 0;
            local_60 = 0;
            uStack_48 = 0;
            uStack_50 = 0;
            cVar1 = FUN_10047810((float)local_88,(float)iStack_84,(float)local_80,(float)iStack_7c,
                                 param_1,auStack_78,param_2,&local_60,0,0);
            uVar6 = uVar6 << 1 | 1;
            param_2 = *(int *)(param_2 + 0x110);
            param_1 = *(int *)(param_1 + 0x110);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < param_3);
      }
    }
  }
  else {
    FUN_1004fe70(param_1,param_2);
    FUN_10047270(param_1,param_2,param_1);
    cVar1 = FUN_10008180(*(undefined4 *)(*(int *)(param_1 + 4) + 0x50),
                         *(undefined4 *)(*(int *)(param_2 + 4) + 0x50),
                         *(undefined4 *)(*(int *)(param_1 + 4) + 0x4c),0,0,0,0,param_3,
                         *(undefined4 *)(param_2 + 0x1cc));
  }
  return cVar1;
}

