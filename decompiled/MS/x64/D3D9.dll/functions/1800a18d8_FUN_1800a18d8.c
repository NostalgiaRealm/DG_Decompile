/*
 * FUN_1800a18d8 at 1800a18d8
 * undefined __fastcall FUN_1800a18d8(longlong * param_1, int param_2, int param_3)
 * Address ranges: 1800a18d8-1800a1a1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a18d8(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  byte *pbVar2;
  uint uVar3;
  BOOL BVar4;
  LPRECT lprcDst;
  longlong lVar5;
  ulonglong uVar6;
  
  if ((param_1[0x37] == 0) || (param_1[0x41] == 0)) {
    FUN_18009ff3c((longlong)param_1);
  }
  if (param_1[0x37] != 0) {
    uVar3 = param_3 * *(int *)((longlong)param_1 + 0x3c) + param_2;
    uVar6 = (ulonglong)(uVar3 & 0x3f);
    lVar5 = (ulonglong)uVar3 * 0x20;
    pbVar2 = (byte *)((longlong)param_1 +
                     ((longlong)uVar6 >> 3) + (ulonglong)(uVar3 >> 6) * 8 + 0x260);
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar6 & 7));
    BVar4 = IsRectEmpty((RECT *)(*(longlong *)((longlong)param_1 + 0x84) + 0x10 + lVar5));
    if (BVar4 == 0) {
      FUN_1800a0e68(param_1,param_2,param_3);
      lprcDst = (LPRECT)(param_1[0x43] + 0x10 + lVar5);
      UnionRect(lprcDst,lprcDst,(RECT *)(*(longlong *)((longlong)param_1 + 0x84) + 0x10 + lVar5));
      SetRectEmpty((LPRECT)(*(longlong *)((longlong)param_1 + 0x84) + 0x10 + lVar5));
    }
    else {
      BVar4 = IsRectEmpty((RECT *)(param_1[0x39] + 0x10 + lVar5));
      if ((BVar4 == 0) &&
         ((*(byte *)((longlong)param_1 +
                    ((longlong)uVar6 >> 3) + (ulonglong)(uVar3 >> 6) * 8 + 0x260) >> (uVar6 & 7) & 1
          ) != 0)) {
        lVar1 = param_1[0x39];
        FUN_1800a0aa4((longlong)param_1,param_2,param_3,(float)*(int *)(lVar5 + 0x10 + lVar1),
                      (float)*(int *)(lVar5 + 0x14 + lVar1),(float)*(int *)(lVar5 + 0x18 + lVar1),
                      (float)*(int *)(lVar5 + 0x1c + lVar1),0);
      }
    }
  }
  return;
}

