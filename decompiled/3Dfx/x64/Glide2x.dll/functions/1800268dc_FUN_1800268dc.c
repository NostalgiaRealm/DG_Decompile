/*
 * FUN_1800268dc at 1800268dc
 * undefined __fastcall FUN_1800268dc(longlong * param_1, char param_2, byte param_3)
 * Address ranges: 1800268dc-180026a85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800268dc(longlong *param_1,char param_2,byte param_3)

{
  byte *pbVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  DWORD DVar7;
  uint uVar8;
  longlong *plVar9;
  
  iVar2 = *(int *)(param_1[0x28] + 0x2984);
  if (iVar2 == 0) {
    uVar8 = 0;
  }
  else if (iVar2 == 1) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0xffffffff;
    if (iVar2 == 2) {
      uVar8 = 2;
    }
  }
  iVar2 = *(int *)(param_1[0x28] + 0x2988);
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else if (iVar2 == 1) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0xffffffff;
    if (iVar2 == 2) {
      uVar4 = 2;
    }
  }
  uVar5 = 0;
  do {
    if (((param_2 != '\0') || (uVar5 == uVar8)) || (uVar5 == uVar4)) {
      uVar3 = (ulonglong)uVar5;
      lVar6 = uVar3 * 0x170;
      if ((*(byte *)((longlong)param_1 + lVar6 + 0x1e2) & 1) != 0) {
        plVar9 = param_1 + uVar3 * 0x2e + 0x29;
        if ((*(int *)((longlong)param_1 + lVar6 + 0x1bc) == 0) &&
           ((int)param_1[uVar3 * 0x2e + 0x38] == 0)) {
          FUN_180025bb0(param_1,plVar9,1,0);
          pbVar1 = (byte *)((longlong)param_1 + lVar6 + 0x1e2);
          *pbVar1 = *pbVar1 & 0xfe;
        }
        else {
          FUN_180021240(param_1,uVar5,1,0,0,(LONG)param_1[uVar3 * 0x2e + 0x2d],
                        *(LONG *)((longlong)param_1 + lVar6 + 0x16c),0);
          FUN_180025bb0(param_1,plVar9,1,0);
          DVar7 = *(DWORD *)((longlong)param_1 + lVar6 + 0x1b4);
          FUN_18002108c(param_1,uVar5,DVar7,(int)param_1[uVar3 * 0x2e + 0x37],
                        *(char *)((longlong)param_1 + lVar6 + 0x1dd),
                        *(char *)((longlong)param_1 + lVar6 + 0x1e1),'\0','\0',
                        *(undefined1 *)((longlong)param_1 + lVar6 + 0x1df),
                        *(undefined4 *)((longlong)param_1 + lVar6 + 0x1d4),
                        (int)param_1[uVar3 * 0x2e + 0x3b]);
          FUN_180027974((longlong)plVar9,*(int *)((longlong)param_1 + lVar6 + 0x16c),DVar7);
        }
      }
      pbVar1 = (byte *)((longlong)param_1 + lVar6 + 0x1e2);
      *pbVar1 = *pbVar1 | param_3;
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 3);
  return;
}

