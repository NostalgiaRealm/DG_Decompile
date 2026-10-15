/*
 * FUN_10075120 at 10075120
 * undefined FUN_10075120(void)
 * Address ranges: 10075120-10075207
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10075120(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  FUN_100754f8(param_1,0xffffffff,0,0);
  iVar1 = param_1 + 0xc;
  (*(code *)PTR_FUN_100a003c)(iVar1);
  FUN_10075770(param_1);
  uVar2 = *(uint *)(param_1 + 0x44);
  uVar4 = 0;
  if (uVar2 != 0) {
    if (uVar2 == 0) {
      iVar3 = 8;
      goto LAB_100751a0;
    }
    do {
      iVar3 = *(int *)(param_1 + 0x40) + uVar4 * 0x38 + 0x10;
LAB_100751a0:
      FUN_10075208(param_1,iVar3);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x44));
  }
  FUN_1007dd80(*(undefined4 *)(param_1 + 0x3c));
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  (*(code *)PTR_FUN_100a0090)(iVar1);
  (*(code *)PTR_FUN_100a0034)(iVar1);
  return;
}

