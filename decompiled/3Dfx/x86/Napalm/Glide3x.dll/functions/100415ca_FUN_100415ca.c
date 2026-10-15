/*
 * FUN_100415ca at 100415ca
 * bool __stdcall FUN_100415ca(HMODULE param_1, uint param_2, int param_3, int param_4)
 * Address ranges: 100415ca-10041676
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100415ca(HMODULE param_1,uint param_2,int param_3,int param_4)

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
      if (!bVar2) goto LAB_10041652;
      *(undefined4 *)(param_4 + uVar6 * 4) = 0;
      uVar1 = *(ushort *)(param_3 + uVar6 * 2);
      if (uVar1 != 0) {
        DVar3 = FUN_100553f0(param_1,(LPCWSTR)(uint)uVar1,L"RT_CUSTOM");
        puVar4 = FUN_10055480(param_1,(LPCWSTR)(uint)*(ushort *)(param_3 + uVar6 * 2),L"RT_CUSTOM");
        if (puVar4 != (undefined4 *)0x0) {
          piVar5 = FUN_1004cecb(DVar3,puVar4);
          *(int **)(param_4 + uVar6 * 4) = piVar5;
          thunk_FUN_10055686(puVar4);
          if (*(int *)(param_4 + uVar6 * 4) != 0) goto LAB_10041648;
        }
        bVar2 = false;
      }
LAB_10041648:
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_2);
    if (bVar2 == false) {
LAB_10041652:
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

