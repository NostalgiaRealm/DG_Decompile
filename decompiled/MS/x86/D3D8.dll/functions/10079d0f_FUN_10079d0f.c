/*
 * FUN_10079d0f at 10079d0f
 * undefined __fastcall FUN_10079d0f(undefined4 * param_1)
 * Address ranges: 10079d0f-10079dac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10079d0f(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  LPVOID pvVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = DAT_100ba2a8;
  uVar5 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__100b3328;
  param_1[0x18] = &PTR_LAB_100af4e0;
  param_1[0x1c] = &PTR_FUN_100b32e8;
  pvVar3 = DAT_100ba2ac;
  uVar2 = DAT_100ba2a8;
  if (uVar4 != 0) {
    do {
      piVar1 = (int *)((int)pvVar3 + uVar5 * 4);
      if ((undefined4 *)*piVar1 == param_1) {
        uVar4 = uVar4 - 1;
        pvVar3 = DAT_100ba2ac;
        if (uVar4 - uVar5 != 0) {
          FUN_100adac0(piVar1,piVar1 + 1,(uVar4 - uVar5) * 4);
          pvVar3 = DAT_100ba2ac;
        }
      }
      uVar5 = uVar5 + 1;
      uVar2 = uVar4;
    } while (uVar5 < uVar4);
  }
  DAT_100ba2a8 = uVar2;
  FUN_1000210a();
  if (DAT_100ba2a8 == 0) {
    thunk_FUN_100ad48c(DAT_100ba2ac);
    DAT_100ba2ac = (LPVOID)0x0;
    FUN_1007a7de();
  }
  thunk_FUN_100ad48c((LPVOID)param_1[0x20]);
  FUN_100014a2(param_1);
  return;
}

