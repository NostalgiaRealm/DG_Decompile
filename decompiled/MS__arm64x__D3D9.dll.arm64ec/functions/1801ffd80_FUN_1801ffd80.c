/*
 * FUN_1801ffd80 at 1801ffd80
 * undefined FUN_1801ffd80(void)
 * Address ranges: 1801ffd80-1801ffe1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801ffd80(longlong param_1,ulonglong param_2,uint param_3,uint param_4,longlong param_5)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  code *extraout_x11;
  
  uVar6 = 0;
  iVar4 = 0;
  if (param_4 != 0) {
    lVar1 = param_1 + (param_2 & 0xffffffff) * 0x18c0 + 0x870;
    uVar3 = param_3;
    do {
      uVar2 = uVar6 + param_3;
      lVar5 = *(longlong *)(param_5 + (ulonglong)uVar6 * 8);
      if (*(longlong *)(lVar1 + (ulonglong)uVar2 * 8) != lVar5) {
        *(longlong *)(lVar1 + (ulonglong)uVar2 * 8) = lVar5;
        if (iVar4 == 0) {
          iVar4 = 1;
          uVar3 = uVar2;
        }
        else {
          iVar4 = (uVar6 - uVar3) + param_3 + 1;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_4);
    if (iVar4 != 0) {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)();
    }
  }
  return;
}

