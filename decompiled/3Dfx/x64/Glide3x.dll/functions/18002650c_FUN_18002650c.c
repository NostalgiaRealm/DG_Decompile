/*
 * FUN_18002650c at 18002650c
 * undefined __fastcall FUN_18002650c(longlong * param_1, char param_2, ulonglong param_3, ulonglong param_4)
 * Address ranges: 18002650c-180026703
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002650c(longlong *param_1,char param_2,ulonglong param_3,ulonglong param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  LPRECT lprcDst;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined7 uVar12;
  RECT *lprcSrc2;
  RECT local_58;
  
  bVar3 = (byte)param_3;
  uVar5 = FUN_180014854(param_1,*(int *)(param_1[0x28] + 0x29fc));
  uVar7 = (ulonglong)*(uint *)(param_1[0x28] + 0x2a00);
  uVar6 = FUN_180014854(param_1,*(uint *)(param_1[0x28] + 0x2a00));
  uVar10 = 0;
  do {
    uVar9 = (uint)uVar10;
    if (((param_2 != '\0') || (uVar9 == uVar5)) || (uVar9 == uVar6)) {
      lVar11 = uVar10 * 0x180;
      if ((*(byte *)(lVar11 + 0x1e2 + (longlong)param_1) & 1) != 0) {
        plVar8 = param_1 + uVar10 * 0x30 + 0x29;
        if ((*(int *)(lVar11 + 0x1bc + (longlong)param_1) == 0) &&
           ((int)param_1[uVar10 * 0x30 + 0x38] == 0)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          FUN_18000fd5c(param_1[0x28],uVar7,param_3,param_4);
          uVar12 = (undefined7)(param_3 >> 8);
          FUN_1800146d4(param_1,uVar9,1,0,0,(LONG)param_1[uVar10 * 0x30 + 0x2d],
                        *(LONG *)(lVar11 + 0x16c + (longlong)param_1),0);
          FUN_18002573c(param_1,plVar8,CONCAT71(uVar12,1),(uint **)0x0);
          param_4 = (ulonglong)*(uint *)(param_1 + uVar10 * 0x30 + 0x37);
          uVar2 = *(uint *)(lVar11 + 0x1b4 + (longlong)param_1);
          param_3 = (ulonglong)uVar2;
          FUN_180014520(param_1,uVar9,uVar2,*(uint *)(param_1 + uVar10 * 0x30 + 0x37),
                        *(char *)(lVar11 + 0x1dd + (longlong)param_1),
                        *(char *)(lVar11 + 0x1e1 + (longlong)param_1),'\0','\0',
                        *(undefined1 *)(lVar11 + 0x1df + (longlong)param_1),
                        *(undefined4 *)(lVar11 + 0x1d4 + (longlong)param_1),
                        (int)param_1[uVar10 * 0x30 + 0x3b]);
          uVar2 = *(uint *)(lVar11 + 0x16c + (longlong)param_1);
          uVar7 = (ulonglong)uVar2;
          FUN_18001a188((longlong)plVar8,uVar2,(DWORD)param_3);
          LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1[0x28] + 0x3330) + 0x620));
        }
        else {
          local_58.right = (LONG)param_1[uVar10 * 0x30 + 0x2d];
          lprcDst = (LPRECT)((longlong)param_1 + lVar11 + 0x17c);
          local_58.bottom = *(LONG *)(lVar11 + 0x16c + (longlong)param_1);
          lprcSrc2 = &local_58;
          local_58.left = 0;
          local_58.top = 0;
          UnionRect(lprcDst,lprcDst,lprcSrc2);
          param_4 = 0;
          param_3 = CONCAT71((int7)((ulonglong)lprcSrc2 >> 8),1);
          FUN_18002573c(param_1,plVar8,param_3,(uint **)0x0);
          uVar2 = *(uint *)(lVar11 + 0x16c + (longlong)param_1);
          uVar7 = (ulonglong)uVar2;
          FUN_18001a188((longlong)plVar8,uVar2,(DWORD)param_3);
          pbVar1 = (byte *)(lVar11 + 0x1e2 + (longlong)param_1);
          *pbVar1 = *pbVar1 & 0xfe;
        }
      }
      pbVar1 = (byte *)(lVar11 + 0x1e2 + (longlong)param_1);
      *pbVar1 = *pbVar1 | bVar3;
    }
    uVar10 = (ulonglong)(uVar9 + 1);
  } while ((int)(uVar9 + 1) < 7);
  return;
}

