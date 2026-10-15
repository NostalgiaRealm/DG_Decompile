/*
 * FUN_10084819 at 10084819
 * undefined4 __fastcall FUN_10084819(void * param_1)
 * Address ranges: 10084819-10084911
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10084819(void *param_1)

{
  undefined4 uVar1;
  char cVar2;
  char extraout_AL;
  undefined4 uVar3;
  undefined3 extraout_var;
  uint uVar4;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 uVar5;
  undefined4 extraout_ECX;
  int iVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_c;
  
  *(undefined1 *)((int)param_1 + 300) = 0;
  cVar2 = FUN_1003a4d0(*(int *)((int)param_1 + 0x34));
  if (cVar2 == '\0') {
    if (*(int *)((int)param_1 + 0x1c) == 0) {
      iVar6 = FUN_100cfd89(0x400);
      *(int *)((int)param_1 + 8) = iVar6;
      uVar5 = 0;
      if (iVar6 == 0) goto LAB_10084905;
    }
    cVar2 = FUN_100841a9(param_1,'\x01','\0');
    *(char *)((int)param_1 + 300) = cVar2;
    uVar5 = extraout_var_02;
  }
  else {
    FUN_1008f5b4(param_1,&local_1c);
    uVar1 = *(undefined4 *)(&DAT_100d2550 + *(int *)((int)param_1 + 0x1c) * 4);
    iVar9 = 0;
    bVar8 = 0;
    cVar7 = '\x01';
    cVar2 = '\x01';
    iVar6 = 0;
    uVar3 = FUN_10082049(*(int *)((int)param_1 + 0x1c));
    FUN_10081718((void *)((int)param_1 + 0x48),*(uint *)((int)param_1 + 0x14),
                 *(uint *)((int)param_1 + 0x18),*(uint *)((int)param_1 + 0x20),
                 *(uint *)((int)param_1 + 0x24),1,local_1c,local_18,local_14,uVar1,uVar3,iVar6,
                 local_c,cVar2,cVar7,bVar8,iVar9);
    *(char *)((int)param_1 + 300) = extraout_AL;
    uVar5 = extraout_var;
    if ((extraout_AL != '\0') && (*(int *)((int)param_1 + 0x24) != 1)) {
      uVar4 = FUN_10081a42((void *)((int)param_1 + 0xf0),*(int **)((int)param_1 + 0x54),local_18,0,
                           uVar1,extraout_ECX,0,1);
      *(char *)((int)param_1 + 300) = (char)uVar4;
      FUN_100827eb(param_1);
      uVar5 = extraout_var_00;
      if (*(char *)((int)param_1 + 300) == '\0') {
        FUN_10081bba((void *)((int)param_1 + 0x48),*(int *)((int)param_1 + 0x20),
                     *(int *)((int)param_1 + 0x24));
        uVar5 = extraout_var_01;
      }
    }
  }
LAB_10084905:
  return CONCAT31(uVar5,*(undefined1 *)((int)param_1 + 300));
}

