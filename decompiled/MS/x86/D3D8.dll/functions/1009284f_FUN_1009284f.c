/*
 * FUN_1009284f at 1009284f
 * bool __thiscall FUN_1009284f(void * this, int param_1, HMODULE param_2, undefined4 param_3, undefined4 param_4, undefined4 * param_5)
 * Address ranges: 1009284f-100928f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_1009284f(void *this,int param_1,HMODULE param_2,undefined4 param_3,undefined4 param_4,
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
    if (!bVar2) goto LAB_100928e2;
    DVar3 = FUN_100ac9a0(param_2,(LPCWSTR)(uint)(ushort)(&DAT_100b8fc0)[uVar6],L"RT_CUSTOM");
    puVar4 = FUN_100aca30(param_2,(LPCWSTR)(uint)(ushort)(&DAT_100b8fc0)[uVar6],L"RT_CUSTOM");
    if (puVar4 == (undefined4 *)0x0) {
LAB_100928cf:
      bVar2 = false;
    }
    else {
      piVar1 = *(int **)((int)this + param_1 * 0x1510 + 0x510);
      iVar5 = (**(code **)(*piVar1 + 0x48))(piVar1,puVar4,DVar3,0,param_5 + uVar6);
      if (iVar5 < 0) goto LAB_100928cf;
    }
    thunk_FUN_100ad48c(puVar4);
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  if (bVar2 == false) {
LAB_100928e2:
    FUN_100928f5(puVar4,puVar4,(int)param_5);
  }
  return bVar2;
}

