/*
 * FUN_1002bb6e at 1002bb6e
 * bool __fastcall FUN_1002bb6e(int param_1)
 * Address ranges: 1002bb6e-1002bbd8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1002bb6e(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar4 = DAT_1006c210;
  if (*(int *)(DAT_1006c210 + 0x58) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(iVar4 + 0x54) + uVar5 * 4);
      if ((piVar1 != (int *)0x0) &&
         (iVar3 = (**(code **)*piVar1)(), iVar4 = DAT_1006c210, iVar3 == 1)) {
        iVar3 = (**(code **)(**(int **)(param_1 + 0xfc) + 0x24))();
        cVar2 = (**(code **)(*piVar1 + 4))(iVar3);
        iVar4 = DAT_1006c210;
        if (cVar2 != '\0') {
          iVar4 = FUN_100252c0(iVar3);
          return *(int *)(param_1 + 0xfc) != iVar4;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(iVar4 + 0x58));
  }
  return false;
}

