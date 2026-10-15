/*
 * FUN_10035756 at 10035756
 * undefined4 __stdcall FUN_10035756(int param_1, int * param_2, undefined * param_3, undefined4 param_4)
 * Address ranges: 10035756-10035888
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10035756(int param_1,int *param_2,undefined *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int local_ec [27];
  int local_80 [31];
  
  FUN_10060d45(local_80 + 1,0,0x78);
  FUN_10060d45(local_ec + 1,0,0x68);
  piVar1 = param_2;
  local_ec[0] = 0x6c;
  local_80[0] = 0x7c;
  FUN_1002ad61(param_2,local_80);
  if (local_80[0] == 0x7c) {
    piVar6 = local_80;
    piVar7 = local_ec;
    for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar7 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
    }
    local_ec[0] = 0x6c;
  }
  iVar3 = 0;
  do {
    iVar4 = 0;
    if (*(int *)(param_1 + iVar3 * 4) != (&DAT_100623c0)[iVar3]) goto LAB_100357e0;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  goto LAB_1003580e;
  while (iVar4 = iVar4 + 1, iVar4 != 4) {
LAB_100357e0:
    iVar3 = 0;
    iVar5 = iVar3;
    if (*(int *)(param_1 + iVar4 * 4) != (&DAT_100623d0)[iVar4]) goto LAB_100357f9;
  }
  goto LAB_1003580e;
  while (iVar4 = iVar4 + 1, iVar4 != 4) {
LAB_1003582c:
    if (*(int *)(param_1 + iVar4 * 4) != (&DAT_100623f0)[iVar4]) goto LAB_10035866;
  }
  goto LAB_10035841;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_10035866:
    if (*(int *)(param_1 + iVar3 * 4) != (&DAT_10062400)[iVar3]) goto LAB_1003587d;
  }
LAB_10035841:
  param_2 = (int *)0x0;
  iVar3 = (**(code **)(*piVar1 + 0x34))(param_1,&param_2,0);
  if (iVar3 < 0) goto LAB_1003587d;
  piVar1 = local_80;
  goto LAB_10035858;
  while (iVar5 = iVar5 + 1, iVar5 != 4) {
LAB_100357f9:
    iVar4 = iVar3;
    if (*(int *)(param_1 + iVar5 * 4) != (&DAT_100623e0)[iVar5]) goto LAB_1003582c;
  }
LAB_1003580e:
  param_2 = (int *)0x0;
  iVar3 = (**(code **)(*piVar1 + 0x34))(param_1,&param_2,0);
  if (iVar3 < 0) {
LAB_1003587d:
    uVar2 = 0x80004005;
  }
  else {
    piVar1 = local_ec;
LAB_10035858:
    uVar2 = (*(code *)param_3)(param_2,piVar1,param_4);
  }
  return uVar2;
}

