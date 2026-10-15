/*
 * FUN_100c3ee5 at 100c3ee5
 * undefined __fastcall FUN_100c3ee5(int * param_1, int param_2, int * param_3)
 * Address ranges: 100c3ee5-100c3f97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_100c3ee5(int *param_1,int param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  int aiStack_54 [16];
  int local_14;
  uint local_10;
  int local_c;
  int *local_8;
  
  iVar5 = 0;
  local_c = 0;
  local_10 = param_2 * 0x18 + 0x10;
  iVar3 = *param_3;
  local_8 = param_1;
  while (local_14 = param_2, iVar3 != 0) {
    pcVar2 = (char *)param_3[local_c];
    pcVar6 = pcVar2;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_100c3d16(param_1,(undefined4 *)pcVar2,(uint)(pcVar6 + (1 - (int)(pcVar2 + 1))));
    iVar3 = iVar5 + (local_10 - 8);
    iVar5 = iVar5 + (int)(pcVar6 + (1 - (int)(pcVar2 + 1)));
    aiStack_54[local_c] = iVar3;
    local_c = local_c + 1;
    param_2 = local_14;
    iVar3 = param_3[local_c];
  }
  param_3 = (int *)0xabababab;
  FUN_100c3d16(local_8,&param_3,-iVar5 & 3U);
  iVar3 = *local_8;
  *(uint *)(iVar3 + 4) = iVar5 + ((-iVar5 & 3U | local_10) - 8);
  *(int *)(iVar3 + 8) = param_2;
  piVar4 = (int *)(*local_8 + 0x10);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *piVar4 = aiStack_54[*piVar4];
    piVar4 = piVar4 + 6;
  }
  return;
}

