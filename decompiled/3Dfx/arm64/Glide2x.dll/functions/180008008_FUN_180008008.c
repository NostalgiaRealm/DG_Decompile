/*
 * FUN_180008008 at 180008008
 * undefined8 __cdecl FUN_180008008(longlong * param_1, char * param_2, char * param_3, uint * param_4, uint * param_5, int * param_6)
 * Address ranges: 180008008-180008187
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180008008(longlong *param_1,char *param_2,char *param_3,uint *param_4,uint *param_5,int *param_6
             )

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  
  pcVar10 = param_3 + *param_4;
  bVar4 = true;
  do {
    iVar7 = 0;
    pcVar5 = param_2;
    do {
      pcVar11 = pcVar5;
      pcVar9 = pcVar10;
      if (*param_4 == *param_5) {
        lVar8 = *param_1;
        *param_4 = 0;
        iVar6 = (**(code **)(lVar8 + 8))(param_1,0x400,param_3,param_5);
        if (iVar6 != 0) {
          return 0;
        }
        if (*param_5 == 0) {
          return 0;
        }
        *param_6 = *param_5 + *param_6;
        pcVar9 = param_3;
      }
      if (iVar7 == 0x400) {
        return 0;
      }
      uVar1 = *param_4;
      *param_4 = uVar1 + 1;
      pcVar10 = pcVar9 + 1;
      cVar3 = *pcVar9;
      *pcVar11 = cVar3;
    } while ((cVar3 != '\n') && (iVar7 = iVar7 + 1, pcVar5 = pcVar11 + 1, cVar3 != '\r'));
    *param_4 = uVar1;
    pcVar10 = pcVar9;
    while (*pcVar10 == '\n' || *pcVar10 == '\r') {
      uVar1 = *param_4;
      uVar2 = *param_5;
      *param_4 = uVar1 + 1;
      if (uVar1 + 1 == uVar2) {
        lVar8 = *param_1;
        *param_4 = 0;
        iVar7 = (**(code **)(lVar8 + 8))(param_1,0x400,param_3,param_5);
        if ((iVar7 != 0) || (*param_5 == 0)) {
          return 0;
        }
        *param_6 = *param_5 + *param_6;
        pcVar10 = param_3;
      }
      else {
        pcVar10 = pcVar10 + 1;
      }
    }
    if (*param_2 != '#') {
      bVar4 = false;
    }
  } while (bVar4);
  *pcVar11 = '\0';
  return 1;
}

