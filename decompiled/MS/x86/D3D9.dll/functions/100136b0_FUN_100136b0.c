/*
 * FUN_100136b0 at 100136b0
 * undefined __fastcall FUN_100136b0(int * param_1)
 * Address ranges: 100136b0-1001377c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100136b0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  if (param_1[0x2e] != 0) {
    FUN_10012ccc((int)&uStack_8 + 3);
    if (DAT_100dea7c != 0) {
      FUN_100298be(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 10));
    }
    FUN_1002b133();
    piVar1 = param_1 + 0x12;
    if (*(char *)((int)param_1 + 0xb5) == '\0') {
      FUN_1002c1ef(param_1);
      (**(code **)(*(int *)param_1[0x11] + 0x78))(*piVar1);
      FUN_1002c21b(param_1);
      iVar2 = param_1[0x29];
      FUN_1002ae75(iVar2,(&DAT_100df2fc)[iVar2 * 0x8a]);
      (&DAT_100deedc)[iVar2 * 0x20] = 0;
      FUN_1002c249(param_1);
    }
    FUN_100cd172(DAT_100dea74,(HWND)*piVar1,(LONG)param_1);
    (**(code **)(*(int *)param_1[0x2e] + 0x10))();
    param_1[0x2e] = 0;
    (**(code **)(*(int *)param_1[0x11] + 100))(*piVar1);
    FUN_10012d33();
  }
  FUN_1002c1be();
  return;
}

