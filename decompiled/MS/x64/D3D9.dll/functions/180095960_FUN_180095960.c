/*
 * FUN_180095960 at 180095960
 * undefined __fastcall FUN_180095960(longlong param_1, int param_2, int param_3, int param_4, int param_5, longlong * param_6, longlong * param_7, longlong * param_8, undefined8 param_9)
 * Address ranges: 180095960-180095d12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180095960(longlong param_1,int param_2,int param_3,int param_4,int param_5,
                  longlong *param_6,longlong *param_7,longlong *param_8,undefined8 param_9)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  int iStack0000000000000050;
  RECT local_a0;
  int local_90;
  int local_8c;
  int local_88;
  RECT local_80;
  RECT local_70;
  undefined8 local_60 [4];
  
  local_a0.left = *(LONG *)((longlong)param_8 + 0x34);
  local_a0.top = (LONG)param_8[7];
  local_a0.right = *(LONG *)((longlong)param_8 + 0x3c);
  local_a0.bottom = (LONG)param_8[8];
  iVar1 = *(int *)((longlong)param_8 + 0x44);
  iVar2 = (int)param_8[9];
  cVar4 = (**(code **)(*param_7 + 0xa8))(param_7);
  if (cVar4 != '\0') {
    (**(code **)(*param_7 + 8))(param_7,param_4,param_5,*(char *)((longlong)param_8 + 0x59) == '\0')
    ;
  }
  cVar4 = (**(code **)(*param_6 + 0xa8))(param_6);
  if (cVar4 != '\0') {
    (**(code **)(*param_6 + 8))(param_6,param_2,param_3,0);
  }
  iStack0000000000000050 = *(int *)((longlong)param_7 + 0x3c);
  local_88 = *(int *)((longlong)param_6 + 0x3c);
  uVar5 = local_88 * param_3 + param_2;
  local_90 = *(int *)((longlong)param_7 + 0x34);
  local_8c = *(int *)((longlong)param_6 + 0x34);
  uVar6 = (**(code **)(*param_7 + 0x40))(param_7,0);
  uVar6 = FUN_1800ac71c((longlong)param_7,uVar6,(byte)param_4);
  uVar7 = (**(code **)(*param_7 + 0x48))(param_7,0);
  uVar7 = FUN_1800ac758((longlong)param_7,uVar7,(byte)param_4);
  uVar8 = (**(code **)(*param_6 + 0x40))(param_6,0);
  uVar8 = FUN_1800ac71c((longlong)param_6,uVar8,(byte)param_2);
  uVar9 = (**(code **)(*param_6 + 0x48))(param_6,0);
  uVar9 = FUN_1800ac758((longlong)param_6,uVar9,(byte)param_2);
  (**(code **)(*param_7 + 8))(param_7,param_4,param_5,0);
  (**(code **)(*param_6 + 8))(param_6,param_2,param_3,0);
  local_80.left = 0;
  local_80.top = 0;
  local_70.left = 0;
  local_70.top = 0;
  bVar3 = false;
  local_80.right = uVar8;
  local_80.bottom = uVar9;
  local_70.right = uVar6;
  local_70.bottom = uVar7;
  if ((*(char *)((longlong)param_8 + 0x55) != '\0') || (*(char *)((longlong)param_8 + 0x54) != '\0')
     ) {
    bVar3 = true;
    IntersectRect(&local_a0,&local_a0,&local_80);
  }
  OffsetRect(&local_a0,iVar1 - *(int *)((longlong)param_8 + 0x34),iVar2 - (int)param_8[7]);
  if (bVar3) {
    IntersectRect(&local_a0,&local_a0,&local_70);
  }
  OffsetRect(&local_a0,*(int *)((longlong)param_8 + 0x34) - iVar1,(int)param_8[7] - iVar2);
  if (*(uint *)((longlong)param_6 + 0x2c) < 0xe) {
    uVar11 = *(undefined4 *)(param_1 + 0x44);
  }
  else {
    puVar10 = FUN_1800ac794((longlong)param_6,local_60);
    uVar11 = *(undefined4 *)((longlong)puVar10 + 4);
  }
  FUN_180097cd8(param_1,*param_8,(uint *)param_8[1],param_8[2],param_8[3],uVar6,uVar7,
                iStack0000000000000050 * param_5 + param_4,uVar8,uVar9,uVar5,
                *(undefined4 *)((longlong)param_8 + 0x24),(int)param_8[5],uVar11,iVar1,iVar2,
                &local_a0.left,*(uint *)((longlong)param_8 + 0x2c),(int)param_8[6],
                *(char *)((longlong)param_8 + 0x59),*(char *)((longlong)param_8 + 0x5a));
  if ((((*(char *)((longlong)param_8 + 0x59) == '\0') &&
       ((&DAT_1800fec18)[*(uint *)((longlong)param_7 + 0x2c)] != '\0')) &&
      ((&DAT_1800fec18)[*(uint *)((longlong)param_6 + 0x2c)] != '\0')) &&
     ((*(int *)((longlong)param_8 + 0x24) - 0x2cU < 2 && ((int)param_8[5] - 0x2cU < 2)))) {
    FUN_180097cd8(param_1,*param_8,(uint *)param_8[1],param_8[2],param_8[3],uVar6,uVar7,
                  (local_90 + param_5) * iStack0000000000000050 + param_4,uVar8,uVar9,
                  (local_8c + param_3) * local_88 + param_2,*(int *)((longlong)param_8 + 0x24),
                  (int)param_8[5],uVar11,iVar1,iVar2,&local_a0.left,
                  *(uint *)((longlong)param_8 + 0x2c),(int)param_8[6],'\0','\0');
  }
  (**(code **)(*param_6 + 0x18))(param_6,uVar5,param_9);
  return;
}

