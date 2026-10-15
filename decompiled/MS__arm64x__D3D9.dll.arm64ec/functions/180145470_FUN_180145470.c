/*
 * FUN_180145470 at 180145470
 * undefined FUN_180145470(void)
 * Address ranges: 180145470-1801454c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180145470(uint param_1,ulonglong param_2)

{
  uint in_w8;
  undefined8 *puVar1;
  longlong unaff_x19;
  undefined8 *unaff_x20;
  longlong unaff_x21;
  ulonglong unaff_x22;
  
  if (param_1 < in_w8) {
    do {
      puVar1 = (undefined8 *)
               (unaff_x20[0x1ef8] + (ulonglong)param_1 * (param_2 & 0xffffffff) + 0x10);
LAB_1801454a0:
      FUN_1802229d8(*puVar1,0x254);
      param_1 = param_1 + 1;
    } while (param_1 < *(uint *)(unaff_x21 + 0x37c8));
    FUN_1802229d8(*(undefined8 *)(unaff_x19 + 0x77b8));
    *(undefined8 *)(unaff_x19 + 0x77b8) = 0;
    unaff_x20[0x1ef8] = 0;
    *(undefined4 *)(unaff_x21 + 0x37c8) = 0;
    *(undefined4 *)(unaff_x21 + 0x37cc) = 0;
    FUN_1801630c0(unaff_x20 + 0x1ef2);
    FUN_1802229d8(*(undefined8 *)(unaff_x19 + 0x7778));
    FUN_18015f638(unaff_x20 + 0x1ee9);
    *unaff_x20 = &PTR_FUN_18022ac48;
    if ((unaff_x22 & 1) != 0) {
      FUN_1802229d8();
    }
    return;
  }
  puVar1 = (undefined8 *)&DAT_00000008;
  goto LAB_1801454a0;
}

