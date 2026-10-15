/*
 * FUN_1801cd228 at 1801cd228
 * undefined FUN_1801cd228(void)
 * Address ranges: 1801cd228-1801cd393
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801cd228(longlong param_1)

{
  uint uVar1;
  int *piVar2;
  code *extraout_x11;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (*(int *)(lVar4 + 0x878) != *(int *)(lVar4 + 0x654)) {
    uVar3 = 0;
    do {
      lVar5 = uVar3 * 0x38;
      FUN_1801c3848(param_1,uVar3,5,*(undefined4 *)(param_1 + 0x6ae4 + lVar5));
      FUN_1801c3848(param_1,uVar3,5,*(undefined4 *)(param_1 + 0x6ae8 + lVar5));
      FUN_1801c3848(param_1,uVar3,5,*(undefined4 *)(param_1 + 0x6aec + lVar5));
      FUN_1801c3848(param_1,uVar3,5,*(undefined4 *)(param_1 + 0x6af8 + lVar5));
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < 0x10);
  }
  FUN_18011d618(param_1);
  piVar2 = (int *)(*(longlong *)(param_1 + 0x18) + 0x9eb);
  if ((*piVar2 != *(int *)(lVar4 + 0x7c7)) &&
     (*piVar2 = *(int *)(lVar4 + 0x7c7),
     (*(uint *)(*(longlong *)(&DAT_00006898 + param_1) + 0x1c) >> 0x18 & 1) != 0)) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x9eb);
    if (uVar1 < 9) {
      if (uVar1 == 0) {
        fVar6 = *(float *)(param_1 + 0xc4e0);
      }
      else {
        fVar6 = (float)uVar1;
      }
    }
    else {
      fVar6 = 8.0;
    }
    (*(code *)__hybrid_os_arm64x_dispatch_icall)
              (0x180225000,fVar6,*(undefined8 *)(param_1 + 0x28),uVar1 != 0);
    (*extraout_x11)();
  }
  return;
}

