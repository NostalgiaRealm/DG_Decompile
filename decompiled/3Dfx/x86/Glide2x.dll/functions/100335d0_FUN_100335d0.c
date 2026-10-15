/*
 * FUN_100335d0 at 100335d0
 * undefined __fastcall FUN_100335d0(int param_1, int * param_2, void * param_3, uint param_4)
 * Address ranges: 100335d0-100337ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100335d0(int param_1,int *param_2,void *param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint extraout_EDX;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  uint local_8;
  
  iVar2 = *(int *)(param_1 + 0x78);
  uVar7 = 0;
  if (iVar2 == 0) {
LAB_1003376e:
    FUN_1002ffec(param_2 + 0x55,1,-1);
    uVar7 = 0;
    goto LAB_10033786;
  }
  if (iVar2 == 1) {
    cVar4 = ((ushort)param_4 & 0xff0) == 0x100;
LAB_10033623:
    if (cVar4 != '\0') goto LAB_1003376e;
  }
  else {
    if (iVar2 == 4) {
      cVar4 = FUN_1002da0b();
      uVar7 = extraout_EDX;
      goto LAB_10033623;
    }
    if (iVar2 == 7) {
      return;
    }
  }
  uVar5 = FUN_1003002f((int)param_2,param_4,uVar7,uVar7,uVar7,8,(char)uVar7);
  uVar7 = uVar5 & 0xffff;
  if ((param_4 & 0xf0) == 0) {
    local_8 = param_4 & 0xffff | 0x2000;
  }
  else {
    FUN_100329a6(param_2,param_3,param_4,0xff,uVar7,uVar7,8,0.01,'\0');
    local_8 = uVar7;
  }
  uVar8 = 0;
  bVar3 = false;
  iVar2 = *(int *)(param_1 + 0x78);
  if (iVar2 == 1) {
    uVar8 = 0x1d;
LAB_100336c2:
    bVar3 = true;
  }
  else {
    if (iVar2 == 2) {
      uVar8 = 0x39;
      goto LAB_100336c2;
    }
    if (iVar2 == 3) {
      uVar8 = 0x31;
LAB_100336b4:
      bVar3 = false;
    }
    else {
      if (iVar2 == 4) {
        uVar8 = 0x1d;
        goto LAB_100336b4;
      }
      if (iVar2 == 5) {
        uVar8 = 0x18;
        goto LAB_100336c2;
      }
      if (iVar2 == 6) {
        uVar8 = 0x31;
        goto LAB_100336c2;
      }
    }
  }
  FUN_1002fbc2((int)param_2,(ushort)uVar5,8);
  FUN_1002fc72(param_2,0,local_8,0xff,0,'\0');
  iVar6 = FUN_10047bfa(param_2,(uint *)(param_2 + 0x5e),param_2[0x10],0xb4,0xff,0,0);
  piVar1 = param_2 + 0x5d;
  piVar10 = param_2 + 0x55;
  *piVar1 = iVar6;
  iVar2 = *piVar10;
  piVar9 = piVar1;
  if (bVar3) {
    piVar9 = piVar10;
    piVar10 = piVar1;
  }
  FUN_100487df(param_3,(iVar2 + param_2[0x4d] + iVar6) * 0x1000000 + 0x1000000U & 0x7f000000 | uVar8
               ,param_2 + 0x4d,piVar9,piVar10,(int *)0x0);
  FUN_1002ff23(param_2,(ushort)uVar5,3);
LAB_10033786:
  FUN_100487df(param_3,param_2[0x55] * 0x1000000 + 0x1000000U & 0x7f000000 | 0x4000d,param_2 + 0x55,
               (int *)0x0,(int *)0x0,(int *)0x0);
  FUN_100300df((int)param_2,uVar7);
  return;
}

