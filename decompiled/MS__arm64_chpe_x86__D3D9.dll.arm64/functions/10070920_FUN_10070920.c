/*
 * FUN_10070920 at 10070920
 * undefined FUN_10070920(void)
 * Address ranges: 10070920-10070a1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10070920(int param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  int *piVar5;
  
  *(undefined1 *)(param_1 + 0x81) = 0;
  uVar1 = *(uint *)(param_1 + 0x1c);
  uVar4 = 0;
  if (uVar1 != 0) {
    if (uVar1 == 0) {
      piVar5 = (int *)0x0;
      goto LAB_10070984;
    }
    do {
      piVar5 = (int *)(*(int *)(param_1 + 0x18) + uVar4 * 0x28 + 8);
LAB_10070984:
      if (*(int *)(*piVar5 + 8) == 9) {
        iVar2 = *(int *)(param_1 + 4);
        uVar3 = FUN_10120fc8(*(undefined4 *)(param_1 + 0xc),
                             *(undefined4 *)(*(int *)(iVar2 + 0x1300) + 0xc),
                             *(undefined8 *)(*(int *)(iVar2 + 0x1304) + 0x938),piVar5 + 4);
        if ((uVar3 & 1) != 0) {
          FUN_10116480(*(undefined4 *)(*(int *)(param_1 + 4) + 0x1304),piVar5[4],0,piVar5[6]);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x1c));
  }
  return;
}

