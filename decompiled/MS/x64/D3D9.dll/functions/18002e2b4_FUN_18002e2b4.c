/*
 * FUN_18002e2b4 at 18002e2b4
 * undefined __fastcall FUN_18002e2b4(undefined8 param_1, ulonglong param_2)
 * Address ranges: 18002e2b4-18002e3d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002e2b4(undefined8 param_1,ulonglong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar4 = param_2 & 0xffffffff;
  LOCK();
  piVar1 = &DAT_1801128e8 + uVar4 * 0x96;
  iVar6 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar6 == 1) {
    puVar2 = *(undefined8 **)(&DAT_180112ad0 + uVar4 * 600);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_18002fc90(puVar2);
      FUN_1800fbcf0(puVar2);
    }
    plVar3 = (longlong *)(&DAT_1801128e0)[uVar4 * 0x4b];
    iVar6 = 0;
    lVar5 = 0;
    *(undefined8 *)(&DAT_180112ad0 + uVar4 * 600) = 0;
    do {
      if ((longlong *)(&DAT_1801128e0)[lVar5 * 0x4b] == plVar3) {
        iVar6 = iVar6 + (&DAT_1801128e8)[lVar5 * 0x96];
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x20);
    if (iVar6 == 0) {
      (**(code **)(*plVar3 + 0x18))();
      (**(code **)(*(longlong *)(&DAT_1801128e0)[uVar4 * 0x4b] + 8))();
    }
    (&DAT_1801128e0)[uVar4 * 0x4b] = 0;
    FUN_1800fbcf0((LPVOID)(&DAT_180112b08)[uVar4 * 0x4b]);
    (&DAT_180112b08)[uVar4 * 0x4b] = 0;
    (&DAT_180112b10)[uVar4 * 0x4b] = 0;
    FUN_1800fbcf0((LPVOID)(&DAT_180112b18)[uVar4 * 0x4b]);
    (&DAT_180112b18)[uVar4 * 0x4b] = 0;
    (&DAT_180112b20)[uVar4 * 0x4b] = 0;
    FUN_1800fbcf0((LPVOID)(&DAT_180112b28)[uVar4 * 0x4b]);
    (&DAT_180112b28)[uVar4 * 0x4b] = 0;
    (&DAT_180112b30)[uVar4 * 0x4b] = 0;
  }
  return;
}

