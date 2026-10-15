/*
 * FUN_10014e08 at 10014e08
 * undefined FUN_10014e08(void)
 * Address ranges: 10014e08-10014f13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10014e08(int param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = FUN_10073c00(*(undefined4 *)(param_1 + 0x3680),param_2,param_1);
  if ((uVar2 & 1) != 0) {
    FUN_10014cd0(param_1);
    FUN_10070c08(*(undefined4 *)(*(int *)(param_1 + 0x4278) + 0x3680),
                 *(undefined4 *)(*(int *)(param_1 + 0x4278) + 0x3684),0);
    FUN_10070ce8(*(undefined4 *)(*(int *)(param_1 + 0x4278) + 0x3680),
                 *(undefined4 *)(*(int *)(param_1 + 0x4278) + 0x3684),
                 *(undefined4 *)(param_1 + 0x429c),0x2a);
    iVar3 = 0;
    if (0 < *(int *)(*(int *)(param_1 + 4) + 0x33)) {
      do {
        iVar1 = *(int *)(param_1 + 0xd4f0 + iVar3 * 4);
        *(undefined8 *)(iVar1 + 0x30a4) = 0;
        *(undefined8 *)(iVar1 + 0x30ac) = 0;
        FUN_10036308(iVar1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(*(int *)(param_1 + 4) + 0x33));
    }
  }
  return;
}

