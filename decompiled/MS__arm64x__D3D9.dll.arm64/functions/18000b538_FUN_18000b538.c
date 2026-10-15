/*
 * FUN_18000b538 at 18000b538
 * undefined FUN_18000b538(void)
 * Address ranges: 18000b538-18000b5c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000b538(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(lVar2 + -8);
    puVar1 = (undefined8 *)(lVar2 + lVar3 * 0x28);
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      if ((*(uint *)((longlong)puVar1 + -0xc) & 1) == 0) {
        thunk_FUN_180102fc0();
      }
      else {
        (**(code **)(*(longlong *)puVar1[-3] + 0x10))();
      }
      puVar1[-3] = 0;
      puVar1[-2] = 0;
      puVar1[-4] = 0;
      puVar1[-5] = 0;
      puVar1 = puVar1 + -5;
    }
    thunk_FUN_180102fc0(lVar2 + -8,*(longlong *)(lVar2 + -8) * 0x28 + 8);
  }
  return;
}

