/*
 * FUN_18019f660 at 18019f660
 * undefined FUN_18019f660(void)
 * Address ranges: 18019f660-18019f703
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18019f660(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  code *extraout_x11;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + -0x90);
  lVar4 = *(longlong *)(param_1 + 0x38);
  uVar2 = thunk_FUN_1802236f8(lVar3 + 0x620);
  bVar1 = FUN_180202238(uVar2,lVar4);
  if ((*(char *)(lVar4 + 0xd6e) != '\0') || (bVar1 != *(byte *)(lVar4 + 0xd6d))) {
    if ((bVar1 & 1) == 0) {
      *(undefined4 *)(lVar4 + 0x3c) = 0;
    }
    FUN_1802022d0(lVar3,lVar4,0,0);
    *(byte *)(lVar4 + 0xd6d) = bVar1;
    *(undefined1 *)(lVar4 + 0xd6e) = 0;
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(lVar3,lVar4);
  }
  thunk_FUN_18022370c(lVar3 + 0x620);
  return;
}

