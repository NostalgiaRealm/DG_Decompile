/*
 * FUN_1800ac4fc at 1800ac4fc
 * undefined __fastcall FUN_1800ac4fc(longlong param_1, undefined8 * param_2)
 * Address ranges: 1800ac4fc-1800ac577
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ac4fc(longlong param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (((param_2 != (undefined8 *)0x0) && (*(char *)(param_1 + 0x4d) == '\0')) &&
     (*(int *)(param_1 + 0x44) - 1U < 2)) {
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    if (puVar3 == (undefined8 *)0x0) {
      auVar1 = ZEXT816(0x10) * ZEXT416((uint)(*(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30)));
      uVar2 = auVar1._0_8_;
      if (auVar1._8_8_ != 0) {
        uVar2 = 0xffffffffffffffff;
      }
      puVar3 = (undefined8 *)thunk_FUN_1800fbccc(uVar2);
      *(undefined8 **)(param_1 + 0x18) = puVar3;
      if (puVar3 == (undefined8 *)0x0) {
        return;
      }
    }
    FUN_1800fbec0(puVar3,param_2,
                  (ulonglong)(uint)(*(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30)) << 4);
    *(undefined1 *)(param_1 + 0x4d) = 1;
  }
  return;
}

