/*
 * FUN_100c1de0 at 100c1de0
 * undefined FUN_100c1de0(void)
 * Address ranges: 100c1de0-100c1ebf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100c1de0(int param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  
  puVar1 = (uint *)&DAT_00000b0c;
  if (*(int *)(param_1 + -0xb4) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + -0xb4) + -0x4dd4);
  }
  if (((*puVar1 >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar3 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar3 = true;
    iVar5 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar5 == 0) {
      FUN_10006560(0);
    }
  }
  cVar4 = FUN_1001d650(param_1 + -200,0,param_2);
  uVar2 = 0x8876086c;
  if (cVar4 != '\0') {
    uVar2 = 0;
  }
  if (bVar3) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return uVar2;
}

