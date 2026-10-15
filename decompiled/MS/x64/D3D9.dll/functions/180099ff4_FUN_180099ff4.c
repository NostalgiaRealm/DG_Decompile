/*
 * FUN_180099ff4 at 180099ff4
 * bool __fastcall FUN_180099ff4(longlong param_1, int param_2, int param_3)
 * Address ranges: 180099ff4-18009a04d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180099ff4(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 *puVar3;
  
  auVar1 = ZEXT816(0x20) * ZEXT416((uint)(param_2 * param_3));
  uVar2 = auVar1._0_8_;
  if (auVar1._8_8_ != 0) {
    uVar2 = 0xffffffffffffffff;
  }
  puVar3 = (undefined1 *)thunk_FUN_1800fbccc(uVar2);
  *(undefined1 **)(param_1 + 0x24) = puVar3;
  if (puVar3 != (undefined1 *)0x0) {
    FUN_1800fbea0(puVar3,0,(ulonglong)(uint)(param_2 * param_3 * 0x20));
  }
  return *(longlong *)(param_1 + 0x24) != 0;
}

