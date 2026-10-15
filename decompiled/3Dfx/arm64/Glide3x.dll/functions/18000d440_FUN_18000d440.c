/*
 * FUN_18000d440 at 18000d440
 * undefined __cdecl FUN_18000d440(longlong param_1, uint param_2, undefined4 * param_3, undefined4 * param_4)
 * Address ranges: 18000d440-18000d49b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000d440(longlong param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  *param_4 = 0;
  *param_3 = 0;
  if (param_2 < 3) {
    uVar1 = *(undefined4 *)(param_1 + 0xac);
    *param_3 = *(undefined4 *)(param_1 + 0xa8);
  }
  else {
    if (param_2 == 6) {
      *param_3 = *(undefined4 *)(param_1 + 0x166);
      puVar2 = (undefined4 *)(param_1 + 0x16a);
    }
    else {
      if (param_2 != 7) {
        return;
      }
      *param_3 = *(undefined4 *)(param_1 + 0x17a);
      puVar2 = (undefined4 *)(param_1 + 0x17e);
    }
    uVar1 = *puVar2;
  }
  *param_4 = uVar1;
  return;
}

