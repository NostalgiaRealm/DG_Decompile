/*
 * FUN_180050388 at 180050388
 * undefined __fastcall FUN_180050388(undefined8 * param_1)
 * Address ranges: 180050388-1800503da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050388(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1[1];
  uStack_20 = param_1[2];
  plVar1 = (longlong *)*param_1;
  local_18 = param_1[3];
  plVar2 = (longlong *)plVar1[0x1f98];
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)plVar1[0x1f9c];
  }
  FUN_18005b0e0(plVar1,(longlong)(plVar1 + 0x16),(longlong)(plVar1 + 0x1ed0),(uint *)&local_28,
                plVar2);
  return;
}

