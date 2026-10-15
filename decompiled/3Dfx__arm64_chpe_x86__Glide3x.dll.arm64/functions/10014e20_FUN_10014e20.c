/*
 * FUN_10014e20 at 10014e20
 * undefined FUN_10014e20(void)
 * Address ranges: 10014e20-10014ee3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10014e20(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_40 [4];
  int local_3c;
  
  uVar2 = FUN_10015850();
  puVar1 = (undefined4 *)(param_1 + 0x28);
  *puVar1 = uVar2;
  iVar3 = (*(code *)PTR_FUN_100a0174)(auStack_40,uVar2,0,0);
  while (((iVar3 != 0 && (iVar3 != -1)) && (local_3c != 0x401))) {
    (*(code *)PTR_FUN_100a0208)(auStack_40);
    (*(code *)PTR_FUN_100a0154)(auStack_40);
    iVar3 = (*(code *)PTR_FUN_100a0174)(auStack_40,*puVar1,0,0);
  }
  (*(code *)PTR_FUN_100a0150)(*puVar1);
  *puVar1 = 0;
  return 0;
}

