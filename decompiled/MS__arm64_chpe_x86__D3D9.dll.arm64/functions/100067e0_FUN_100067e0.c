/*
 * FUN_100067e0 at 100067e0
 * undefined FUN_100067e0(void)
 * Address ranges: 100067e0-10006a13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100067e0(int param_1,uint param_2,uint param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong extraout_x13;
  undefined4 uVar12;
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined4 local_50;
  
  uVar12 = 0x8876086c;
  if (param_5 != (undefined8 *)0x0) {
    param_5[1] = 0;
    *param_5 = 0;
    iVar10 = DAT_10170ad0;
    if (param_2 < *(uint *)(param_1 + 0x4c)) {
      local_58 = 0;
      local_50 = 0;
      iVar2 = *(int *)(*(int *)(param_1 + 0x48) + param_2 * 4);
      if (((*(uint *)(DAT_10170ad0 + 0x947) >> 2 & 1) != 0) &&
         (iVar8 = FUN_10003300(param_4), iVar8 == 0x20)) {
        uVar9 = FUN_10003020(param_4);
        uVar11 = FUN_10003900((&PTR_DAT_1016d454)[*(int *)(param_1 + 8) * 100],uVar9);
        if ((uVar11 & 1) != 0) {
          local_60[0] = 0x20;
          FUN_10007040(&local_58,local_60);
          iVar10 = DAT_10170ad0;
        }
      }
      if (((*(uint *)(iVar10 + 0x947) >> 1 & 1) != 0) &&
         (iVar10 = FUN_10003300(param_4), iVar10 == 0x10)) {
        uVar9 = FUN_10003020(param_4);
        uVar11 = FUN_10003900((&PTR_DAT_1016d454)[*(int *)(param_1 + 8) * 100],uVar9);
        if ((uVar11 & 1) != 0) {
          local_60[0] = 0x10;
          FUN_10007040(&local_58,local_60);
        }
      }
      cVar7 = FUN_1003a518();
      puVar1 = &DAT_1017158c;
      if (cVar7 == '\0') {
        puVar1 = &DAT_10171580;
      }
      piVar4 = (int *)(puVar1 + iVar2 * 0x45);
      if ((local_58._4_4_ == 0) && (param_3 < (uint)piVar4[1])) {
        uVar12 = 0x8876086a;
      }
      uVar3 = piVar4[1];
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        uVar6 = SoftwareBreakpoint(0xf004,0x10006964);
        (*(code *)uVar6)();
      }
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = param_3 / uVar3;
      }
      uVar11 = local_58 & 0xffffffff;
      iVar10 = param_3 - uVar5 * uVar3;
      if (uVar5 < local_58._4_4_) {
        uVar12 = 0;
        *(undefined4 *)param_5 = *(undefined4 *)(*piVar4 + iVar10 * 0x18);
        *(undefined4 *)((int)param_5 + 4) = *(undefined4 *)(*piVar4 + iVar10 * 0x18 + 4);
        *(undefined4 *)(param_5 + 1) = *(undefined4 *)(*piVar4 + iVar10 * 0x18 + 0x10);
        if (param_4 == 0x23) {
          uVar9 = 0x23;
        }
        else {
          uVar9 = FUN_10002b10(param_1,*(undefined1 *)(uVar5 + (int)local_58));
          uVar11 = extraout_x13;
        }
        *(undefined4 *)((int)param_5 + 0xc) = uVar9;
      }
      FUN_101322d0(uVar11 & 0xffffffff);
    }
  }
  return uVar12;
}

