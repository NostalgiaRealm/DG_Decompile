/*
 * FUN_1800963b0 at 1800963b0
 * undefined FUN_1800963b0(void)
 * Address ranges: 1800963b0-18009643b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800963b0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 in_x5;
  longlong extraout_x12;
  undefined1 auStack_20 [4];
  undefined4 local_1c;
  
  uVar2 = func_0x0001801bad48(auStack_20,*(undefined4 *)(param_1 + 0x2c));
  if (*(char *)(extraout_x12 + 0x24c) != '\0') {
    lVar1 = 0x40;
    if (uVar2 == 0x15) {
      lVar1 = 0x50;
    }
    local_1c = *(undefined4 *)(*(longlong *)(extraout_x12 + 0x130) + lVar1);
  }
  if ((*(int *)(extraout_x12 + 0x34) == 1) || (uVar3 = local_1c, *(uint *)(extraout_x12 + 0x38) < 2)
     ) {
    uVar3 = 0;
  }
  FUN_180091088(extraout_x12 + 0x140,*(undefined8 *)(extraout_x12 + 0x74),local_1c,uVar3,
                *(undefined4 *)(&DAT_180231360 + (ulonglong)uVar2 * 4),in_x5,0,
                *(int *)(extraout_x12 + 0x34) != 1);
  return;
}

