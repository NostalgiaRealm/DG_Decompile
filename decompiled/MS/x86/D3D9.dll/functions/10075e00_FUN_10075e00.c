/*
 * FUN_10075e00 at 10075e00
 * undefined __fastcall FUN_10075e00(int param_1)
 * Address ranges: 10075e00-10075f2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10075e00(int param_1)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x1cf00) != 0) {
    FUN_1007371d((int *)(param_1 + 0x1cfc8));
    FUN_1007353b((undefined4 *)(param_1 + 0x1cfb0));
    uVar3 = 0;
    if (*(int *)(param_1 + 0x1d1ec) != 0) {
      do {
        piVar2 = *(int **)(*(int *)(param_1 + 0x1d1e4) + 0x34 + uVar3 * 0x40);
        piVar1 = *(int **)(*(int *)(param_1 + 0x1d1e4) + 0x38 + uVar3 * 0x40);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x1d1ec));
    }
    *(undefined4 *)(param_1 + 0x1d1ec) = 0;
    if (*(int **)(param_1 + 0x1d200) != (int *)0x0) {
      FUN_100b4bd9(*(void **)(param_1 + 0x1cf00),*(int *)(param_1 + 0x14),
                   *(int **)(param_1 + 0x1d200));
      *(undefined4 *)(param_1 + 0x1d200) = 0;
    }
    piVar2 = *(int **)(param_1 + 0x1d1fc);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *(undefined4 *)(param_1 + 0x1d1fc) = 0;
    }
    FUN_1007426a(param_1);
    FUN_100b4c3b(*(void **)(param_1 + 0x1cf00),*(int *)(param_1 + 0x14),*(int **)(param_1 + 0x1d1dc)
                );
    *(undefined4 *)(param_1 + 0x1d1dc) = 0;
    (**(code **)(**(int **)(param_1 + 0x1d1e0) + 8))(*(int **)(param_1 + 0x1d1e0));
    *(undefined4 *)(param_1 + 0x1d1e0) = 0;
    FUN_100b46f4(extraout_ECX,0x28,param_1 + 0x1cf08);
    FUN_100b4834(extraout_ECX_00,1,param_1 + 0x1cfa8,param_1 + 0x1cfac);
    piVar2 = (int *)(*(int *)(param_1 + 0x1cf00) + 0x49c);
    LOCK();
    if (param_1 == *piVar2) {
      *piVar2 = 0;
    }
    UNLOCK();
    FUN_100b5e02(*(void **)(param_1 + 0x1cf00),*(int *)(param_1 + 0x14));
    FUN_100b42a6(*(int **)(param_1 + 0x1cf00));
    *(undefined4 *)(param_1 + 0x1cf00) = 0;
  }
  return;
}

