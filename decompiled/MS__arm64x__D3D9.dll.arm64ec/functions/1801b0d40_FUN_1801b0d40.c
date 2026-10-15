/*
 * FUN_1801b0d40 at 1801b0d40
 * undefined FUN_1801b0d40(void)
 * Address ranges: 1801b0d40-1801b0e47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b0d40(longlong param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  code *extraout_x11;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + -0xb0);
  lVar5 = *(longlong *)(param_1 + 0x38);
  uVar4 = thunk_FUN_1802236f8(lVar6 + 0x620);
  cVar2 = FUN_180202238(uVar4,lVar5);
  if (*(char *)(lVar5 + 0xd6e) == '\0') {
    bVar1 = false;
    if (*(char *)(lVar5 + 0xd6d) == cVar2) goto LAB_1801b0d88;
  }
  bVar1 = true;
LAB_1801b0d88:
  thunk_FUN_18022370c(lVar6 + 0x620);
  if (bVar1) {
    FUN_180221ec0(*(longlong *)(param_1 + -0xb0) +
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x10) * 0x1ac0 + 0x1bc0);
    lVar6 = *(longlong *)(param_1 + 0x38);
    lVar5 = *(longlong *)(param_1 + -0xb0);
    uVar4 = thunk_FUN_1802236f8(lVar5 + 0x620);
    bVar3 = FUN_180202238(uVar4,lVar6);
    if ((*(char *)(lVar6 + 0xd6e) != '\0') || (bVar3 != *(byte *)(lVar6 + 0xd6d))) {
      if ((bVar3 & 1) == 0) {
        *(undefined4 *)(lVar6 + 0x3c) = 0;
      }
      FUN_1802022d0(lVar5,lVar6,0,1);
      *(byte *)(lVar6 + 0xd6d) = bVar3;
      *(undefined1 *)(lVar6 + 0xd6e) = 0;
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)(lVar5,lVar6);
    }
    thunk_FUN_18022370c(lVar5 + 0x620);
  }
  return;
}

