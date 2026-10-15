/*
 * FUN_1800338f8 at 1800338f8
 * undefined __fastcall FUN_1800338f8(longlong * param_1, char param_2, ulonglong param_3)
 * Address ranges: 1800338f8-180033b18
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800338f8(longlong *param_1,char param_2,ulonglong param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  LPRECT lprcDst;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined7 uVar10;
  RECT *lprcSrc2;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  RECT local_58;
  
  uVar11 = param_1[0x28];
  bVar3 = (byte)param_3;
  iVar8 = *(int *)(uVar11 + 0x2984);
  uVar5 = 2;
  if (iVar8 == 0) {
    iVar12 = 0;
  }
  else if (iVar8 == 1) {
    iVar12 = 1;
  }
  else {
    iVar12 = -1;
    if (iVar8 == 2) {
      iVar12 = 2;
    }
  }
  iVar8 = *(int *)(uVar11 + 0x2988);
  if (iVar8 == 0) {
    iVar7 = 0;
  }
  else if (iVar8 == 1) {
    iVar7 = 1;
  }
  else {
    iVar7 = -1;
    if (iVar8 == 2) {
      iVar7 = 2;
    }
  }
  uVar9 = 0;
  do {
    iVar8 = (int)uVar9;
    if (((param_2 != '\0') || (iVar8 == iVar12)) || (iVar8 == iVar7)) {
      lVar6 = uVar9 * 0x180;
      if ((*(byte *)(lVar6 + 0x1e2 + (longlong)param_1) & 1) != 0) {
        plVar13 = param_1 + uVar9 * 0x30 + 0x29;
        if ((*(int *)(lVar6 + 0x1bc + (longlong)param_1) == 0) &&
           ((int)param_1[uVar9 * 0x30 + 0x38] == 0)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          FUN_18001cf18(param_1[0x28],uVar5,param_3,uVar11);
          uVar10 = (undefined7)(param_3 >> 8);
          FUN_180021240(param_1,iVar8,1,0,0,(LONG)param_1[uVar9 * 0x30 + 0x2d],
                        *(LONG *)(lVar6 + 0x16c + (longlong)param_1),0);
          FUN_180032b28(param_1,plVar13,CONCAT71(uVar10,1),(uint **)0x0);
          uVar11 = (ulonglong)*(uint *)(param_1 + uVar9 * 0x30 + 0x37);
          uVar2 = *(uint *)(lVar6 + 0x1b4 + (longlong)param_1);
          param_3 = (ulonglong)uVar2;
          FUN_18002108c(param_1,iVar8,uVar2,*(uint *)(param_1 + uVar9 * 0x30 + 0x37),
                        *(char *)(lVar6 + 0x1dd + (longlong)param_1),
                        *(char *)(lVar6 + 0x1e1 + (longlong)param_1),'\0','\0',
                        *(undefined1 *)(lVar6 + 0x1df + (longlong)param_1),
                        *(undefined4 *)(lVar6 + 0x1d4 + (longlong)param_1),
                        (int)param_1[uVar9 * 0x30 + 0x3b]);
          uVar2 = *(uint *)(lVar6 + 0x16c + (longlong)param_1);
          uVar5 = (ulonglong)uVar2;
          FUN_180027974((longlong)plVar13,uVar2,(DWORD)param_3);
          LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1[0x28] + 0x31b0) + 0x620));
        }
        else {
          local_58.right = (LONG)param_1[uVar9 * 0x30 + 0x2d];
          lprcDst = (LPRECT)((longlong)param_1 + lVar6 + 0x17c);
          local_58.bottom = *(LONG *)(lVar6 + 0x16c + (longlong)param_1);
          lprcSrc2 = &local_58;
          local_58.left = 0;
          local_58.top = 0;
          UnionRect(lprcDst,lprcDst,lprcSrc2);
          uVar11 = 0;
          param_3 = CONCAT71((int7)((ulonglong)lprcSrc2 >> 8),1);
          FUN_180032b28(param_1,plVar13,param_3,(uint **)0x0);
          uVar2 = *(uint *)(lVar6 + 0x16c + (longlong)param_1);
          uVar5 = (ulonglong)uVar2;
          FUN_180027974((longlong)plVar13,uVar2,(DWORD)param_3);
          pbVar1 = (byte *)(lVar6 + 0x1e2 + (longlong)param_1);
          *pbVar1 = *pbVar1 & 0xfe;
        }
      }
      pbVar1 = (byte *)(lVar6 + 0x1e2 + (longlong)param_1);
      *pbVar1 = *pbVar1 | bVar3;
    }
    uVar9 = (ulonglong)(iVar8 + 1U);
  } while ((int)(iVar8 + 1U) < 3);
  return;
}

