/*
 * FUN_180092848 at 180092848
 * undefined __fastcall FUN_180092848(longlong * param_1, int param_2, int param_3)
 * Address ranges: 180092848-1800929e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180092848(longlong *param_1,int param_2,int param_3)

{
  LPRECT lprcDst;
  RECT *pRVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  byte *pbVar7;
  uint uVar8;
  BOOL BVar9;
  ulonglong uVar10;
  
  if ((param_1[0x33] == 0) || (param_1[0x3b] == 0)) {
    FUN_180091434((longlong)param_1);
  }
  if (param_1[0x33] != 0) {
    uVar8 = param_3 * *(int *)((longlong)param_1 + 0x3c) + param_2;
    uVar10 = (ulonglong)uVar8;
    pbVar7 = (byte *)((longlong)param_1 +
                     ((longlong)(ulonglong)(uVar8 & 0x3f) >> 3) +
                     (ulonglong)(uVar8 >> 6) * 8 + 0x260);
    *pbVar7 = *pbVar7 & ~('\x01' << ((ulonglong)(uVar8 & 0x3f) & 7));
    BVar9 = IsRectEmpty((RECT *)(param_1[0x12] + 0x18 + uVar10 * 0x28));
    if (BVar9 == 0) {
      FUN_180091eb8(param_1,param_2,param_3);
      lprcDst = (LPRECT)(param_1[0x3e] + 0x18 + uVar10 * 0x28);
      UnionRect(lprcDst,lprcDst,(RECT *)(param_1[0x12] + 0x18 + uVar10 * 0x28));
      SetRectEmpty((LPRECT)(param_1[0x12] + 0x18 + uVar10 * 0x28));
    }
    else if (param_1[0x1a] != 0) {
      BVar9 = IsRectEmpty((RECT *)(param_1[0x1a] + 0x18 + uVar10 * 0x28));
      if (BVar9 == 0) {
        lVar6 = param_1[0x1a];
        iVar2 = *(int *)(lVar6 + 0x1c + uVar10 * 0x28);
        iVar3 = *(int *)(lVar6 + 0x20 + uVar10 * 0x28);
        pRVar1 = (RECT *)(lVar6 + 0x18 + uVar10 * 0x28);
        iVar4 = *(int *)(lVar6 + 0x24 + uVar10 * 0x28);
        iVar5 = pRVar1->left;
        FUN_18008e9f0((longlong)param_1,(longlong *)param_1[0x33],(longlong *)param_1[0x17],param_2,
                      param_3,pRVar1);
        FUN_180091c30((longlong)param_1,param_2,param_3,(float)iVar5,(float)iVar2,(float)iVar3,
                      (float)iVar4,0);
      }
    }
  }
  return;
}

