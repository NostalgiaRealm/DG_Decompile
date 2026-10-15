/*
 * FUN_180141298 at 180141298
 * undefined FUN_180141298(void)
 * Address ranges: 180141298-180141347
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180141298(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong *puVar7;
  uint uVar8;
  undefined4 uVar9;
  
  uVar1 = *param_2;
  thunk_FUN_1802236f8(param_1 + 0xb0);
  uVar2 = *(uint *)(param_1 + 0x98);
  if (uVar2 != 0) {
    uVar6 = 0;
    uVar5 = uVar2;
    do {
      uVar8 = uVar5 + uVar6 >> 1;
      uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)uVar8 * 0x2f0);
      uVar3 = uVar8;
      if (uVar4 <= uVar1) {
        if (uVar1 <= uVar4) break;
        uVar6 = uVar8 + 1;
        uVar8 = uVar8 + 1;
        uVar3 = uVar5;
      }
      uVar5 = uVar3;
    } while (uVar5 != uVar6);
    if ((uVar8 != uVar2) &&
       (puVar7 = (ulonglong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)uVar8 * 0x2f0),
       *puVar7 == (ulonglong)uVar1)) {
      uVar9 = 0xffffffff;
      if (puVar7 != (ulonglong *)0xfffffffffffffff0) {
        uVar9 = *(undefined4 *)((longlong)puVar7 + 0x2ac);
      }
      goto LAB_180141330;
    }
  }
  uVar9 = 0xffffffff;
LAB_180141330:
  thunk_FUN_18022370c(param_1 + 0xb0);
  return uVar9;
}

