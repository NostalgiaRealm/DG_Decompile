/*
 * FUN_1800ba330 at 1800ba330
 * undefined __fastcall FUN_1800ba330(longlong param_1, longlong param_2)
 * Address ranges: 1800ba330-1800ba3a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ba330(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_2 + 0x170);
  puVar2 = (undefined8 *)(param_2 + 0x60);
  if (param_2 == 0) {
    plVar1 = (longlong *)&DAT_00000178;
    puVar2 = (undefined8 *)&DAT_00000068;
  }
  FUN_1800b1160(*plVar1,0,(longlong *)*puVar2);
  puVar2 = (undefined8 *)(param_2 + 0x78);
  if (param_2 == 0) {
    puVar2 = (undefined8 *)&DAT_00000080;
  }
  FUN_1800b1274(*plVar1,(longlong *)*puVar2);
  *(undefined2 *)(param_1 + 0xc50b) = 0x101;
  return;
}

