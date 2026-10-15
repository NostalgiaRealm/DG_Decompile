/*
 * FUN_180221760 at 180221760
 * undefined FUN_180221760(void)
 * Address ranges: 180221760-180221767
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180221760(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x207) != '\0') {
    *(undefined1 *)(param_1 + 0x206) = 1;
    thunk_FUN_1802238b0(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x78),0xffffffff,0
                       );
    thunk_FUN_180223824(*(undefined8 *)(param_1 + 0x78));
    thunk_FUN_180223824(*(undefined8 *)(param_1 + 0x80));
    lVar2 = 0;
    do {
      lVar3 = lVar2 * 0x28;
      thunk_FUN_180223824(*(undefined8 *)(param_1 + 0xa8 + lVar3));
      FUN_1802229d8(*(undefined8 *)(param_1 + 0xa0 + lVar3));
      puVar1 = (undefined8 *)(lVar3 + param_1 + 0x88);
      lVar2 = lVar2 + 1;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[4] = 0;
    } while (lVar2 != 8);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    thunk_FUN_1802236bc(*(undefined8 *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    thunk_FUN_1802236bc(*(undefined8 *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    FUN_1802229d8(*(undefined8 *)(param_1 + 0x1e0));
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined1 *)(param_1 + 0x207) = 0;
  }
  return;
}

