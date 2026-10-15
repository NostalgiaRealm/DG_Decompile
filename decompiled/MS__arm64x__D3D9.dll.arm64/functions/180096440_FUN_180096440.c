/*
 * FUN_180096440 at 180096440
 * undefined FUN_180096440(void)
 * Address ranges: 180096440-1800967eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180096440(longlong param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  iVar3 = param_2 + *(int *)(param_1 + 0x3c) * param_3;
  iVar1 = *(int *)(param_1 + 0x1a0);
  if (iVar1 == 1) {
    uVar7 = 0xf;
    uVar8 = 0x22;
  }
  else if (iVar1 == 2) {
    uVar7 = 0x10;
    uVar8 = 0x23;
  }
  else if (iVar1 == 4) {
    uVar7 = 0x11;
    uVar8 = 0x24;
  }
  else if (iVar1 == 8) {
    uVar7 = 0x12;
    uVar8 = 0x25;
  }
  else if (iVar1 == 0x10) {
    uVar7 = 0x13;
    uVar8 = 0x26;
  }
  else {
    uVar7 = 0xffffffff;
    uVar8 = 0xffffffff;
  }
  if (param_4 == 2) {
    lVar9 = *(longlong *)(param_1 + 0x7c);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(param_1 + 0x74);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x23c);
    uVar4 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1940),auStack_60,
                          *(undefined4 *)(param_1 + 0x228),iVar3);
    uVar5 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),auStack_58,
                          *(undefined4 *)(param_1 + 0x8c),0);
    FUN_18008e010(0,0,(float)*(uint *)(param_1 + 0x24),(float)*(uint *)(param_1 + 0x28),0,0,
                  (float)*(uint *)(param_1 + 0x198),(float)*(uint *)(param_1 + 0x19c),
                  *(undefined8 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x2c),
                  *(undefined4 *)(param_1 + 0x2c),(ulonglong)param_2,iVar3,param_2,param_3,iVar3,0,0
                  ,lVar9,0,*(undefined8 *)(param_1 + 0x208),&DAT_180231350,&DAT_180231350,uVar5,
                  &DAT_180231350,uVar4,0,0,uVar2,0,uVar7,1);
    if ((((&DAT_180231818)[*(uint *)(param_1 + 0x2c)] != '\0') &&
        (uVar6 = FUN_180095d10(param_1), (&DAT_180231818)[uVar6 & 0xffffffff] != '\0')) &&
       (*(char *)(*(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x20 +
                 0x6e9) != '\0')) {
      lVar9 = *(longlong *)(param_1 + 0x7c);
      iVar1 = param_2 + (*(int *)(param_1 + 0x34) + param_3) * *(int *)(param_1 + 0x3c);
      if (lVar9 == 0) {
        lVar9 = *(longlong *)(param_1 + 0x74);
      }
      uVar7 = *(undefined4 *)(param_1 + 0x23c);
      uVar4 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1940),auStack_58,
                            *(undefined4 *)(param_1 + 0x228),iVar3);
      uVar5 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),auStack_60,
                            *(undefined4 *)(param_1 + 0x8c),1);
      FUN_18008e010(0,0,(float)*(uint *)(param_1 + 0x24),(float)*(uint *)(param_1 + 0x28),0,0,
                    (float)*(uint *)(param_1 + 0x198),(float)*(uint *)(param_1 + 0x19c),
                    *(undefined8 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x2c),
                    *(undefined4 *)(param_1 + 0x2c),param_2,iVar1,param_2,param_3,iVar1,0,0,lVar9,0,
                    *(undefined8 *)(param_1 + 0x208),&DAT_180231350,&DAT_180231350,uVar5,
                    &DAT_180231350,uVar4,0,0,uVar7,0,uVar8,1);
    }
  }
  else if (param_4 == 1) {
    lVar9 = *(longlong *)(param_1 + 0x7c);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(param_1 + 0x74);
    }
    uVar8 = *(undefined4 *)(param_1 + 0x188);
    uVar4 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1940),auStack_58,
                          *(undefined4 *)(param_1 + 0x174),iVar3);
    uVar5 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),auStack_60,
                          *(undefined4 *)(param_1 + 0x8c),0);
    FUN_18008e010(0,0,(float)*(uint *)(param_1 + 0x198),(float)*(uint *)(param_1 + 0x19c),0,0,
                  (float)*(uint *)(param_1 + 0x198),(float)*(uint *)(param_1 + 0x19c),
                  *(undefined8 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x2c),
                  *(undefined4 *)(param_1 + 0x2c),param_2,iVar3,param_2,param_3,iVar3,0,0,lVar9,0,
                  *(undefined8 *)(param_1 + 0x154),&DAT_180231350,&DAT_180231350,uVar5,
                  &DAT_180231350,uVar4,0,0,uVar8,0,uVar7,1);
    param_1 = param_1 + ((ulonglong)(param_2 >> 6) + 0x4a) * 8;
    uVar6 = (ulonglong)(param_2 >> 3) & 7;
    *(byte *)(param_1 + uVar6) = *(byte *)(param_1 + uVar6) | (byte)(1 << ((ulonglong)param_2 & 7));
  }
  return;
}

