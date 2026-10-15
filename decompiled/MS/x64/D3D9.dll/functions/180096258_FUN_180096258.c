/*
 * FUN_180096258 at 180096258
 * undefined8 __fastcall FUN_180096258(longlong * param_1, int * param_2, longlong param_3, uint param_4)
 * Address ranges: 180096258-1800965da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180096258(longlong *param_1,int *param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  HMODULE pHVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  HANDLE pvVar7;
  undefined8 extraout_RAX;
  ulonglong uVar8;
  longlong *plVar9;
  int iVar10;
  
  param_1[1] = (longlong)param_2;
  param_1[2] = param_3;
  uVar8 = (ulonglong)param_4;
  lVar4 = FUN_1800de604(DAT_1801123b0,&PTR_s_DGD3D12ROOT_180110758,0);
  param_1[0x39e2] = lVar4;
  if (lVar4 != 0) {
    param_1[4] = lVar4;
    param_1[1] = (longlong)param_2;
    param_1[2] = param_3;
    FUN_1800a9734((longlong)param_1,param_4);
    FUN_1800dfe48(param_1[0x39e2],uVar8,(longlong)param_1);
    iVar10 = 0xb000;
    if ((*param_2 != 5) && (*param_2 == 6)) {
      iVar10 = 0xc000;
    }
    uVar5 = FUN_1800f17fc((undefined1 *)param_1[0x39e2],*(uint *)(param_1 + 5),iVar10);
    pHVar2 = DAT_1801123b0;
    if ((char)uVar5 != '\0') {
      param_1[6] = param_1[0x39e2] + (ulonglong)*(uint *)(param_1 + 5) * 0x28 + 0x18;
      plVar9 = (longlong *)(param_1[0x39e2] + 0x900 + (ulonglong)*(uint *)(param_1 + 5) * 0x1ac0);
      param_1[0x39e3] = (longlong)plVar9;
      cVar3 = FUN_1800e6384(plVar9,pHVar2,1,0x18010fe90,(longlong)(param_1 + 0x3a23));
      if (cVar3 != '\0') {
        cVar3 = FUN_1800e6384(plVar9,DAT_1801123b0,0x28,0x18010fe40,(longlong)(param_1 + 0x39fb));
        if (cVar3 != '\0') {
          plVar9 = param_1;
          lVar4 = FUN_1800941ec((longlong)param_1);
          param_1[0x39e5] = lVar4;
          if (lVar4 != 0) {
            *(undefined4 *)(param_1 + 0x39ed) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x39f1) = 0;
            param_1[0x39f8] = 1;
            *(undefined4 *)((longlong)param_1 + 0x1cf8c) = 3;
            puVar6 = (undefined8 *)FUN_1800fbccc(0x10);
            param_1[0x3a24] = (longlong)puVar6;
            if (puVar6 != (undefined8 *)0x0) {
              *puVar6 = &PTR_s_POSITION_180111ce0;
              *(undefined4 *)(param_1[0x3a24] + 8) = 2;
              uVar5 = FUN_180094400(param_1);
              if ((char)uVar5 != '\0') {
                puVar6 = FUN_1800e8040(-(ulonglong)(param_1[0x39e2] != 0) & param_1[0x39e2] + 0x6d0U
                                       ,(int)param_1[5],param_1[0x39e3] + 0x1520,0xc0,0);
                param_1[0x39fa] = (longlong)puVar6;
                if (puVar6 != (undefined8 *)0x0) {
                  lVar4 = param_1[0x39e2];
                  puVar6 = FUN_1800e8040(-(ulonglong)(lVar4 != 0) & lVar4 + 0x6d0U,(int)param_1[5],
                                         param_1[0x39e3] + 0x15b0,0x4000,
                                         -(ulonglong)(lVar4 != 0) & lVar4 + 0x6a8U);
                  param_1[0x39f9] = (longlong)puVar6;
                  if (puVar6 != (undefined8 *)0x0) {
                    FUN_1800a9ecc((longlong)param_1);
                    *(int *)(param_1 + 0x3a29) = (int)param_1[5];
                    param_1[0x3a28] = param_1[0x39e2];
                    *(undefined4 *)((longlong)param_1 + 0x1d16c) = 0;
                    pvVar7 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
                    uVar1 = *(uint *)(param_1 + 5);
                    lVar4 = param_1[0x39e2];
                    param_1[0x3a2e] = (longlong)pvVar7;
                    uVar5 = FUN_1800ee4f8(FUN_1800ee6d0);
                    if ((char)uVar5 == '\0') {
                      *(undefined8 *)(lVar4 + 0x38 + (ulonglong)uVar1 * 0x28) = 0;
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1[0x39e2] + 0x620));
                    return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
                  }
                  if ((undefined8 *)param_1[0x39fa] != (undefined8 *)0x0) {
                    FUN_1800428b0((undefined8 *)param_1[0x39fa],1);
                  }
                  param_1[0x39fa] = 0;
                }
              }
              FUN_1800fbcf0((LPVOID)param_1[0x39e4]);
              param_1[0x39e4] = 0;
            }
            plVar9 = (longlong *)param_1[0x39e5];
            (**(code **)(*plVar9 + 0x10))();
            param_1[0x39e5] = 0;
          }
        }
        FUN_1800e6470(plVar9,1,(longlong)(param_1 + 0x3a23));
        FUN_1800e6470(plVar9,0x28,(longlong)(param_1 + 0x39fb));
      }
      FUN_1800f1bc0(param_1[0x39e2],*(uint *)(param_1 + 5));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1[0x39e2] + 0x620));
  }
  param_1[4] = 0;
  uVar8 = FUN_1800de65c((longlong *)param_1[0x39e2]);
  param_1[0x39e2] = 0;
  return uVar8 & 0xffffffffffffff00;
}

