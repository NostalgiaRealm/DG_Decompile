/*
 * FUN_100086a8 at 100086a8
 * undefined FUN_100086a8(void)
 * Address ranges: 100086a8-1000888b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_100086a8(undefined4 param_1,char *param_2,char *param_3,int *param_4,int *param_5,int *param_6)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  code *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  bVar4 = true;
  pcVar9 = param_3 + *param_4;
  do {
    iVar8 = 0;
    pcVar6 = param_2;
    do {
      pcVar2 = pcVar6;
      pcVar3 = pcVar9;
      if (*param_4 == *param_5) {
        *param_4 = 0;
        (*pcVar5)();
        iVar7 = (*extraout_w11)(param_1,0x400,param_3,param_5);
        if (iVar7 != 0) {
          return 0;
        }
        if (*param_5 == 0) {
          return 0;
        }
        *param_6 = *param_5 + *param_6;
        pcVar3 = param_3;
      }
      if (iVar8 == 0x400) {
        return 0;
      }
      iVar7 = *param_4;
      *param_4 = iVar7 + 1;
      cVar1 = *pcVar3;
      *pcVar2 = cVar1;
      if (cVar1 == '\n') break;
      iVar8 = iVar8 + 1;
      pcVar9 = pcVar3 + 1;
      pcVar6 = pcVar2 + 1;
    } while (cVar1 != '\r');
    *param_4 = iVar7;
    pcVar9 = pcVar3;
    while (*pcVar9 == '\n' || *pcVar9 == '\r') {
      iVar8 = *param_4;
      iVar7 = *param_5;
      *param_4 = iVar8 + 1;
      if (iVar8 + 1 == iVar7) {
        *param_4 = 0;
        (*pcVar5)();
        iVar8 = (*extraout_w11_00)(param_1,0x400,param_3,param_5);
        if ((iVar8 != 0) || (*param_5 == 0)) {
          return 0;
        }
        *param_6 = *param_5 + *param_6;
        pcVar9 = param_3;
      }
      else {
        pcVar9 = pcVar9 + 1;
      }
    }
    if (*param_2 != '#') {
      bVar4 = false;
    }
    if (!bVar4) {
      *pcVar2 = '\0';
      return 1;
    }
  } while( true );
}

