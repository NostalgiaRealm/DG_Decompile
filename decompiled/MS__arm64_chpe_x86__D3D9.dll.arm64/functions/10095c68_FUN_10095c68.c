/*
 * FUN_10095c68 at 10095c68
 * undefined FUN_10095c68(void)
 * Address ranges: 10095c68-10095d1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10095c68(undefined8 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  piVar1 = (int *)(param_2 + 0x10);
  iVar2 = param_2 + 0x18;
  if (*(char *)(*piVar1 + 0x48b3) == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_10121590(iVar2,4,1);
  }
  *(undefined4 *)(param_2 + 0x2b0) = uVar4;
  uVar6 = 0;
  uVar5 = 0x4886;
  do {
    if (uVar6 < *(byte *)(*piVar1 + (int)uVar5)) {
      uVar4 = FUN_10121590(iVar2,4,1);
    }
    else {
      uVar4 = 0;
    }
    *(undefined4 *)(param_2 + 0x2a0 + uVar6 * 4) = uVar4;
    uVar3 = uVar6 + 1;
    uVar6 = uVar3 & 0xff;
  } while ((uVar3 & 0xff) < 4);
  return;
}

