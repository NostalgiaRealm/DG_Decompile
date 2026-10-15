/*
 * FUN_101230e0 at 101230e0
 * undefined FUN_101230e0(void)
 * Address ranges: 101230e0-10123207
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101230e0(int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint local_90 [2];
  int aiStack_88 [18];
  
  iVar1 = param_2 * 0x18 + 0x10;
  iVar7 = 0;
  iVar6 = 0;
  iVar3 = *param_3;
  while (iVar3 != 0) {
    iVar3 = param_3[iVar6];
    local_90[0] = param_2;
    iVar4 = FUN_10132710(iVar3);
    FUN_10122c50(param_1,iVar3,iVar4 + 1);
    piVar2 = aiStack_88 + iVar6;
    iVar6 = iVar6 + 1;
    *piVar2 = iVar7 + iVar1 + -8;
    iVar7 = iVar4 + 1 + iVar7;
    param_2 = local_90[0];
    iVar3 = param_3[iVar6];
  }
  local_90[0] = 0xabababab;
  FUN_10122c50(param_1,local_90,-iVar7 & 3U);
  iVar6 = *param_1;
  *(uint *)(iVar6 + 4) = (-iVar7 & 3U) + iVar7 + iVar1 + -8;
  *(uint *)(iVar6 + 8) = param_2;
  uVar5 = 0;
  piVar2 = (int *)(*param_1 + 0x10);
  if (param_2 != 0) {
    do {
      uVar5 = uVar5 + 1;
      *piVar2 = aiStack_88[*piVar2];
      piVar2 = piVar2 + 6;
    } while (uVar5 < param_2);
  }
  return;
}

