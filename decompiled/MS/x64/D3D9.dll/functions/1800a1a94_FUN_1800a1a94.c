/*
 * FUN_1800a1a94 at 1800a1a94
 * undefined __fastcall FUN_1800a1a94(longlong * param_1, uint param_2, int param_3, ulonglong param_4)
 * Address ranges: 1800a1a94-1800a1ea8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a1a94(longlong *param_1,uint param_2,int param_3,ulonglong param_4)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  uint xRight;
  BOOL BVar5;
  LPRECT lprcDst;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined *puVar10;
  uint uVar11;
  float fVar12;
  ulonglong in_stack_ffffffffffffff18;
  tagRECT local_58;
  
  if ((*(char *)((longlong)param_1 + 0x24d) == '\0') ||
     (*(char *)((longlong)param_1 + 0x24e) == '\0')) {
    FUN_18009bb6c((longlong)param_1,param_2,param_3);
  }
  else {
    uVar11 = param_3 * *(int *)((longlong)param_1 + 0x3c) + param_2;
    if ((param_1[0x37] != 0) &&
       ((*(byte *)((longlong)param_1 +
                  ((longlong)(ulonglong)(uVar11 & 0x3f) >> 3) + (ulonglong)(uVar11 >> 6) * 8 + 0x260
                  ) >> ((ulonglong)(uVar11 & 0x3f) & 7) & 1) == 0)) {
      lVar7 = (ulonglong)uVar11 * 0x20;
      BVar5 = IsRectEmpty((RECT *)(param_1[0x39] + 0x10 + lVar7));
      if (BVar5 == 0) {
        lVar1 = param_1[0x39];
        fVar12 = (float)*(int *)(lVar7 + 0x14 + lVar1);
        in_stack_ffffffffffffff18 = CONCAT44((int)(in_stack_ffffffffffffff18 >> 0x20),fVar12);
        FUN_1800a0aa4((longlong)param_1,param_2,param_3,(float)*(int *)(lVar7 + 0x10 + lVar1),fVar12
                      ,(float)*(int *)(lVar7 + 0x18 + lVar1),(float)*(int *)(lVar7 + 0x1c + lVar1),1
                     );
      }
    }
    uVar6 = (ulonglong)uVar11 << 5;
    BVar5 = IsRectEmpty((RECT *)((uVar6 | 0x10) + *(longlong *)((longlong)param_1 + 0x84)));
    if (BVar5 == 0) {
      if (param_1[0x37] != 0) {
        lVar7 = (longlong)param_1 + 0x1a4;
        lprcDst = (LPRECT)((uVar6 | 0x10) + param_1[0x43]);
        UnionRect(lprcDst,lprcDst,(RECT *)((uVar6 | 0x10) + *(longlong *)((longlong)param_1 + 0x84))
                 );
        if (*(int *)((longlong)param_1 + 0x44) - 3U < 3) {
          FUN_1800a0228((longlong)param_1,param_2,param_3,2);
          uVar9 = param_3 * *(int *)((longlong)param_1 + 0x3c) + param_2;
          in_stack_ffffffffffffff18 = CONCAT44((int)(in_stack_ffffffffffffff18 >> 0x20),uVar9);
          FUN_180098104(param_1[0x26],(longlong)param_1 + 500,lVar7,(ulonglong)uVar9,uVar9);
          puVar10 = &DAT_1800fec18;
          if ((((&DAT_1800fec18)[*(uint *)((longlong)param_1 + 0x2c)] != '\0') &&
              (uVar8 = FUN_18009f438((longlong)param_1), puVar10[uVar8 & 0xffffffff] != '\0')) &&
             (*(char *)((ulonglong)*(uint *)(param_1 + 4) * 0x20 + 0x6e9 + param_1[10]) != '\0')) {
            uVar9 = (*(int *)((longlong)param_1 + 0x34) + param_3) *
                    *(int *)((longlong)param_1 + 0x3c) + param_2;
            puVar10 = (undefined *)(ulonglong)uVar9;
            in_stack_ffffffffffffff18 = CONCAT44((int)(in_stack_ffffffffffffff18 >> 0x20),uVar9);
            FUN_180098104(param_1[0x26],(longlong)param_1 + 500,lVar7,(ulonglong)puVar10,uVar9);
          }
        }
        else {
          puVar10 = *(undefined **)((longlong)param_1 + 0x7c);
          if (puVar10 != (undefined *)0x0) {
            uVar9 = 0x54;
            if (*(int *)((longlong)param_1 + 0x2c) != 0x15) {
              uVar9 = 0x44;
            }
            in_stack_ffffffffffffff18 = *(ulonglong *)((longlong)param_1 + 0x74);
            FUN_180097cd8(param_1[0x26],(longlong)(param_1 + 0xc),(uint *)(param_1 + 0xc),
                          (ulonglong)puVar10,in_stack_ffffffffffffff18,0,0,uVar11,0,0,uVar11,0,0,
                          *(undefined4 *)(param_1[0x26] + (ulonglong)uVar9),0,0,
                          (int *)((uVar6 | 0x10) + *(longlong *)((longlong)param_1 + 0x84)),
                          *(uint *)(param_1 + 0x34),1,'\x01','\0');
          }
          pbVar4 = (byte *)((longlong)param_1 +
                           ((longlong)(ulonglong)(uVar11 & 0x3f) >> 3) +
                           (ulonglong)(uVar11 >> 6) * 8 + 0x250);
          *pbVar4 = *pbVar4 | '\x01' << ((ulonglong)(uVar11 & 0x3f) & 7);
          FUN_1800a0e68(param_1,param_2,param_3);
        }
        if (*(longlong *)((longlong)param_1 + 0xc4) != 0) {
          FUN_18009b92c((longlong)param_1,(uint *)(param_1 + 0x16),lVar7,puVar10,
                        in_stack_ffffffffffffff18,param_2,param_3,
                        (RECT *)((uVar6 | 0x10) + param_1[0x43]));
          param_1[0x27] = 0;
        }
      }
      SetRectEmpty((LPRECT)((uVar6 | 0x10) + *(longlong *)((longlong)param_1 + 0x84)));
      uVar8 = (ulonglong)(uVar11 >> 6);
    }
    else {
      uVar8 = (ulonglong)(uVar11 >> 6);
      if ((*(byte *)((longlong)param_1 +
                    ((longlong)(ulonglong)(uVar11 & 0x3f) >> 3) + uVar8 * 8 + 0x260) >>
           ((ulonglong)(uVar11 & 0x3f) & 7) & 1) == 0) {
        if (param_1[0x37] != 0) {
          bVar2 = (byte)param_2 & 0x1f;
          bVar3 = (byte)param_2 & 0x1f;
          uVar9 = 1;
          if (*(uint *)(param_1 + 5) >> bVar3 != 0) {
            uVar9 = *(uint *)(param_1 + 5) >> bVar3;
          }
          in_stack_ffffffffffffff18 = CONCAT44((int)(in_stack_ffffffffffffff18 >> 0x20),uVar9);
          xRight = 1;
          if (*(uint *)((longlong)param_1 + 0x24) >> bVar2 != 0) {
            xRight = *(uint *)((longlong)param_1 + 0x24) >> bVar2;
          }
          param_4 = (ulonglong)xRight;
          SetRect(&local_58,0 >> bVar2,0,xRight,uVar9);
          FUN_18009b92c((longlong)param_1,(uint *)((longlong)param_1 + 500),
                        (longlong)param_1 + 0x1a4,param_4,in_stack_ffffffffffffff18,param_2,param_3,
                        &local_58);
        }
        if (*(longlong *)((longlong)param_1 + 0xc4) != 0) {
          FUN_18009b92c((longlong)param_1,(uint *)(param_1 + 0x16),(longlong)param_1 + 0x1a4,param_4
                        ,in_stack_ffffffffffffff18,param_2,param_3,
                        (RECT *)((uVar6 | 0x10) + param_1[0x43]));
          param_1[0x27] = 0;
        }
      }
    }
    pbVar4 = (byte *)((longlong)param_1 +
                     ((longlong)(ulonglong)(uVar11 & 0x3f) >> 3) + uVar8 * 8 + 0x260);
    *pbVar4 = *pbVar4 | '\x01' << ((ulonglong)(uVar11 & 0x3f) & 7);
  }
  return;
}

