/*
 * FUN_1800f3050 at 1800f3050
 * longlong * __fastcall FUN_1800f3050(longlong param_1, int * param_2, int param_3, int * param_4)
 * Address ranges: 1800f3050-1800f3334
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_1800f3050(longlong param_1,int *param_2,int param_3,int *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong *plVar23;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  int local_c0 [2];
  longlong *local_b8;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  longlong local_98;
  longlong local_90;
  ulonglong local_88;
  LPCRITICAL_SECTION local_80;
  int local_78 [2];
  longlong local_70;
  longlong local_68;
  int local_60;
  short local_5c;
  short local_5a;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
  local_80 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  local_b8 = (longlong *)0x0;
  uVar21 = FUN_1800f2ce0(lpCriticalSection,param_4);
  uVar25 = *(uint *)(param_1 + 0x58);
  local_88 = uVar21;
  if (uVar25 != 0) {
    lVar22 = *(longlong *)(param_1 + 0x50);
    uVar24 = 0;
    uVar27 = uVar25;
    do {
      uVar20 = uVar27 + uVar24 >> 1;
      uVar26 = *(ulonglong *)(lVar22 + (ulonglong)uVar20 * 0x18);
      uVar19 = uVar20;
      if (uVar26 <= uVar21) {
        if (uVar21 <= uVar26) break;
        uVar24 = uVar20 + 1;
        uVar19 = uVar27;
        uVar20 = uVar24;
      }
      uVar27 = uVar19;
    } while (uVar27 != uVar24);
    if (((uVar20 != uVar25) && (*(ulonglong *)(lVar22 + (ulonglong)uVar20 * 0x18) == uVar21)) &&
       (plVar1 = (longlong *)(lVar22 + 0x10 + (ulonglong)uVar20 * 0x18), plVar1 != (longlong *)0x0))
    {
      iVar15 = param_2[3];
      if (param_2[3] == 0) {
        iVar15 = 1;
      }
      iVar16 = param_2[4];
      if (param_2[4] == 0) {
        iVar16 = 1;
      }
      lVar22 = *(longlong *)(param_4 + 2);
      if (lVar22 == 0) {
        lVar22 = 0x10000;
      }
      plVar23 = (longlong *)*plVar1;
      if ((int)plVar23[1] != 0) {
        iVar4 = *param_2;
        iVar5 = param_2[1];
        iVar6 = param_2[2];
        iVar7 = *param_4;
        local_98 = *(longlong *)(param_4 + 4);
        iVar8 = param_4[6];
        iVar18 = param_4[7];
        sVar3 = *(short *)((longlong)param_4 + 0x1e);
        iVar9 = param_4[8];
        iVar10 = param_4[9];
        iVar11 = param_4[10];
        iVar12 = param_4[0xb];
        iVar13 = param_4[0xc];
        uVar26 = 0;
        do {
          uVar25 = (uint)uVar26;
          local_90 = uVar26 * 0x10;
          plVar23 = *(longlong **)(local_90 + *plVar23);
          (**(code **)(*plVar23 + 0x50))(plVar23,local_78);
          (**(code **)(*plVar23 + 0x70))(plVar23,&local_b0,local_c0);
          if (((((local_b0 == iVar4) && (local_ac == iVar5)) &&
               ((local_a8 == iVar6 && ((local_a4 == iVar15 && (local_a0 == iVar16)))))) &&
              (local_78[0] == iVar7)) &&
             ((((((local_70 == lVar22 && (local_68 == local_98)) && (local_60 == iVar8)) &&
                ((local_5c == (short)iVar18 && (local_5a == sVar3)))) &&
               ((local_58 == iVar9 && ((local_54 == iVar10 && (local_50 == iVar11)))))) &&
              ((local_4c == iVar12 &&
               ((local_48 == iVar13 && ((local_c0[0] == param_3 || (param_3 == 0)))))))))) {
            local_b8 = plVar23;
            FUN_1800f5748((ulonglong *)(param_1 + 0x60),
                          *(uint *)(local_90 + 8 + *(longlong *)*plVar1));
            plVar23 = (longlong *)*plVar1;
            uVar24 = *(uint *)(plVar23 + 1);
            if (uVar25 < uVar24) {
              while (uVar27 = uVar25 + 1, uVar27 < uVar24) {
                puVar14 = (undefined8 *)(*plVar23 + (ulonglong)uVar27 * 0x10);
                uVar17 = puVar14[1];
                puVar2 = (undefined8 *)(*plVar23 + (ulonglong)uVar25 * 0x10);
                *puVar2 = *puVar14;
                puVar2[1] = uVar17;
                uVar25 = uVar27;
                uVar24 = *(uint *)(plVar23 + 1);
              }
              *(uint *)(plVar23 + 1) = uVar24 - 1;
            }
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) - uVar21;
            puVar14 = (undefined8 *)*plVar1;
            if (*(int *)(puVar14 + 1) == 0) {
              if (puVar14 != (undefined8 *)0x0) {
                FUN_1800fbcf0((LPVOID)*puVar14);
                FUN_1800fbcf0(puVar14);
              }
              FUN_180057844(param_1 + 0x48,&local_88);
            }
            break;
          }
          plVar23 = (longlong *)*plVar1;
          uVar26 = (ulonglong)(uVar25 + 1);
        } while (uVar25 + 1 < *(uint *)(plVar23 + 1));
      }
    }
  }
  LeaveCriticalSection(local_80);
  return local_b8;
}

