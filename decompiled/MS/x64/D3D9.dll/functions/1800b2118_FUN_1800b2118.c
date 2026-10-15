/*
 * FUN_1800b2118 at 1800b2118
 * int __fastcall FUN_1800b2118(longlong param_1, RECT * param_2, RECT * param_3, HWND param_4, longlong param_5)
 * Address ranges: 1800b2118-1800b253c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800b2118(longlong param_1,RECT *param_2,RECT *param_3,HWND param_4,longlong param_5)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  uint *puVar7;
  int *piVar8;
  LARGE_INTEGER *lpPerformanceCount;
  int iVar9;
  ulonglong uVar10;
  char *pcVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong *puVar15;
  longlong *plVar16;
  uint uVar17;
  ulonglong uVar18;
  RECT *in_stack_ffffffffffffff48;
  uint local_98;
  RECT *local_90;
  RECT *local_88;
  tagRECT local_78;
  tagRECT local_68;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  
  iVar9 = -0x7789f795;
  if (*(char *)(param_1 + 0x2d0) != '\0') {
    iVar9 = 0;
    uVar18 = 0;
    local_98 = 0;
    local_88 = in_stack_ffffffffffffff48;
    do {
      if (*(uint *)(param_1 + 0xe38) <= (uint)uVar18) {
        return iVar9;
      }
      iVar9 = -0x7789f794;
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xe30) + uVar18 * 8);
      plVar16 = plVar2;
      if (plVar2 == (longlong *)0x0) {
        plVar16 = (longlong *)&DAT_00000008;
      }
      if (param_5 == 0) {
        FUN_180015888(&stack0x00000030);
        puVar15 = (ulonglong *)(plVar2 + 10);
        iVar9 = -0x7789f798;
        if (plVar2 == (longlong *)0x0) {
          puVar15 = (ulonglong *)&DAT_00000058;
        }
        uVar13 = *puVar15;
        if (*(char *)(uVar13 + 0x6819) == '\0') {
          uVar17 = *(uint *)((longlong)plVar16 + 0xcc);
          uVar12 = (ulonglong)uVar17;
          uVar14 = 1;
          iVar9 = -0x7789f794;
          if (uVar17 != 0) {
            do {
              if ((*(uint *)(*(longlong *)(plVar16[(ulonglong)uVar14 + 0xb] + 8) + 0x100) >> 0xb & 1
                  ) != 0) goto LAB_1800b23aa;
              uVar14 = uVar14 + 1;
            } while (uVar14 <= uVar17);
          }
          FUN_1800080d8(uVar13,plVar16[0xc]);
          piVar8 = (int *)((longlong)plVar2 + 0xc4);
          if (plVar2 == (longlong *)0x0) {
            piVar8 = (int *)&DAT_000000cc;
          }
          iVar1 = *piVar8;
          local_90 = param_3;
          if (iVar1 == 1) {
            pcVar11 = (char *)((longlong)plVar2 + 0xf9);
            if (plVar2 == (longlong *)0x0) {
              pcVar11 = &DAT_00000101;
            }
            if (*pcVar11 == '\0') goto LAB_1800b2250;
LAB_1800b23f6:
            local_58 = 0;
            local_50 = 0;
            local_4c = 1;
            piVar8 = (int *)((longlong)plVar2 + 0x94);
            plVar6 = plVar2 + 0x12;
            if (plVar2 == (longlong *)0x0) {
              piVar8 = (int *)&DAT_0000009c;
              plVar6 = (longlong *)&DAT_00000098;
            }
            pcVar11 = (char *)((longlong)plVar2 + 0xf9);
            local_78.left = 0;
            local_78.top = 0;
            local_78.right = 0;
            local_78.bottom = 0;
            local_68.left = 0;
            local_68.top = 0;
            local_68.right = 0;
            local_68.bottom = 0;
            uVar18 = CONCAT44((int)((ulonglong)local_88 >> 0x20),*piVar8);
            SetRect(&local_68,0,0,(int)*plVar6,*piVar8);
            if (param_2 != (RECT *)0x0) {
              IntersectRect(&local_68,&local_68,param_2);
            }
            if (plVar2 == (longlong *)0x0) {
              pcVar11 = &DAT_00000101;
            }
            if (*pcVar11 == '\0') {
              uVar18 = CONCAT44((int)(uVar18 >> 0x20),*piVar8);
              SetRect(&local_78,0,0,(int)*plVar6,*piVar8);
              if (param_3 != (RECT *)0x0) {
                IntersectRect(&local_78,&local_78,param_3);
              }
              local_90 = (RECT *)0x0;
              local_88 = (RECT *)0x0;
            }
            else {
              local_78.left = local_68.left;
              local_78.top = local_68.top;
              local_78.right = local_68.right;
              local_78.bottom = local_68.bottom;
              local_88 = param_2;
            }
            (*(code *)**(undefined8 **)plVar16[0xb])();
            (*(code *)**(undefined8 **)plVar16[0xc])();
            plVar6 = plVar2 + 0x10;
            if (plVar2 == (longlong *)0x0) {
              plVar6 = (longlong *)&DAT_00000088;
            }
            uVar13 = 0;
            uVar12 = 0;
            (**(code **)(*(longlong *)*plVar6 + 0x108))
                      ((longlong *)*plVar6,0,0,0,uVar18 & 0xffffffff00000000,
                       *(undefined8 *)(*(longlong *)(plVar16[0xb] + 8) + 0x70),
                       *(undefined8 *)(*(longlong *)(plVar16[0xc] + 8) + 0x70),&local_78);
          }
          else {
            if (iVar1 != 2) {
              if (iVar1 == 3) goto LAB_1800b23f6;
              if (iVar1 != 5) goto LAB_1800b23aa;
            }
LAB_1800b2250:
            if (param_3 != (RECT *)0x0 || param_2 != (RECT *)0x0) goto LAB_1800b23aa;
            (*(code *)**(undefined8 **)plVar16[0xb])();
            uVar18 = 1;
            uVar17 = 1;
            uVar3 = *(undefined8 *)(*(longlong *)(plVar16[0xb] + 8) + 0x70);
            if (*(int *)((longlong)plVar16 + 0xcc) != 0) {
              do {
                (*(code *)**(undefined8 **)plVar16[uVar18 + 0xb])();
                uVar10 = (ulonglong)((int)uVar18 - 1);
                FUN_180014e88(plVar16[uVar10 + 0xb],
                              *(undefined8 *)(*(longlong *)(plVar16[uVar18 + 0xb] + 8) + 0x70));
                plVar6 = (longlong *)*puVar15;
                lVar4 = plVar16[uVar10 + 0xb];
                if ((((lVar4 == plVar6[6]) || (lVar4 == plVar6[7])) || (lVar4 == plVar6[8])) ||
                   (lVar4 == plVar6[9])) {
                  (**(code **)(*plVar6 + 0x48))();
                }
                uVar17 = (int)uVar18 + 1;
                uVar18 = (ulonglong)uVar17;
              } while (uVar17 <= *(uint *)((longlong)plVar16 + 0xcc));
            }
            FUN_180014e88(plVar16[(ulonglong)(uVar17 - 1) + 0xb],uVar3);
            plVar6 = (longlong *)*puVar15;
            lVar4 = plVar16[(ulonglong)(uVar17 - 1) + 0xb];
            if (((lVar4 == plVar6[6]) || (lVar4 == plVar6[7])) ||
               ((lVar4 == plVar6[8] || (local_88 = param_2, lVar4 == plVar6[9])))) {
              (**(code **)(*plVar6 + 0x48))();
              local_88 = param_2;
            }
          }
          plVar6 = plVar2 + 0x22;
          if (plVar2 == (longlong *)0x0) {
            plVar6 = (longlong *)&DAT_00000118;
          }
          lpPerformanceCount = (LARGE_INTEGER *)(plVar2 + 0x21);
          *(int *)plVar6 = (int)*plVar6 + 1;
          if (plVar2 == (longlong *)0x0) {
            lpPerformanceCount = (LARGE_INTEGER *)0x110;
          }
          QueryPerformanceCounter(lpPerformanceCount);
          puVar7 = (uint *)(plVar2 + 0x19);
          if (plVar2 == (longlong *)0x0) {
            puVar7 = (uint *)&DAT_000000d0;
          }
          cVar5 = FUN_180016afc(plVar16,plVar16[0xb],uVar12,uVar13,local_88,local_90,*puVar7,param_4
                               );
          uVar18 = (ulonglong)local_98;
          iVar9 = -0x7fffbffb;
          if (cVar5 != '\0') {
            iVar9 = 0;
          }
        }
LAB_1800b23aa:
        FUN_180015904();
      }
      local_98 = (int)uVar18 + 1;
      uVar18 = (ulonglong)local_98;
    } while (-1 < iVar9);
  }
  return iVar9;
}

