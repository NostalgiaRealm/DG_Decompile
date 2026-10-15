/*
 * FUN_100152a0 at 100152a0
 * undefined FUN_100152a0(void)
 * Address ranges: 100152a0-10015363
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100152a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_40 [4];
  int local_3c;
  
  uVar2 = FUN_10015cd0();
  puVar1 = (undefined4 *)(param_1 + 0x28);
  *puVar1 = uVar2;
  iVar3 = (*(code *)PTR_FUN_100a8174)(auStack_40,uVar2,0,0);
  while (((iVar3 != 0 && (iVar3 != -1)) && (local_3c != 0x401))) {
    (*(code *)PTR_FUN_100a8208)(auStack_40);
    (*(code *)PTR_FUN_100a8154)(auStack_40);
    iVar3 = (*(code *)PTR_FUN_100a8174)(auStack_40,*puVar1,0,0);
  }
  (*(code *)PTR_FUN_100a8150)(*puVar1);
  *puVar1 = 0;
  return 0;
}

