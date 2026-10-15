/*
 * FUN_100412be at 100412be
 * bool __thiscall FUN_100412be(void * this, int param_1, HMODULE param_2, undefined4 param_3, undefined4 param_4, undefined4 * param_5)
 * Address ranges: 100412be-10041363
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_100412be(void *this,int param_1,HMODULE param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  int *piVar1;
  bool bVar2;
  DWORD DVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  
  bVar2 = true;
  uVar6 = 0;
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  param_5[3] = 0;
  puVar4 = this;
  do {
    if (!bVar2) goto LAB_10041351;
    DVar3 = FUN_10035a00(param_2,(LPCWSTR)(uint)(ushort)(&DAT_100593a4)[uVar6],L"RT_CUSTOM");
    puVar4 = FUN_10035a90(param_2,(LPCWSTR)(uint)(ushort)(&DAT_100593a4)[uVar6],L"RT_CUSTOM");
    if (puVar4 == (undefined4 *)0x0) {
LAB_1004133e:
      bVar2 = false;
    }
    else {
      piVar1 = *(int **)((int)this + param_1 * 0x1510 + 0x510);
      iVar5 = (**(code **)(*piVar1 + 0x48))(piVar1,puVar4,DVar3,0,param_5 + uVar6);
      if (iVar5 < 0) goto LAB_1004133e;
    }
    thunk_FUN_1004f626(puVar4);
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  if (bVar2 == false) {
LAB_10041351:
    FUN_10041364(puVar4,puVar4,(int)param_5);
  }
  return bVar2;
}

