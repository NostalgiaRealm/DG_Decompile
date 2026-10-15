/*
 * FUN_10036738 at 10036738
 * undefined FUN_10036738(void)
 * Address ranges: 10036738-10036803
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10036738(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)(param_1 + 0x4c);
  if (*piVar1 == 0) {
    piVar1 = *(int **)(param_1 + 0x54);
    uVar2 = (*(code *)PTR_FUN_100ba028)(0,*piVar1 + piVar1[2] * 0x10,piVar1);
  }
  else {
    uVar2 = (*(code *)PTR_FUN_100ba014)(0,0,0,0);
    uVar3 = (*(code *)PTR_FUN_100ba1fc)(*piVar1,0,0x10000);
    (*(code *)PTR_FUN_100ba038)(uVar3,uVar2,4);
    (*(code *)PTR_FUN_100ba290)(*piVar1,uVar3);
  }
  return uVar2;
}

