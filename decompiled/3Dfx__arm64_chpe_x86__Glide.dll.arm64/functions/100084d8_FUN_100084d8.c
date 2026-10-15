/*
 * FUN_100084d8 at 100084d8
 * undefined FUN_100084d8(void)
 * Address ranges: 100084d8-100085c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100084d8(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_40;
  undefined4 local_3c;
  
  if (DAT_1009f7ec != '\0') {
    local_40 = 0x14;
    uVar3 = 0;
    do {
      if ((&DAT_1009f7d8)[uVar3] != 0) {
        uVar1 = FUN_1001beb0();
        FUN_1001d768(uVar1,0,uVar3);
      }
      if ((&DAT_1009f7cc)[uVar3] != 0) {
        uVar1 = FUN_1001beb0();
        FUN_1001d768(uVar1,1,uVar3);
      }
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
  }
  return;
}

