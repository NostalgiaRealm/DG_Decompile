/*
 * FUN_10041165 at 10041165
 * bool __thiscall FUN_10041165(void * this, int param_1, HMODULE param_2, uint param_3, int param_4, int param_5, int * param_6, int param_7)
 * Address ranges: 10041165-10041275
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_10041165(void *this,int param_1,HMODULE param_2,uint param_3,int param_4,int param_5,
            int *param_6,int param_7)

{
  ushort uVar1;
  int *piVar2;
  bool bVar3;
  DWORD DVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  
  FUN_100501d1(param_6,0,param_3 << 2);
  uVar7 = 0;
  bVar3 = true;
  if (param_3 != 0) {
    do {
      if (!bVar3) goto LAB_10041260;
      uVar1 = *(ushort *)(param_4 + uVar7 * 2);
      if (uVar1 != 0) {
        DVar4 = FUN_10035a00(param_2,(LPCWSTR)(uint)uVar1,L"RT_CUSTOM");
        puVar5 = FUN_10035a90(param_2,(LPCWSTR)(uint)*(ushort *)(param_4 + uVar7 * 2),L"RT_CUSTOM");
        if (((puVar5 == (undefined4 *)0x0) ||
            (piVar2 = *(int **)((int)this + param_1 * 0x1510 + 0x510),
            iVar6 = (**(code **)(*piVar2 + 0x30))(piVar2,puVar5,DVar4,0,param_6 + uVar7), iVar6 < 0)
            ) || (piVar2 = *(int **)((int)this + param_1 * 0x1510 + 0x510),
                 iVar6 = (**(code **)(*piVar2 + 0x2c))
                                   (piVar2,*(undefined4 *)(param_5 + uVar7 * 8),
                                    *(undefined2 *)(param_5 + 4 + uVar7 * 8),puVar5,DVar4,
                                    param_7 + uVar7 * 4), iVar6 < 0)) {
          thunk_FUN_1004f626(puVar5);
          bVar3 = false;
        }
        else {
          thunk_FUN_1004f626(puVar5);
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_3);
    if (bVar3 == false) {
LAB_10041260:
      FUN_10041276(param_4,param_3,(int)param_6,param_7);
    }
  }
  return bVar3;
}

