/*
 * FUN_1004d831 at 1004d831
 * undefined __fastcall FUN_1004d831(undefined4 * param_1)
 * Address ranges: 1004d831-1004d8af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004d831(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  FUN_100cef50(param_1[4] + param_1[5] * 0x16c0 + 0x1880);
  uVar2 = 0;
  if (param_1[2] != 0) {
    if (param_1[2] == 0) {
      puVar1 = (undefined4 *)&DAT_00000004;
      goto LAB_1004d86d;
    }
    do {
      puVar1 = (undefined4 *)(param_1[1] + 0xc + uVar2 * 0x298);
LAB_1004d86d:
      FUN_1004e1bb((void *)*puVar1,param_1[4],(void *)param_1[5]);
      puVar1 = (undefined4 *)*puVar1;
      if (puVar1 != (undefined4 *)0x0) {
        FUN_10008783(puVar1);
        FUN_100cfd6c(puVar1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[2]);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  FUN_10008783(param_1);
  return;
}

