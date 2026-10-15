/*
 * FUN_180004a58 at 180004a58
 * ulonglong __fastcall FUN_180004a58(longlong * param_1, uint param_2, longlong param_3)
 * Address ranges: 180004a58-180004c2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180004a58(longlong *param_1,uint param_2,longlong param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  LPVOID lpParameter;
  HANDLE hHandle;
  undefined8 uVar3;
  undefined8 *puVar4;
  HANDLE pvVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  
  FUN_1800fbcf0((LPVOID)param_1[0x1c6]);
  uVar7 = 0;
  param_1[0x1c6] = 0;
  iVar6 = 0;
  param_1[0x1c7] = 0;
  do {
    if (param_2 <= uVar7) {
      uVar8 = FUN_180004f88(param_1,param_2,param_3,param_1[0x1c6],0,1);
      lpParameter = DAT_180111f20;
      if (-1 < (int)uVar8) {
        param_1[0x1d4] = *(longlong *)(&DAT_1801128f0 + (ulonglong)*(uint *)(param_1 + 0x1d5) * 600)
        ;
        iVar6 = *(int *)((longlong)lpParameter + 0x370);
        *(int *)((longlong)lpParameter + 0x370) = iVar6 + 1;
        if (iVar6 == 0) {
          *(undefined1 *)((longlong)lpParameter + 0x7e8) = 0;
          DAT_180117460 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
          if (DAT_180117460 != (HANDLE)0x0) {
            InitializeCriticalSection((LPCRITICAL_SECTION)((longlong)lpParameter + 0x388));
            pvVar5 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_1800f8a90,lpParameter,0,
                                  (LPDWORD)((longlong)lpParameter + 0x374));
            hHandle = DAT_180117460;
            *(HANDLE *)((longlong)lpParameter + 0x378) = pvVar5;
            WaitForSingleObject(hHandle,0xffffffff);
          }
        }
        (**(code **)(*param_1 + 0x18))
                  (param_1,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc));
        uVar8 = 0;
      }
      return uVar8;
    }
    iVar1 = *(int *)((longlong)param_1 + 0xe3c);
    if (iVar6 == iVar1) {
      uVar8 = 0x10;
      if (iVar1 != 0) {
        uVar8 = (ulonglong)(uint)(iVar1 * 2);
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar8;
      uVar3 = SUB168(ZEXT816(8) * auVar2,0);
      if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
        uVar3 = 0xffffffffffffffff;
      }
      puVar4 = (undefined8 *)thunk_FUN_1800fbccc(uVar3);
      if (puVar4 == (undefined8 *)0x0) {
        return 0x80004005;
      }
      FUN_1800fbec0(puVar4,(undefined8 *)param_1[0x1c6],
                    (ulonglong)*(uint *)((longlong)param_1 + 0xe3c) << 3);
      FUN_1800fbcf0((LPVOID)param_1[0x1c6]);
      param_1[0x1c6] = (longlong)puVar4;
      *(int *)((longlong)param_1 + 0xe3c) = (int)uVar8;
    }
    *(undefined8 *)(param_1[0x1c6] + (ulonglong)*(uint *)(param_1 + 0x1c7) * 8) = 0;
    *(int *)(param_1 + 0x1c7) = (int)param_1[0x1c7] + 1;
    iVar6 = (int)param_1[0x1c7];
    uVar7 = uVar7 + 1;
  } while( true );
}

