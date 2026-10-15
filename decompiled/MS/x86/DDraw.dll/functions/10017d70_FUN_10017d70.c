/*
 * FUN_10017d70 at 10017d70
 * undefined4 __fastcall FUN_10017d70(void * param_1)
 * Address ranges: 10017d70-10017e75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10017d70(void *param_1)

{
  undefined4 uVar1;
  char cVar2;
  char extraout_AL;
  undefined3 extraout_var;
  uint uVar3;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar4;
  undefined3 extraout_var_02;
  undefined3 uVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_c;
  
  *(undefined1 *)((int)param_1 + 300) = 0;
  cVar2 = FUN_10006992(*(int *)((int)param_1 + 0x34));
  if (cVar2 == '\0') {
    if (*(int *)((int)param_1 + 0x1c) == 0) {
      iVar4 = FUN_10060bfe(0x400);
      *(int *)((int)param_1 + 8) = iVar4;
      uVar5 = 0;
      if (iVar4 == 0) goto LAB_10017e69;
    }
    cVar2 = FUN_100177a6(param_1,'\x01','\0');
    *(char *)((int)param_1 + 300) = cVar2;
    uVar5 = extraout_var_02;
  }
  else {
    FUN_100221f0(param_1,&local_1c);
    iVar4 = *(int *)((int)param_1 + 0x1c);
    uVar6 = 0x1688;
    uVar1 = *(undefined4 *)(&DAT_10062738 + iVar4 * 4);
    if ((iVar4 == 0x19) || (iVar4 == 0x1a)) {
      uVar6 = 0x1249;
    }
    FUN_10014f74((void *)((int)param_1 + 0x48),*(uint *)((int)param_1 + 0x14),
                 *(uint *)((int)param_1 + 0x18),*(uint *)((int)param_1 + 0x20),
                 *(uint *)((int)param_1 + 0x24),1,local_1c,local_18,local_14,uVar1,uVar6,0,local_c,
                 '\x01','\x01',0,0);
    *(char *)((int)param_1 + 300) = extraout_AL;
    uVar5 = extraout_var;
    if ((extraout_AL != '\0') && (*(int *)((int)param_1 + 0x24) != 1)) {
      uVar3 = FUN_1001529e((void *)((int)param_1 + 0xf0),*(int **)((int)param_1 + 0x54),local_18,
                           extraout_ECX,uVar1,extraout_ECX,0,1);
      *(char *)((int)param_1 + 300) = (char)uVar3;
      FUN_10015d96(param_1);
      uVar5 = extraout_var_00;
      if (*(char *)((int)param_1 + 300) == '\0') {
        FUN_1001540f((void *)((int)param_1 + 0x48),*(int *)((int)param_1 + 0x20),
                     *(int *)((int)param_1 + 0x24));
        uVar5 = extraout_var_01;
      }
    }
  }
LAB_10017e69:
  return CONCAT31(uVar5,*(undefined1 *)((int)param_1 + 300));
}

