/*
 * FUN_1800ba114 at 1800ba114
 * undefined __fastcall FUN_1800ba114(undefined8 param_1, longlong * param_2, char param_3)
 * Address ranges: 1800ba114-1800ba1a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ba114(undefined8 param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(-(ulonglong)(param_2 != (longlong *)0x0) & (ulonglong)(param_2 + -1));
  plVar3 = param_2;
  if (param_2 == (longlong *)0x0) {
    plVar3 = (longlong *)&DAT_00000008;
  }
  FUN_1800167b8(plVar3);
  FUN_1800c1ba0((longlong)puVar4);
  if (param_3 == '\0') {
    plVar3 = param_2 + 0x26;
    if (param_2 == (longlong *)0x0) {
      plVar3 = (longlong *)&DAT_00000138;
    }
    LOCK();
    lVar1 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    piVar2 = (int *)((longlong)param_2 + 300);
    if (param_2 == (longlong *)0x0) {
      piVar2 = (int *)&DAT_00000134;
    }
    if ((int)lVar1 + -1 + *piVar2 == 0) {
      FUN_1800c1c24(puVar4);
    }
  }
  return;
}

