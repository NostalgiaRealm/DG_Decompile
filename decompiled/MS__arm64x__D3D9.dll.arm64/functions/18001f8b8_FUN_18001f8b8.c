/*
 * FUN_18001f8b8 at 18001f8b8
 * undefined FUN_18001f8b8(void)
 * Address ranges: 18001f8b8-18001f9b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001f8b8(undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  param_2 = param_2 & 0xffffffff;
  lVar3 = param_2 * 600;
  iVar1 = FUN_180001590(&DAT_180253858 + param_2 * 0x96);
  if (iVar1 == 0) {
    lVar4 = *(longlong *)(&DAT_180253a40 + lVar3);
    if (lVar4 != 0) {
      FUN_180020f50(lVar4);
      FUN_180102fc0(lVar4,0xb8);
    }
    plVar2 = (longlong *)(&DAT_180253850)[param_2 * 0x4b];
    *(undefined8 *)(&DAT_180253a40 + lVar3) = 0;
    iVar1 = 0;
    lVar4 = 0;
    do {
      if ((longlong *)(&DAT_180253850)[lVar4 * 0x4b] == plVar2) {
        iVar1 = (&DAT_180253858)[lVar4 * 0x96] + iVar1;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x20);
    if (iVar1 == 0) {
      (**(code **)(*plVar2 + 0x18))();
      (**(code **)(*(longlong *)(&DAT_180253850)[param_2 * 0x4b] + 8))();
    }
    (&DAT_180253850)[param_2 * 0x4b] = 0;
    thunk_FUN_180102fc0((&DAT_180253a78)[param_2 * 0x4b]);
    (&DAT_180253a78)[param_2 * 0x4b] = 0;
    *(undefined4 *)(&DAT_180253a80 + param_2 * 0x4b) = 0;
    *(undefined4 *)((longlong)&DAT_180253a80 + lVar3 + 4) = 0;
    thunk_FUN_180102fc0((&DAT_180253a88)[param_2 * 0x4b]);
    (&DAT_180253a88)[param_2 * 0x4b] = 0;
    (&DAT_180253a90)[param_2 * 0x4b] = 0;
    thunk_FUN_180102fc0((&DAT_180253a98)[param_2 * 0x4b]);
    (&DAT_180253a98)[param_2 * 0x4b] = 0;
    (&DAT_180253aa0)[param_2 * 0x4b] = 0;
  }
  return;
}

