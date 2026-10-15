/*
 * FUN_1800f2400 at 1800f2400
 * undefined FUN_1800f2400(void)
 * Address ranges: 1800f2400-1800f24bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800f2400(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar2) {
    uVar3 = iVar2 << 1;
    if (iVar2 == 0) {
      uVar3 = 0x10;
    }
    lVar5 = CONCAT44(0,uVar3) * 0xc;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = CONCAT44(0,uVar3);
    if (SUB168(auVar4 * ZEXT816(0xc),8) != 0) {
      lVar5 = -1;
    }
    lVar5 = thunk_FUN_180102f80(lVar5);
    if (lVar5 == 0) {
      return 0;
    }
    thunk_FUN_180001218(lVar5,*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) * 0xc);
    thunk_FUN_180102fc0(*param_1);
    *param_1 = lVar5;
    *(uint *)((longlong)param_1 + 0xc) = uVar3;
  }
  puVar1 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0xc);
  *puVar1 = *param_2;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return 1;
}

