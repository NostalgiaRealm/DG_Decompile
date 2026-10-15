/*
 * FUN_100353d0 at 100353d0
 * undefined FUN_100353d0(void)
 * Address ranges: 100353d0-1003548f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100353d0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x20);
  if ((*piVar1 != 0) && ((*(uint *)(param_1 + 0x34) >> 3 & 1) == 0)) {
    FUN_100fed00(*(undefined4 *)(param_1 + 0x24));
    FUN_100fed00(*(undefined4 *)(param_1 + 0x28));
    if (param_2 == 0) {
      (*(code *)PTR_FUN_1013412c)(*piVar1 - param_3,0,0x8000);
    }
    else {
      (*(code *)PTR_FUN_10134124)();
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    piVar1[0] = 0;
    piVar1[1] = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  FUN_100318f0(param_1);
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xffffffce;
  return;
}

