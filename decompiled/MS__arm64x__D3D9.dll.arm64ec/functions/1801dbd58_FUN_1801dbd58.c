/*
 * FUN_1801dbd58 at 1801dbd58
 * undefined FUN_1801dbd58(void)
 * Address ranges: 1801dbd58-1801dbdf3;1801dbdfc-1801dbe23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1801dbd58(longlong param_1,ulonglong *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar4 = *param_2;
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar6 = 0;
    uVar5 = uVar1;
    do {
      uVar2 = uVar5 + uVar6 >> 1;
      uVar3 = (ulonglong)uVar2;
      uVar7 = *(ulonglong *)(*(longlong *)(param_1 + 8) + uVar3 * 0x898);
      if (uVar7 <= uVar4) {
        if (uVar4 <= uVar7) break;
        uVar6 = uVar2 + 1;
        uVar3 = (ulonglong)(uVar2 + 1);
        uVar2 = uVar5;
      }
      uVar5 = uVar2;
    } while (uVar5 != uVar6);
  }
  lVar8 = uVar3 * 0x898;
  if (((uint)uVar3 != uVar1) && (*(ulonglong *)(*(longlong *)(param_1 + 8) + lVar8) == uVar4)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_180104c48(*(longlong *)(param_1 + 8) + lVar8 + 0x10,param_3,0x888);
  }
  FUN_1801dbfb8(param_1);
  return lVar8 + *(longlong *)(param_1 + 8) + 8;
}

