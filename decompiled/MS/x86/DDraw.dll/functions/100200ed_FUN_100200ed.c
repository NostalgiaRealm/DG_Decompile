/*
 * FUN_100200ed at 100200ed
 * uint __fastcall FUN_100200ed(int * param_1)
 * Address ranges: 100200ed-10020218
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint __fastcall FUN_100200ed(int *param_1)

{
  char cVar1;
  char extraout_AL;
  char extraout_AL_00;
  char extraout_AL_01;
  char extraout_AL_02;
  undefined4 uVar2;
  uint3 uVar3;
  uint3 extraout_var;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_100c [1024];
  int *local_c;
  undefined4 uStack_8;
  
  uStack_8 = 0x10200fa;
  FUN_10060d45(local_100c,0,0x1000);
  uVar5 = 0;
  iVar4 = 3;
  do {
    uVar2 = (**(code **)(*param_1 + 0x94))(uVar5,local_100c,uVar5 == 0);
    uVar3 = (uint3)((uint)uVar2 >> 8);
    if ((char)uVar2 == '\0') {
      uVar5 = (uint)uVar3 << 8;
      uStack_8 = uStack_8 & 0xffffff;
      goto LAB_1002014c;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 3);
  uVar5 = CONCAT31(uVar3,uStack_8._3_1_);
LAB_1002014c:
  uVar6 = 0;
  do {
    if ((char)uVar5 == '\0') {
      return uVar5;
    }
    cVar1 = (&DAT_10069384)[uVar6 * 8];
    uVar3 = (uint3)(uVar5 >> 8);
    local_c = &DAT_10069380 + uVar6 * 2;
    *(char *)(param_1 + uVar6 + 0xf) = cVar1;
    if (cVar1 == -1) {
      FUN_1001fd82(param_1,iVar4,*local_c,0);
      uVar3 = extraout_var;
      if (extraout_AL == '\0') goto LAB_10020212;
      *(char *)(param_1 + uVar6 + 0xf) = (char)iVar4;
      iVar4 = iVar4 + 1;
    }
    cVar1 = (&DAT_10069385)[uVar6 * 8];
    *(char *)((int)param_1 + uVar6 * 4 + 0x3d) = cVar1;
    if (cVar1 == -1) {
      FUN_1001fd82(param_1,iVar4,*local_c,8);
      uVar3 = extraout_var_00;
      if (extraout_AL_00 == '\0') goto LAB_10020212;
      *(char *)((int)param_1 + uVar6 * 4 + 0x3d) = (char)iVar4;
      iVar4 = iVar4 + 1;
    }
    cVar1 = (&DAT_10069386)[uVar6 * 8];
    *(char *)((int)param_1 + uVar6 * 4 + 0x3e) = cVar1;
    if (cVar1 == -1) {
      FUN_1001fd82(param_1,iVar4,*local_c,0x10);
      uVar3 = extraout_var_01;
      if (extraout_AL_01 == '\0') goto LAB_10020212;
      *(char *)((int)param_1 + uVar6 * 4 + 0x3e) = (char)iVar4;
      iVar4 = iVar4 + 1;
    }
    cVar1 = (&DAT_10069387)[uVar6 * 8];
    *(char *)((int)param_1 + uVar6 * 4 + 0x3f) = cVar1;
    if (cVar1 == -1) {
      FUN_1001fd82(param_1,iVar4,(&DAT_10069380)[uVar6 * 2],0x18);
      uVar3 = extraout_var_02;
      if (extraout_AL_02 == '\0') {
LAB_10020212:
        return (uint)uVar3 << 8;
      }
      *(char *)((int)param_1 + uVar6 * 4 + 0x3f) = (char)iVar4;
      iVar4 = iVar4 + 1;
    }
    uVar5 = CONCAT31(uVar3,uStack_8._3_1_);
    uVar6 = uVar6 + 1;
    if (0xd < uVar6) {
      return uVar5;
    }
  } while( true );
}

