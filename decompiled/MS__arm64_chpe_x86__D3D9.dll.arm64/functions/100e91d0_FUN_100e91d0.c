/*
 * FUN_100e91d0 at 100e91d0
 * undefined FUN_100e91d0(void)
 * Address ranges: 100e91d0-100e92ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e91d0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  piVar3 = (int *)(param_1 + -0x58);
  iVar2 = *piVar3;
  uVar5 = 0x8876086c;
  piVar1 = (int *)(iVar2 + 0x94);
  if (*piVar1 != 0 && *piVar1 == param_2) {
    (*(code *)PTR_FUN_1016c01c)();
    *(undefined1 *)(iVar2 + 0xad) = 1;
    if (*(int *)(iVar2 + 0x9c) != *(int *)(iVar2 + 0x20)) {
      FUN_10040de0(*piVar3);
      *(undefined1 *)(*piVar3 + 0xae) = 0;
      *(undefined8 *)(*piVar3 + 0x9c) = 0;
    }
    iVar4 = FUN_1001e900(param_1 + -0x5c);
    if (-1 < iVar4) {
      (*(code *)PTR_FUN_1016c034)(*piVar1,*(undefined4 *)(iVar2 + 0x98));
      (*(code *)PTR_FUN_1016c014)(*piVar1);
      *piVar1 = 0;
      uVar5 = 0;
    }
  }
  return uVar5;
}

