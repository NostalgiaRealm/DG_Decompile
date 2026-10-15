/*
 * FUN_18008dca8 at 18008dca8
 * bool __fastcall FUN_18008dca8(longlong param_1, int param_2, int param_3)
 * Address ranges: 18008dca8-18008dd0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18008dca8(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar4 = CONCAT44(0,param_2 * param_3);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar4;
    uVar2 = SUB168(ZEXT816(0x28) * auVar1,0);
    if (SUB168(ZEXT816(0x28) * auVar1,8) != 0) {
      uVar2 = 0xffffffffffffffff;
    }
    puVar3 = (undefined1 *)thunk_FUN_1800fbccc(uVar2);
    *(undefined1 **)(param_1 + 0x30) = puVar3;
    if (puVar3 != (undefined1 *)0x0) {
      FUN_1800fbea0(puVar3,0,uVar4 * 0x28);
    }
  }
  return *(longlong *)(param_1 + 0x30) != 0;
}

