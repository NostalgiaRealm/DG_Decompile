/*
 * FUN_1801ac6b8 at 1801ac6b8
 * undefined FUN_1801ac6b8(void)
 * Address ranges: 1801ac6b8-1801ac733
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801ac6b8(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  code *extraout_x11;
  longlong lVar4;
  
  lVar4 = *param_1;
  uVar1 = *(uint *)(param_1 + 1);
  cVar2 = *(char *)((longlong)param_1 + 0x1c);
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(lVar4,(ulonglong)uVar1,(longlong)param_1 + 0xc);
  if (cVar2 == '\0') {
    uVar3 = (ulonglong)uVar1 << 5 | 0x10;
    lVar4 = *(longlong *)(lVar4 + 0xd4);
    thunk_FUN_180223c70(uVar3 + lVar4,uVar3 + lVar4,(longlong)param_1 + 0xc);
  }
  return;
}

