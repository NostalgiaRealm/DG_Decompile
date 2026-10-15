/*
 * FUN_10051720 at 10051720
 * undefined FUN_10051720(void)
 * Address ranges: 10051720-100517c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10051720(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar3 = 0;
  if (uVar1 != 0) {
    if (uVar1 == 0) {
      iVar2 = 0;
      goto LAB_10051768;
    }
    do {
      iVar2 = *(int *)(param_1 + 0x10) + uVar3 * 0x30;
LAB_10051768:
      iVar2 = *(int *)(iVar2 + 0x28);
      if (iVar2 != 0) {
        FUN_100517d0(iVar2);
        FUN_10132260(iVar2,0x2d0);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x14));
  }
  FUN_101322d0(*(undefined4 *)(param_1 + 0xc));
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  return;
}

