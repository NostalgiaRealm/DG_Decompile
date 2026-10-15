/*
 * FUN_1009276b at 1009276b
 * bool __thiscall FUN_1009276b(void * this, int param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 * param_5)
 * Address ranges: 1009276b-10092824
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_1009276b(void *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 *param_5)

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
  bVar3 = true;
  puVar6 = param_5;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  uVar8 = 0;
  puVar6 = (undefined4 *)0x0;
  do {
    if (!bVar3) goto LAB_10092812;
    uVar1 = *(ushort *)(param_4 + uVar8 * 2);
    if (uVar1 != 0) {
      DVar5 = FUN_100ac9a0(pHVar4,(LPCWSTR)(uint)uVar1,L"RT_CUSTOM");
      puVar6 = FUN_100aca30(pHVar4,(LPCWSTR)(uint)*(ushort *)(param_4 + uVar8 * 2),L"RT_CUSTOM");
      if ((puVar6 == (undefined4 *)0x0) ||
         (piVar2 = *(int **)((int)this + param_1 * 0x1510 + 0x510),
         iVar7 = (**(code **)(*piVar2 + 0x34))(piVar2,puVar6,DVar5,0,param_5 + uVar8), iVar7 < 0)) {
        thunk_FUN_100ad48c(puVar6);
        bVar3 = false;
      }
      else {
        thunk_FUN_100ad48c(puVar6);
      }
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 6);
  if (bVar3 == false) {
LAB_10092812:
    FUN_10092825(puVar6,puVar6,(int)param_5);
  }
  return bVar3;
}

