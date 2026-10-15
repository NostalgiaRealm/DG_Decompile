/*
 * FUN_10044040 at 10044040
 * undefined FUN_10044040(void)
 * Address ranges: 10044040-1004411b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10044040(int param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar1 == 0) {
    FUN_10001c10(0);
  }
  uVar2 = 0x80070057;
  if (((((param_2 & 0xffffffe1) == 0) && (param_2 = param_2 & 0x1e, param_2 < 0x11)) &&
      ((0x10114U >> (ulonglong)param_2 & 1) != 0 && param_3 != (undefined8 *)0x0)) &&
     (((uVar2 = 0x887600dc, param_2 != 2 && (uVar2 = 0x80004001, param_2 == 8)) &&
      ((uVar2 = 0x887601c2, *(char *)(param_1 + 8) == '\0' &&
       (uVar2 = 0x887600d7, (*(uint *)(param_1 + 0x154) >> 0x10 & 1) != 0)))))) {
    uVar2 = 0;
    *param_3 = *(undefined8 *)(param_1 + 400);
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar2;
}

