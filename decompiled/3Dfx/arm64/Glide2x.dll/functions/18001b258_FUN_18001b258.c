/*
 * FUN_18001b258 at 18001b258
 * undefined __cdecl FUN_18001b258(longlong param_1)
 * Address ranges: 18001b258-18001b30b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001b258(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined8 auStack_1a0 [46];
  
  puVar1 = (undefined8 *)(param_1 + 0x3630);
  thunk_FUN_180001218(auStack_1a0,puVar1,0x170);
  uVar4 = *(uint *)(param_1 + 0xdc);
  uVar5 = 1;
  if (1 < uVar4) {
    do {
      thunk_FUN_180001218(puVar1 + (ulonglong)(uVar5 - 1) * 0x2e,puVar1 + (ulonglong)uVar5 * 0x2e,
                          0x170);
      uVar4 = *(uint *)(param_1 + 0xdc);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  thunk_FUN_180001218((undefined8 *)(param_1 + (ulonglong)(uVar4 - 1) * 0x170 + 0x3630),auStack_1a0,
                      0x170);
  uVar4 = *(uint *)(param_1 + 0xdc);
  uVar5 = *(int *)(param_1 + 0x3610) + 1;
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x18001b2ec);
    (*pcVar3)();
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar2 = uVar5 / uVar4;
  }
  *(uint *)(param_1 + 0x3610) = uVar5 - uVar2 * uVar4;
  return;
}

