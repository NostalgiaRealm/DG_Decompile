/*
 * FUN_1000484c at 1000484c
 * undefined4 __fastcall FUN_1000484c(int * param_1, char * param_2, char * param_3, int * param_4, int * param_5, int * param_6)
 * Address ranges: 1000484c-10004949
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall
FUN_1000484c(int *param_1,char *param_2,char *param_3,int *param_4,int *param_5,int *param_6)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  uint local_8;
  
  pcVar6 = param_3 + *param_4;
  do {
    local_8 = 0;
    pcVar3 = param_2;
    do {
      pcVar5 = pcVar3;
      pcVar7 = pcVar6;
      if (*param_4 == *param_5) {
        *param_4 = 0;
        uVar4 = (**(code **)(*param_1 + 4))(0x400,param_3,param_5);
        if (uVar4 != 0) goto LAB_10004943;
        uVar4 = 0;
        if (*param_5 == 0) goto LAB_10004943;
        *param_6 = *param_6 + *param_5;
        pcVar7 = param_3;
      }
      uVar4 = local_8;
      if (local_8 == 0x400) goto LAB_10004943;
      iVar2 = *param_4;
      *param_4 = iVar2 + 1;
      cVar1 = *pcVar7;
      *pcVar5 = cVar1;
      pcVar6 = pcVar7 + 1;
    } while ((cVar1 != '\n') && (pcVar3 = pcVar5 + 1, local_8 = local_8 + 1, cVar1 != '\r'));
    *param_4 = iVar2;
    pcVar6 = pcVar7;
    while ((*pcVar6 == '\n' || (*pcVar6 == '\r'))) {
      *param_4 = *param_4 + 1;
      pcVar6 = pcVar6 + 1;
      if (*param_4 == *param_5) {
        *param_4 = 0;
        uVar4 = (**(code **)(*param_1 + 4))(0x400,param_3,param_5);
        if (uVar4 != 0) {
LAB_10004943:
          return uVar4 & 0xffffff00;
        }
        uVar4 = 0;
        if (*param_5 == 0) goto LAB_10004943;
        *param_6 = *param_6 + *param_5;
        pcVar6 = param_3;
      }
    }
    if (*param_2 != '#') {
      *pcVar5 = '\0';
      return CONCAT31((int3)((uint)param_2 >> 8),1);
    }
  } while( true );
}

