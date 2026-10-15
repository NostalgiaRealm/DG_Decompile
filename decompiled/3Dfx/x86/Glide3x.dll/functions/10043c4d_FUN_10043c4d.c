/*
 * FUN_10043c4d at 10043c4d
 * bool __thiscall FUN_10043c4d(void * this, int param_1, HMODULE param_2, uint param_3, int param_4, int param_5, int * param_6, int param_7)
 * Address ranges: 10043c4d-10043d5d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_10043c4d(void *this,int param_1,HMODULE param_2,uint param_3,int param_4,int param_5,
            int *param_6,int param_7)

{
  ushort uVar1;
  int *piVar2;
  bool bVar3;
  DWORD DVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  
  FUN_10052de1(param_6,0,param_3 << 2);
  uVar7 = 0;
  bVar3 = true;
  if (param_3 != 0) {
    do {
      if (!bVar3) goto LAB_10043d48;
      uVar1 = *(ushort *)(param_4 + uVar7 * 2);
      if (uVar1 != 0) {
        DVar4 = FUN_10051fe0(param_2,(LPCWSTR)(uint)uVar1,L"RT_CUSTOM");
        puVar5 = FUN_10052070(param_2,(LPCWSTR)(uint)*(ushort *)(param_4 + uVar7 * 2),L"RT_CUSTOM");
        if (((puVar5 == (undefined4 *)0x0) ||
            (piVar2 = *(int **)((int)this + param_1 * 0x1510 + 0x510),
            iVar6 = (**(code **)(*piVar2 + 0x30))(piVar2,puVar5,DVar4,0,param_6 + uVar7), iVar6 < 0)
            ) || (piVar2 = *(int **)((int)this + param_1 * 0x1510 + 0x510),
                 iVar6 = (**(code **)(*piVar2 + 0x2c))
                                   (piVar2,*(undefined4 *)(param_5 + uVar7 * 8),
                                    *(undefined2 *)(param_5 + 4 + uVar7 * 8),puVar5,DVar4,
                                    param_7 + uVar7 * 4), iVar6 < 0)) {
          thunk_FUN_10052276(puVar5);
          bVar3 = false;
        }
        else {
          thunk_FUN_10052276(puVar5);
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_3);
    if (bVar3 == false) {
LAB_10043d48:
      FUN_10043d5e(param_4,param_3,(int)param_6,param_7);
    }
  }
  return bVar3;
}

