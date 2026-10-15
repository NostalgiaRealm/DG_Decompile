/*
 * FUN_100901f5 at 100901f5
 * undefined __fastcall FUN_100901f5(undefined4 * param_1)
 * Address ranges: 100901f5-10090292
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100901f5(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  LPVOID pvVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = DAT_100dea68;
  uVar5 = 0;
  *param_1 = &PTR_FUN_100d6aa0;
  param_1[0x18] = &PTR_LAB_100d1540;
  param_1[0x1c] = &PTR_FUN_100d6a48;
  pvVar3 = DAT_100dea6c;
  uVar2 = DAT_100dea68;
  if (uVar4 != 0) {
    do {
      piVar1 = (int *)((int)pvVar3 + uVar5 * 4);
      if ((undefined4 *)*piVar1 == param_1) {
        uVar4 = uVar4 - 1;
        pvVar3 = DAT_100dea6c;
        if (uVar4 - uVar5 != 0) {
          FUN_100cff00(piVar1,piVar1 + 1,(uVar4 - uVar5) * 4);
          pvVar3 = DAT_100dea6c;
        }
      }
      uVar5 = uVar5 + 1;
      uVar2 = uVar4;
    } while (uVar5 < uVar4);
  }
  DAT_100dea68 = uVar2;
  FUN_10001f95();
  if (DAT_100dea68 == 0) {
    thunk_FUN_100cfd6c(DAT_100dea6c);
    DAT_100dea6c = (LPVOID)0x0;
    FUN_1009130d();
  }
  thunk_FUN_100cfd6c((LPVOID)param_1[0x2d]);
  FUN_10001332(param_1);
  return;
}

