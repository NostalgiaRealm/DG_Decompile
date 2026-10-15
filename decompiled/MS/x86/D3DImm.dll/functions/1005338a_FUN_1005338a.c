/*
 * FUN_1005338a at 1005338a
 * bool __stdcall FUN_1005338a(undefined4 param_1, uint param_2, int param_3, int param_4)
 * Address ranges: 1005338a-10053434
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1005338a(undefined4 param_1,uint param_2,int param_3,int param_4)

{
  ushort uVar1;
  bool bVar2;
  HMODULE pHVar3;
  DWORD DVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  
  pHVar3 = DAT_1006bbd4;
  uVar7 = 0;
  bVar2 = true;
  if (param_2 != 0) {
    do {
      if (!bVar2) goto LAB_10053410;
      *(undefined4 *)(param_4 + uVar7 * 4) = 0;
      uVar1 = *(ushort *)(param_3 + uVar7 * 2);
      if (uVar1 != 0) {
        DVar4 = FUN_1005c3a0(pHVar3,(LPCWSTR)(uint)uVar1);
        puVar5 = FUN_1005c3d0(pHVar3,(LPCWSTR)(uint)*(ushort *)(param_3 + uVar7 * 2));
        if (puVar5 != (undefined4 *)0x0) {
          piVar6 = FUN_10056dbd(DVar4,puVar5);
          *(int **)(param_4 + uVar7 * 4) = piVar6;
          thunk_FUN_1005c76c(puVar5);
          if (*(int *)(param_4 + uVar7 * 4) != 0) goto LAB_10053406;
        }
        bVar2 = false;
      }
LAB_10053406:
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_2);
    if (bVar2 == false) {
LAB_10053410:
      uVar7 = 0;
      do {
        piVar6 = *(int **)(param_4 + uVar7 * 4);
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 8))(piVar6);
          *(undefined4 *)(param_4 + uVar7 * 4) = 0;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < param_2);
    }
  }
  return bVar2;
}

