/*
 * FUN_1800353b8 at 1800353b8
 * undefined FUN_1800353b8(void)
 * Address ranges: 1800353b8-18003550f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800353b8(longlong param_1,int param_2,int param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  puVar6 = (undefined8 *)FUN_180102f80(0x60);
  if (puVar6 != (undefined8 *)0x0) {
    uVar8 = *(undefined8 *)(param_1 + 0x188);
    uVar3 = *(undefined4 *)(param_1 + 400);
    puVar6[4] = 0;
    puVar6[10] = 0;
    puVar6[2] = param_1;
    puVar6[3] = uVar8;
    *(int *)(puVar6 + 6) = param_3;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0xffffffff;
    *(undefined2 *)(puVar6 + 7) = 0x100;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(int *)((longlong)puVar6 + 0x2c) = param_2;
    puVar6[8] = 0;
    puVar6[9] = 0;
    if (param_3 == 2 && (param_3 == 2 && param_2 != 0)) {
      *(undefined4 *)(puVar6 + 6) = 0;
    }
    *(undefined1 *)((longlong)puVar6 + 0x5c) = param_4;
    *(undefined4 *)(puVar6 + 0xb) = 0;
    *puVar6 = &PTR_FUN_180234540;
    puVar6[1] = &PTR_FUN_180234280;
    uVar7 = FUN_180035db8(puVar6 + 1);
    if ((uVar7 & 1) != 0) {
      if (param_3 != 1) {
        return puVar6;
      }
      iVar2 = *(int *)(param_1 + 0x1c4);
      puVar1 = (undefined8 *)0x0;
      if (puVar6 != (undefined8 *)0x0) {
        puVar1 = puVar6 + 1;
      }
      if (*(int *)(param_1 + 0x1c0) == iVar2) {
        uVar4 = iVar2 << 1;
        if (iVar2 == 0) {
          uVar4 = 0x10;
        }
        lVar9 = CONCAT44(0,uVar4) << 3;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = CONCAT44(0,uVar4);
        if (SUB168(auVar5 * ZEXT816(8),8) != 0) {
          lVar9 = -1;
        }
        lVar9 = thunk_FUN_180102f80(lVar9);
        if (lVar9 == 0) {
          return puVar6;
        }
        thunk_FUN_180001218(lVar9,*(undefined8 *)(param_1 + 0x1b8),
                            (ulonglong)*(uint *)(param_1 + 0x1c4) << 3);
        thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x1b8));
        *(longlong *)(param_1 + 0x1b8) = lVar9;
        *(uint *)(param_1 + 0x1c4) = uVar4;
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x1b8) + (ulonglong)*(uint *)(param_1 + 0x1c0) * 8) =
           puVar1;
      *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + 1;
      return puVar6;
    }
    FUN_18004dfa0(puVar6);
    FUN_180102fc0(puVar6,0x60);
  }
  return (undefined8 *)0x0;
}

