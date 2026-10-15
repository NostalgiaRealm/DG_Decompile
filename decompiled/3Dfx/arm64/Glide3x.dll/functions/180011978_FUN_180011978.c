/*
 * FUN_180011978 at 180011978
 * undefined __cdecl FUN_180011978(longlong param_1)
 * Address ranges: 180011978-180011a2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180011978(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 auStack_1a0 [48];
  
  puVar2 = (undefined8 *)(param_1 + 0x36e8);
  thunk_FUN_1800010d8(auStack_1a0,puVar2,0x180);
  uVar5 = *(uint *)(param_1 + 0xdc);
  uVar6 = 1;
  if (1 < uVar5) {
    do {
      thunk_FUN_1800010d8(puVar2 + (ulonglong)((int)uVar6 - 1) * 0x30,puVar2 + uVar6 * 0x30,0x180);
      uVar5 = *(uint *)(param_1 + 0xdc);
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar1;
    } while (uVar1 < uVar5);
  }
  thunk_FUN_1800010d8((undefined8 *)(param_1 + (ulonglong)(uVar5 - 1) * 0x180 + 0x36e8),auStack_1a0,
                      0x180);
  uVar1 = *(uint *)(param_1 + 0xdc);
  uVar5 = *(int *)(param_1 + 0x36c8) + 1;
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180011a14);
    (*pcVar4)();
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = uVar5 / uVar1;
  }
  *(uint *)(param_1 + 0x36c8) = uVar5 - uVar3 * uVar1;
  return;
}

