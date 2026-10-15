/*
 * FUN_1801a4da0 at 1801a4da0
 * undefined FUN_1801a4da0(void)
 * Address ranges: 1801a4da0-1801a4f57;1801a4f68-1801a4f9b;1801a4fa0-1801a4fcb;1801a5004-1801a5027
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801a4da0(longlong *param_1,int *param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar8 = 0;
  uVar9 = 0x800;
  if (param_2[1] == 0) {
    uVar9 = 0;
  }
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar9 = (ulonglong)
          (param_2[4] & 0x1fU |
          (param_2[5] & 0x1fU | (param_2[6] & 7U | (param_2[7] & 0x1fU) << 3) << 5) << 5) << 10 |
          ((ulonglong)(uint)param_2[8] & 0x1f |
          ((ulonglong)(uint)param_2[9] & 7 |
          ((ulonglong)(uint)param_2[10] & 0xf |
          ((ulonglong)*(byte *)(param_2 + 0xb) & 0xf |
          ((ulonglong)*(byte *)(param_2 + 0x15) & 0xf |
          ((ulonglong)*(byte *)(param_2 + 0x1f) & 0xf |
          (uVar9 | (ulonglong)(*param_2 != 0) << 10 | (ulonglong)*(byte *)(param_2 + 0x29) & 0xf) <<
          4) << 4) << 4) << 4) << 3) << 5) << 0x1c | (ulonglong)(param_2[0x21] != 0) << 9 |
          (ulonglong)(param_2[0x20] != 0) << 8 | (ulonglong)(param_2[0x17] != 0) << 7 |
          (ulonglong)(param_2[0x16] != 0) << 6 | (ulonglong)(param_2[0xd] != 0) << 5 |
          (ulonglong)(param_2[0xc] != 0) << 4 | (ulonglong)(param_2[3] != 0) << 3 |
          (ulonglong)(param_2[2] != 0) << 2;
  if (uVar1 != 0) {
    uVar5 = 0;
    uVar4 = uVar1;
    do {
      uVar8 = uVar4 + uVar5 >> 1;
      uVar7 = *(ulonglong *)(*param_1 + (ulonglong)uVar8 * 0x158);
      uVar3 = uVar8;
      if (uVar7 <= uVar9) {
        if (uVar9 <= uVar7) break;
        uVar5 = uVar8 + 1;
        uVar8 = uVar8 + 1;
        uVar3 = uVar4;
      }
      uVar4 = uVar3;
    } while (uVar4 != uVar5);
    if ((uVar8 != uVar1) && (*(ulonglong *)(*param_1 + (ulonglong)uVar8 * 0x158) == uVar9)) {
      return *(undefined8 *)((ulonglong)uVar8 * 0x158 + *param_1 + 0x150);
    }
  }
  if (uVar1 == *(uint *)(param_1 + 1)) {
    uVar7 = CONCAT44(0,*(uint *)(param_1 + 1) << 1);
    lVar6 = uVar7 * 0x158;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar7;
    if (SUB168(auVar2 * ZEXT816(0x158),8) != 0) {
      lVar6 = -1;
    }
    lVar6 = FUN_1802229a8(lVar6);
    if (lVar6 != 0) {
      if ((int)param_1[1] != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar6,*param_1,0x158);
      }
      FUN_1802229d8(*param_1);
      *param_1 = lVar6;
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
    }
  }
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  lVar6 = *param_1;
  if (uVar8 < uVar1) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_180104c48(lVar6 + (ulonglong)uVar1 * 0x158,lVar6 + (ulonglong)(uVar1 - 1) * 0x158,
                        0x158);
  }
  *(ulonglong *)(lVar6 + (ulonglong)uVar8 * 0x158) = uVar9;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_180104c48((ulonglong)uVar8 * 0x158 + *param_1 + 8,param_2,0x148);
}

