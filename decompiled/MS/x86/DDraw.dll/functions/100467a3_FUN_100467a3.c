/*
 * FUN_100467a3 at 100467a3
 * bool __thiscall FUN_100467a3(void * this, int param_1, HMODULE param_2, undefined4 param_3, undefined4 param_4, undefined4 * param_5)
 * Address ranges: 100467a3-10046848
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_100467a3(void *this,int param_1,HMODULE param_2,undefined4 param_3,undefined4 param_4,
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
    if (!bVar2) goto LAB_10046836;
    DVar3 = FUN_100603c0(param_2,(LPCWSTR)(uint)(ushort)(&DAT_1006add8)[uVar6],L"RT_CUSTOM");
    puVar4 = FUN_10060450(param_2,(LPCWSTR)(uint)(ushort)(&DAT_1006add8)[uVar6],L"RT_CUSTOM");
    if (puVar4 == (undefined4 *)0x0) {
LAB_10046823:
      bVar2 = false;
    }
    else {
      piVar1 = *(int **)((int)this + param_1 * 0x1510 + 0x510);
      iVar5 = (**(code **)(*piVar1 + 0x48))(piVar1,puVar4,DVar3,0,param_5 + uVar6);
      if (iVar5 < 0) goto LAB_10046823;
    }
    thunk_FUN_10060be1(puVar4);
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  if (bVar2 == false) {
LAB_10046836:
    FUN_10046849(puVar4,puVar4,(int)param_5);
  }
  return bVar2;
}

