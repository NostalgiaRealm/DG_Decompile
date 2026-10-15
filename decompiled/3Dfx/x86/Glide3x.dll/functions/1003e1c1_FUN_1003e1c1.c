/*
 * FUN_1003e1c1 at 1003e1c1
 * bool __stdcall FUN_1003e1c1(HMODULE param_1, uint param_2, int param_3, int param_4)
 * Address ranges: 1003e1c1-1003e26d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1003e1c1(HMODULE param_1,uint param_2,int param_3,int param_4)

{
  ushort uVar1;
  bool bVar2;
  DWORD DVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  
  uVar6 = 0;
  bVar2 = true;
  if (param_2 != 0) {
    do {
      if (!bVar2) goto LAB_1003e249;
      *(undefined4 *)(param_4 + uVar6 * 4) = 0;
      uVar1 = *(ushort *)(param_3 + uVar6 * 2);
      if (uVar1 != 0) {
        DVar3 = FUN_10051fe0(param_1,(LPCWSTR)(uint)uVar1,L"RT_CUSTOM");
        puVar4 = FUN_10052070(param_1,(LPCWSTR)(uint)*(ushort *)(param_3 + uVar6 * 2),L"RT_CUSTOM");
        if (puVar4 != (undefined4 *)0x0) {
          piVar5 = FUN_10049ac2(DVar3,puVar4);
          *(int **)(param_4 + uVar6 * 4) = piVar5;
          thunk_FUN_10052276(puVar4);
          if (*(int *)(param_4 + uVar6 * 4) != 0) goto LAB_1003e23f;
        }
        bVar2 = false;
      }
LAB_1003e23f:
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_2);
    if (bVar2 == false) {
LAB_1003e249:
      uVar6 = 0;
      do {
        piVar5 = *(int **)(param_4 + uVar6 * 4);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 8))(piVar5);
          *(undefined4 *)(param_4 + uVar6 * 4) = 0;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < param_2);
    }
  }
  return bVar2;
}

