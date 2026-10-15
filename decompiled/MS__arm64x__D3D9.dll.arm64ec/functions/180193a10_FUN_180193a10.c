/*
 * FUN_180193a10 at 180193a10
 * undefined FUN_180193a10(void)
 * Address ranges: 180193a10-180193b4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180193a10(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *extraout_x11;
  int iVar5;
  undefined1 auStack_60 [20];
  int local_4c;
  
  iVar5 = 1;
  uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar2,auStack_60);
  iVar1 = 1;
  if (local_4c != 1) {
    if (local_4c == 2) {
      uVar2 = 0x10;
      goto LAB_180193a9c;
    }
    if (local_4c == 4) {
      uVar2 = 0x11;
      goto LAB_180193a9c;
    }
    if (local_4c == 8) {
      uVar2 = 0x12;
      goto LAB_180193a9c;
    }
    if (local_4c == 0x10) {
      uVar2 = 0x13;
      goto LAB_180193a9c;
    }
    iVar1 = 0;
  }
  iVar5 = iVar1;
  uVar2 = 0xf;
LAB_180193a9c:
  if (*(longlong *)(param_4 + 0x88) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    lVar3 = *(longlong *)(param_3 + 0x80);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_3 + 0x78);
    }
    uVar4 = (ulonglong)
            (uint)(*(int *)(param_2 + 0x20) + *(int *)(param_3 + 0x3c) * *(int *)(param_2 + 0x24));
    if (*(longlong *)(*(longlong *)(param_3 + 0x90) + uVar4 * 0x28 + 8) == 0) {
      iVar5 = 0;
    }
    else {
      *(longlong *)(param_2 + 0x60) = lVar3;
      *(undefined8 *)(param_2 + 0x68) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x90) + uVar4 * 0x28 + 8);
      *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_4 + 0x88);
      FUN_180190e60(param_1,param_2,*(undefined4 *)(param_3 + 0x2c),*(undefined4 *)(param_4 + 0x2c),
                    uVar2,0,0);
    }
  }
  return iVar5;
}

