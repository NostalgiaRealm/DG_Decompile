/*
 * FUN_1800a9d88 at 1800a9d88
 * undefined8 __fastcall FUN_1800a9d88(longlong * param_1)
 * Address ranges: 1800a9d88-1800a9eca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1800a9d88(longlong *param_1)

{
  char cVar1;
  char extraout_AL;
  char extraout_AL_00;
  char extraout_AL_01;
  char extraout_AL_02;
  char extraout_AL_03;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 uVar2;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  int iVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  undefined1 local_1038 [4096];
  undefined8 uStack_38;
  
  uStack_38 = 0x1800a9d9b;
  FUN_1800fbea0(local_1038,0,0x1000);
  uVar6 = 0;
  iVar3 = 3;
  do {
    (**(code **)(*param_1 + 0x158))(param_1,uVar6,local_1038);
    if (extraout_AL == '\0') {
      cVar5 = '\0';
      goto LAB_1800a9de1;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 3);
  cVar5 = '\x01';
LAB_1800a9de1:
  uVar2 = extraout_var;
  if (cVar5 != '\0') {
    uVar4 = 0;
    do {
      cVar1 = (&DAT_18010fea4)[uVar4 * 8];
      *(char *)((longlong)param_1 + uVar4 * 4 + 0x58) = cVar1;
      if (cVar1 == -1) {
        FUN_1800a99d8(param_1,iVar3,(&DAT_18010fea0)[uVar4 * 2],0);
        uVar2 = extraout_var_00;
        if (extraout_AL_00 != '\0') {
          *(char *)((longlong)param_1 + uVar4 * 4 + 0x58) = (char)iVar3;
          iVar3 = iVar3 + 1;
          goto LAB_1800a9e21;
        }
LAB_1800a9eb5:
        cVar5 = '\0';
        break;
      }
LAB_1800a9e21:
      cVar1 = (&DAT_18010fea5)[uVar4 * 8];
      *(char *)((longlong)param_1 + uVar4 * 4 + 0x59) = cVar1;
      if (cVar1 == -1) {
        FUN_1800a99d8(param_1,iVar3,(&DAT_18010fea0)[uVar4 * 2],8);
        uVar2 = extraout_var_01;
        if (extraout_AL_01 == '\0') goto LAB_1800a9eb5;
        *(char *)((longlong)param_1 + uVar4 * 4 + 0x59) = (char)iVar3;
        iVar3 = iVar3 + 1;
      }
      cVar1 = (&DAT_18010fea6)[uVar4 * 8];
      *(char *)((longlong)param_1 + uVar4 * 4 + 0x5a) = cVar1;
      if (cVar1 == -1) {
        FUN_1800a99d8(param_1,iVar3,(&DAT_18010fea0)[uVar4 * 2],0x10);
        uVar2 = extraout_var_02;
        if (extraout_AL_02 == '\0') goto LAB_1800a9eb5;
        *(char *)((longlong)param_1 + uVar4 * 4 + 0x5a) = (char)iVar3;
        iVar3 = iVar3 + 1;
      }
      cVar1 = (&DAT_18010fea7)[uVar4 * 8];
      *(char *)((longlong)param_1 + uVar4 * 4 + 0x5b) = cVar1;
      if (cVar1 == -1) {
        FUN_1800a99d8(param_1,iVar3,(&DAT_18010fea0)[uVar4 * 2],0x18);
        uVar2 = extraout_var_03;
        if (extraout_AL_03 == '\0') goto LAB_1800a9eb5;
        *(char *)((longlong)param_1 + uVar4 * 4 + 0x5b) = (char)iVar3;
        iVar3 = iVar3 + 1;
      }
      uVar6 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar6;
    } while (uVar6 < 0xe);
  }
  return CONCAT71(uVar2,cVar5);
}

