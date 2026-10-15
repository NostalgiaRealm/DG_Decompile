/*
 * FUN_100092f2 at 100092f2
 * undefined __fastcall FUN_100092f2(int param_1)
 * Address ranges: 100092f2-10009420
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100092f2(int param_1)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0xcf00) != 0) {
    FUN_10006bc9((int *)(param_1 + 0xcfc8));
    FUN_100069e7((undefined4 *)(param_1 + 0xcfb0));
    uVar3 = 0;
    if (*(int *)(param_1 + 0xd1ec) != 0) {
      do {
        piVar2 = *(int **)(*(int *)(param_1 + 0xd1e4) + 0x34 + uVar3 * 0x40);
        piVar1 = *(int **)(*(int *)(param_1 + 0xd1e4) + 0x38 + uVar3 * 0x40);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0xd1ec));
    }
    *(undefined4 *)(param_1 + 0xd1ec) = 0;
    if (*(int **)(param_1 + 0xd200) != (int *)0x0) {
      FUN_10046929(*(void **)(param_1 + 0xcf00),*(int *)(param_1 + 0x14),*(int **)(param_1 + 0xd200)
                  );
      *(undefined4 *)(param_1 + 0xd200) = 0;
    }
    piVar2 = *(int **)(param_1 + 0xd1fc);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *(undefined4 *)(param_1 + 0xd1fc) = 0;
    }
    FUN_10007710(param_1);
    FUN_1004698b(*(void **)(param_1 + 0xcf00),*(int *)(param_1 + 0x14),*(int **)(param_1 + 0xd1dc));
    *(undefined4 *)(param_1 + 0xd1dc) = 0;
    (**(code **)(**(int **)(param_1 + 0xd1e0) + 8))(*(int **)(param_1 + 0xd1e0));
    *(undefined4 *)(param_1 + 0xd1e0) = 0;
    FUN_1004661b(extraout_ECX,0x28,param_1 + 53000);
    FUN_1004675b(extraout_ECX_00,1,param_1 + 0xcfa8,param_1 + 0xcfac);
    piVar2 = (int *)(*(int *)(param_1 + 0xcf00) + 0x49c);
    LOCK();
    if (param_1 == *piVar2) {
      *piVar2 = 0;
    }
    UNLOCK();
    FUN_1004a635(*(void **)(param_1 + 0xcf00),*(int *)(param_1 + 0x14));
    FUN_100461da(*(int **)(param_1 + 0xcf00));
    *(undefined4 *)(param_1 + 0xcf00) = 0;
  }
  return;
}

