/*
 * FUN_18008bbc4 at 18008bbc4
 * undefined8 __fastcall FUN_18008bbc4(longlong * param_1, int * param_2, longlong param_3, uint param_4)
 * Address ranges: 18008bbc4-18008bf5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18008bbc4(longlong *param_1,int *param_2,longlong param_3,uint param_4)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 extraout_RAX;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined4 local_res8 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  param_1[1] = (longlong)param_2;
  param_1[2] = param_3;
  lVar5 = FUN_1800de604(DAT_1801123b0,&PTR_s_DGD3D11ROOT_180110708,0);
  lVar11 = 0;
  param_1[0x39e2] = lVar5;
  uVar7 = 0;
  if (lVar5 != 0) {
    uVar7 = (ulonglong)param_4;
    param_1[4] = lVar5;
    param_1[1] = (longlong)param_2;
    param_1[2] = param_3;
    FUN_1800a9734((longlong)param_1,param_4);
    FUN_1800dfe48(param_1[0x39e2],uVar7,(longlong)param_1);
    piVar6 = FUN_1800d81b4((undefined4 *)&local_40,param_2);
    uVar7 = FUN_1800dd0cc((longlong *)param_1[0x39e2],(ulonglong)*(uint *)(param_1 + 5),*piVar6,
                          *(undefined8 *)(piVar6 + 2),piVar6[1],(char)piVar6[4]);
    if ((char)uVar7 != '\0') {
      uVar7 = (ulonglong)*(uint *)(param_1 + 5);
      lVar5 = param_1[0x39e2];
      param_1[6] = lVar5 + uVar7 * 0x28 + 0x18;
      param_1[0x39e3] = lVar5 + 0x6b0 + uVar7 * 0x18c0;
      cVar3 = FUN_1800db224(lVar5,uVar7,DAT_1801123b0,0x28,0x18010fdb0,(LPCWSTR)(param_1 + 0x39e4));
      if (cVar3 != '\0') {
        cVar3 = FUN_1800db394(param_1[0x39e2],(ulonglong)*(uint *)(param_1 + 5),DAT_1801123b0,1,
                              0x18010fda0,0x18010fd90,(LPCWSTR)(param_1 + 0x3a0c),
                              (longlong)(param_1 + 0x3a0d));
        if (cVar3 != '\0') {
          local_50 = 4;
          local_58 = 0xd0;
          plVar1 = param_1 + 15000;
          local_44 = 0xd0;
          puVar10 = &local_58;
          local_48 = 0;
          plVar9 = *(longlong **)param_1[0x39e3];
          iVar4 = (**(code **)(*plVar9 + 0x18))(plVar9,puVar10,0,plVar1);
          if (-1 < iVar4) {
            plVar9 = param_1 + 14999;
            local_40 = 0x4000;
            puVar10 = &local_40;
            local_38 = 1;
            local_30 = 0;
            local_2c = 0x40;
            iVar4 = (**(code **)(**(longlong **)param_1[0x39e3] + 0x18))
                              (*(longlong **)param_1[0x39e3],puVar10,0,plVar9);
            if (-1 < iVar4) {
              uVar8 = FUN_1800a9d88(param_1);
              if ((char)uVar8 != '\0') {
                FUN_1800a9ecc((longlong)param_1);
                local_res8[0] = 0;
                (**(code **)(**(longlong **)param_1[0x39e3] + 0xe8))
                          (*(longlong **)param_1[0x39e3],0x1e,local_res8);
                uVar2 = *(uint *)(param_1 + 5);
                lVar5 = param_1[0x39e2];
                param_1[0x3a9b] = lVar5;
                *(uint *)(param_1 + 0x3a9c) = uVar2;
                param_1[0x3a9d] = lVar5 + 0x6b0 + (ulonglong)uVar2 * 0x18c0;
                param_1[0x3a11] = lVar5;
                *(uint *)(param_1 + 0x3a12) = uVar2;
                cVar3 = *(char *)(param_1[1] + 0x1f8);
                lVar11 = param_1[0x39e3];
                param_1[0x3a15] = lVar11;
                *(undefined1 *)(param_1 + 0x3a16) = 0;
                if (((cVar3 == '\0') && (*(int *)(lVar11 + 0x20) == 0x1002)) &&
                   (((iVar4 = *(int *)(lVar11 + 0x24), iVar4 == 0x15dd ||
                     (((iVar4 == 0x15d8 || (iVar4 == 0x1636)) || (iVar4 == 0x67df)))) ||
                    (iVar4 == 0x1638)))) {
                  *(undefined1 *)(param_1 + 0x3a16) = 1;
                }
                uVar8 = FUN_1800ee4f8(FUN_1800ee6d0);
                if ((char)uVar8 == '\0') {
                  *(undefined8 *)(lVar5 + 0x38 + (ulonglong)uVar2 * 0x28) = 0;
                }
                LeaveCriticalSection((LPCRITICAL_SECTION)(param_1[0x39e2] + 0x620));
                return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
              }
              FUN_180089d90((longlong)param_1);
              (**(code **)(*(longlong *)*plVar9 + 0x10))();
              *plVar9 = 0;
            }
            plVar9 = (longlong *)*plVar1;
            (**(code **)(*plVar9 + 0x10))();
            *plVar1 = 0;
          }
          FUN_1800db540(plVar9,puVar10,1,(longlong)(param_1 + 0x3a0c),(longlong)(param_1 + 0x3a0d));
        }
        do {
          if ((longlong *)param_1[lVar11 + 0x39e4] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[lVar11 + 0x39e4] + 0x10))();
            param_1[lVar11 + 0x39e4] = 0;
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0x28);
      }
      FUN_1800dd47c(param_1[0x39e2],*(uint *)(param_1 + 5));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1[0x39e2] + 0x620));
    param_1[4] = 0;
    uVar7 = FUN_1800de65c((longlong *)param_1[0x39e2]);
    param_1[0x39e2] = 0;
  }
  return uVar7 & 0xffffffffffffff00;
}

