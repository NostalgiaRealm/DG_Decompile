/*
 * FUN_1800567f0 at 1800567f0
 * ulonglong __fastcall FUN_1800567f0(LPVOID param_1, longlong param_2, uint param_3)
 * Address ranges: 1800567f0-1800569fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800567f0(LPVOID param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  LPVOID pvVar2;
  undefined1 auVar3 [16];
  int iVar4;
  BOOL BVar5;
  longlong *plVar6;
  HANDLE pvVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar10;
  
  *(ulonglong *)((longlong)param_1 + 8) = param_2 + 0x900 + (ulonglong)param_3 * 0x1ac0;
  uVar12 = -(ulonglong)(param_2 != 0) & param_2 + 0x6d0U;
  plVar6 = FUN_1800ec360(uVar12,param_3,0);
  *(longlong **)((longlong)param_1 + 0x18) = plVar6;
  uVar11 = 0;
  if (plVar6 != (longlong *)0x0) {
    plVar6 = FUN_1800ec360(uVar12,param_3,1);
    *(longlong **)((longlong)param_1 + 0x20) = plVar6;
    uVar11 = 0;
    if (plVar6 != (longlong *)0x0) {
      pvVar7 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
      *(HANDLE *)((longlong)param_1 + 0xb0) = pvVar7;
      uVar11 = 0;
      if (pvVar7 != (HANDLE)0x0) {
        pvVar7 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_180056b48,param_1,0,(LPDWORD)0x0);
        *(HANDLE *)((longlong)param_1 + 0xa8) = pvVar7;
        if (pvVar7 != (HANDLE)0x0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)((longlong)param_1 + 0x80));
          lVar1 = *(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0x1508);
          iVar4 = *(int *)(lVar1 + 0xbac);
          if (*(int *)(lVar1 + 0xba8) == iVar4) {
            uVar11 = 0x10;
            if (iVar4 != 0) {
              uVar11 = (ulonglong)(uint)(iVar4 * 2);
            }
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar11;
            uVar8 = SUB168(ZEXT816(8) * auVar3,0);
            if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
              uVar8 = 0xffffffffffffffff;
            }
            puVar9 = (undefined8 *)thunk_FUN_1800fbccc(uVar8);
            lVar10 = 0;
            if (puVar9 == (undefined8 *)0x0) goto LAB_180056963;
            FUN_1800fbec0(puVar9,*(undefined8 **)(lVar1 + 0xba0),
                          (ulonglong)*(uint *)(lVar1 + 0xbac) << 3);
            FUN_1800fbcf0(*(LPVOID *)(lVar1 + 0xba0));
            *(undefined8 **)(lVar1 + 0xba0) = puVar9;
            *(int *)(lVar1 + 0xbac) = (int)uVar11;
          }
          lVar10 = *(longlong *)(lVar1 + 0xba0);
          *(LPVOID *)(lVar10 + (ulonglong)*(uint *)(lVar1 + 0xba8) * 8) = param_1;
          *(int *)(lVar1 + 0xba8) = *(int *)(lVar1 + 0xba8) + 1;
LAB_180056963:
          if ((*(byte *)(param_2 + 0x6e4 + (ulonglong)param_3 * 0x20) & 1) == 0) {
            *(undefined8 *)((longlong)param_1 + 0x10) = 0;
          }
          else {
            iVar4 = FUN_1800e313c(*(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0x1508),
                                  &DAT_1800fd860,(longlong *)((longlong)param_1 + 0x10));
            lVar10 = CONCAT44(extraout_var,iVar4);
          }
          return CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
        }
        BVar5 = CloseHandle(*(HANDLE *)((longlong)param_1 + 0xb0));
        uVar11 = CONCAT44(extraout_var_00,BVar5);
      }
      pvVar2 = *(LPVOID *)((longlong)param_1 + 0x20);
      if (pvVar2 != (LPVOID)0x0) {
        FUN_1800ebfe8((longlong)pvVar2);
        uVar11 = FUN_1800fbcf0(pvVar2);
      }
      *(undefined8 *)((longlong)param_1 + 0x20) = 0;
    }
    pvVar2 = *(LPVOID *)((longlong)param_1 + 0x18);
    if (pvVar2 != (LPVOID)0x0) {
      FUN_1800ebfe8((longlong)pvVar2);
      uVar11 = FUN_1800fbcf0(pvVar2);
    }
    *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  }
  return uVar11 & 0xffffffffffffff00;
}

