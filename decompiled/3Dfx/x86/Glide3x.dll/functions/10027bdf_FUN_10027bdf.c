/*
 * FUN_10027bdf at 10027bdf
 * undefined __fastcall FUN_10027bdf(int param_1, int * param_2, void * param_3, uint param_4)
 * Address ranges: 10027bdf-10027dc9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10027bdf(int param_1,int *param_2,void *param_3,uint param_4)

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
LAB_10027d7d:
    FUN_10023b99(param_2 + 0x55,1,-1);
    uVar7 = 0;
    goto LAB_10027d95;
  }
  if (iVar2 == 1) {
    cVar4 = ((ushort)param_4 & 0xff0) == 0x100;
LAB_10027c32:
    if (cVar4 != '\0') goto LAB_10027d7d;
  }
  else {
    if (iVar2 == 4) {
      cVar4 = FUN_10021367();
      uVar7 = extraout_EDX;
      goto LAB_10027c32;
    }
    if (iVar2 == 7) {
      return;
    }
  }
  uVar5 = FUN_10023bdc((int)param_2,param_4,uVar7,uVar7,uVar7,8,(char)uVar7);
  uVar7 = uVar5 & 0xffff;
  if ((param_4 & 0xf0) == 0) {
    local_8 = param_4 & 0xffff | 0x2000;
  }
  else {
    FUN_10026553(param_2,param_3,param_4,0xff,uVar7,uVar7,8,0.01,'\0');
    local_8 = uVar7;
  }
  uVar8 = 0;
  bVar3 = false;
  iVar2 = *(int *)(param_1 + 0x78);
  if (iVar2 == 1) {
    uVar8 = 0x1d;
LAB_10027cd1:
    bVar3 = true;
  }
  else {
    if (iVar2 == 2) {
      uVar8 = 0x39;
      goto LAB_10027cd1;
    }
    if (iVar2 == 3) {
      uVar8 = 0x31;
LAB_10027cc3:
      bVar3 = false;
    }
    else {
      if (iVar2 == 4) {
        uVar8 = 0x1d;
        goto LAB_10027cc3;
      }
      if (iVar2 == 5) {
        uVar8 = 0x18;
        goto LAB_10027cd1;
      }
      if (iVar2 == 6) {
        uVar8 = 0x31;
        goto LAB_10027cd1;
      }
    }
  }
  FUN_10023753((int)param_2,(ushort)uVar5,8);
  FUN_1002381f(param_2,0,local_8,0xff,0,'\0');
  iVar6 = FUN_1004a6e2(param_2,(uint *)(param_2 + 0x5e),param_2[0x10],0xb4,0xff,0,0);
  piVar1 = param_2 + 0x5d;
  piVar10 = param_2 + 0x55;
  *piVar1 = iVar6;
  iVar2 = *piVar10;
  piVar9 = piVar1;
  if (bVar3) {
    piVar9 = piVar10;
    piVar10 = piVar1;
  }
  FUN_1004b2c7(param_3,(iVar2 + param_2[0x4d] + iVar6) * 0x1000000 + 0x1000000U & 0x7f000000 | uVar8
               ,param_2 + 0x4d,piVar9,piVar10,(int *)0x0);
  FUN_10023ad0(param_2,(ushort)uVar5,3);
LAB_10027d95:
  FUN_1004b2c7(param_3,param_2[0x55] * 0x1000000 + 0x1000000U & 0x7f000000 | 0x4000d,param_2 + 0x55,
               (int *)0x0,(int *)0x0,(int *)0x0);
  FUN_10023c8c((int)param_2,uVar7);
  return;
}

