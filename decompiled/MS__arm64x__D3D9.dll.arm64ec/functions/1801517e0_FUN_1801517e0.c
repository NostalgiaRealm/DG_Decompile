/*
 * FUN_1801517e0 at 1801517e0
 * undefined FUN_1801517e0(void)
 * Address ranges: 1801517e0-180151893
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801517e0(longlong param_1)

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
    FUN_180146480(*(longlong *)(param_1 + 0xf800),1);
  }
  if (*(longlong *)(param_1 + 0xf7f0) != 0) {
    FUN_180146480(*(longlong *)(param_1 + 0xf7f0),1);
  }
  if (*(longlong *)(param_1 + 0xf7f8) != 0) {
    FUN_180146480(*(longlong *)(param_1 + 0xf7f8),1);
  }
  if (*(longlong *)(param_1 + 0xf740) != 0) {
    FUN_180146480(*(longlong *)(param_1 + 0xf740),1);
  }
  if (*(longlong *)(param_1 + 0xf7e8) != 0) {
    FUN_180146480(*(longlong *)(param_1 + 0xf7e8),1);
  }
  *(undefined8 *)(param_1 + 0xf740) = 0;
  *(undefined8 *)(param_1 + 0xf7f8) = 0;
  *(undefined8 *)(param_1 + 0xf800) = 0;
  *(undefined8 *)(param_1 + 0xf7e8) = 0;
  *(undefined8 *)(param_1 + 0xf7f0) = 0;
  return;
}

