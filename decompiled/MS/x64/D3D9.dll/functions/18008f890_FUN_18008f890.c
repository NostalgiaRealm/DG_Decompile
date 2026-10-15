/*
 * FUN_18008f890 at 18008f890
 * undefined __fastcall FUN_18008f890(longlong param_1)
 * Address ranges: 18008f890-18008f916
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008f890(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x168) != '\0') {
    lVar2 = 0x38;
    if (*(int *)(param_1 + 0x38) == 0) {
      lVar2 = 0x30;
    }
    FUN_18008e2ec((longlong *)(param_1 + 0x118),*(uint *)(lVar2 + param_1),*(uint *)(param_1 + 0x34)
                 );
    FUN_18008e2ec((longlong *)(param_1 + 0x60),*(uint *)(param_1 + 0x3c),*(uint *)(param_1 + 0x34));
    FUN_18008e2ec((longlong *)(param_1 + 0xa0),*(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x34));
    FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x168) = 0;
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x50) + 0x618);
    LOCK();
    if (param_1 == *plVar1) {
      *plVar1 = 0;
    }
    UNLOCK();
  }
  return;
}

