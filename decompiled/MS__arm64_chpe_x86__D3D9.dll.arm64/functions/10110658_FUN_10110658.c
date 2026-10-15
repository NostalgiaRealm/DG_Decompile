/*
 * FUN_10110658 at 10110658
 * undefined FUN_10110658(void)
 * Address ranges: 10110658-101106d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_10110658(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = (*(code *)PTR_FUN_1016c074)(param_1 + 0x4a0);
  cVar2 = FUN_1010ecb0(uVar3,param_2);
  cVar1 = *(char *)(param_2 + 0xd5d);
  *(char *)(param_2 + 0xd5d) = cVar2;
  *(byte *)(param_2 + 0xd5e) = cVar2 != cVar1 | *(byte *)(param_2 + 0xd5e);
  (*(code *)PTR_FUN_1016c0c0)(param_1 + 0x4a0);
  return cVar2;
}

