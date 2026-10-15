/*
 * FUN_1800066ac at 1800066ac
 * undefined __fastcall FUN_1800066ac(longlong param_1, undefined8 param_2, longlong param_3, longlong param_4, longlong param_5)
 * Address ranges: 1800066ac-180006752
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800066ac(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    lVar2 = 0;
    do {
      *(float *)(*(longlong *)(param_1 + 0x18) + 0x11e8 + lVar2 * 0xc) =
           (float)*(uint *)(param_3 + lVar2 * 4) / 255.0;
      *(float *)(*(longlong *)(param_1 + 0x18) + 0x11ec + lVar2 * 0xc) =
           (float)*(uint *)(param_4 + lVar2 * 4) / 255.0;
      lVar3 = lVar2 + 1;
      *(float *)(*(longlong *)(param_1 + 0x18) + 0x11f0 + lVar2 * 0xc) =
           (float)*(uint *)(param_5 + lVar2 * 4) / 255.0;
      lVar2 = lVar3;
    } while (lVar3 != 0x100);
    plVar1 = *(longlong **)(param_1 + 0x18);
    (**(code **)(*plVar1 + 0x68))(plVar1,plVar1 + 0x23d);
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

