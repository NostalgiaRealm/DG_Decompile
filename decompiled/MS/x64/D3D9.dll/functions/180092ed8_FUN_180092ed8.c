/*
 * FUN_180092ed8 at 180092ed8
 * undefined __fastcall FUN_180092ed8(longlong param_1)
 * Address ranges: 180092ed8-180092f50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180092ed8(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x249) != '\0') {
    FUN_18008e2ec((longlong *)(param_1 + 0x180),*(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x34))
    ;
    FUN_18008e2ec((longlong *)(param_1 + 0x1c0),*(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x34))
    ;
    lVar2 = 0x38;
    if (*(int *)(param_1 + 0x38) == 0) {
      lVar2 = 0x30;
    }
    FUN_18008e2ec((longlong *)(param_1 + 0x200),*(uint *)(lVar2 + param_1),*(uint *)(param_1 + 0x34)
                 );
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x50) + 0x618);
    LOCK();
    if (param_1 == *plVar1) {
      *plVar1 = 0;
    }
    UNLOCK();
  }
  FUN_18008f890(param_1);
  return;
}

