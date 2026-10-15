/*
 * FUN_10014978 at 10014978
 * undefined FUN_10014978(void)
 * Address ranges: 10014978-10014a8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10014978(int param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = FUN_1006e560(*(undefined4 *)(param_1 + 0x3300),param_2,param_1);
  if ((uVar2 & 1) != 0) {
    FUN_10014840(param_1);
    iVar3 = *(int *)(param_1 + 0x3ef8);
    FUN_1006b568(*(undefined4 *)(iVar3 + 0x3300),*(undefined4 *)(iVar3 + 0x3304),0);
    iVar3 = *(int *)(param_1 + 0x3ef8);
    FUN_1006b648(*(undefined4 *)(iVar3 + 0x3300),*(undefined4 *)(iVar3 + 0x3304),
                 *(undefined4 *)(param_1 + 0x3f1c),0x2a);
    iVar3 = 0;
    if (0 < *(int *)(*(int *)(param_1 + 4) + 0x33)) {
      do {
        iVar1 = *(int *)(param_1 + 0xd140 + iVar3 * 4);
        *(undefined8 *)(iVar1 + 0x3094) = 0;
        *(undefined8 *)(iVar1 + 0x309c) = 0;
        FUN_100370f8(iVar1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(*(int *)(param_1 + 4) + 0x33));
    }
  }
  return;
}

