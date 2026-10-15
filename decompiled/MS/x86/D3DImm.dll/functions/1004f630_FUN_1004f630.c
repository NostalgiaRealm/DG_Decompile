/*
 * FUN_1004f630 at 1004f630
 * bool __thiscall FUN_1004f630(void * this, int param_1, undefined4 param_2, undefined4 param_3, int param_4, int * param_5)
 * Address ranges: 1004f630-1004f6ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_1004f630(void *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5)

{
  ushort uVar1;
  int *piVar2;
  bool bVar3;
  HMODULE pHVar4;
  DWORD DVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  
  pHVar4 = DAT_1006bbd4;
  FUN_1005c9cc(param_5,0,0x78);
  bVar3 = true;
  uVar8 = 0;
  do {
    if (!bVar3) goto LAB_1004f6dd;
    uVar1 = *(ushort *)(param_4 + uVar8 * 2);
    if (uVar1 != 0) {
      DVar5 = FUN_1005c3a0(pHVar4,(LPCWSTR)(uint)uVar1);
      puVar6 = FUN_1005c3d0(pHVar4,(LPCWSTR)(uint)*(ushort *)(param_4 + uVar8 * 2));
      if ((puVar6 == (undefined4 *)0x0) ||
         (piVar2 = *(int **)((int)this + param_1 * 0x1510 + 0x510),
         iVar7 = (**(code **)(*piVar2 + 0x3c))(piVar2,puVar6,DVar5,0,param_5 + uVar8), iVar7 < 0)) {
        thunk_FUN_1005c76c(puVar6);
        bVar3 = false;
      }
      else {
        thunk_FUN_1005c76c(puVar6);
      }
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 0x1e);
  if (bVar3 == false) {
LAB_1004f6dd:
    FUN_1004f6ee(param_4,param_4,(int)param_5);
  }
  return bVar3;
}

