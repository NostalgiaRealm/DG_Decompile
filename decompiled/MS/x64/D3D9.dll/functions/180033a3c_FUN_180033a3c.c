/*
 * FUN_180033a3c at 180033a3c
 * undefined __fastcall FUN_180033a3c(longlong param_1)
 * Address ranges: 180033a3c-180033b7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180033a3c(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FUN_1800dba14(*(longlong *)(param_1 + 0x250),*(uint *)(param_1 + 600),
                  *(longlong **)(param_1 + 0x248));
    FUN_1800dba14(*(longlong *)(param_1 + 0x250),*(uint *)(param_1 + 600),
                  *(longlong **)(param_1 + 0x240));
    uVar2 = (ulonglong)*(uint *)(param_1 + 600);
    lVar3 = *(longlong *)(param_1 + 0x250);
    FUN_1800dba14(lVar3,*(uint *)(param_1 + 600),*(longlong **)(param_1 + 0x238));
    FUN_1800db540(lVar3,uVar2,1,param_1 + 0x230,param_1 + 0x228);
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + 0x168 + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
        *(undefined8 *)(param_1 + 0x168 + lVar3 * 8) = 0;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x11);
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + 0x1f0 + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
        *(undefined8 *)(param_1 + 0x1f0 + lVar3 * 8) = 0;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 6);
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + 0xd8 + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
        *(undefined8 *)(param_1 + 0xd8 + lVar3 * 8) = 0;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x12);
    lVar3 = 0;
    do {
      FUN_1800fbcf0(*(LPVOID *)(param_1 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x11);
    FUN_1800de65c(*(longlong **)(param_1 + 0x250));
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
  }
  return;
}

