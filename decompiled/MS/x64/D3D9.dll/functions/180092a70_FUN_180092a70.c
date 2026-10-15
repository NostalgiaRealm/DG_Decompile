/*
 * FUN_180092a70 at 180092a70
 * undefined __fastcall FUN_180092a70(longlong * param_1, ulonglong param_2, int param_3)
 * Address ranges: 180092a70-180092d73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180092a70(longlong *param_1,ulonglong param_2,int param_3)

{
  LPRECT lprcDst;
  byte bVar1;
  byte *pbVar2;
  uint xRight;
  BOOL BVar3;
  uint yBottom;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  tagRECT local_48;
  ulonglong uVar10;
  
  uVar5 = (uint)param_2;
  uVar7 = param_2 & 0xffffffff;
  if ((*(char *)((longlong)param_1 + 0x249) == '\0') ||
     (*(char *)((longlong)param_1 + 0x24a) == '\0')) {
    FUN_18008ec20((longlong)param_1,uVar5,param_3);
  }
  else {
    uVar9 = param_3 * *(int *)((longlong)param_1 + 0x3c) + uVar5;
    uVar10 = (ulonglong)uVar9;
    if (param_1[0x35] != 0) {
      BVar3 = IsRectEmpty((RECT *)(param_1[0x36] + 0x18 + uVar10 * 0x28));
      if (BVar3 == 0) {
        lVar6 = param_1[0x36];
        param_2 = uVar7;
        FUN_180091c30((longlong)param_1,uVar5,param_3,(float)*(int *)(lVar6 + 0x18 + uVar10 * 0x28),
                      (float)*(int *)(lVar6 + 0x1c + uVar10 * 0x28),
                      (float)*(int *)(lVar6 + 0x20 + uVar10 * 0x28),
                      (float)*(int *)(lVar6 + 0x24 + uVar10 * 0x28),1);
      }
    }
    BVar3 = IsRectEmpty((RECT *)(param_1[0x12] + 0x18 + uVar10 * 0x28));
    if (BVar3 == 0) {
      if ((param_1[0x35] != 0) && (param_1[0x17] != 0)) {
        FUN_1800dfe48(param_1[10],param_2,(longlong)param_1);
        lprcDst = (LPRECT)(param_1[0x3e] + 0x18 + uVar10 * 0x28);
        UnionRect(lprcDst,lprcDst,(RECT *)(param_1[0x12] + 0x18 + uVar10 * 0x28));
        if (*(int *)((longlong)param_1 + 0x44) - 3U < 3) {
          FUN_180091978((longlong)param_1,uVar5,param_3,2);
          (**(code **)(**(longlong **)(param_1[0xb] + 8) + 0x178))
                    (*(longlong **)(param_1[0xb] + 8),param_1[0x33],param_1[0x3b]);
        }
        else {
          if (param_1[0x10] != 0) {
            lVar6 = 0x54;
            if (*(int *)((longlong)param_1 + 0x2c) != 0x15) {
              lVar6 = 0x44;
            }
            (**(code **)(**(longlong **)(param_1[0xb] + 8) + 0x1c8))
                      (*(longlong **)(param_1[0xb] + 8),param_1[0xf],uVar9,param_1[0x10],uVar9,
                       *(undefined4 *)(lVar6 + param_1[1]));
          }
          pbVar2 = (byte *)((longlong)param_1 +
                           ((longlong)(ulonglong)(uVar9 & 0x3f) >> 3) +
                           (ulonglong)(uVar9 >> 6) * 8 + 0x250);
          *pbVar2 = *pbVar2 | '\x01' << ((ulonglong)(uVar9 & 0x3f) & 7);
          FUN_180091eb8(param_1,uVar5,param_3);
        }
        FUN_18008e9f0((longlong)param_1,(longlong *)param_1[0x17],(longlong *)param_1[0x33],uVar5,
                      param_3,(RECT *)(param_1[0x3e] + 0x18 + uVar10 * 0x28));
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1[10] + 0x620));
      }
      SetRectEmpty((LPRECT)(param_1[0x12] + 0x18 + uVar10 * 0x28));
      uVar8 = (ulonglong)(uVar9 >> 6);
    }
    else {
      uVar8 = (ulonglong)(uVar9 >> 6);
      if ((*(byte *)((longlong)param_1 +
                    ((longlong)(ulonglong)(uVar9 & 0x3f) >> 3) + uVar8 * 8 + 0x260) >>
           ((ulonglong)(uVar9 & 0x3f) & 7) & 1) == 0) {
        bVar4 = (byte)uVar7;
        bVar1 = bVar4 & 0x1f;
        yBottom = *(uint *)(param_1 + 5) >> bVar1;
        bVar4 = bVar4 & 0x1f;
        if (*(uint *)(param_1 + 5) >> bVar1 == 0) {
          yBottom = 1;
        }
        xRight = *(uint *)((longlong)param_1 + 0x24) >> bVar4;
        if (*(uint *)((longlong)param_1 + 0x24) >> bVar4 == 0) {
          xRight = 1;
        }
        SetRect(&local_48,0,0,xRight,yBottom);
        if ((longlong *)param_1[0x33] != (longlong *)0x0) {
          FUN_18008e9f0((longlong)param_1,(longlong *)param_1[0x3b],(longlong *)param_1[0x33],uVar5,
                        param_3,&local_48);
        }
        if ((longlong *)param_1[0x17] != (longlong *)0x0) {
          FUN_18008e9f0((longlong)param_1,(longlong *)param_1[0x17],(longlong *)param_1[0x33],uVar5,
                        param_3,(RECT *)(param_1[0x3e] + 0x18 + uVar10 * 0x28));
        }
      }
    }
    pbVar2 = (byte *)((longlong)param_1 +
                     ((longlong)(ulonglong)(uVar9 & 0x3f) >> 3) + uVar8 * 8 + 0x260);
    *pbVar2 = *pbVar2 | '\x01' << ((ulonglong)(uVar9 & 0x3f) & 7);
  }
  return;
}

