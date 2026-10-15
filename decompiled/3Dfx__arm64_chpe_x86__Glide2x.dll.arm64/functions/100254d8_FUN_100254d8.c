/*
 * FUN_100254d8 at 100254d8
 * undefined FUN_100254d8(void)
 * Address ranges: 100254d8-100255ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100254d8(int param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = FUN_1006a8c0(*(undefined4 *)(param_1 + 0x3180),param_2,param_1);
  if ((uVar2 & 1) != 0) {
    FUN_100253a0(param_1);
    iVar3 = *(int *)(param_1 + 0x37bc);
    FUN_100678c8(*(undefined4 *)(iVar3 + 0x3180),*(undefined4 *)(iVar3 + 0x3184),0);
    iVar3 = *(int *)(param_1 + 0x37bc);
    FUN_100679a8(*(undefined4 *)(iVar3 + 0x3180),*(undefined4 *)(iVar3 + 0x3184),
                 *(undefined4 *)(param_1 + 0x37d8),0x2a);
    iVar3 = 0;
    if (0 < *(int *)(*(int *)(param_1 + 4) + 0x33)) {
      do {
        iVar1 = *(int *)(param_1 + 0xc9fc + iVar3 * 4);
        *(undefined8 *)(iVar1 + 0x3094) = 0;
        *(undefined8 *)(iVar1 + 0x309c) = 0;
        FUN_10047578(iVar1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(*(int *)(param_1 + 4) + 0x33));
    }
  }
  return;
}

