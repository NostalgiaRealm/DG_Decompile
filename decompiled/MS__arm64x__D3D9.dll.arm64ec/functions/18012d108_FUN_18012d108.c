/*
 * FUN_18012d108 at 18012d108
 * undefined FUN_18012d108(void)
 * Address ranges: 18012d108-18012d197;18012d1a8-18012d1f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18012d108(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar1) {
    uVar2 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar2 = 0x10;
    }
    uVar8 = CONCAT44(0,uVar2);
    lVar7 = uVar8 * 0x18;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar8;
    if (SUB168(auVar3 * ZEXT816(0x18),8) != 0) {
      lVar7 = -1;
    }
    puVar4 = (undefined8 *)FUN_1802229a8(lVar7);
    if (puVar4 != (undefined8 *)0x0) {
      puVar6 = puVar4;
      if (uVar2 != 0) {
        do {
          *puVar6 = 0;
          puVar6[1] = 0;
          uVar8 = uVar8 - 1;
          puVar6[2] = 0;
          puVar6 = puVar6 + 3;
        } while (uVar8 != 0);
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(puVar4,*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) * 0x18);
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
    uVar9 = *param_2;
    puVar4 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x18);
    puVar4[1] = param_2[1];
    *puVar4 = uVar9;
    puVar4[2] = param_2[2];
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  }
  return uVar5;
}

