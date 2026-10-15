/*
 * FUN_10025958 at 10025958
 * undefined FUN_10025958(void)
 * Address ranges: 10025958-10025a6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10025958(int param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = FUN_1006ad40(*(undefined4 *)(param_1 + 0x3180),param_2,param_1);
  if ((uVar2 & 1) != 0) {
    FUN_10025820(param_1);
    iVar3 = *(int *)(param_1 + 0x37bc);
    FUN_10067d48(*(undefined4 *)(iVar3 + 0x3180),*(undefined4 *)(iVar3 + 0x3184),0);
    iVar3 = *(int *)(param_1 + 0x37bc);
    FUN_10067e28(*(undefined4 *)(iVar3 + 0x3180),*(undefined4 *)(iVar3 + 0x3184),
                 *(undefined4 *)(param_1 + 0x37d8),0x2a);
    iVar3 = 0;
    if (0 < *(int *)(*(int *)(param_1 + 4) + 0x33)) {
      do {
        iVar1 = *(int *)(param_1 + 0xc9fc + iVar3 * 4);
        *(undefined8 *)(iVar1 + 0x3094) = 0;
        *(undefined8 *)(iVar1 + 0x309c) = 0;
        FUN_100479f8(iVar1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(*(int *)(param_1 + 4) + 0x33));
    }
  }
  return;
}

