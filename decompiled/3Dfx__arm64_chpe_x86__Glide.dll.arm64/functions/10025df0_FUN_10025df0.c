/*
 * FUN_10025df0 at 10025df0
 * undefined FUN_10025df0(void)
 * Address ranges: 10025df0-10025eb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10025df0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_40 [4];
  int local_3c;
  
  uVar2 = FUN_10026820();
  puVar1 = (undefined4 *)(param_1 + 0x28);
  *puVar1 = uVar2;
  iVar3 = (*(code *)PTR_FUN_1009d170)(auStack_40,uVar2,0,0);
  while (((iVar3 != 0 && (iVar3 != -1)) && (local_3c != 0x401))) {
    (*(code *)PTR_FUN_1009d204)(auStack_40);
    (*(code *)PTR_FUN_1009d150)(auStack_40);
    iVar3 = (*(code *)PTR_FUN_1009d170)(auStack_40,*puVar1,0,0);
  }
  (*(code *)PTR_FUN_1009d14c)(*puVar1);
  *puVar1 = 0;
  return 0;
}

