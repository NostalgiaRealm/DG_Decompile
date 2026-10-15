/*
 * FUN_18002573c at 18002573c
 * undefined __fastcall FUN_18002573c(longlong * param_1, longlong * param_2, undefined8 param_3, uint * * param_4)
 * Address ranges: 18002573c-180025c65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002573c(longlong *param_1,longlong *param_2,undefined8 param_3,uint **param_4)

{
  byte bVar1;
  uint uVar2;
  ulonglong *puVar3;
  BOOL BVar4;
  int iVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  undefined1 uVar12;
  ulonglong uVar13;
  RECT *pRVar14;
  longlong lVar15;
  byte bVar16;
  code *pcVar17;
  int iVar18;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar19;
  RECT local_98;
  tagRECT local_88;
  uint local_78;
  int local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  ulonglong *local_60;
  ulonglong local_58;
  uint **local_50;
  uint local_48;
  
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  bVar16 = (byte)param_4;
  uVar12 = (undefined1)param_3;
  bVar1 = *(byte *)((longlong)param_2 + 0x94);
  pRVar14 = (RECT *)((longlong)param_2 + 0x34);
  plVar9 = param_2;
  BVar4 = IsRectEmpty(pRVar14);
  uVar6 = 0;
  if (BVar4 == 0) {
    FUN_18000fd5c(param_1[0x28],plVar9,param_3,param_4);
    if (*(char *)((longlong)param_2 + 0x99) != '\0') {
      local_60 = (ulonglong *)(param_2 + 0x14);
      local_48 = 0;
      param_4 = (uint **)*local_60;
      local_50 = param_4;
      local_58 = ~(ulonglong)param_4;
      uVar13 = uVar6;
LAB_1800257cd:
      lVar15 = 0;
      if (param_4 != (uint **)0x0) {
        for (; ((ulonglong)param_4 >> lVar15 & 1) == 0; lVar15 = lVar15 + 1) {
        }
      }
      local_50 = param_4;
      if (param_4 != (uint **)0x0) {
        do {
          (&local_58)[uVar6] = (&local_58)[uVar6] & -1L << ((char)lVar15 + 1U & 0x3f);
          uVar6 = uVar6 + 1;
        } while (uVar6 != 2);
        iVar18 = local_48 + (int)lVar15;
        while (puVar3 = local_60, iVar18 != -1) {
          if (local_48 < 0x100) {
LAB_180025858:
            lVar15 = 0;
            if (local_58 != 0) {
              for (; (local_58 >> lVar15 & 1) == 0; lVar15 = lVar15 + 1) {
              }
            }
            if (local_58 != 0) {
              lVar8 = 0;
              do {
                (&local_58)[lVar8] = (&local_58)[lVar8] & -1L << ((char)lVar15 + 1U & 0x3f);
                lVar8 = lVar8 + 1;
              } while (lVar8 != 2);
              iVar5 = local_48 + (int)lVar15;
              goto LAB_1800258a5;
            }
            local_48 = local_48 + 0x40;
            if (local_48 != 0x100) goto code_r0x00018002586f;
          }
LAB_1800258a2:
          iVar5 = -1;
LAB_1800258a5:
          uVar2 = local_48;
          iVar11 = iVar18;
          if (iVar5 != -1) {
            iVar11 = iVar5;
          }
          FUN_18002540c((longlong)param_1,(longlong)param_2,iVar18 << 0xf,iVar11 << 0xf,param_2[0xb]
                        ,(int)param_2[0xd],*(byte *)((longlong)param_2 + 0x94));
          uVar6 = (ulonglong)*(uint *)(param_2 + 4);
          puVar7 = FUN_180019f8c(&local_78,iVar18 << 0xf,iVar11 << 0xf,*(uint *)(param_2 + 4),
                                 *(uint *)((longlong)param_2 + 0x24),(int)param_2[0xd],
                                 *(byte *)((longlong)param_2 + 0x94));
          local_98.top = puVar7[1];
          local_98.left = *(LONG *)((longlong)param_2 + 0x34);
          local_98.right = *(LONG *)((longlong)param_2 + 0x3c);
          local_98.bottom = (uint)(puVar7[2] != 0) + puVar7[3];
          pRVar14 = (RECT *)((longlong)param_2 + 0x34);
          IntersectRect(&local_88,&local_98,pRVar14);
          param_4 = (uint **)CONCAT71((int7)(uVar6 >> 8),bVar1);
          FUN_180024c3c(param_1,param_2,CONCAT71((int7)((ulonglong)pRVar14 >> 8),uVar12),
                        (ulonglong)param_4,local_88.left,local_88.top,local_88.right,local_88.bottom
                        ,bVar16);
          *(byte *)((longlong)param_2 + 0x4a) = *(byte *)((longlong)param_2 + 0x4a) | 2;
          while( true ) {
            if (0xff < uVar2) goto LAB_1800259d8;
            lVar15 = 0;
            if (local_50 != (uint **)0x0) {
              for (; ((ulonglong)local_50 >> lVar15 & 1) == 0; lVar15 = lVar15 + 1) {
              }
            }
            if (local_50 != (uint **)0x0) break;
            local_48 = uVar2 + 0x40;
            if (local_48 == 0x100) goto LAB_1800259d8;
            local_50 = (uint **)puVar3[local_48 >> 6];
            local_58 = ~(puVar3[local_48 >> 6] |
                        -(ulonglong)(0x100 - local_48 < 0x40) &
                        -1L << ((byte)(0x100 - local_48) & 0x3f));
            uVar2 = local_48;
          }
          lVar8 = 0;
          do {
            (&local_58)[lVar8] = (&local_58)[lVar8] & -1L << ((char)lVar15 + 1U & 0x3f);
            lVar8 = lVar8 + 1;
          } while (lVar8 != 2);
          iVar18 = local_48 + (int)lVar15;
        }
      }
      else {
        local_48 = (int)uVar13 + 0x40;
        uVar13 = (ulonglong)local_48;
        if (local_48 != 0x100) goto code_r0x0001800257e4;
      }
      goto LAB_1800259d8;
    }
    if (*(char *)((longlong)param_2 + 0x96) != '\0') {
      if ((char)param_2[0x13] == '\0') {
        pcVar17 = (code *)0x0;
        lVar15 = 0;
        FUN_18002540c((longlong)param_1,(longlong)param_2,0,0,0,0,bVar1);
      }
      else {
        iVar18 = (int)param_2[8];
        iVar5 = (int)param_2[7];
        uVar2 = pRVar14->left;
        pcVar17 = (code *)(ulonglong)uVar2;
        *(int *)((longlong)param_2 + 0x44) =
             *(int *)((longlong)param_2 + 0x44) + ((uint)(iVar18 - iVar5) >> 4);
        if ((((uVar2 == 0) && (*(int *)((longlong)param_2 + 0x3c) == (int)param_2[4])) &&
            (iVar5 == 0)) &&
           ((iVar18 == *(int *)((longlong)param_2 + 0x24) &&
            (*(char *)((longlong)param_2 + 0x49) == '\0')))) {
          plVar9 = *(longlong **)(*(longlong *)(param_1[0x28] + 0x3340) + 8);
          pcVar17 = *(code **)(*plVar9 + 0x178);
          if (bVar1 == 0) {
            lVar15 = param_2[0x2e];
            lVar8 = param_2[0x20];
          }
          else {
            lVar15 = param_2[0x2f];
            lVar8 = param_2[0x26];
          }
          (*pcVar17)(plVar9,lVar8,lVar15);
        }
        else {
          lVar15 = 0;
          local_70 = 0;
          local_64 = 1;
          plVar9 = *(longlong **)(*(longlong *)(param_1[0x28] + 0x3340) + 8);
          if (bVar1 == 0) {
            lVar8 = param_2[0x2e];
            lVar10 = param_2[0x20];
          }
          else {
            lVar8 = param_2[0x2f];
            lVar10 = param_2[0x26];
          }
          local_78 = uVar2;
          local_74 = iVar5;
          local_6c = *(int *)((longlong)param_2 + 0x3c);
          local_68 = iVar18;
          (**(code **)(*plVar9 + 0x170))
                    (plVar9,lVar10,0,pcVar17,CONCAT44(uVar19,iVar5),0,lVar8,0,&local_78);
        }
      }
      param_4 = (uint **)CONCAT71((int7)((ulonglong)pcVar17 >> 8),bVar1);
      FUN_180024c3c(param_1,param_2,CONCAT71((int7)((ulonglong)lVar15 >> 8),uVar12),
                    (ulonglong)param_4,pRVar14->left,*(uint *)(param_2 + 7),
                    *(uint *)((longlong)param_2 + 0x3c),*(uint *)(param_2 + 8),bVar16);
      *(byte *)((longlong)param_2 + 0x4a) = *(byte *)((longlong)param_2 + 0x4a) | 2;
    }
LAB_1800259d8:
    FUN_18001a42c((longlong)param_2);
    if (param_2 == param_1 + 0x29) {
      (**(code **)(*param_1 + 0x98))(param_1,0);
    }
    if (((*(char *)((longlong)param_1 + 300) != '\0') ||
        (**(char **)(param_1[0x28] + 0x3328) != '\0')) &&
       (FUN_180026810((longlong)param_1,1,0,param_4),
       *(char *)(*(longlong *)(param_1[0x28] + 0x3328) + 3) != '\0')) {
      DebugBreak();
    }
    if (*(char *)((longlong)param_1 + 0x12d) != '\0') {
      FUN_180026810((longlong)param_1,2,0,param_4);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1[0x28] + 0x3330) + 0x620));
  }
  return;
code_r0x0001800257e4:
  param_4 = (uint **)local_60[local_48 >> 6];
  local_50 = param_4;
  local_58 = ~((ulonglong)param_4 | -(ulonglong)(0x100 - local_48 < 0x40));
  if (0xff < local_48) goto LAB_1800259d8;
  goto LAB_1800257cd;
code_r0x00018002586f:
  local_50 = (uint **)local_60[local_48 >> 6];
  local_58 = ~(local_60[local_48 >> 6] |
              -(ulonglong)(0x100 - local_48 < 0x40) & -1L << ((byte)(0x100 - local_48) & 0x3f));
  if (0xff < local_48) goto LAB_1800258a2;
  goto LAB_180025858;
}

