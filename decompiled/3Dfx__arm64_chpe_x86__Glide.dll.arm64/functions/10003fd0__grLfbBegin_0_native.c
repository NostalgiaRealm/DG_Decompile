/*
 * _grLfbBegin@0_native at 10003fd0
 * undefined _grLfbBegin@0_native(void)
 * Address ranges: 10003fd0-1000408b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLfbBegin_0_native(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_40;
  undefined4 local_3c;
  
  if (DAT_1009f7ec == '\0') {
    local_40 = 0x14;
    uVar3 = 0;
    do {
      if ((&DAT_1009f7d8)[uVar3] != 0) {
        uVar1 = FUN_1001beb0();
        iVar2 = FUN_1001d6a8(uVar1,0,uVar3,DAT_1009f7c4,DAT_1009f7c8,DAT_1009f7c0,&local_40);
        if (iVar2 != 0) {
          (&DAT_1009f7d8)[uVar3] = local_3c;
        }
      }
      if ((&DAT_1009f7cc)[uVar3] != 0) {
        uVar1 = FUN_1001beb0();
        iVar2 = FUN_1001d6a8(uVar1,1,uVar3,DAT_1009f7c4,DAT_1009f7c8,DAT_1009f7c0,&local_40);
        if (iVar2 != 0) {
          (&DAT_1009f7cc)[uVar3] = local_3c;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 3);
    DAT_1009f7ec = '\x01';
  }
  return;
}

