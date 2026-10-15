/*
 * FUN_180042958 at 180042958
 * undefined FUN_180042958(void)
 * Address ranges: 180042958-180042a0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180042958(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = 0;
  do {
    lVar2 = *(longlong *)(param_1 + 0xffe0 + lVar1 * 8);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x20) = 0;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x10);
  if (*(longlong *)(param_1 + 0x10060) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x10060) + 0x20) = 0;
  }
  if (*(longlong *)(param_1 + 0xf800) != 0) {
    FUN_1800380e0(*(longlong *)(param_1 + 0xf800),1);
  }
  if (*(longlong *)(param_1 + 0xf7f0) != 0) {
    FUN_1800380e0(*(longlong *)(param_1 + 0xf7f0),1);
  }
  if (*(longlong *)(param_1 + 0xf7f8) != 0) {
    FUN_1800380e0(*(longlong *)(param_1 + 0xf7f8),1);
  }
  if (*(longlong *)(param_1 + 0xf740) != 0) {
    FUN_1800380e0(*(longlong *)(param_1 + 0xf740),1);
  }
  if (*(longlong *)(param_1 + 0xf7e8) != 0) {
    FUN_1800380e0(*(longlong *)(param_1 + 0xf7e8),1);
  }
  *(undefined8 *)(param_1 + 0xf740) = 0;
  *(undefined8 *)(param_1 + 0xf7f8) = 0;
  *(undefined8 *)(param_1 + 0xf800) = 0;
  *(undefined8 *)(param_1 + 0xf7e8) = 0;
  *(undefined8 *)(param_1 + 0xf7f0) = 0;
  return;
}

