/*
 * FUN_10092678 at 10092678
 * bool __thiscall FUN_10092678(void * this, int param_1, undefined4 param_2, undefined4 param_3, int param_4, int * param_5)
 * Address ranges: 10092678-10092740
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_10092678(void *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5)

{
  ushort uVar1;
  int *piVar2;
  bool bVar3;
  HMODULE pHVar4;
  DWORD DVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  
  pHVar4 = DAT_100ba2dc;
  FUN_100ada8e(param_5,0,0x44);
  bVar3 = true;
  uVar8 = 0;
  do {
    if (!bVar3) goto LAB_10092730;
    uVar1 = *(ushort *)(param_4 + uVar8 * 2);
    if (uVar1 != 0) {
      DVar5 = FUN_100ac9a0(pHVar4,(LPCWSTR)(uint)uVar1,L"RT_CUSTOM");
      puVar6 = FUN_100aca30(pHVar4,(LPCWSTR)(uint)*(ushort *)(param_4 + uVar8 * 2),L"RT_CUSTOM");
      if ((puVar6 == (undefined4 *)0x0) ||
         (piVar2 = *(int **)((int)this + param_1 * 0x1510 + 0x510),
         iVar7 = (**(code **)(*piVar2 + 0x30))(piVar2,puVar6,DVar5,0,param_5 + uVar8), iVar7 < 0)) {
        thunk_FUN_100ad48c(puVar6);
        bVar3 = false;
      }
      else {
        thunk_FUN_100ad48c(puVar6);
      }
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 0x11);
  if (bVar3 == false) {
LAB_10092730:
    FUN_10092741(param_4,param_4,(int)param_5);
  }
  return bVar3;
}

