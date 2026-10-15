/*
 * FUN_1005d7c3 at 1005d7c3
 * undefined __fastcall FUN_1005d7c3(undefined4 * param_1)
 * Address ranges: 1005d7c3-1005d865
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1005d7c3(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1[2] != 0) {
    if (param_1[2] == 0) {
      piVar3 = (int *)&DAT_00000004;
      goto LAB_1005d7ea;
    }
    do {
      piVar3 = (int *)((uVar4 << 4 | 0xc) + param_1[1]);
LAB_1005d7ea:
      piVar3 = (int *)*piVar3;
      iVar1 = param_1[4];
      iVar2 = param_1[5];
      EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x4a0));
      if (piVar3 == *(int **)(iVar1 + 0x7f4 + iVar2 * 0x1510)) {
        *(undefined4 *)(iVar1 + 0x7f4 + iVar2 * 0x1510) = 0;
      }
      (**(code **)(*piVar3 + 8))(piVar3);
      LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x4a0));
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_1[2]);
  }
  thunk_FUN_100ad48c((LPVOID)*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}

