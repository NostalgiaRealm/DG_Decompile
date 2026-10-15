/*
 * FUN_100bfeb8 at 100bfeb8
 * undefined FUN_100bfeb8(void)
 * Address ranges: 100bfeb8-100bffb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bfeb8(int param_1)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x14);
  puVar1 = (uint *)&DAT_00000b0c;
  if (iVar4 != 0) {
    puVar1 = (uint *)(iVar4 + -0x4dd4);
  }
  if (((*puVar1 >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar3 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar3 = true;
    iVar4 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar4 == 0) {
      FUN_10006560(0);
    }
  }
  iVar2 = *(int *)(param_1 + 0x14);
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = iVar2 + -0x58e0;
  }
  FUN_1000c020(iVar4,param_1);
  FUN_1001c080(param_1);
  FUN_1001b690(param_1);
  FUN_100bfe40(param_1);
  FUN_100fec90(param_1,0xd8);
  if (bVar3) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return;
}

