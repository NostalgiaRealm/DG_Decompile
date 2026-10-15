/*
 * FUN_18004c8e4 at 18004c8e4
 * undefined __fastcall FUN_18004c8e4(longlong param_1)
 * Address ranges: 18004c8e4-18004c9cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004c8e4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = *(longlong *)(param_1 + 0xffe0 + lVar2 * 8);
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  if (*(longlong *)(param_1 + 0x10060) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x10060) + 0x20) = 0;
  }
  if (*(undefined8 **)(param_1 + 0xf800) != (undefined8 *)0x0) {
    FUN_1800428b0(*(undefined8 **)(param_1 + 0xf800),1);
  }
  if (*(undefined8 **)(param_1 + 0xf7f0) != (undefined8 *)0x0) {
    FUN_1800428b0(*(undefined8 **)(param_1 + 0xf7f0),1);
  }
  if (*(undefined8 **)(param_1 + 0xf7f8) != (undefined8 *)0x0) {
    FUN_1800428b0(*(undefined8 **)(param_1 + 0xf7f8),1);
  }
  if (*(undefined8 **)(param_1 + 0xf740) != (undefined8 *)0x0) {
    FUN_1800428b0(*(undefined8 **)(param_1 + 0xf740),1);
  }
  if (*(undefined8 **)(param_1 + 0xf7e8) != (undefined8 *)0x0) {
    FUN_1800428b0(*(undefined8 **)(param_1 + 0xf7e8),1);
  }
  *(undefined8 *)(param_1 + 0xf800) = 0;
  *(undefined8 *)(param_1 + 0xf7f0) = 0;
  *(undefined8 *)(param_1 + 0xf7f8) = 0;
  *(undefined8 *)(param_1 + 0xf740) = 0;
  *(undefined8 *)(param_1 + 0xf7e8) = 0;
  return;
}

