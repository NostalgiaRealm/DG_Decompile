/*
 * FUN_180032f50 at 180032f50
 * undefined8 __fastcall FUN_180032f50(longlong * param_1, char * param_2, char * param_3, uint * param_4, uint * param_5, int * param_6)
 * Address ranges: 180032f50-180033083
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180032f50(longlong *param_1,char *param_2,char *param_3,uint *param_4,uint *param_5,int *param_6
             )

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  char *pcVar6;
  ulonglong uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  
  pcVar10 = param_3 + *param_4;
  bVar5 = true;
  do {
    iVar8 = 0;
    pcVar6 = param_2;
    do {
      pcVar9 = pcVar6;
      uVar7 = (ulonglong)*param_5;
      pcVar11 = pcVar10;
      if (*param_4 == *param_5) {
        lVar3 = *param_1;
        *param_4 = 0;
        uVar7 = (**(code **)(lVar3 + 8))(param_1,0x400,param_3,param_5);
        if ((int)uVar7 != 0) goto LAB_18003306d;
        uVar2 = *param_5;
        uVar7 = (ulonglong)uVar2;
        if (uVar2 == 0) goto LAB_18003306d;
        *param_6 = *param_6 + uVar2;
        pcVar11 = param_3;
      }
      if (iVar8 == 0x400) goto LAB_18003306d;
      uVar2 = *param_4;
      *param_4 = uVar2 + 1;
      cVar1 = *pcVar11;
      *pcVar9 = cVar1;
      if (cVar1 == '\n') break;
      iVar8 = iVar8 + 1;
      pcVar10 = pcVar11 + 1;
      pcVar6 = pcVar9 + 1;
    } while (cVar1 != '\r');
    *param_4 = uVar2;
    pcVar10 = pcVar11;
    while ((*pcVar10 == '\n' || (*pcVar10 == '\r'))) {
      *param_4 = *param_4 + 1;
      if (*param_4 == *param_5) {
        lVar3 = *param_1;
        *param_4 = 0;
        uVar7 = (**(code **)(lVar3 + 8))(param_1,0x400,param_3,param_5);
        if ((int)uVar7 != 0) {
LAB_18003306d:
          return uVar7 & 0xffffffffffffff00;
        }
        uVar2 = *param_5;
        uVar7 = (ulonglong)uVar2;
        if (uVar2 == 0) goto LAB_18003306d;
        *param_6 = *param_6 + uVar2;
        pcVar10 = param_3;
      }
      else {
        pcVar10 = pcVar10 + 1;
      }
    }
    bVar4 = false;
    if (*param_2 == '#') {
      bVar4 = bVar5;
    }
    bVar5 = bVar4;
    if (!bVar4) {
      *pcVar9 = '\0';
      return CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    }
  } while( true );
}

